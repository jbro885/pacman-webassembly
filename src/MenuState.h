#ifndef __MenuState__
#define __MenuState__

#include "GameState.h"

class MenuState : public GameState
{
public:
  virtual ~MenuState() {}

protected:
  typedef void (*Callback)();
	//typedef void (MenuState::*Callback)();

  virtual void setCallbacks(const std::vector<Callback> &callbacks) = 0;

  std::vector<Callback> m_callbacks;
};

#endif
