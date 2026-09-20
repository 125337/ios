// WCRefine_addItemWithBtnData:showNew:sel:target: @ 004c2dfc

/* Function Stack Size: 0x2c bytes */

void WCRefineMainFrameMenuSearchItem::WCRefine_addItemWithBtnData_showNew_sel_target_
               (ID param_1,SEL param_2,ID param_3,bool param_4,SEL param_5,ID param_6)

{
  char *pcVar1;
  undefined *puVar2;
  ID IVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_d4;
  uint local_b4;
  ulong local_b0;
  ulong local_a8;
  byte local_99;
  ulong local_98;
  byte local_89;
  ulong local_88;
  byte local_79;
  undefined4 local_78;
  byte local_71;
  ID local_70;
  byte local_61;
  undefined *local_60;
  char *local_58;
  undefined8 local_50;
  SEL local_48;
  byte local_39;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_39 = (byte)param_4;
  local_50 = 0;
  local_48 = param_5;
  _objc_storeStrong(&local_50,param_6);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_WCRefine_addItemWithBtnData_show_026a3f60,local_38,local_39 & 1,local_48
             ,local_50);
  pcVar1 = "NewMainFrameRightTopMenuBtn";
  _objc_getClass();
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_isPluginVersionCloudHardBlocked_0269db50);
  local_61 = 0;
  local_71 = 0;
  local_b4 = 1;
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    local_60 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_b4 = 1;
    if (((ulong)puVar2 & 1) != 0) {
      IVar3 = local_28;
      _objc_getAssociatedObject(local_28,&DAT_028cac28);
      _objc_retainAutoreleasedReturnValue();
      local_71 = 1;
      local_70 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_b4 = 1;
      if (((IVar3 & 1) == 0) && (local_b4 = 1, local_58 != (char *)0x0)) {
        uVar4 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_58);
        local_b4 = (uint)uVar4 ^ 1;
      }
    }
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_b4 & 1) == 0) {
    uVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsTitleID_026a3fa0);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_89 = 0;
    local_99 = 0;
    local_d4 = 1;
    if ((uVar6 & 1) == 0) {
      uVar6 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsID_026a3fa8);
      _objc_retainAutoreleasedReturnValue();
      local_89 = 1;
      local_88 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_d4 = 1;
      if ((uVar6 & 1) == 0) {
        uVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_m_nsID_026a3fa8);
        _objc_retainAutoreleasedReturnValue();
        local_99 = 1;
        local_98 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_d4 = (uint)uVar6;
      }
    }
    if ((local_99 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_98);
    }
    if ((local_89 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    (*(code *)PTR__objc_release_02578630)();
    local_79 = (byte)local_d4 & 1;
    if ((local_d4 & 1) == 0) {
      local_78 = 1;
    }
    else {
      FUN_004c3314();
      _objc_retainAutoreleasedReturnValue();
      local_a8 = uVar5;
      FUN_004c3480();
      _objc_retainAutoreleasedReturnValue();
      local_b0 = uVar5;
      if ((local_a8 == 0) || (uVar5 == 0)) {
        local_78 = 1;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_WCRefine_addItemWithBtnData_show_026a3f60,uVar5,0,
                   PTR_s_WCRefine_onMiniProgramEntryTappe_026a3f88,local_a8);
        IVar3 = local_28;
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(IVar3,&DAT_028cac28,puVar2,1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        local_78 = 0;
      }
      _objc_storeStrong(&local_b0);
      _objc_storeStrong(&local_a8,0);
    }
  }
  else {
    local_78 = 1;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

