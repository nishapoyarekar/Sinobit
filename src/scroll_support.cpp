#include "scroll_support.h"


ScrollSupport *ScrollSupport::makeFor(readingDirection_t dir, String message)
{
  switch (dir) {
  case TopToBottom: return new ScrollUp(message);
  case LeftToRight: return new ScrollLeft(message);
  case RightToLeft: return new ScrollRight(message);
  }
}
//Nisha begins
ScrollSupport *ScrollSupport::makeFor(readingDirection_t dir, wchar_t* message)
{
    switch (dir) {
        case TopToBottom: return new ScrollUp(message);
        case LeftToRight: return new ScrollLeft(message);
        case RightToLeft: return new ScrollRight(message);
    }
}
//Nisha ends

ScrollSupport::ScrollSupport(String aMessage)
{
  message = aMessage;
}

//Nisha begins
ScrollSupport::ScrollSupport(wchar_t* aMessage)
{
    wmessage = aMessage;
}
ScrollLeft::ScrollLeft(wchar_t* aMessage) : ScrollSupport(aMessage)
{
}


ScrollRight::ScrollRight(wchar_t* aMessage) : ScrollSupport(aMessage)
{
}


ScrollUp::ScrollUp(wchar_t* aMessage) : ScrollSupport(aMessage)
{
}
//Nisha ends


ScrollLeft::ScrollLeft(String aMessage) : ScrollSupport(aMessage)
{
}


ScrollRight::ScrollRight(String aMessage) : ScrollSupport(aMessage)
{
}


ScrollUp::ScrollUp(String aMessage) : ScrollSupport(aMessage)
{
}

