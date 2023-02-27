# Objective
- Learn Connascence with Real-World Code

# Connascence
- Co = Together
- Nascence = arising young, immature, to be born
- "The birth and growth of two or more things at the same time"
- A change in one element would require also a change in the others

# Taxonomy in 3 dimensions
- Degree: the size of its impact, estimable by the number of entities it affects
- Locality: how close are the affected entities in respect of each other in terms of abstraction
- Strength: how likely it requires compensating changes in connascent elements. The stronger the form of connascence, the more difficult and costly it is to refactor the elements in the relationstip

# What we want
- We want to keep Connascence
- - Low # of degree
- - Close locality
- - Weak Strength

# Example 1
```CS
// Connascence of Name (Duplicate Name) => Good! Static!
// Connascence of Type (Ex: int _hour, int _minute, int _second) => Good! Static!
public class Time{
  int _hour;
  int _minute;
  int _second;

  public Time(int hour, int minute, int second) {
    _hour = hour;
    _minute = minute;
    _second = second;
  }

  public string Display(){
    return _hour + ":" + _minute + ":" + _second + ":";
  }
}
```

# Example 2: Strong Connascence of Position (Not desirable)
```CS
public class Notificator
{
    public void SendEmail(string recipient, string sender, string message)
    {
      Email email = new Email();
      email.To(recipient);
      email.From(sender);
      email.Body(message);
      _smtpService.SendEmail(email);
    }
}

// Connascence of Position
_notificator.SendMail("address1@mail.com", "address2@mail.com", "message");
```
# Example 3: Weak Connascence of Position
```CS
public class Notificator
{
    public void SendEmail(string recipient, string sender, string message) // For Method 1
    //     public void SendEmail(Notification notification) // For Method 2
    {
      Email email = new Email();
      email.To(recipient);
      email.From(sender);
      email.Body(message);
      _smtpService.SendEmail(email);
    }
}

// Method 1
//_notificator.SendMail(new Recipient("address1@mail.com"), new Sender("address2@mail.com"), new Message("message"));

// Method 2
_notificator.SendMail(new Notification().To("address1@mail.com")
                                        .From("address2@mail.com")
                                        .WithMessage("message"));
```

# Example 4: Connascence of Value (Dynamic, Bad)
```CS
// When two or more components' values are related or have an intrinsic range of validity in their input not expresed by their primitive types. => Bad!

public class Time{
  int _hour;
  int _minute;
  int _second;
  Validate();

...
// Caution: The class should participate in the information folow if-and only if - its state is valid
private void Validate(){
  if(_hour <0 || _hour > 23)
    throw new InvalidHourException();
  if(_minute <0 || _minute > 59)
    throw new InvalidMinuteException();
  if(_second <0 || _second > 59)
    throw new InvalidSecondException();

}
}
```
# Example 5: Solution to Example 4 (Good)
```CS
// enum class, compile time, easy error check, less code
public enum Hour  { Midnight = 0, OneAm = 1, TwoAm = 2, ... , ElevenPm = 23}
public enum Minute {...}
public enum Second {...}

public class Time{
  int _hour;
  int _minute;
  int _second;

// We don't introduce invalid states by using enum class!
  public Time(Hour hour, Minute minute, Second second) {
    _hour = hour;
    _minute = minute;
    _second = second;
  }

13:50 to start


}
```

# Resources
- [Connascence: beyond Coupling and Cohesion - Marco Consolaro](https://youtu.be/j8HEbPx53Ls)