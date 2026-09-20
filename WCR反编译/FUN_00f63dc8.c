// FUN_00f63dc8 @ 00f63dc8

byte FUN_00f63dc8(undefined8 param_1)

{
  long *plVar1;
  long *local_30;
  undefined4 local_24;
  long local_20;
  byte local_11;
  
  plVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(plVar1,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    FUN_00f631b8();
    _objc_retainAutoreleasedReturnValue();
    local_30 = plVar1;
    if (plVar1 == (long *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
      local_11 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (plVar1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_PushViewController_animated__0269cd40);
      if (((ulong)plVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_pushViewController_animated__0269d590,local_20,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_PushViewController_animated__0269cd40,local_20,1);
      }
      local_11 = 1;
    }
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

