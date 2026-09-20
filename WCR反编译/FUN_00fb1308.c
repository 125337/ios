// FUN_00fb1308 @ 00fb1308

void FUN_00fb1308(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined **ppuVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined8 local_1d0;
  undefined *local_1c0;
  undefined *local_1a0;
  undefined4 local_198;
  undefined4 local_194;
  code *local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined *local_178;
  undefined4 local_170;
  undefined4 local_16c;
  code *local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined1 local_149;
  undefined *local_148;
  undefined4 local_140;
  undefined4 local_13c;
  code *local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined1 auStack_118 [8];
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 local_d1;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  code *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [8];
  char *local_98 [3];
  char *local_80;
  undefined1 auStack_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  byte local_41;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  local_1c0 = *(undefined **)(param_1 + 0x20);
  local_41 = 0;
  bVar1 = local_1c0 == (undefined *)0x0;
  local_30 = param_1;
  local_28 = param_1;
  if (bVar1) {
    local_1c0 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineHelper_026ce000,PTR_s_findTopVC_0269d290);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_1c0;
  }
  local_41 = bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_1c0;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if (local_38 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_el9_QRNy);
    FUN_00fb1194(DAT_02323c68,*(undefined8 *)(param_1 + 0x28));
    local_48 = 1;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x30);
    (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_length_0269cca0);
    local_59 = 0;
    if (lVar3 == 0) {
      local_1d0 = *(undefined8 *)(param_1 + 0x38);
      (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_1d0;
    }
    else {
      local_1d0 = *(undefined8 *)(param_1 + 0x30);
    }
    local_59 = lVar3 == 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_1d0;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_copy_0269d150);
    uVar5 = *(undefined8 *)(param_1 + 0x28);
    local_68 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_copy_0269d150);
    local_70 = uVar5;
    _objc_initWeak(auStack_78,local_38);
    pcVar6 = "WCActionSheet";
    _objc_getClass();
    local_80 = pcVar6;
    if (pcVar6 == (char *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_wcr_openFileAtPathWithOtherApps__026acf98,
                 local_68,local_38);
      FUN_00fb1194(0x405e000000000000,local_70);
      local_48 = 1;
    }
    else {
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_initWithTitle__0269d2f8,&cf_bRNe_);
      puVar2 = PTR_s_addButtonWithTitle_eventAction__026a0f60;
      ppuVar7 = &local_d0;
      local_d0 = PTR___NSConcreteStackBlock_02578660;
      local_c8 = 0xc2000000;
      local_c4 = 0;
      local_c0 = FUN_00fb1cc4;
      local_b8 = &DAT_0257c978;
      local_98[0] = pcVar6;
      _objc_copyWeak(auStack_a0,auStack_78);
      uVar5 = local_68;
      local_d1 = 1;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_70;
      local_b0 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_a8 = uVar4;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar2,&cf_lS__YS);
      local_d1 = 0;
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      uVar4 = local_68;
      pcVar6 = local_98[0];
      puVar2 = PTR_s_addButtonWithTitle_eventAction__026a0f60;
      ppuVar7 = &local_110;
      local_110 = PTR___NSConcreteStackBlock_02578660;
      local_108 = 0xc2000000;
      local_104 = 0;
      local_100 = FUN_00fb1e00;
      local_f8 = &DAT_025839b0;
      (*(code *)PTR__objc_retain_02578638)();
      uVar5 = local_50;
      local_f0 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_70;
      local_e8 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_e0 = uVar4;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar2,&cf_S0ReNORKb);
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      pcVar6 = local_98[0];
      puVar2 = PTR_s_addButtonWithTitle_eventAction__026a0f60;
      ppuVar7 = &local_148;
      local_148 = PTR___NSConcreteStackBlock_02578660;
      local_140 = 0xc2000000;
      local_13c = 0;
      local_138 = FUN_00fb1ec4;
      local_130 = &DAT_0257c978;
      _objc_copyWeak(auStack_118,auStack_78);
      uVar5 = local_68;
      local_149 = 1;
      (*(code *)PTR__objc_retain_02578638)();
      uVar4 = local_70;
      local_128 = uVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_120 = uVar4;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar2,&cf_vQN__uSb);
      local_149 = 0;
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      pcVar8 = local_98[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98[0],PTR_s_respondsToSelector__026ca818,
                 PTR_s_setCancelButtonTitle_eventAction_026a0f68);
      uVar4 = local_70;
      pcVar6 = local_98[0];
      puVar9 = PTR_s_setCancelButtonTitle_eventAction_026a0f68;
      puVar2 = PTR_s_addButtonWithTitle_eventAction__026a0f60;
      if (((ulong)pcVar8 & 1) == 0) {
        ppuVar7 = &local_1a0;
        local_1a0 = PTR___NSConcreteStackBlock_02578660;
        local_198 = 0xc2000000;
        local_194 = 0;
        local_190 = FUN_00fb2034;
        local_188 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_180 = uVar4;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar2,&cf_Sm);
        (*(code *)PTR__objc_release_02578630)(ppuVar7);
        _objc_storeStrong(&local_180,0);
      }
      else {
        ppuVar7 = &local_178;
        local_178 = PTR___NSConcreteStackBlock_02578660;
        local_170 = 0xc2000000;
        local_16c = 0;
        local_168 = FUN_00fb2000;
        local_160 = &DAT_0257a800;
        (*(code *)PTR__objc_retain_02578638)();
        local_158 = uVar4;
        _objc_retainBlock();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar9,&cf_Sm);
        (*(code *)PTR__objc_release_02578630)(ppuVar7);
        _objc_storeStrong(&local_158,0);
      }
      pcVar6 = local_98[0];
      puVar2 = PTR_s_showInView__0269d310;
      puVar9 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      FUN_00fb1194(0x4082c00000000000,local_70);
      _objc_storeStrong(&local_120);
      _objc_storeStrong(&local_128,0);
      _objc_destroyWeak(auStack_118);
      _objc_storeStrong(&local_e0,0);
      _objc_storeStrong(&local_e8,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_a8,0);
      _objc_storeStrong(&local_b0,0);
      _objc_destroyWeak(auStack_a0);
      _objc_storeStrong(local_98,0);
      local_48 = 0;
    }
    _objc_destroyWeak(auStack_78);
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

