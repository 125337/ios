// groupingModeText @ 01ac6de4

/* Function Stack Size: 0x10 bytes */

ID WCRefineGroupManagementViewController::groupingModeText(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  cfstringStruct *local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (puVar2 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_QQ;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_Su;
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

