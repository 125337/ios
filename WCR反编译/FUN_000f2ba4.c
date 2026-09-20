// FUN_000f2ba4 @ 000f2ba4

void FUN_000f2ba4(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *local_e8;
  cfstringStruct *local_a8;
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  undefined8 local_30;
  byte local_21;
  long local_20;
  long local_18;
  
  local_21 = 0;
  local_30 = 0;
  local_20 = param_1;
  local_18 = param_1;
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    puVar2 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_21 = (byte)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    bVar1 = (local_21 & 1) == 0;
    if (bVar1) {
      local_e8 = &cf_mRR_1Y_;
    }
    else {
      local_e8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__mR0R0_);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_e8;
    }
    _objc_storeStrong(&local_30,local_e8);
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
  }
  else {
    puVar2 = PTR_WCRefineGroupManager_026ce2b8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineGroupManager_026ce2b8,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_21 = (byte)puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    bVar1 = (local_21 & 1) == 0;
    if (bVar1) {
      local_a8 = &cf_yQR_1Y_;
    }
    else {
      local_a8 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__N0_);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_a8;
    }
    _objc_storeStrong(&local_30,local_a8);
    if (!bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_30);
  _objc_storeStrong(&local_30,0);
  return;
}

