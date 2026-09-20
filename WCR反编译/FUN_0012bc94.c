// FUN_0012bc94 @ 0012bc94

ulong FUN_0012bc94(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *local_b0;
  byte local_a2;
  byte local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined4 local_58;
  ulong local_48;
  ulong local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  uVar5 = local_30;
  pcVar1 = DAT_028c8640;
  (*(code *)PTR__objc_retain_02578638)();
  (*pcVar1)(uVar5,local_38,local_40);
  local_48 = uVar5;
  if (uVar5 != 0) {
    FUN_0012e2f4();
    local_28 = local_48;
    uVar2 = (uint)uVar5;
    if ((uVar5 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      goto LAB_0012c3b0;
    }
    FUN_0012e3fc();
    local_28 = local_48;
    if ((uVar2 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      goto LAB_0012c3b0;
    }
    if ((local_40 == 0) ||
       (uVar5 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_isSender_0269d1b0),
       (uVar5 & 1) == 0)) {
      uVar5 = local_48;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = uVar5;
      goto LAB_0012c3b0;
    }
    puVar3 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc_init();
    local_60 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setNumberOfLines__026ca9d8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setUserInteractionEnabled__026caad8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setClipsToBounds__026ca8c8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTextAlignment__026caa90,1);
    uVar7 = 0;
    uVar6 = 0;
    uVar8 = 0x4044000000000000;
    uVar9 = 0x403e000000000000;
    FUN_0012e498();
    local_a0 = uVar6;
    uStack_98 = uVar7;
    local_90 = uVar8;
    uStack_88 = uVar9;
    local_80 = uVar6;
    uStack_78 = uVar7;
    local_70 = uVar8;
    uStack_68 = uVar9;
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,uVar7,uVar8,uVar9,local_60,PTR_s_setFrame__026ca960)
    ;
    uVar5 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isSender_0269d1b0);
    local_a1 = (byte)uVar5;
    local_a2 = local_a1;
    FUN_0012e4e4();
    puVar4 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_b0 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_chatTimeBoldFont_0269f020);
    puVar3 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    if (((ulong)puVar4 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_chatTimeFontSize_0269f028);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_systemFontOfSize__0269cc50);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_chatTimeFontSize_0269f028);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_boldSystemFontOfSize__0269cf28);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setFont__026ca958);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    uVar5 = (ulong)(local_a1 & 1);
    FUN_0012e5bc(uVar5,local_a2 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setTextColor__026caa98);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    uVar5 = (ulong)(local_a1 & 1);
    FUN_0012eae8(uVar5,local_a2 & 1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_chatTimeCornerRadius_0269f030);
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(uVar6);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    FUN_0012f014(local_30,local_60);
    _objc_storeStrong(&local_b0);
    _objc_storeStrong(&local_60,0);
  }
  uVar5 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar5;
LAB_0012c3b0:
  local_58 = 1;
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return local_28;
}

