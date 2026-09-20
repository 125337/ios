// FUN_00f707e4 @ 00f707e4

void FUN_00f707e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long local_3a8;
  ulong local_378;
  ulong local_370;
  ulong local_338;
  ulong local_330;
  undefined *local_2f8;
  undefined4 local_2f0;
  undefined4 local_2ec;
  code *local_2e8;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined8 *local_2d0;
  undefined8 *local_2c8;
  undefined8 *local_2c0;
  long local_2b8;
  undefined8 local_2b0;
  undefined8 *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  code *local_298;
  code *local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined8 *local_278;
  undefined4 local_270;
  undefined4 local_26c;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 *local_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 local_248;
  long local_240;
  long local_238;
  undefined4 local_22c;
  long local_228;
  undefined1 auStack_220 [8];
  long local_218;
  long *local_210;
  long local_1e0;
  char *local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  undefined8 local_190;
  undefined *local_188;
  char *local_180;
  undefined4 local_174;
  long local_170;
  ulong local_168;
  ulong local_160;
  cfstringStruct *local_158;
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  long local_140;
  char *local_138;
  undefined8 local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_160 = 0;
  _objc_storeStrong(&local_160,param_1);
  local_168 = 0;
  _objc_storeStrong(&local_168,param_2);
  uVar2 = local_160;
  local_170 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0);
  if ((uVar2 == 0) ||
     (uVar2 = local_168, (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_lgSlSvvh);
    local_174 = 1;
  }
  else {
    pcVar3 = "CContactMgr";
    _objc_getClass();
    FUN_00f71024();
    _objc_retainAutoreleasedReturnValue();
    local_180 = pcVar3;
    if ((pcVar3 == (char *)0x0) ||
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
       ((ulong)pcVar3 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_T_NgRNS_u);
      local_174 = 1;
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      local_188 = puVar4;
      _memset(auStack_1d0,0,0x40);
      uVar2 = local_168;
      (*(code *)PTR__objc_retain_02578638)();
      local_330 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10);
      if (local_330 != 0) {
        lVar9 = *local_1c0;
        local_338 = 0;
        do {
          do {
            if (*local_1c0 - lVar9 != 0) {
              _objc_enumerationMutation(*local_1c0 - lVar9,uVar2);
            }
            local_190 = *(undefined8 *)(local_1c8 + local_338 * 8);
            pcVar3 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_180,PTR_s_getContactByName__0269d178,local_190);
            _objc_retainAutoreleasedReturnValue();
            local_1d8 = pcVar3;
            if (pcVar3 == (char *)0x0) {
              local_174 = 3;
            }
            else {
              _memset(auStack_220,0,0x40);
              uVar1 = local_160;
              (*(code *)PTR__objc_retain_02578638)();
              local_370 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                         auStack_128,0x10);
              if (local_370 != 0) {
                lVar10 = *local_210;
                local_378 = 0;
                do {
                  do {
                    if (*local_210 - lVar10 != 0) {
                      _objc_enumerationMutation(*local_210 - lVar10,uVar1);
                    }
                    puVar4 = local_188;
                    local_1e0 = *(long *)(local_218 + local_378 * 8);
                    if (local_1e0 != 0) {
                      local_158 = &cf_wrap;
                      local_150 = &cf_contact;
                      local_138 = local_1d8;
                      local_148 = &cf_user;
                      local_130 = local_190;
                      puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                      local_140 = local_1e0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_140,
                                 &local_158,3);
                      _objc_retainAutoreleasedReturnValue();
                      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
                      (*(code *)PTR__objc_release_02578630)(puVar5);
                    }
                    local_378 = local_378 + 1;
                  } while (local_378 < local_370);
                  local_370 = uVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_220,
                             auStack_128,0x10);
                  local_378 = 0;
                } while (local_370 != 0);
              }
              (*(code *)PTR__objc_release_02578630)(uVar1);
              local_174 = 0;
            }
            _objc_storeStrong(&local_1d8,0);
            local_338 = local_338 + 1;
          } while (local_338 < local_330);
          local_330 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,
                     0x10);
          local_338 = 0;
        } while (local_330 != 0);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      puVar6 = local_188;
      (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0);
      puVar5 = PTR_WCRefineHelper_026ce000;
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      if (puVar6 == (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_R_QeSlSO);
        local_174 = 1;
      }
      else {
        local_22c = 0;
        local_238 = local_170;
        if (local_170 < 1) {
          local_3a8 = 0;
        }
        else {
          local_3a8 = local_170;
        }
        local_240 = local_3a8;
        local_228 = local_3a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_count_0269cfe0);
        (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_stringWithFormat__0269cca8,&cf___);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_showModernToast__0269ce78);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        puVar4 = local_188;
        local_260 = 0;
        local_250 = 0x20000000;
        local_24c = 0x20;
        local_248 = 0;
        local_280 = 0;
        local_270 = 0x20000000;
        local_26c = 0x20;
        local_268 = 0;
        local_2b0 = 0;
        local_2a0 = 0x32000000;
        local_29c = 0x30;
        local_298 = FUN_00f715d8;
        local_290 = FUN_00f71614;
        local_288 = 0;
        ppuVar7 = &local_2f8;
        local_2f8 = PTR___NSConcreteStackBlock_02578660;
        local_2f0 = 0xc2000000;
        local_2ec = 0;
        local_2e8 = FUN_00f71640;
        local_2e0 = &DAT_025835b8;
        local_2d0 = &local_260;
        local_2a8 = &local_2b0;
        local_278 = &local_280;
        local_258 = &local_260;
        (*(code *)PTR__objc_retain_02578638)();
        local_2d8 = puVar4;
        local_2b8 = local_228;
        local_2c8 = &local_280;
        local_2c0 = &local_2b0;
        _objc_retainBlock();
        uVar8 = local_2a8[5];
        local_2a8[5] = ppuVar7;
        (*(code *)PTR__objc_release_02578630)(uVar8);
        puVar4 = PTR___dispatch_main_q_02578680;
        _objc_retainAutoreleaseReturnValue();
        _objc_retainAutoreleasedReturnValue();
        _dispatch_async();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        _objc_storeStrong(&local_2d8,0);
        __Block_object_dispose(&local_2b0,8);
        _objc_storeStrong(&local_288,0);
        __Block_object_dispose(&local_280,8);
        __Block_object_dispose(&local_260,8);
        local_174 = 0;
      }
      _objc_storeStrong(&local_188,0);
    }
    _objc_storeStrong(&local_180,0);
  }
  _objc_storeStrong(&local_168);
  _objc_storeStrong(&local_160,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

