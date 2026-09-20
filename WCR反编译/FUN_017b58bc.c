// FUN_017b58bc @ 017b58bc

void FUN_017b58bc(void)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  undefined8 uVar6;
  cfstringStruct *local_38 [3];
  undefined1 local_19;
  cfstringStruct *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_19 = SUB81(puVar3,0);
  if (((ulong)puVar3 & 1) != 0) {
    pcVar4 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = pcVar5;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    if ((local_38[0] == (cfstringStruct *)0x0) ||
       (pcVar5 = local_38[0],
       (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_length_0269cca0),
       pcVar4 = local_38[0], pcVar5 == (cfstringStruct *)0x0)) {
      uVar6 = 0;
      bVar1 = false;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar4;
      uVar6 = 1;
      bVar1 = true;
    }
    _objc_storeStrong(uVar6,local_38,0);
    if (bVar1) goto LAB_017b5aac;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = &cf_WCRefine;
LAB_017b5aac:
  _objc_autoreleaseReturnValue(local_18);
  return;
}

