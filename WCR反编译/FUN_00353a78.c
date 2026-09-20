// FUN_00353a78 @ 00353a78

void FUN_00353a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined *puVar11;
  char *local_1c0;
  char *local_1b8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 local_1a4;
  code *local_1a0;
  undefined *local_198;
  undefined *local_190;
  undefined *local_188;
  undefined4 local_180;
  undefined4 local_17c;
  code *local_178;
  undefined *local_170;
  undefined *local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  code *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined *local_138;
  undefined4 local_130;
  undefined4 local_12c;
  code *local_128;
  undefined *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined *local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  code *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined *local_88;
  undefined4 local_7c;
  undefined8 local_78;
  long local_70;
  long local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_68 = 0;
  _objc_storeStrong(&local_68,param_1);
  local_70 = 0;
  _objc_storeStrong(&local_70,param_2);
  local_78 = 0;
  _objc_storeStrong(&local_78,param_3);
  if ((local_68 == 0) ||
     (lVar2 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_7c = 1;
  }
  else {
    puVar3 = PTR_WCRefineHomeAvatarStripPickerBridge_026ce590;
    _objc_alloc_init();
    local_88 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setUsername__026a2510,local_70);
    (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_setHost__026a2518,local_68);
    _objc_setAssociatedObject(local_68,&DAT_028c9ff0,local_88,1);
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar5 = local_88;
    puVar11 = PTR_WCRHomeAvatarStripMenuAction_026ce598;
    puVar3 = PTR___NSConcreteStackBlock_02578660;
    local_90 = puVar4;
    if (puVar4 + -1 == (undefined *)0x0) {
      local_c0 = PTR___NSConcreteStackBlock_02578660;
      local_b8 = 0xc2000000;
      local_b4 = 0;
      local_b0 = FUN_00354524;
      local_a8 = &DAT_0257a800;
      (*(code *)PTR__objc_retain_02578638)();
      local_a0 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar11,PTR_s_actionWithTitle_image_handler__026a2530,&cf_fbc,
                 &cf_arrow_triangle_2_circlepath,&local_c0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_88;
      puVar5 = PTR_WCRHomeAvatarStripMenuAction_026ce598;
      local_e8 = puVar3;
      local_e0 = 0xc2000000;
      local_dc = 0;
      local_d8 = FUN_00354564;
      local_d0 = &DAT_0257a800;
      local_60 = puVar11;
      (*(code *)PTR__objc_retain_02578638)();
      local_c8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_actionWithTitle_image_handler__026a2530,&cf_n_v,&cf_arrow_up_to_line,
                 &local_e8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = local_88;
      puVar4 = PTR_WCRHomeAvatarStripMenuAction_026ce598;
      local_110 = puVar3;
      local_108 = 0xc2000000;
      local_104 = 0;
      local_100 = FUN_003545a4;
      local_f8 = &DAT_0257a800;
      local_58 = puVar5;
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_actionWithTitle_image_handler__026a2530,&cf_n__,&cf_arrow_down_to_line
                 ,&local_110);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = local_88;
      puVar6 = PTR_WCRHomeAvatarStripMenuAction_026ce598;
      local_138 = puVar3;
      local_130 = 0xc2000000;
      local_12c = 0;
      local_128 = FUN_003545e4;
      local_120 = &DAT_0257a800;
      local_50 = puVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_118 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_actionWithTitle_image_handler__026a2530,&cf_>f_y4YP,&cf_photo,
                 &local_138);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = local_88;
      puVar7 = PTR_WCRHomeAvatarStripMenuAction_026ce598;
      local_160 = puVar3;
      local_158 = 0xc2000000;
      local_154 = 0;
      local_150 = FUN_00354624;
      local_148 = &DAT_0257a800;
      local_48 = puVar6;
      (*(code *)PTR__objc_retain_02578638)();
      local_140 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar7,PTR_s_actionWithTitle_image_handler__026a2530,&cf_WvMOy,
                 &cf_arrow_up_and_down,&local_160);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = local_88;
      puVar8 = PTR_WCRHomeAvatarStripMenuAction_026ce598;
      local_188 = puVar3;
      local_180 = 0xc2000000;
      local_17c = 0;
      local_178 = FUN_00354664;
      local_170 = &DAT_0257a800;
      local_40 = puVar7;
      (*(code *)PTR__objc_retain_02578638)();
      local_168 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar8,PTR_s_actionWithTitle_image_handler__026a2530,&cf_4ls_MOy,
                 &cf_arrow_left_and_right,&local_188);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_88;
      puVar9 = PTR_WCRHomeAvatarStripMenuAction_026ce598;
      local_1b0 = puVar3;
      local_1a8 = 0xc2000000;
      local_1a4 = 0;
      local_1a0 = FUN_003546a4;
      local_198 = &DAT_0257a800;
      local_38 = puVar8;
      (*(code *)PTR__objc_retain_02578638)();
      local_190 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar9,PTR_s_actionWithTitle_image_handler__026a2530,&cf_eQn_u,&cf_gearshape,
                 &local_1b0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_60
                 ,7);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar8);
      (*(code *)PTR__objc_release_02578630)(puVar7);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar11);
      FUN_003546e4(local_68,local_78,local_98);
      local_7c = 1;
      _objc_storeStrong(&local_98);
      _objc_storeStrong(&local_190,0);
      _objc_storeStrong(&local_168,0);
      _objc_storeStrong(&local_140,0);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_c8,0);
      _objc_storeStrong(&local_a0,0);
    }
    else {
      pcVar10 = "WCUIActionSheet";
      _objc_getClass(puVar4 + -1);
      local_1b8 = pcVar10;
      if (pcVar10 == (char *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
        local_7c = 1;
      }
      else {
        FUN_0035503c();
        pcVar10 = local_1b8;
        _objc_alloc();
        puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
        puVar11 = local_88;
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_displayNameForMenu_026a2558);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_4YPd_O);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar10,PTR_s_initWithTitle__0269d2f8);
        local_1c0 = pcVar10;
        (*(code *)PTR__objc_release_02578630)(puVar3);
        (*(code *)PTR__objc_release_02578630)(puVar11);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_fbc,local_88,
                   PTR_s_replaceContact_026a2528);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_n_v,local_88,
                   PTR_s_moveToTop_026a2538);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_n__,local_88,
                   PTR_s_moveToBottom_026a2540);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_>f_y4YP,local_88,
                   PTR_s_chooseAvatar_026a2548);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_WvMOy,local_88,
                   PTR_s_adjustVerticalOffset_026a22a0);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_4ls_MOy,local_88,
                   PTR_s_adjustHorizontalOffset_026a22b8);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_addBtnTitle_target_sel__0269d278,&cf_eQn_u,local_88,
                   PTR_s_openSettings_026a2550);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_addCancelBtnTitle_target_sel__0269d268,&cf_Sm,local_88,
                   PTR_s_cancelAction_026a2260);
        pcVar10 = local_1c0;
        puVar3 = PTR_s_showInView__0269d310;
        lVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar10,puVar3);
        (*(code *)PTR__objc_release_02578630)(lVar2);
        _objc_storeStrong(&local_1c0,0);
        local_7c = 0;
      }
    }
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_68,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

