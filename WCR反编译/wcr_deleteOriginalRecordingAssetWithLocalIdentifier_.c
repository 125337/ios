// wcr_deleteOriginalRecordingAssetWithLocalIdentifier: @ 007025cc

/* Function Stack Size: 0x18 bytes */

void WCRefineScreenRecordingFrameProcessor::wcr_deleteOriginalRecordingAssetWithLocalIdentifier_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  uint local_48;
  long local_38;
  SEL local_30;
  ID local_28;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  lVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  puVar3 = PTR__OBJC_CLASS___PHAsset_026ce530;
  if (lVar1 == 0) {
    local_48 = 1;
  }
  else {
    local_20 = local_38;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_fetchAssetsWithLocalIdentifiers__026a73d0,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___PHPhotoLibrary_026ce4a0,PTR_s_sharedPhotoLibrary_026a1730);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_58;
      local_80 = PTR___NSConcreteStackBlock_02578660;
      local_78 = 0xc2000000;
      local_74 = 0;
      local_70 = FUN_0070290c;
      local_68 = &DAT_02578c20;
      (*(code *)PTR__objc_retain_02578638)();
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_performChanges_completionHandler_026a1740,&local_80,0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      _objc_storeStrong(&local_60,0);
    }
    local_48 = (uint)(puVar3 == (undefined *)0x0);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

