// sendHangupAutoReplyIfNeeded: @ 00f27f6c

/* Function Stack Size: 0x18 bytes */

void WCRefineDoNotDisturbSupport::sendHangupAutoReplyIfNeeded_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  FUN_00f21dc0();
  _objc_retainAutoreleasedReturnValue();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if ((((uVar1 != 0) && (uVar1 = local_30, FUN_00f222d0(), (uVar1 & 1) == 0)) &&
      (puVar2 = PTR_WCRefineHelper_026ce000,
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                 local_30), ((ulong)puVar2 & 1) == 0)) &&
     (IVar3 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_shouldAutoReplyForSession__026abe78,local_30), (IVar3 & 1) != 0)) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    FUN_00f258a8();
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (((ulong)puVar4 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_call___);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar2;
      FUN_00f253b8();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (((ulong)puVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_sendAutoReplyToSession__026abe90,local_30);
      }
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

