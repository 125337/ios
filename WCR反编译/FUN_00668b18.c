// FUN_00668b18 @ 00668b18

void FUN_00668b18(void)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_50;
  cfstringStruct *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
  if (((ulong)puVar1 & 1) == 0) {
    pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_18 = pcVar3;
    FUN_00668c90(pcVar3,&cf_eeN);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  else {
    FUN_006691c8();
    if (DAT_028cbab8 == (cfstringStruct *)0x0) {
      local_50 = &cf_eeN;
    }
    else {
      local_50 = DAT_028cbab8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_50;
  }
  _objc_autoreleaseReturnValue(local_18);
  return;
}

