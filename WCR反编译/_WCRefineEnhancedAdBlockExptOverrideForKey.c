// _WCRefineEnhancedAdBlockExptOverrideForKey @ 00f574cc

byte _WCRefineEnhancedAdBlockExptOverrideForKey(undefined8 param_1,byte param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_310;
  undefined *local_308;
  undefined *local_2d0;
  undefined *local_2c8;
  undefined1 auStack_280 [8];
  long local_278;
  long *local_270;
  undefined8 local_240;
  undefined1 auStack_238 [8];
  long local_230;
  long *local_228;
  undefined8 local_1f8;
  undefined *local_1f0;
  undefined *local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  undefined *local_1d0;
  int local_1c4;
  undefined1 *local_1c0;
  byte local_1b1;
  ulong local_1b0;
  byte local_1a1;
  undefined8 local_1a0;
  long *local_198;
  undefined1 auStack_190 [128];
  undefined1 auStack_110 [128];
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_1b0 = 0;
  _objc_storeStrong(&local_1b0,param_1);
  if (param_3 != (undefined1 *)0x0) {
    *param_3 = 0;
  }
  uVar1 = local_1b0;
  local_1c0 = param_3;
  local_1b1 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_1a1 = local_1b1 & 1;
    local_1c4 = 1;
  }
  else {
    uVar1 = local_1b0;
    puVar2 = PTR_s_rangeOfString_options__0269d118;
    (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_rangeOfString_options__0269d118,&cf_ad,1);
    local_1d8 = uVar1;
    local_1d0 = puVar2;
    if (uVar1 == 0x7fffffffffffffff) {
      local_1a1 = local_1b1 & 1;
      local_1c4 = 1;
    }
    else {
      uVar1 = local_1b0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1b0,PTR_s_lowercaseString_0269d9c0);
      _objc_retainAutoreleasedReturnValue();
      local_1e0 = uVar1;
      FUN_00f57d58();
      if ((uVar1 & 1) == 0) {
        uVar1 = local_1e0;
        FUN_00f57eec();
        if (((uVar1 & 1) == 0) || (uVar1 = local_1e0, FUN_00f58124(), (uVar1 & 1) == 0)) {
          local_1a1 = local_1b1 & 1;
          local_1c4 = 1;
        }
        else {
          local_198 = &DAT_028e2da8;
          local_1a0 = 0;
          _objc_storeStrong(&local_1a0,&PTR___NSConcreteGlobalBlock_02583158);
          if (*local_198 + 1 != 0) {
            _dispatch_once(*local_198 + 1,local_198,local_1a0);
          }
          _objc_storeStrong(&local_1a0,0);
          uVar1 = DAT_028e2d98;
          (*(code *)PTR__objc_msgSend_02578628)
                    (DAT_028e2d98,PTR_s_containsObject__0269cbb8,local_1e0);
          if ((uVar1 & 1) == 0) {
            uVar1 = DAT_028e2da0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (DAT_028e2da0,PTR_s_containsObject__0269cbb8,local_1e0);
            if ((uVar1 & 1) == 0) {
              local_58 = &cf_allow;
              local_50 = &cf_enable;
              local_48 = &cf_open;
              local_40 = &cf_show;
              local_38 = &cf_preload;
              local_30 = &cf_prerender;
              puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_58,6);
              _objc_retainAutoreleasedReturnValue();
              local_90 = &cf_forbid;
              local_88 = &cf_ban;
              local_80 = &cf_close;
              local_78 = &cf_disable;
              local_70 = &cf_hide;
              local_68 = &cf_not_show;
              local_60 = &cf_notshow;
              puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              local_1e8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_90,7);
              _objc_retainAutoreleasedReturnValue();
              local_1f0 = puVar3;
              _memset(auStack_238,0,0x40);
              puVar2 = local_1f0;
              (*(code *)PTR__objc_retain_02578638)();
              local_2c8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                         auStack_110,0x10);
              if (local_2c8 != (undefined *)0x0) {
                lVar4 = *local_228;
                local_2d0 = (undefined *)0x0;
                do {
                  do {
                    if (*local_228 - lVar4 != 0) {
                      _objc_enumerationMutation(*local_228 - lVar4,puVar2);
                    }
                    local_1f8 = *(undefined8 *)(local_230 + (long)local_2d0 * 8);
                    uVar1 = local_1e0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_1e0,PTR_s_containsString__0269d0b0,local_1f8);
                    if ((uVar1 & 1) != 0) {
                      if (local_1c0 != (undefined1 *)0x0) {
                        *local_1c0 = 1;
                      }
                      _WCRefineEnhancedAdBlockLog(&cf_expt___>YES_disableToken____);
                      local_1a1 = 1;
                      local_1c4 = 1;
                      goto LAB_00f57ae0;
                    }
                    local_2d0 = local_2d0 + 1;
                  } while (local_2d0 < local_2c8);
                  local_2c8 = puVar2;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_238,
                             auStack_110,0x10);
                  local_2d0 = (undefined *)0x0;
                } while (local_2c8 != (undefined *)0x0);
              }
              local_1c4 = 0;
