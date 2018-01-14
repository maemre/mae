enum lock_state { Unlocked = 0, Locked = 1};
lock_state state = Unlocked;

void error() { $\alert{\texttt{ERROR:}}$ }

void lock() {
  if (state == Locked) error();
  else state = Locked;
}


void unlock() {
  if (state == Unlocked) error();
  else state = Unlocked;
}
