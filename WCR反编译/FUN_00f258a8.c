// FUN_00f258a8 @ 00f258a8

byte FUN_00f258a8(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doNotDisturbAutoReplyCountMode_026abe30);
  puVar2 = PTR_WCRefineHelper_026ce000;
  if (lVar1 == 1) {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doNotDisturbAutoReplyMultiConten_026abe38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_autoReplyNormalizedMultiItems__0269efa0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = puVar3 != (undefined *)0x0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  else {
    lVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_doNotDisturbAutoReplyText_026abe48);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar1;
    FUN_00f21dc0();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = 1;
    if (lVar5 == 0) {
      lVar5 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_doNotDisturbAutoReplyRepositoryC_026abe50);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar5;
      FUN_00f21dc0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_11 = lVar7 != 0;
      (*(code *)PTR__objc_release_02578630)(lVar6);
      (*(code *)PTR__objc_release_02578630)(lVar5);
    }
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

