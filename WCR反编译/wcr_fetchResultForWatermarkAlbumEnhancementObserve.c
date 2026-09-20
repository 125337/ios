// wcr_fetchResultForWatermarkAlbumEnhancementObserve @ 00726844

/* Function Stack Size: 0x10 bytes */

ID WCRefineScreenshotWatermarkProcessor::wcr_fetchResultForWatermarkAlbumEnhancementObserve
             (ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  SEL local_30;
  ID local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  puVar1 = PTR__OBJC_CLASS___PHFetchOptions_026ce868;
  local_30 = param_2;
  local_28 = param_1;
  _objc_alloc_init();
  puVar2 = PTR__OBJC_CLASS___NSSortDescriptor_026ce870;
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSSortDescriptor_026ce870,
             PTR_s_sortDescriptorWithKey_ascending__026a6f68,&cf_creationDate,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_20 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setSortDescriptors__026a6f70);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setFetchLimit__026a6f78,0x32);
  puVar1 = PTR__OBJC_CLASS___NSPredicate_026ce8f0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSPredicate_026ce8f0,PTR_s_predicateWithFormat__026a76e8,
             &cf__mediaSubtype__u___0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setPredicate__026a76f0);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___PHAsset_026ce530;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___PHAsset_026ce530,PTR_s_fetchAssetsWithMediaType_options_026a6f80,1,
             local_38);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)puVar1;
}

