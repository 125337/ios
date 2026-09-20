// syncSuperFloatWithConfig: @ 015f7b78

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatRuntime::syncSuperFloatWithConfig_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  byte local_3c;
  byte local_35;
  undefined4 local_34;
  uint local_30;
  byte local_29;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatEnabled_026b1660);
  local_3c = 0;
  if ((uVar2 & 1) != 0) {
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatLinkSuperFloat_026b1668);
    local_3c = 0;
    if ((uVar2 & 1) != 0) {
      puVar3 = PTR_WCRQuickChatRuntime_026ce698;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRQuickChatRuntime_026ce698,PTR_s_runtimeCloudAllowed_026ae210);
      local_3c = (byte)puVar3;
    }
  }
  local_29 = local_3c & 1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setSuperFloatLinked__026b1670,local_29);
  bVar1 = (local_29 & 1) != 0;
  if (bVar1) {
    local_34 = 0;
    local_35 = 0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_readScopedBadgeUnread_mutedOnly__026b1340,&local_34,&local_35);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatBallShowBadge_026b1338);
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_quickChatBallBadgeSide_026b1348);
    _WCRSuperFloatQuickChatSync(1,uVar2 & 0xffffffff,uVar4,local_34,local_35 & 1);
  }
  else {
    _WCRSuperFloatQuickChatSync(0,0,0,0,0);
  }
  local_30 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

