// FUN_01959e74 @ 01959e74

void FUN_01959e74(long param_1)

{
  undefined *puVar1;
  long lVar2;
  double dVar3;
  cfstringStruct *local_58;
  undefined *local_28;
  long local_20;
  long local_18;
  
  local_20 = param_1;
  local_18 = param_1;
  if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__gS0RgHePWh);
  }
  else {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_28 = puVar1;
    if (*(long *)(param_1 + 0x30) == 2) {
      lVar2 = param_1 + 0x28;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      (*(code *)PTR__objc_release_02578630)(lVar2);
      lVar2 = param_1 + 0x28;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      (*(code *)PTR__objc_release_02578630)(lVar2);
      puVar1 = PTR_WCRefineFakeLocationEngine_026ceb80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFakeLocationMoveRunning__026ac6d0,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__p__);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x38),puVar1,PTR_s_setFakeLocationLatitude__026ac7c0);
      dVar3 = *(double *)(param_1 + 0x40);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFakeLocationLongitude__026ac7c8);
      local_58 = *(cfstringStruct **)(param_1 + 0x20);
      if (local_58 == (cfstringStruct *)0x0) {
        local_58 = &cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFakeLocationName__026b9c00,local_58);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFakeLocationEnabled__026b9bc8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_fakeLocationAltitude_026ac6a8);
      if (ABS(dVar3) < DAT_0232c3a0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (0x4044000000000000,local_28,PTR_s_setFakeLocationAltitude__026b9c08);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setFakeLocationMoveRunning__026ac6d0,0);
      puVar1 = PTR_WCRefineFakeLocationEngine_026ceb80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = PTR_WCRefineFakeLocationEngine_026ceb80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineFakeLocationEngine_026ceb80,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      lVar2 = param_1 + 0x28;
      _objc_loadWeakRetained();
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40));
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_wp__);
    }
    param_1 = param_1 + 0x28;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    _objc_storeStrong(&local_28,0);
  }
  return;
}

