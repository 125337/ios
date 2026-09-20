// FUN_01556938 @ 01556938

void FUN_01556938(undefined8 param_1)

{
  long *plVar1;
  cfstringStruct *pcVar2;
  long *local_28;
  undefined4 local_1c;
  long local_18;
  
  plVar1 = &local_18;
  local_18 = 0;
  _objc_storeStrong(plVar1,param_1);
  if (local_18 == 0) {
    local_1c = 1;
  }
  else {
    FUN_015611fc();
    _objc_retainAutoreleasedReturnValue();
    local_28 = plVar1;
    if (plVar1 == (long *)0x0) {
      local_1c = 1;
    }
    else {
      pcVar2 = &cf_PushViewController_animated_;
      _NSSelectorFromString();
      plVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_respondsToSelector__026ca818,pcVar2);
      if (((ulong)plVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_pushViewController_animated__0269d590,local_18,1);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,pcVar2,local_18,1);
      }
      local_1c = 0;
    }
    _objc_storeStrong(&local_28,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

