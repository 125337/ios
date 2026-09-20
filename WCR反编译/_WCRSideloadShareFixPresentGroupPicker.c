// _WCRSideloadShareFixPresentGroupPicker @ 0150b070

void _WCRSideloadShareFixPresentGroupPicker(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  undefined **ppuVar4;
  cfstringStruct *pcVar5;
  undefined **ppuVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  qword qVar11;
  long lVar12;
  ulong uVar13;
  ulong local_4f0;
  ulong local_480;
  cfstringStruct *local_460;
  cfstringStruct *local_458;
  ulong local_3a8;
  cfstringStruct *local_388;
  cfstringStruct *local_380;
  ulong local_358;
  cfstringStruct *local_328;
  bool local_2f1;
  ulong local_2f0;
  ulong local_2e8;
  cfstringStruct *local_2e0;
  undefined *local_2d8;
  undefined4 local_2d0;
  undefined4 local_2cc;
  code *local_2c8;
  undefined *local_2c0;
  ulong local_2b8;
  undefined **local_2b0;
  bool local_2a1;
  ulong local_2a0;
  ulong local_298;
  ulong local_290;
  undefined1 auStack_288 [8];
  long local_280;
  long *local_278;
  ulong local_248;
  undefined *local_240;
  undefined4 local_238;
  undefined4 local_234;
  code *local_230;
  undefined *local_228;
  ulong local_220;
  undefined **local_218;
  bool local_209;
  ulong local_208;
  ulong local_200;
  ulong local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  undefined *local_1a8;
  ulong local_1a0;
  char *local_198;
  cfstringStruct *local_190;
  char *local_188;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  qword local_160;
  undefined **local_158;
  cfstringStruct *local_150;
  undefined4 local_144;
  cfstringStruct *local_140;
  cfstringStruct local_138 [4];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_138[0].field1_0x8 = 0;
  _objc_storeStrong(&local_138[0].field1_0x8,param_1);
  pcVar5 = local_138;
  local_138[0].field0_0x0 = 0;
  _objc_storeStrong(pcVar5,param_2);
  _WCRSideloadShareFixApplicationGroupIDs();
  _objc_retainAutoreleasedReturnValue();
  local_140 = pcVar5;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar5,PTR_s_count_0269cfe0);
  if (pcVar5 == (cfstringStruct *)0x0) {
    local_144 = 1;
  }
  else {
    _WCRSideloadShareFixResolvedGroupID();
    _objc_retainAutoreleasedReturnValue();
    local_328 = pcVar5;
    if (pcVar5 == (cfstringStruct *)0x0) {
      local_328 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_150 = local_328;
    (*(code *)PTR__objc_release_02578630)(pcVar5);
    qVar11 = local_138[0].field0_0x0;
    ppuVar6 = &local_180;
    local_180 = PTR___NSConcreteStackBlock_02578660;
    local_178 = 0xc2000000;
    local_174 = 0;
    local_170 = FUN_0150bca8;
    local_168 = &DAT_02581a60;
    (*(code *)PTR__objc_retain_02578638)();
    local_160 = qVar11;
    _objc_retainBlock();
    pcVar7 = "WCUIActionSheet";
    local_158 = ppuVar6;
    _objc_getClass();
    pcVar5 = &cf_addBtnTitle_handler_;
    local_188 = pcVar7;
    _NSSelectorFromString();
    local_198 = (char *)0x0;
    local_190 = pcVar5;
    if (local_188 != (char *)0x0) {
      pcVar8 = local_188;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      pcVar7 = local_198;
      local_198 = pcVar8;
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      pcVar7 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_respondsToSelector__026ca818,local_190);
      if (((ulong)pcVar7 & 1) == 0) {
        _objc_storeStrong(&local_198,0);
      }
    }
    qVar11 = local_138[0].field1_0x8;
    if (local_198 == (char *)0x0) {
      puVar9 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(qVar11,PTR_s_isKindOfClass__0269cd68,puVar9);
      if ((qVar11 & 1) == 0) {
        local_358 = 0;
      }
      else {
        local_358 = local_138[0].field1_0x8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_1a0 = local_358;
      if (local_358 == 0) {
        local_144 = 1;
      }
      else {
        puVar9 = PTR__OBJC_CLASS___UIAlertController_026ce178;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIAlertController_026ce178,
                   PTR_s_alertControllerWithTitle_message_0269dc00,&cf_b__u_,&cf__7bOo_N8__uRqQ_u0Y,
                   0);
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = puVar9;
        _memset(auStack_1f0,0,0x40);
        pcVar5 = local_140;
        (*(code *)PTR__objc_retain_02578638)();
        local_380 = pcVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8,
                   0x10);
        if (local_380 != (cfstringStruct *)0x0) {
          lVar12 = *local_1e0;
          local_388 = (cfstringStruct *)0x0;
          do {
            do {
              if (*local_1e0 - lVar12 != 0) {
                _objc_enumerationMutation(*local_1e0 - lVar12,pcVar5);
              }
              uVar13 = *(ulong *)(local_1e8 + (long)local_388 * 8);
              local_1b0 = uVar13;
              (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_copy_0269d150);
              local_1f8 = uVar13;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar13,PTR_s_isEqualToString__0269ccc8,local_150);
              local_209 = false;
              bVar1 = (uVar13 & 1) == 0;
              if (bVar1) {
                local_3a8 = local_1f8;
              }
              else {
                local_3a8 = local_1f8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_1f8,PTR_s_stringByAppendingString__0269d398,&cf_space_s_);
                _objc_retainAutoreleasedReturnValue();
                local_208 = local_3a8;
              }
              local_209 = !bVar1;
              (*(code *)PTR__objc_retain_02578638)();
              local_200 = local_3a8;
              if ((local_209 & 1U) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_208);
              }
              ppuVar6 = local_158;
              puVar10 = local_1a8;
              uVar13 = local_200;
              puVar9 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
              local_240 = PTR___NSConcreteStackBlock_02578660;
              local_238 = 0xc2000000;
              local_234 = 0;
              local_230 = FUN_0150bd28;
              local_228 = &DAT_02586480;
              (*(code *)PTR__objc_retain_02578638)();
              uVar2 = local_1f8;
              local_218 = ppuVar6;
              (*(code *)PTR__objc_retain_02578638)();
              local_220 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar9,PTR_s_actionWithTitle_style_handler__0269dc08,uVar13,0,&local_240);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar10,PTR_s_addAction__0269dc10);
              (*(code *)PTR__objc_release_02578630)(puVar9);
              _objc_storeStrong(&local_220);
              _objc_storeStrong(&local_218,0);
              _objc_storeStrong(&local_200,0);
              _objc_storeStrong(&local_1f8,0);
              local_388 = (cfstringStruct *)((long)&local_388->field0_0x0 + 1);
            } while (local_388 < local_380);
            local_380 = pcVar5;
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_a8
                       ,0x10);
            local_388 = (cfstringStruct *)0x0;
          } while (local_380 != (cfstringStruct *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        puVar9 = local_1a8;
        puVar10 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                   PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar9,PTR_s_addAction__0269dc10);
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1a0,PTR_s_presentViewController_animated_c_0269d2b0,local_1a8,1,0);
        local_144 = 1;
        _objc_storeStrong(&local_1a8,0);
      }
      _objc_storeStrong(&local_1a0,0);
    }
    else {
      _memset(auStack_288,0,0x40);
      pcVar5 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_458 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,
                 &local_138[0].field2_0x10,0x10);
      if (local_458 != (cfstringStruct *)0x0) {
        lVar12 = *local_278;
        local_460 = (cfstringStruct *)0x0;
        do {
          do {
            if (*local_278 - lVar12 != 0) {
              _objc_enumerationMutation(*local_278 - lVar12,pcVar5);
            }
            uVar13 = *(ulong *)(local_280 + (long)local_460 * 8);
            local_248 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_copy_0269d150);
            local_290 = uVar13;
            (*(code *)PTR__objc_msgSend_02578628)(uVar13,PTR_s_isEqualToString__0269ccc8,local_150);
            local_2a1 = false;
            bVar1 = (uVar13 & 1) == 0;
            if (bVar1) {
              local_480 = local_290;
            }
            else {
              local_480 = local_290;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_290,PTR_s_stringByAppendingString__0269d398,&cf_space_s_);
              _objc_retainAutoreleasedReturnValue();
              local_2a0 = local_480;
            }
            local_2a1 = !bVar1;
            (*(code *)PTR__objc_retain_02578638)();
            local_298 = local_480;
            if ((local_2a1 & 1U) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_2a0);
            }
            ppuVar4 = local_158;
            pcVar3 = local_190;
            pcVar7 = local_198;
            uVar13 = local_298;
            ppuVar6 = &local_2d8;
            local_2d8 = PTR___NSConcreteStackBlock_02578660;
            local_2d0 = 0xc2000000;
            local_2cc = 0;
            local_2c8 = FUN_0150bd88;
            local_2c0 = &DAT_0257ca68;
            (*(code *)PTR__objc_retain_02578638)();
            uVar2 = local_290;
            local_2b0 = ppuVar4;
            (*(code *)PTR__objc_retain_02578638)();
            local_2b8 = uVar2;
            _objc_retainBlock();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar7,pcVar3,uVar13);
            (*(code *)PTR__objc_release_02578630)(ppuVar6);
            _objc_storeStrong(&local_2b8);
            _objc_storeStrong(&local_2b0,0);
            _objc_storeStrong(&local_298,0);
            _objc_storeStrong(&local_290,0);
            local_460 = (cfstringStruct *)((long)&local_460->field0_0x0 + 1);
          } while (local_460 < local_458);
          local_458 = pcVar5;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_288,
                     &local_138[0].field2_0x10,0x10);
          local_460 = (cfstringStruct *)0x0;
        } while (local_458 != (cfstringStruct *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar5);
      pcVar5 = &cf_addCancelBtnTitle_target_sel_;
      _NSSelectorFromString();
      pcVar7 = local_198;
      local_2e0 = pcVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_respondsToSelector__026ca818,pcVar5);
      if (((ulong)pcVar7 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_198,local_2e0,&cf_Sm,0);
      }
      qVar11 = local_138[0].field1_0x8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_138[0].field1_0x8,PTR_s_respondsToSelector__026ca818,PTR_s_view_026cabd8);
      local_2f1 = (qVar11 & 1) == 0;
      if (local_2f1) {
        local_4f0 = 0;
      }
      else {
        local_4f0 = local_138[0].field1_0x8;
        (*(code *)PTR__objc_msgSend_02578628)(local_138[0].field1_0x8,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_2f0 = local_4f0;
      }
      local_2f1 = !local_2f1;
      (*(code *)PTR__objc_retain_02578638)();
      local_2e8 = local_4f0;
      if (local_2f1) {
        (*(code *)PTR__objc_release_02578630)(local_2f0);
      }
      pcVar5 = &cf_showInView_;
      _NSSelectorFromString();
      pcVar7 = local_198;
      (*(code *)PTR__objc_msgSend_02578628)(local_198,PTR_s_respondsToSelector__026ca818,pcVar5);
      if ((((ulong)pcVar7 & 1) != 0) && (local_2e8 != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(local_198,pcVar5,local_2e8);
      }
      _objc_storeStrong(&local_2e8,0);
      local_144 = 0;
    }
    _objc_storeStrong(&local_198);
    _objc_storeStrong(&local_158,0);
    _objc_storeStrong(&local_160,0);
    _objc_storeStrong(&local_150,0);
  }
  _objc_storeStrong(&local_140);
  _objc_storeStrong(local_138,0);
  _objc_storeStrong(&local_138[0].field1_0x8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

