// wcr_applyAppearanceColorsOnly @ 00135060

/* Function Stack Size: 0x10 bytes */

void __thiscall
WCRChatToolbarView::wcr_applyAppearanceColorsOnly(WCRChatToolbarView *this,ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  ID IVar6;
  double in_d0;
  double local_1e0;
  double local_1d8;
  double local_1c0;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  ID local_f0;
  ID local_e8;
  double local_e0;
  byte local_d8;
  byte local_d7;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  double local_80;
  double local_70;
  ID local_68;
  byte local_5a;
  byte local_59;
  undefined *local_58;
  byte local_49;
  ID local_48;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  local_49 = 0;
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = true;
  if (IVar3 != 0) {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_actions_0269f150);
    _objc_retainAutoreleasedReturnValue();
    local_49 = 1;
    local_48 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = IVar3 == 0;
  }
  if ((local_49 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActionSignature__0269f140);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setStructureSignature__0269f180,0);
    IVar2 = local_28;
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_actions_0269f150);
    _objc_retainAutoreleasedReturnValue();
    IVar6 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_inputToolView_0269d0e8);
    _objc_retainAutoreleasedReturnValue();
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_attachmentController_0269f148);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (IVar2,PTR_s_reloadWithActions_inputToolView__0269f158,IVar3,IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_release_02578630)(IVar6);
    (*(code *)PTR__objc_release_02578630)(IVar3);
  }
  else {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_chatToolbarClearBackground_0269f188);
    local_59 = (byte)puVar5;
    puVar5 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_chatToolbarShowIcon_0269f190);
    local_5a = (byte)puVar5;
    IVar2 = local_28;
    FUN_00135a60();
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar2;
    FUN_00135d00();
    local_70 = in_d0;
    FUN_00134e1c();
    local_88 = in_d0;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_chatToolbarItemHeight_0269f198);
    FUN_00135dc0(&cf_chatToolbarItemHeight);
    local_90 = (double)(long)(in_d0 * local_70 * 10.0) / 10.0;
    local_1c0 = local_90;
    if (local_88 < local_90) {
      local_1c0 = local_88;
    }
    local_98 = local_1c0;
    local_80 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_chatToolbarIconSize_0269f1a0);
    FUN_00135dc0(&cf_chatToolbarIconSize);
    local_f0 = local_28;
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_a8 = (double)(long)(local_1c0 * local_70 * 10.0) / 10.0;
    local_b8 = 0x4028000000000000;
    local_c0 = local_80 - 4.0;
    local_1d8 = local_c0;
    if (local_c0 <= 12.0) {
      local_1d8 = 12.0;
    }
    local_c8 = local_1d8;
    local_b0 = local_1d8;
    local_1e0 = local_a8;
    if (local_1d8 <= local_a8) {
      local_1e0 = local_1d8;
    }
    local_d0 = local_1e0;
    local_a0 = local_1e0;
    local_110 = PTR___NSConcreteGlobalBlock_02578658;
    local_108 = 0xd0800000;
    local_104 = 0;
    local_100 = FUN_00135f2c;
    local_f8 = &DAT_0257a448;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_68;
    local_d8 = local_59 & 1;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = IVar2;
    local_d7 = local_5a & 1;
    local_e0 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_performWithoutAnimation__0269e7e0,&local_110)
    ;
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_structureSignature_0269f1a8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
    if (IVar3 != 0) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_structureSignature_0269f1a8);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_traitCollection_026caba8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      IVar6 = local_68;
      FUN_001367a8();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_stringWithFormat__0269cca8,&cf_____ld___);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setActionSignature__0269f140);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(IVar3);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    _objc_storeStrong(&local_e8);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_58,0);
  }
  return;
}

