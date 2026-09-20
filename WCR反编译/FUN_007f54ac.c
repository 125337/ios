// FUN_007f54ac @ 007f54ac

void FUN_007f54ac(undefined8 param_1,long param_2)

{
  long lVar1;
  long local_38;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    local_38 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988);
    local_18 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
    if (param_2 < local_38) {
      local_38 = local_38 + -1;
    }
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_row_0269e210);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_indexPathForRow_inSection__0269e9a0,lVar1,local_38);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

