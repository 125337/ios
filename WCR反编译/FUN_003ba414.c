// FUN_003ba414 @ 003ba414

void FUN_003ba414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  undefined8 uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  cfstringStruct *pcVar8;
  long local_3b8;
  cfstringStruct *local_340;
  cfstringStruct *local_338;
  ulong local_310;
  ulong local_308;
  long local_2c0;
  long local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  long local_220;
  undefined *local_218;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  cfstringStruct *local_1f0;
  byte local_1e1;
  cfstringStruct *local_1e0;
  byte local_1d1;
  cfstringStruct *local_1d0;
  byte local_1c1;
  cfstringStruct *local_1c0;
  cfstringStruct *local_1b8;
  undefined8 local_1b0;
  undefined1 auStack_1a8 [8];
  long local_1a0;
  long *local_198;
  cfstringStruct *local_168;
  undefined *local_160;
  cfstringStruct *local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined *local_100;
  undefined *local_f8;
  long local_f0;
  byte local_e1;
  long local_e0;
  long local_d8;
  uint local_cc;
  long local_c8;
  ulong local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_5);
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_6);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_7);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_8);
  if ((local_b0 == 0) ||
     (uVar4 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_count_0269cfe0),
     uVar4 == 0)) {
    local_cc = 1;
  }
  else {
    puVar5 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar5);
    if (puVar6 == (undefined *)0x0) {
      FUN_003aba34(local_b0,local_b8,local_c0);
      local_cc = 1;
    }
    else {
      local_e1 = 0;
      bVar1 = local_c8 == 0;
      if (bVar1) {
        local_2c0 = local_b0;
        (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
        _objc_retainAutoreleasedReturnValue();
        local_e0 = local_2c0;
      }
      else {
        local_2c0 = local_c8;
      }
      local_e1 = bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = local_2c0;
      if ((local_e1 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_e0);
      }
      lVar7 = local_d8;
      _objc_getAssociatedObject(local_d8,DAT_026e0270);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = lVar7;
      if (lVar7 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_removeInteraction__0269fdd8,lVar7);
      }
      puVar5 = PTR_WCRGroupingContextMenuDelegate_026ce610;
      _objc_alloc_init();
      local_f8 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_setActions__0269f1c0,local_c0);
      puVar5 = PTR__OBJC_CLASS___UIContextMenuInteraction_026ce3c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_100 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_addInteraction__0269fde8,puVar5);
      _objc_setAssociatedObject(local_d8,DAT_026e0278,local_f8);
      _objc_setAssociatedObject(local_d8,DAT_026e0270,local_100,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bounds_026ca548);
      local_130 = param_1;
      local_128 = param_2;
      local_120 = param_3;
      local_118 = param_4;
      _CGRectGetMidX();
      uStack_240 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_bounds_026ca548);
      local_150 = uStack_240;
      local_148 = param_2;
      local_140 = param_3;
      local_138 = param_4;
      _CGRectGetMidY(uStack_240,param_2);
      FUN_003631ac();
      pcVar8 = &cf__presentMenuAtLocation_;
      local_110 = param_1;
      local_108 = uStack_240;
      _NSSelectorFromString();
      puVar5 = local_100;
      local_158 = pcVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_respondsToSelector__026ca818,pcVar8);
      if (((ulong)puVar5 & 1) == 0) {
        pcVar8 = &cf_presentMenuAtLocation_;
        _NSSelectorFromString();
        local_158 = pcVar8;
      }
      puVar5 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_respondsToSelector__026ca818,local_158);
      bVar1 = ((ulong)puVar5 & 1) != 0;
      if (bVar1) {
        param_1 = local_110;
        uStack_240 = local_108;
        (*(code *)PTR__objc_msgSend_02578628)(local_100,local_158);
      }
      local_cc = (uint)bVar1;
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
      _objc_storeStrong(&local_d8,0);
      if (local_cc == 0) {
        puVar5 = PTR__OBJC_CLASS___UIAlertController_026ce178;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIAlertController_026ce178,
                   PTR_s_alertControllerWithTitle_message_0269dc00,local_b8,0,0);
        _objc_retainAutoreleasedReturnValue();
        local_160 = puVar5;
        _memset(auStack_1a8,0,0x40);
        uVar4 = local_c0;
        (*(code *)PTR__objc_retain_02578638)();
        local_308 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,0x10
                  );
        if (local_308 != 0) {
          lVar7 = *local_198;
          local_310 = 0;
          do {
            do {
              if (*local_198 - lVar7 != 0) {
                _objc_enumerationMutation(*local_198 - lVar7,uVar4);
              }
              pcVar8 = *(cfstringStruct **)(local_1a0 + local_310 * 8);
              local_168 = pcVar8;
              (*(code *)PTR__objc_msgSend_02578628)(pcVar8,PTR_s_destructive_0269fbf8);
              local_1b0 = 2;
              if (((ulong)pcVar8 & 1) == 0) {
                local_1b0 = 0;
              }
              pcVar8 = local_168;
              (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_selected_026a2ec0);
              local_1c1 = 0;
              local_1d1 = 0;
              local_1e1 = 0;
              if (((ulong)pcVar8 & 1) == 0) {
                local_340 = local_168;
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_title_0269d250);
                _objc_retainAutoreleasedReturnValue();
                local_1e1 = 1;
                local_1e0 = local_340;
              }
              else {
                pcVar8 = local_168;
                (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_title_0269d250);
                _objc_retainAutoreleasedReturnValue();
                local_1c1 = 1;
                local_338 = pcVar8;
                if (pcVar8 == (cfstringStruct *)0x0) {
                  local_338 = &cf___;
                }
                local_340 = &cf__;
                local_1c0 = pcVar8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (&cf__,PTR_s_stringByAppendingString__0269d398,local_338);
                _objc_retainAutoreleasedReturnValue();
                local_1d1 = 1;
                local_1d0 = local_340;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_1b8 = local_340;
              if ((local_1e1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1e0);
              }
              if ((local_1d1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1d0);
              }
              if ((local_1c1 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_1c0);
              }
              puVar6 = local_160;
              pcVar3 = local_168;
              uVar2 = local_1b0;
              pcVar8 = local_1b8;
              puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
              local_210 = PTR___NSConcreteStackBlock_02578660;
              local_208 = 0xc2000000;
              local_204 = 0;
              local_200 = FUN_003bea40;
              local_1f8 = &DAT_0257c5b8;
              (*(code *)PTR__objc_retain_02578638)();
              local_1f0 = pcVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,pcVar8,uVar2,
                         &local_210);
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_addAction__0269dc10);
              (*(code *)PTR__objc_release_02578630)(puVar5);
              _objc_storeStrong(&local_1f0);
              _objc_storeStrong(&local_1b8,0);
              local_310 = local_310 + 1;
            } while (local_310 < local_308);
            local_308 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a8,auStack_a8,
                       0x10);
            local_310 = 0;
          } while (local_308 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar4);
        puVar5 = local_160;
        puVar6 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                   PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
        (*(code *)PTR__objc_release_02578630)(puVar6);
        puVar5 = local_160;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_160,PTR_s_popoverPresentationController_0269fdf0);
        _objc_retainAutoreleasedReturnValue();
        local_218 = puVar5;
        if (puVar5 != (undefined *)0x0) {
          bVar1 = local_c8 == 0;
          if (bVar1) {
            local_3b8 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
            _objc_retainAutoreleasedReturnValue();
            local_220 = local_3b8;
          }
          else {
            local_3b8 = local_c8;
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_218,PTR_s_setSourceView__0269fdf8,local_3b8);
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_220);
          }
          bVar1 = local_c8 == 0;
          if (bVar1) {
            local_250 = local_b0;
            (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_view_026cabd8);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            local_248 = param_1;
            local_238 = param_3;
            uStack_230 = param_4;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_bounds_026ca548);
            local_248 = param_1;
            local_238 = param_3;
            uStack_230 = param_4;
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_248,uStack_240,local_238,uStack_230,local_218,
                     PTR_s_setSourceRect__0269fe00);
          if (bVar1) {
            (*(code *)PTR__objc_release_02578630)(local_250);
          }
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_218,PTR_s_setPermittedArrowDirections__0269fe08,0xf);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b0,PTR_s_presentViewController_animated_c_0269d2b0,local_160,1);
        _objc_storeStrong(&local_218,0);
        _objc_storeStrong(&local_160,0);
        local_cc = 0;
      }
    }
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

