
# DevOps Zero to Hero Course

<!-- ########## DAY 1 START ########## -->
<details>
<summary>Day-1: Fundamentals of DevOps</summary>

# What's DevOps?
- Improve delivery of application
- Automation
- Quality
- Monitoring
- Testing

</details>
<!-- ########## DAY 1 END ########## -->



<!-- ########## DAY 2 START ########## -->
<details>
<summary>Day-2: Improve SDLC with DevOps</summary>

# Software Development Lifecycle
- High-level Phases: Design, Develop, Test

# DeOps Improves following process quickly (Automated):
## Builiding
- Developer: Application code using git
## Testing
- QE: Test
## Deployment
- Production for customer

# Intro to Agile Methodology
- Planning
- Defining
- Designing (High-level Design, Low-level Design)
- Building
- Testing
- Deploy


</details>
<!-- ########## DAY 2 END ########## -->


<!-- ########## DAY 3 START ########## -->
<details>
<summary>Day-3: Virtual Machines Part-1</summary>

# Basic Process
- Purchase physical server
- Install hypervisor & virtual machine (Ex: vmware, xen)
- Make partition as VM1, VM2, ..., VM5 (logical partition)
- Give VM# to team (Ex: Team 1 can use VM1, so on)
- Each VM is independent in terms of hardware (Logical Systems)

</details>
<!-- ########## DAY 3 END ########## -->


<!-- ########## DAY 4 START ########## -->
<details>
<summary>Day-4: Virtual Machines Part-2</summary>

# AWS & Azure
## Script for request (to get EC2 instance)
- Valid, Authenticated, Authorized

## Script for directly talking to AWS API
- AWS CLI
- AWS API (Boto 3)
- AWS CFT
- AWS CDK
- Terraform

## Practice
- Create account
- Run instance

</details>
<!-- ########## DAY 4 END ########## -->

<!-- ########## DAY 5 START ########## -->
<details>
<summary>DAY 5: AWS CLI Full Guide</summary>

- chmod 600 /home/jinheehan/Downloads/test111.pem
- ssh -i /home/jinheehan/Downloads/test111.pem ubuntu@YOUR PUBLIC IP



# AWS CLI
- Install AWS CLI
- Security credentials
- - Create Access Key
- aws configure

# Practice Command
- touch jinheehan
- ls
- aws s3 ls

# Launching, listing, and terminating Amazon EC2 instances
- https://docs.aws.amazon.com/cli/latest/userguide/cli-services-ec2-instances.html

# Aws Cloudformation Templates
- https://github.com/awslabs/aws-cloudformation-templates/blob/master/aws/services/EC2/EC2InstanceWithSecurityGroupSample.yaml

# Boto3
- https://boto3.amazonaws.com/v1/documentation/api/latest/index.html

# AWS CLI Doc
- https://awscli.amazonaws.com/v2/documentation/api/latest/reference/ec2/index.html



</details>
<!-- ########## DAY 5 END ########## -->

<!-- ########## DAY 6 START ########## -->
<details>
<summary>DAY 6: Linux Operating System & Basics of Shell Scripting</summary>

# Why Linux?
- Free
- Open Source
- Secure
- Fast

# OS Layer
- System Software, User Process, Compiler
- System libraries
- Kernal
- O/S
- Hardware

# System Libraries
- EX: libc

# Kernel
- Device Management
- Memory Management
- Process Management
- Handling system

# Shell Scripting
- chmod 600 /home/jinheehan/Downloads/test11.pem
- ssh -i /home/jinheehan/Downloads/test11.pem ubuntu@PUBLIC-IP
- ls
- pwd
- touch jinheefile
- mkdir jinheedir
- rm r jinhee
- free
- nproc
- df -h
- top

</details>
<!-- ########## DAY 6 END ########## -->


<!-- ########## DAY 7 START ########## -->
<details>
<summary>DAY 7: Live AWS Project using Shell Scripting</summary>

aws configure
vim aws_resource_tracker.sh

