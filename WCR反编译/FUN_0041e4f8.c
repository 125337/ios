// FUN_0041e4f8 @ 0041e4f8

void FUN_0041e4f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong local_308;
  ulong local_300;
  ulong local_2b0;
  ulong local_2a8;
  long local_238;
  long local_230;
  undefined1 auStack_228 [8];
  long local_220;
  long *local_218;
  long local_1e8;
  byte local_1d9;
  long local_1d8;
  undefined1 auStack_1d0 [8];
  long local_1c8;
  long *local_1c0;
  long local_190;
  undefined *local_188;
  int local_180;
  long local_170;
  ulong local_168;
  ulong local_160;
  long local_158;
  undefined *local_150;
  long local_148;
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_158 = 0;
  _objc_storeStrong(&local_158,param_1);
  local_160 = 0;
  _objc_storeStrong(&local_160,param_2);
  local_168 = 0;
  _objc_storeStrong(&local_168,param_3);
  lVar6 = local_158;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_170 = lVar6;
  (*(code *)PTR__objc_msgSend_02578628)(lVar6,PTR_s_length_0269cca0);
  if ((lVar6 == 0) ||
     (uVar2 = local_160, (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_count_0269cfe0),
     uVar2 == 0)) {
    puVar3 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_180 = 1;
    local_150 = puVar3;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar3;
    _memset(auStack_1d0,0,0x40);
    uVar2 = local_160;
    (*(code *)PTR__objc_retain_02578638)();
    local_2a8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10);
    if (local_2a8 != 0) {
      lVar6 = *local_1c0;
      local_2b0 = 0;
      do {
        do {
          if (*local_1c0 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1c0 - lVar6,uVar2);
          }
          lVar7 = *(long *)(local_1c8 + local_2b0 * 8);
          local_190 = lVar7;
          FUN_0040494c();
          _objc_retainAutoreleasedReturnValue();
          local_1d8 = lVar7;
          (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
          if (lVar7 == 0) {
            local_180 = 3;
          }
          else {
            puVar3 = PTR_WCRefineHelper_026ce000;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_keywordAlertContent_matchesKeywo_026a3770,
                       local_170,local_1d8);
            if (((ulong)puVar3 & 1) == 0) {
              local_180 = 3;
            }
            else {
              local_1d9 = 0;
              _memset(auStack_228,0,0x40);
              uVar1 = local_168;
              (*(code *)PTR__objc_retain_02578638)();
              local_300 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,
                         auStack_128,0x10);
              if (local_300 != 0) {
                lVar7 = *local_218;
                local_308 = 0;
                do {
                  do {
                    if (*local_218 - lVar7 != 0) {
                      _objc_enumerationMutation(*local_218 - lVar7,uVar1);
                    }
                    lVar8 = *(long *)(local_220 + local_308 * 8);
                    local_1e8 = lVar8;
                    FUN_0040494c();
                    _objc_retainAutoreleasedReturnValue();
                    local_230 = lVar8;
                    (*(code *)PTR__objc_msgSend_02578628)(lVar8,PTR_s_length_0269cca0);
                    if (lVar8 == 0) {
                      local_180 = 5;
                    }
                    else {
                      puVar3 = PTR_WCRefineHelper_026ce000;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR_WCRefineHelper_026ce000,
                                 PTR_s_keywordAlertContent_matchesKeywo_026a3770,local_230,local_1d8
                                );
                      lVar5 = local_170;
                      lVar8 = local_230;
                      if (((ulong)puVar3 & 1) == 0) {
                        local_180 = 5;
                      }
                      else {
                        lVar4 = local_170;
                        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
                        local_140 = 0;
                        local_138 = 0;
                        local_148 = lVar4;
                        local_130 = lVar4;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (lVar5,PTR_s_stringByReplacingOccurrencesOfSt_026a3778,lVar8,
                                   &cf___,1,0,lVar4);
                        _objc_retainAutoreleasedReturnValue();
                        puVar3 = PTR_WCRefineHelper_026ce000;
                        local_238 = lVar5;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR_WCRefineHelper_026ce000,
                                   PTR_s_keywordAlertContent_matchesKeywo_026a3770,lVar5,local_1d8);
                        if (((ulong)puVar3 & 1) == 0) {
                          local_1d9 = 1;
                          local_180 = 4;
                        }
                        else {
                          local_180 = 0;
                        }
                        _objc_storeStrong(&local_238,0);
                      }
                    }
                    _objc_storeStrong(&local_230,0);
                    if ((local_180 != 0) && (local_180 != 5)) goto LAB_0041eb24;
                    local_308 = local_308 + 1;
                  } while (local_308 < local_300);
                  local_300 = uVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_228,
                             auStack_128,0x10);
                  local_308 = 0;
                } while (local_300 != 0);
              }
              local_180 = 0;
LAB_0041eb24:
              (*(code *)PTR__objc_release_02578630)(uVar1);
              if ((local_1d9 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_addObject__0269d180,local_1d8)
                ;
              }
              local_180 = 0;
            }
          }
          _objc_storeStrong(&local_1d8,0);
          local_2b0 = local_2b0 + 1;
        } while (local_2b0 < local_2a8);
        local_2a8 = uVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d0,auStack_a8,0x10
                  );
        local_2b0 = 0;
      } while (local_2a8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar3 = local_188;
    (*(code *)PTR__objc_msgSend_02578628)(local_188,PTR_s_copy_0269d150);
    local_180 = 1;
    local_150 = puVar3;
    _objc_storeStrong(&local_188,0);
  }
  _objc_storeStrong(&local_170);
  _objc_storeStrong(&local_168,0);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_158,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_150);
  return;
}

