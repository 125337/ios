// FUN_015c33ec @ 015c33ec

void FUN_015c33ec(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_30;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x24f720);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRVoiceSeekOverlay_026cede0;
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRVoiceSeekOverlay_026cede0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) == 0) {
    local_30 = 0;
  }
  else {
    local_30 = local_20;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(local_30);
  return;
}

