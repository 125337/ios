// wcr_bindCustomMinusOnCell:pageID:visible: @ 01dc2a0c

/* Function Stack Size: 0x24 bytes */

void WCRefineSessionStatsLayoutViewController::wcr_bindCustomMinusOnCell_pageID_visible_
               (ID param_1,SEL param_2,ID param_3,ID param_4,bool param_5)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  cfstringStruct *local_f8;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined *local_50;
  undefined4 local_48;
  byte local_41;
  cfstringStruct *local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_40,param_4);
  local_41 = (byte)param_5;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_s_wcr_removeCustomMinusOnCell__026c52c8,local_38);
  pcVar1 = local_40;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  if ((local_41 & 1) != 0) {
    IVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mode_026ab488);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_sessionStatsPageIDAllowsRename_m_026c52d0,pcVar1,IVar2);
    if (((ulong)puVar3 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___UIButton_026cdfc8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_buttonWithType__026ca558,0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setTag__026caa80,0x2c);
      uVar5 = 0x4018000000000000;
      uVar6 = 0x4030000000000000;
      uVar8 = 0x403c000000000000;
      uVar7 = 0x403c000000000000;
      FUN_01dbfc68();
      local_90 = uVar5;
      uStack_88 = uVar6;
      local_80 = uVar7;
      uStack_78 = uVar8;
      local_70 = uVar5;
      uStack_68 = uVar6;
      local_60 = uVar7;
      uStack_58 = uVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,uVar6,uVar7,uVar8,local_50,PTR_s_setFrame__026ca960);
      puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3ff0000000000000,DAT_02323e08,DAT_02323e00,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(0x402c000000000000);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      if (local_40 == (cfstringStruct *)0x0) {
        local_f8 = &::cf___;
      }
      else {
        local_f8 = local_40;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setAccessibilityIdentifier__0269ebc0,local_f8);
      puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
      _objc_alloc();
      uVar6 = 0x401c000000000000;
      uVar7 = 0x402a000000000000;
      uVar8 = 0x402c000000000000;
      uVar5 = DAT_02324270;
      FUN_01dbfc68();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,uVar7,uVar8,uVar5,puVar3,PTR_s_initWithFrame__026ca6e8);
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_98 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_whiteColor_026cabe8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_setUserInteractionEnabled__026caad8,0);
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_addSubview__026ca4c0,local_98);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_addTarget_action_forControlEvent_026ca4c8,local_28,
                 PTR_s_wcr_tapCustomMinus__026c52d8,0x40);
      uVar5 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_contentView_026ca5a8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_setIndentationLevel__026be160,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4042000000000000,local_38,PTR_s_setIndentationWidth__026be168);
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_50,0);
      local_48 = 0;
      goto LAB_01dc2e60;
    }
  }
  local_48 = 1;
LAB_01dc2e60:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

