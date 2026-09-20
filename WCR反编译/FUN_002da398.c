// FUN_002da398 @ 002da398

void FUN_002da398(undefined8 param_1,byte param_2,undefined8 param_3)

{
  long lVar1;
  undefined *local_80;
  bool local_49;
  undefined *local_48;
  undefined8 local_28;
  byte local_19;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_19 = param_2;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_18;
  if (local_18 != 0) {
    local_49 = (local_19 & 1) == 0;
    if (local_49) {
      local_80 = (undefined *)0x0;
    }
    else {
      local_80 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_80;
    }
    local_49 = !local_49;
    _objc_setAssociatedObject(lVar1,&DAT_028c9803,local_80,1);
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_19 & 1) != 0) {
      FUN_002b6bb8(local_18,local_28,1);
      FUN_002b6e10(local_18,local_28,0);
      FUN_002b7768(local_18,0,local_28);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

