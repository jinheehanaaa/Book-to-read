

<details> <!-- Chapter 1 -->
<summary>1. Introduction</summary>

# Expectations of an Architect
- Architecture Decisions (Ex: use a reactive-based framework for frontend web development)
- Analyze the Architecture (Ex: Analyze and recommend solutions for improvement)
- Keep Current with Latest Trends
- Ensure Compliance with Decisions (EX: Presentation layer must not access DB)
- Diverse Exposure and Experience (EX: technical breadth > technical depth)
- Have Business Domain Knowledge
- Possess Interpersonal Skills
- Understand and Navigate Politics

# Intersection of Architecture and..
- Elastic Scale & PETS.COM' mascot
# Engineering Practices
- Estimation (How much time, How many resources, How much money?)
- fitness functons
# Operations/DevOps
- ESB-driven SOA
# Process
- Agile methodologies
# Data
- External storage

# Laws of Software Architecture
- 1. Trade-off
- 2. Why is more important than how
- To understand important trade-offs in architecture, developers must understand some basic concepts and terminology concerning components, moularity, coupling, and connascence


</details>  <!-- End of the Chapter-->

<details> <!-- Chapter 2 -->
<summary>2. Architectural Thinking</summary>

# Architecture Versus Design
- No virtual barrier between architect & development team

# Technical Breadth
- As an architect, breadth is more important than depth

# Analyzing Trade-Offs
## Bid & Auction Example (Topic vs. Queue)
### Topic:
- Easy Implementation
- less data security
- Only supports homogeneous contracts
- No monitoring of the # of messages in the topics
### Queue:
- Difficult Implementation
- More data security
- Its own contract specific to the data
- Each queue can be monitored individually

# Understanding Business Drivers
- Scalability
- Performance
- Availability

# Balancing Architecture and Hands-On Coding
- Production code
- proof-of-concepts
- - The architect should write the best production-quality code t hey can
- Bug fixes within an iteration
- Leveraging automation by creating simple command-line tools (Look for repetitive tasks)
- - EX: Automated source validator
- - EX: Automated checklists
- - EX: Repetitive manual code refactoring tasks
- Frequent Code Review

</details>   <!-- End of the Chapter-->

<details> <!-- Chapter 3 -->
<summary>3. Modularity</summary>

- Module for backward compatibility
# Measuring Modularity
## Cohesion
- Measure of how related the parts are to one another
- Cohesion is a less precise metric than coupling
- Ex: Customer Module (Customer Maintenance, Order Maintenance)
- The Chidamber and Kemerer Lack of Cohesion in Methods (LCOM) for measuring the structural cohesion of a module
- The LCOM metric is useful to architects who are analyzing code bases in order to move from one architectual style to another

## Coupling
- Afferent for measuring number of incoming connections to a code artifact
- Efferent for measuring number of outgoing connections to other code artifacts

## Abstractness, Instability, and Distance from the Main Sequence
## Abstractness
- The ratio of abstract artifacts (abstract classes, interfaces, etc) to concrete artifacts (implementation)
- Measures abstractness versus implementation
## Instability
- the ratio of efferent coupling to the sum of both efferent and afferent coupling
- Instability determines the volatility of a code base

## Distance from the Main Sequence
- A derived metric based on instability and abstractness
- measures the similarity or dissimilarity between two objects
- ability to provide a quantitative measure of how different or similar two objects are
- Ideal relationship between abstractness and instability

## Limitations of Metrics
- Cyclomatic Complexity to measure complexity in code bases but cannot distinguish from essential complexity or accidental complexity

## Connascence
- For more information go to [1]
### Static connascence
- Source-code-level coupling
### Dynamic connascence
- Analyses calls at runtime

## Connascence properties
### Strength
- Different types of connascence are more
- Architects should prefer static connascence to dynamic
### Locality
- Measures how proximal the modules are to each other in the code base
### Degree

## Unifying Coupling and Connascence Metrics
- An Architect should care about how modules are implemented as well as how modules are coupled


## From Modules to Components


</details>  <!-- End of the Chapter-->



<details> <!-- Chapter 4 -->
<summary>4. Architecture Characteristics Defined</summary>

# Architecture characteristic
## Specifies a nondomain design consideration
- Explicit
- What the application should do
- Specify a certain level of performance for the application

## Influences some structural aspect of the design
- Implicit
- Special structural consideration to succeed
- Ex: availability, reliability, and security
## Is critical or important to application success
- Choose the fewest architecture characteristics rather than the most possible

# Operational Architecture Characteristics
- Availability
- Continuity
- Performance
- Recoverability
- Reliability/Safety
- Robustness
- Scalability

# Structural Architecture Characteristics
- Configurability
- Extensibility
- Installability
- Leverageability/reuse
- Localization
- Maintainability
- Portability
- Supportability
- Upgradeability

# Cross-Cutting Architecture Characteristics
- Accessibility
- Archivability
- Authentication
- Authorization
- Legal
- Privacy
- Security
- Supportability
- Usability/Achievability




</details>  <!-- End of the Chapter-->

# Internal Resources
- [1] [Connascence: beyond Coupling and Cohesion - Marco Consolaro](../Supplement/001-Connascence_beyond_Coupling_and_Cohesion-Marco_Consolaro.md)



