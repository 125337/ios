// FUN_000fb874 @ 000fb874

void FUN_000fb874(undefined8 param_1,long param_2)

{
  long lVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *local_f8;
  char *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_a0;
  char *local_98 [2];
  char *local_88;
  char *local_80;
  char *local_78;
  uint local_6c;
  char *local_68;
  byte local_59;
  long local_58 [3];
  long local_40;
  long local_38;
  char *local_30;
  char *local_28;
  
  local_30 = (char *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = param_2;
  FUN_000fc664();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_38;
  local_40 = param_2;
  FUN_000fc690();
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_30;
  pcVar2 = &cf_jumpMsgEdgeTipsView;
  local_58[0] = lVar1;
  _NSSelectorFromString();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_respondsToSelector__026ca818,pcVar2);
  local_59 = ((byte)pcVar3 ^ 1) & 1;
  if (local_59 != 0) {
    pcVar3 = local_30;
    FUN_000fca48(local_30,local_38,local_40,local_58[0]);
    _objc_retainAutoreleasedReturnValue();
    local_68 = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
    }
    local_6c = (uint)(pcVar3 != (char *)0x0);
    _objc_storeStrong(&local_68,0);
    if (local_6c != 0) goto LAB_000fc5f0;
  }
  pcVar3 = "MMEdgeTipsView";
  _objc_getClass();
  local_78 = pcVar3;
  if (((pcVar3 != (char *)0x0) &&
      ((*(code *)PTR__objc_msgSend_02578628)
                 (pcVar3,PTR_s_instancesRespondToSelector__0269da90,
                  PTR_s_initWithTitle_image__0269ebb8), ((ulong)pcVar3 & 1) != 0)) &&
     (pcVar3 = local_78,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_78,PTR_s_instancesRespondToSelector__0269da90,PTR_s_setDelegate__026ca910),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar3 = local_78;
    _objc_alloc();
    pcVar4 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_initWithTitle_image__0269ebb8,local_40,local_58[0]);
    _objc_retainAutoreleasedReturnValue();
    local_80 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar3 = local_80;
    puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)pcVar3 & 1) == 0) {
      local_6c = 0;
    }
    else {
      pcVar3 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
      if (((ulong)pcVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_setDelegate__026ca910,local_30);
      }
      pcVar3 = local_80;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = pcVar3;
      lVar1 = local_38;
      FUN_000fd06c();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setAccessibilityIdentifier__0269ebc0);
      (*(code *)PTR__objc_release_02578630)(lVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setHidden__026ca970,1);
      (*(code *)PTR__objc_msgSend_02578628)(0,local_88,PTR_s_setAlpha__026ca860);
      pcVar3 = local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
      local_6c = 1;
      _objc_storeStrong(&local_88,0);
    }
    _objc_storeStrong(&local_80,0);
    if (local_6c != 0) goto LAB_000fc5f0;
  }
  if ((local_59 & 1) == 0) {
    pcVar3 = local_30;
    FUN_000fca48(local_30,local_38,local_40,local_58[0]);
    _objc_retainAutoreleasedReturnValue();
    local_98[0] = pcVar3;
    if (pcVar3 != (char *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar3;
    }
    local_6c = (uint)(pcVar3 != (char *)0x0);
    _objc_storeStrong(local_98,0);
    if (local_6c != 0) goto LAB_000fc5f0;
  }
  pcVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_a0 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_systemBackgroundColor_0269e9b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  pcVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x4032000000000000);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  pcVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setClipsToBounds__026ca8c8,1);
  uVar8 = 0x4020000000000000;
  uVar6 = 0x4020000000000000;
  uVar7 = 0x4028000000000000;
  uVar9 = 0x402c000000000000;
  FUN_000fd098();
  local_e0 = uVar6;
  uStack_d8 = uVar7;
  local_d0 = uVar8;
  uStack_c8 = uVar9;
  local_c0 = uVar6;
  uStack_b8 = uVar7;
  local_b0 = uVar8;
  uStack_a8 = uVar9;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar6,uVar7,uVar8,uVar9,local_a0,PTR_s_setContentEdgeInsets__0269ebd0);
  puVar5 = PTR__OBJC_CLASS___UIFont_026cdfc0;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x402c000000000000,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_titleLabel_026caba0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(puVar5);
  puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323da0,DAT_02323d98,DAT_02323d90,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "WCColor";
  local_e8 = puVar5;
  _objc_getClass();
  local_f0 = pcVar3;
  if ((pcVar3 != (char *)0x0) &&
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_Brand_0269ebd8),
     ((ulong)pcVar3 & 1) != 0)) {
    pcVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_Brand_0269ebd8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_f8 = pcVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)pcVar3 & 1) != 0) {
      _objc_storeStrong(&local_e8,local_f8);
    }
    _objc_storeStrong(&local_f8,0);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTitleColor_forState__026caac0,local_e8,0);
  if (local_58[0] != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setImage_forState__0269cc60,local_58[0],0);
    uVar8 = 0;
    uVar6 = 0;
    uVar7 = 0xc000000000000000;
    uVar9 = 0x4000000000000000;
    FUN_000fd098();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar7,uVar8,uVar9,local_a0,PTR_s_setImageEdgeInsets__0269ebe0);
    uVar8 = 0;
    uVar6 = 0;
    uVar7 = 0x4010000000000000;
    uVar9 = 0xc010000000000000;
    FUN_000fd098();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar6,uVar7,uVar8,uVar9,local_a0,PTR_s_setTitleEdgeInsets__0269ebe8);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setTitle_forState__026caab8,local_40,0);
  lVar1 = local_38;
  FUN_000fd06c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setAccessibilityIdentifier__0269ebc0);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_setHidden__026ca970,1);
  (*(code *)PTR__objc_msgSend_02578628)(0,local_a0,PTR_s_setAlpha__026ca860);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_a0,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_30,
             PTR_s_wcr_onChatPositionDIYTipTap__0269eb70,0x40);
  pcVar3 = local_a0;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = pcVar3;
  local_6c = 1;
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_a0,0);
LAB_000fc5f0:
  _objc_storeStrong(local_58);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

