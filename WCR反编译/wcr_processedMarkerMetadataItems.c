// wcr_processedMarkerMetadataItems @ 006ffb60

/* Function Stack Size: 0x10 bytes */

ID WCRefineScreenRecordingFrameProcessor::wcr_processedMarkerMetadataItems(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___AVMutableMetadataItem_026ce8c0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc_init();
  IVar2 = local_28;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_wcr_processedMetadataIdentifier_026a7350);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setIdentifier__026a7358);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_38,PTR_s_setDataType__026a7360,
             *(undefined8 *)PTR__kCMMetadataBaseDataType_UTF8_02578be8);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setValue__026a51b0,&cf_1);
  local_20 = local_38;
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

