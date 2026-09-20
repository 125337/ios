// itemFromSender: @ 00952ad8

/* Function Stack Size: 0x18 bytes */

ID WCRClipboardHistoryPanelController::itemFromSender_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong local_a0;
  ulong local_60 [2];
  uint local_4c;
  ulong local_48 [3];
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_userInfo_0269f138);
  if ((uVar2 & 1) != 0) {
    uVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_userInfo);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_48[0] = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar2 = local_48[0];
    bVar1 = (uVar3 & 1) != 0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
    }
    local_4c = (uint)bVar1;
    _objc_storeStrong(local_48,0);
    if (local_4c != 0) goto LAB_00952d1c;
  }
  uVar2 = local_30;
  _objc_getAssociatedObject(local_30,"wcr_clip_item");
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_60[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((uVar2 & 1) == 0) {
    local_a0 = 0;
  }
  else {
    local_a0 = local_60[0];
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_a0;
  local_4c = 1;
  _objc_storeStrong(local_60,0);
LAB_00952d1c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