```bash
#!/bin/bash
######################################
# Author: Jinhee Han
# Date: Mar 12
#
# Version: v1
# This script will report the AWS resource usage
######################################

set -x

# AWS S3
# AWS EC2
# AWS Lambda
# AWS IAM Users

# list s3 buckets
echo "Print list of s3 buckets"
aws s3 ls > resourceTracker

# list EC2 Instance
echo "Print list of ec2 buckets"
aws ec2 describe-instances | jq '.Reservations[].Instances[].InstanceId'

# list lambda
echo "Print list of lambda functions"
aws lambda list-functions >> resourceTracker

# list IAM users
echo "Print list of IAM Users"
aws iam list-useers
```
sudo apt install jq
chmod 777 aws_resource_tracker.sh
./aws_resource_tracker.sh | more

</details>
<!-- ########## DAY 7 END ########## -->


<!-- ########## DAY 8 START ########## -->
<details>
<summary>DAY 8: GitHub API Integration (?)</summary>


# github-script-demo.sh
- ./github-script-demo.sh $password /user



# github-api-integration-module.sh
- https://github.com/devops-by-examples/Shell/blob/main/github-api-integration-module.sh
```bash
#!/bin/bash
################################
# Author: Abhishek
# Version: v1
#
#
#
# This script will help users to communicate and retrieve information from GitHub
# Usage:
#   Please provide your github token and rest api to the script as input
#
################################

if [ ${#@} -lt 2 ]; then
    echo "usage: $0 [your github token] [REST expression]"
    exit 1;
fi

GITHUB_TOKEN=$1
GITHUB_API_REST=$2

GITHUB_API_HEADER_ACCEPT="Accept: application/vnd.github.v3+json"

temp=`basename $0`
TMPFILE=`mktemp /tmp/${temp}.XXXXXX` || exit 1


function rest_call {
    curl -s $1 -H "${GITHUB_API_HEADER_ACCEPT}" -H "Authorization: token $GITHUB_TOKEN" >> $TMPFILE
}

# single page result-s (no pagination), have no Link: section, the grep result is empty
last_page=`curl -s -I "https://api.github.com${GITHUB_API_REST}" -H "${GITHUB_API_HEADER_ACCEPT}" -H "Authorization: token $GITHUB_TOKEN" | grep '^Link:' | sed -e 's/^Link:.*page=//g' -e 's/>.*$//g'`

# does this result use pagination?
if [ -z "$last_page" ]; then
    # no - this result has only one page
    rest_call "https://api.github.com${GITHUB_API_REST}"
else

    # yes - this result is on multiple pages
    for p in `seq 1 $last_page`; do
        rest_call "https://api.github.com${GITHUB_API_REST}?page=$p"
    done
fi

cat $TMPFILE
```




</details>
<!-- ########## DAY 8 END ########## -->



<!-- ########## DAY 9 START ########## -->
<details>
<summary>DAY 9: What is GIT?</summary>

# Centralized Version Control (or SVN)
- I can share my code through central server
- Finally other devs can pull from central server
- Developer can't communicate if central server is down

# Distributed Version Control
- Can create multiple copies from distributed server
- Developers can directly communicate
- Fork

# Git
- Open source

# GitHub, GitLab, Bitbucket
- Usability
- Issues
- Comment
- Review
- Project Management

# Git CMD
- git init
- git status
- git add calculator.sh
- git diff
- git commit -m "this is my first version of addition"
- git log
- git reset --hard 546fh56gf5jgj65gj


# .git




</details>
<!-- ########## DAY 9 END ########## -->

<!-- ########## DAY 10 START ########## -->
<details>
<summary>DAY 10: Git Branching Strategy</summary>

# Branch
## Master
- All Branches (Feature, Release, etc) should be merged into master (up-to-date)

## Feature
- Separation

## Release
- Ship to customer

</details>
<!-- ########## DAY 10 END ########## -->



<!-- ########## DAY ? START ########## -->
<details>
<summary>TEMP</summary>



</details>
<!-- ########## DAY ? END ########## -->

# TIP
- AWS CLI Reference
- chmod 600 /home/jinheehan/Downloads/jinheehan.pem
- ssh -i /home/jinheehan/Downloads/jinheehan.pem ubuntu@PUBLIC-IP

# Resources
- [DevOps Zero to Hero Course](https://www.youtube.com/watch?v=UoxCA-nHhSY&list=PLdpzxOOAlwvIKMhk8WhzN1pYoJ1YU8Csa)
