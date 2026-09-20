// FUN_007fb160 @ 007fb160

void FUN_007fb160(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long local_50;
  long local_20;
  undefined *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = (undefined *)0x0;
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988);
    if (lVar1 < param_2) {
      local_50 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988);
    }
    else {
      local_50 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_section_0269e988);
      local_50 = local_50 + 1;
    }
    puVar2 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_row_0269e210);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_indexPathForRow_inSection__0269e9a0,lVar1,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_18 = puVar2;
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

