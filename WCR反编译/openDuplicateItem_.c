// openDuplicateItem: @ 0189e9f0

/* Function Stack Size: 0x18 bytes */

void WCRefineChatRoomDuplicateJoinViewController::openDuplicateItem_
               (ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  ID IVar7;
  char *pcVar8;
  ID local_e8;
  ulong local_a0;
  char *local_90;
  bool local_81;
  ID local_80;
  byte local_71;
  ID local_70;
  ID local_68;
  undefined4 local_60;
  byte local_59;
  ID local_58;
  byte local_49;
  ulong local_48;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  uVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_49 = 0;
  if ((uVar3 & 1) == 0) {
    local_a0 = 0xffffffffffffffff;
  }
  else {
    local_a0 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_userInfo_0269f138);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_40 = local_a0;
  local_59 = 0;
  bVar1 = true;
  if (-1 < (long)local_a0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = (long)IVar4 <= (long)local_a0;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (bVar1) {
    local_60 = 1;
  }
  else {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_items_0269e4b0);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setPendingItem__026b7488);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingItem_026b7490);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    IVar7 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isKindOfClass__0269cd68,puVar6);
    local_71 = 0;
    local_81 = false;
    bVar1 = (IVar7 & 1) == 0;
    if (bVar1) {
      local_e8 = *(ID *)PTR____NSArray0___02578280;
    }
    else {
      local_e8 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingItem_026b7490);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = local_e8;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_e8;
    }
    local_81 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_e8;
    if ((local_81 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    pcVar8 = "WCUIActionSheet";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar6 = PTR__OBJC_CLASS___NSString_026cdfe8;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_pendingItem_026b7490);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    IVar7 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_componentsJoinedByString__0269d140,&::cf_0)
    ;
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_stringWithFormat__0269cca8,&cf_____);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_initWithTitle__0269d2f8);
    local_90 = pcVar8;
    (*(code *)PTR__objc_release_02578630)(puVar6);
    (*(code *)PTR__objc_release_02578630)(IVar7);
    (*(code *)PTR__objc_release_02578630)(IVar5);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_addBtnTitle_target_sel__0269d278,&cf_cR_QYYO,local_28,
               PTR_s_kickPendingByRule_026b7498);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_addBtnTitle_target_sel__0269d278,&cf_bOYuv_,local_28,
               PTR_s_pickKeepRoom_026b74a0);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_90,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,0);
    pcVar8 = local_90;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_showInView__0269d310);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    _objc_storeStrong(&local_90,0);
    _objc_storeStrong(&local_68,0);
    local_60 = 0;
  }
  _objc_storeStrong(&local_38,0);
  return;
}

