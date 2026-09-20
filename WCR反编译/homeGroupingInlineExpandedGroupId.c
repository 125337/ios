// homeGroupingInlineExpandedGroupId @ 01ffdf68

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::homeGroupingInlineExpandedGroupId(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_68;
  cfstringStruct *local_40;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_class_0269cd60);
  _objc_retainAutoreleasedReturnValue();
  _objc_sync_enter();
  pcVar2 = DAT_028e4920;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4920,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_68 = &::cf___;
  }
  else {
    local_68 = DAT_028e4920;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e4920,PTR_s_copy_0269d150);
    local_40 = local_68;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (pcVar2 != (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  _objc_sync_exit(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  _objc_autoreleaseReturnValue();
  return (ID)local_68;
}

