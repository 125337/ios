// openCurrentChatSearch @ 01532004

/* Function Stack Size: 0x10 bytes */

bool WCRefineTopBarProfileCardPresenter::openCurrentChatSearch(ID param_1,SEL param_2)

{
  ID local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_28 = param_2;
  local_20 = param_1;
  FUN_01532090();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  if (param_1 == 0) {
    local_11 = 0;
  }
  else {
    FUN_015321f0(param_1,0);
    local_11 = (byte)param_1 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

