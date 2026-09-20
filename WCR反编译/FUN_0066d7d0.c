// FUN_0066d7d0 @ 0066d7d0

void FUN_0066d7d0(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined *local_60;
  bool local_39;
  undefined *local_38;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  if (local_18 != 0) {
    local_39 = (param_2 & 1) == 0;
    if (local_39) {
      local_60 = (undefined *)0x0;
    }
    else {
      local_60 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_60;
    }
    local_39 = !local_39;
    _objc_setAssociatedObject(lVar1,&DAT_028cbc91,local_60,1);
    if (local_39) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    if ((param_2 & 1) == 0) {
      FUN_0066d970(local_18);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

