// FUN_00800384 @ 00800384

void FUN_00800384(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar3 = local_20;
  if (local_20 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__;
    goto LAB_00800568;
  }
  if (local_28 != 0) {
    lVar2 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028ccee1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar1 = local_20;
    if (lVar3 == lVar2) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_header;
      goto LAB_00800568;
    }
    lVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028ccee2);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (lVar1 == lVar3) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_footer;
      goto LAB_00800568;
    }
  }
  lVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_tag_026cab98);
  if (lVar3 == 0x7f149) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_header_foreign;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_tableHeader;
  }
LAB_00800568:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

