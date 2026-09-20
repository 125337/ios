// FUN_00355298 @ 00355298

void FUN_00355298(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *local_58;
  ulong local_28;
  cfstringStruct *local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_20,param_2);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x7f198);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineHomeAvatarStripView_026ce538;
  local_28 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHomeAvatarStripView_026ce538,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar1 & 1) != 0) {
    if (local_20 == (cfstringStruct *)0x0) {
      local_58 = &cf_unread;
    }
    else {
      local_58 = local_20;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_28,PTR_s_refreshUnreadBadgesWithReason__026a2570,local_58);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

