// FUN_0034e818 @ 0034e818

void FUN_0034e818(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x7f198);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineHomeAvatarStripView_026ce538;
  local_20 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHomeAvatarStripView_026ce538,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_reloadContentWithReason_forceReb_026a24e0,&cf_hook_reloadContent,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