LAB_00f57ae0:
              (*(code *)PTR__objc_release_02578630)(puVar2);
              if (local_1c4 == 0) {
                _memset(auStack_280,0,0x40);
                puVar2 = local_1e8;
                (*(code *)PTR__objc_retain_02578638)();
                local_308 = puVar2;
                (*(code *)PTR__objc_msgSend_02578628)
                          (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,
                           auStack_190,0x10);
                if (local_308 != (undefined *)0x0) {
                  lVar4 = *local_270;
                  local_310 = (undefined *)0x0;
                  do {
                    do {
                      if (*local_270 - lVar4 != 0) {
                        _objc_enumerationMutation(*local_270 - lVar4,puVar2);
                      }
                      local_240 = *(undefined8 *)(local_278 + (long)local_310 * 8);
                      uVar1 = local_1e0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_1e0,PTR_s_containsString__0269d0b0,local_240);
                      if ((uVar1 & 1) != 0) {
                        if (local_1c0 != (undefined1 *)0x0) {
                          *local_1c0 = 1;
                        }
                        _WCRefineEnhancedAdBlockLog(&cf_expt___>NO_enableToken____);
                        local_1a1 = 0;
                        local_1c4 = 1;
                        goto LAB_00f57ca0;
                      }
                      local_310 = local_310 + 1;
                    } while (local_310 < local_308);
                    local_308 = puVar2;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_280,
                               auStack_190,0x10);
                    local_310 = (undefined *)0x0;
                  } while (local_308 != (undefined *)0x0);
                }
                local_1c4 = 0;
LAB_00f57ca0:
                (*(code *)PTR__objc_release_02578630)(puVar2);
                if (local_1c4 == 0) {
                  local_1a1 = local_1b1 & 1;
                  local_1c4 = 1;
                }
              }
              _objc_storeStrong(&local_1f0);
              _objc_storeStrong(&local_1e8,0);
            }
            else {
              if (local_1c0 != (undefined1 *)0x0) {
                *local_1c0 = 1;
              }
              _WCRefineEnhancedAdBlockLog(&cf_expt___>NO_forceNo_);
              local_1a1 = 0;
              local_1c4 = 1;
            }
          }
          else {
            if (local_1c0 != (undefined1 *)0x0) {
              *local_1c0 = 1;
            }
            _WCRefineEnhancedAdBlockLog(&cf_expt___>YES_forceYes_scene_matched_);
            local_1a1 = 1;
            local_1c4 = 1;
          }
        }
      }
      else {
        _WCRefineEnhancedAdBlockRewardedAdFastPassEnabled();
        if (((uVar1 & 1) == 0) ||
           ((uVar1 = local_1e0,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e0,PTR_s_isEqualToString__0269ccc8,
                       &cf_clicfg_miniprogram_open_admb2_in_motivating), (uVar1 & 1) == 0 &&
            (uVar1 = local_1e0,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_1e0,PTR_s_isEqualToString__0269ccc8,
                       &cf_clicfg_miniprogram_open_admb2_in_motivating_test), (uVar1 & 1) == 0)))) {
          local_1a1 = local_1b1 & 1;
          local_1c4 = 1;
        }
        else {
          if (local_1c0 != (undefined1 *)0x0) {
            *local_1c0 = 1;
          }
          _WCRefineEnhancedAdBlockLog(&cf_expt___>YES_fastpassmotivatingMBAD_);
          local_1a1 = 1;
          local_1c4 = 1;
        }
      }
      _objc_storeStrong(&local_1e0,0);
    }
  }
  _objc_storeStrong(&local_1b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_1a1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

