// FUN_001c79c4 @ 001c79c4

void FUN_001c79c4(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong local_38 [3];
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c8cc8)(param_1,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if ((((ulong)puVar2 & 1) != 0) &&
     (uVar3 = local_18,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_msgPushNotifyView_026a07f8),
     (uVar3 & 1) != 0)) {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_valueForKey__0269d128,&cf_msgPushNotifyView);
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = uVar3;
    if (uVar3 != 0) {
      puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((uVar3 & 1) != 0) {
        uVar3 = local_38[0];
        FUN_00207570();
        if ((uVar3 & 1) == 0) {
          FUN_00209f80(local_38[0]);
          FUN_0020a6b0(local_38[0]);
          FUN_0020a964(local_38[0]);
          FUN_0020af44(local_38[0]);
          FUN_0020a6b0(local_38[0]);
          FUN_0020a964(local_38[0]);
          uVar3 = local_38[0];
          puVar1 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          FUN_0020dec0(uVar3);
          (*(code *)PTR__objc_release_02578630)(puVar1);
        }
        else {
          _WCRMsgBannerResetStoredFrames(local_38[0]);
        }
      }
    }
    _objc_storeStrong(local_38,0);
  }
  return;
}

