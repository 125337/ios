// FUN_016a5564 @ 016a5564

void FUN_016a5564(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    pcVar3 = "VideoMessageCellView";
    _objc_getClass();
    if ((pcVar3 == (char *)0x0) ||
       (uVar4 = local_18,
       (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isKindOfClass__0269cd68,pcVar3),
       (uVar4 & 1) == 0)) {
      uVar4 = local_18;
      pcVar5 = &cf_AppFileMessageCellViewV2;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,pcVar5);
      uVar6 = local_18;
      if ((uVar4 & 1) == 0) {
        pcVar5 = &cf_AppFileMessageCellView;
        _NSClassFromString();
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isKindOfClass__0269cd68,pcVar5);
        if ((uVar6 & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineEmoticonToolsHelper_026ce448,
                     PTR_s_convertImageMessageToEmoticonFro_026b2d60,local_18);
          goto LAB_016a57b4;
        }
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonToolsHelper_026ce448,
                 PTR_s_convertVideoMessageToEmoticonFro_026b2d58,local_18);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineEmoticonToolsHelper_026ce448,
                 PTR_s_convertVideoMessageToEmoticonFro_026b2d58,local_18);
    }
  }
LAB_016a57b4:
  _objc_storeStrong(&local_28,0);
  return;
}

