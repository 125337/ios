// _WCRChatToolbarOpenContact @ 00ef53a4

byte _WCRChatToolbarOpenContact(undefined8 param_1,long param_2,undefined8 param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  ulong local_e0;
  char *local_d0;
  ulong local_98;
  ulong local_90;
  char *local_88;
  undefined *local_80;
  char *local_78;
  bool local_69;
  char *local_68;
  char *local_60;
  ulong local_58;
  ulong local_50;
  int local_44;
  ulong local_40;
  long local_38;
  ulong local_30;
  byte local_21;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_40 = 0;
  local_38 = param_2;
  _objc_storeStrong(&local_40,param_3);
  uVar2 = local_30;
  FUN_00eee23c();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_30;
  local_30 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (uVar3 == 0) {
    local_21 = 0;
    local_44 = 1;
    goto LAB_00ef5828;
  }
  uVar3 = local_30;
  FUN_00ef585c();
  if ((uVar3 & 1) == 0) {
    local_21 = 0;
    local_44 = 1;
    goto LAB_00ef5828;
  }
  uVar2 = local_30;
  FUN_00eee3ac();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_40;
  local_50 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_58 = uVar3;
  if (uVar3 == 0) {
    pcVar4 = "WCRefineHelper";
    _objc_getClass();
    local_60 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_findTopVC_0269d290);
    local_69 = false;
    bVar1 = ((ulong)pcVar4 & 1) == 0;
    if (bVar1) {
      local_d0 = (char *)0x0;
    }
    else {
      local_d0 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_findTopVC_0269d290);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_d0;
    }
    local_69 = !bVar1;
    _objc_storeStrong(&local_58,local_d0);
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
  }
  lVar6 = local_38 + -1;
  if (lVar6 == 0) {
    pcVar4 = "QuickReplyMsgMgr";
    _objc_getClass(0);
    FUN_00ef5980();
    _objc_retainAutoreleasedReturnValue();
    local_80 = PTR_s_showPageSheetSession_fromViewCon_026a2508;
    local_78 = pcVar4;
    if (((local_50 == 0) || (local_58 == 0)) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_respondsToSelector__026ca818,
                   PTR_s_showPageSheetSession_fromViewCon_026a2508), ((ulong)pcVar4 & 1) == 0)) {
      local_44 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_78,local_80,local_50,local_58);
      local_21 = 1;
      local_44 = 1;
    }
    _objc_storeStrong(&local_78,0);
    if (local_44 == 0) {
      lVar6 = 0;
      goto LAB_00ef5648;
    }
  }
  else {
LAB_00ef5648:
    pcVar4 = "MMMsgLogicManager";
    _objc_getClass(lVar6);
    FUN_00ef5980();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_58;
    puVar5 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
    local_88 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      local_e0 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      local_98 = local_e0;
    }
    else {
      local_e0 = local_58;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_90 = local_e0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    puVar5 = PTR_s_PushOtherBaseMsgControllerByCont_0269d640;
    if (((local_50 == 0) || (local_90 == 0)) ||
       (pcVar4 = local_88,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_88,PTR_s_respondsToSelector__026ca818,
                  PTR_s_PushOtherBaseMsgControllerByCont_0269d640), ((ulong)pcVar4 & 1) == 0)) {
      local_21 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_88,puVar5,local_50,local_90,1);
      local_21 = 1;
    }
    local_44 = 1;
    _objc_storeStrong(&local_90);
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
LAB_00ef5828:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  return local_21 & 1;
}

