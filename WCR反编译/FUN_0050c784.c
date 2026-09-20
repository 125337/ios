// FUN_0050c784 @ 0050c784

void FUN_0050c784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long *local_40 [3];
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  plVar1 = &local_28;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(plVar1,param_3);
  FUN_0050ebd4();
  if (((ulong)plVar1 & 1) == 0) {
    (*DAT_028cb038)(local_18,local_20,local_28);
  }
  else {
    FUN_0050ed60();
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = plVar1;
    if (local_28 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (plVar1,PTR_s_respondsToSelector__026ca818,PTR_s_deleteFailedComment__026a47e8);
      if (((ulong)plVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40[0],PTR_s_deleteFailedComment__026a47e8,local_28);
      }
    }
    FUN_0050ec18();
    _objc_storeStrong(local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

