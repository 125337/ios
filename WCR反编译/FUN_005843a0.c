// FUN_005843a0 @ 005843a0

byte FUN_005843a0(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong local_2c0;
  ulong local_220;
  ulong local_218;
  ulong local_1d0;
  undefined *local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  byte local_1a9;
  ulong local_1a8;
  ulong local_1a0;
  undefined *local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  ulong local_150;
  ulong local_148;
  ulong local_140 [3];
  undefined4 local_124;
  long local_120;
  ulong local_118;
  byte local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  cfstringStruct *local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_118 = 0;
  _objc_storeStrong(&local_118,param_2);
  local_120 = 0;
  _objc_storeStrong(&local_120,param_3);
  if ((local_118 == 0) || (local_120 == 0)) {
    local_109 = 0;
    local_124 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_timeIntervalSinceNow_0269cd28);
    if (30.0 <= param_1) {
      uVar1 = local_118;
      FUN_0058b1a4();
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_HQkXQgSWQ_);
        local_109 = 0;
        local_124 = 1;
      }
      else {
        FUN_0057bc48();
        _objc_retainAutoreleasedReturnValue();
        local_148 = 0;
        local_140[0] = uVar1;
        _memset(auStack_190,0,0x40);
        uVar1 = local_140[0];
        (*(code *)PTR__objc_retain_02578638)();
        local_218 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10
                  );
        if (local_218 != 0) {
          lVar9 = *local_180;
          local_220 = 0;
          do {
            do {
              if (*local_180 - lVar9 != 0) {
                _objc_enumerationMutation(*local_180 - lVar9,uVar1);
              }
              uVar10 = *(ulong *)(local_188 + local_220 * 8);
              local_150 = uVar10;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar10,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar10;
              FUN_0057a910();
              _objc_retainAutoreleasedReturnValue();
              uVar3 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar2);
              (*(code *)PTR__objc_release_02578630)(uVar10);
              if ((uVar3 & 1) == 0) {
                local_148 = local_148 + 1;
              }
              local_220 = local_220 + 1;
            } while (local_220 < local_218);
            local_218 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,
                       0x10);
            local_220 = 0;
          } while (local_218 != 0);
        }
        (*(code *)PTR__objc_release_02578630)(uVar1);
        if (local_148 < 999) {
          puVar4 = PTR__OBJC_CLASS___NSUUID_026ce668;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSUUID_026ce668,PTR_s_UUID_026a33b0);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_198 = puVar5;
          (*(code *)PTR__objc_release_02578630)(puVar4);
          uVar1 = local_118;
          FUN_0058b544(local_118,local_198);
          if ((uVar1 & 1) == 0) {
            FUN_0058abd8(local_198);
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_OX_1Y_);
            local_109 = 0;
            local_124 = 1;
          }
          else {
            local_1a9 = 0;
            uVar1 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_imageArray_026a54a8);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
            uVar2 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar4);
            if ((uVar2 & 1) == 0) {
              local_2c0 = 0;
            }
            else {
              local_2c0 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_imageArray_026a54a8);
              _objc_retainAutoreleasedReturnValue();
              local_1a9 = 1;
              local_1a8 = local_2c0;
              (*(code *)PTR__objc_msgSend_02578628)();
            }
            if ((local_1a9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1a8);
            }
            (*(code *)PTR__objc_release_02578630)(uVar1);
            local_1a0 = local_2c0;
            uVar1 = local_118;
            FUN_0058c084(local_118,local_198);
            local_1b8 = uVar1;
            if ((local_1a0 == 0) || (uVar1 == local_1a0)) {
              uVar1 = local_118;
              FUN_0058cee8(0);
              _objc_retainAutoreleasedReturnValue();
              local_1c0 = uVar1;
              if (uVar1 == 0) {
                FUN_0058abd8(local_198);
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                           &cf_OX_gSWQ_1Y_);
                local_109 = 0;
                local_124 = 1;
              }
              else {
                puVar5 = local_198;
                FUN_005898a4(local_198,uVar1);
                puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
                if (((ulong)puVar5 & 1) == 0) {
                  FUN_0058abd8(local_198);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,
                             &cf_OX_gSWQ_1Y_);
                  local_109 = 0;
                  local_124 = 1;
                }
                else {
                  local_108 = &cf_id;
                  local_d8 = local_198;
                  local_100 = &cf_fireAt;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_120,PTR_s_timeIntervalSince1970_0269cfc8);
                  (*(code *)PTR__objc_msgSend_02578628)
                            (param_1,puVar4,PTR_s_numberWithDouble__0269d6d0);
                  _objc_retainAutoreleasedReturnValue();
                  local_f8 = &cf_enabled;
                  puVar6 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  local_d0 = puVar4;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
                  _objc_retainAutoreleasedReturnValue();
                  local_f0 = &cf_state;
                  local_c0 = &cf_pending;
                  local_e8 = &cf_preview;
                  uVar1 = local_118;
                  local_c8 = puVar6;
                  FUN_0058dd50();
                  _objc_retainAutoreleasedReturnValue();
                  puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                  local_e0 = &cf_privacy;
                  uVar2 = uVar1;
                  local_b8 = uVar1;
                  FUN_0058e3bc();
                  (*(code *)PTR__objc_msgSend_02578628)
                            (puVar5,PTR_s_numberWithInteger__0269e080,uVar2);
                  _objc_retainAutoreleasedReturnValue();
                  puVar7 = PTR__OBJC_CLASS___NSDictionary_026ce090;
                  local_b0 = puVar5;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSDictionary_026ce090,
                             PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_d8,&local_108,6)
                  ;
                  _objc_retainAutoreleasedReturnValue();
                  puVar8 = puVar7;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_1c8 = puVar8;
                  (*(code *)PTR__objc_release_02578630)(puVar7);
                  (*(code *)PTR__objc_release_02578630)(puVar5);
                  (*(code *)PTR__objc_release_02578630)(uVar1);
                  (*(code *)PTR__objc_release_02578630)(puVar6);
                  (*(code *)PTR__objc_release_02578630)(puVar4);
                  uVar1 = local_140[0];
                  (*(code *)PTR__objc_msgSend_02578628)(local_140[0],PTR_s_mutableCopy_0269d8a0);
                  local_1d0 = uVar1;
                  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_addObject__0269d180,local_1c8);
                  FUN_00588e58(local_1d0);
                  local_109 = 1;
                  local_124 = 1;
                  _objc_storeStrong(&local_1d0);
                  _objc_storeStrong(&local_1c8,0);
                }
              }
              _objc_storeStrong(&local_1c0,0);
            }
            else {
              FUN_0058abd8(local_198);
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_OX_VGr1Y_);
              local_109 = 0;
              local_124 = 1;
            }
          }
          _objc_storeStrong(&local_198,0);
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___);
          local_109 = 0;
          local_124 = 1;
        }
        _objc_storeStrong(local_140,0);
      }
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Se_ZfNS_MR);
      local_109 = 0;
      local_124 = 1;
    }
  }
  _objc_storeStrong(&local_120);
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_109 & 1;
}

