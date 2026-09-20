// FUN_009cb880 @ 009cb880

void FUN_009cb880(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  ulong local_3b8;
  ulong local_3a8;
  ulong local_398;
  ulong local_388;
  undefined *local_360;
  undefined *local_358;
  undefined *local_330;
  undefined *local_320;
  undefined *local_310;
  undefined *local_2a0;
  undefined *local_280;
  undefined4 local_278;
  undefined4 local_274;
  code *local_270;
  undefined *local_268;
  undefined *local_260;
  undefined8 local_258;
  undefined8 local_250;
  undefined *local_248;
  byte local_239;
  ulong local_238;
  byte local_229;
  ulong local_228;
  byte local_219;
  ulong local_218;
  byte local_209;
  ulong local_208;
  byte local_1f9;
  ulong local_1f8;
  byte local_1e9;
  ulong local_1e8;
  ulong local_1e0;
  undefined1 auStack_1d8 [8];
  long local_1d0;
  long *local_1c8;
  ulong local_198;
  undefined *local_190;
  byte local_181;
  undefined *local_180;
  byte local_171;
  undefined *local_170;
  byte local_161;
  undefined *local_160;
  byte local_151;
  undefined *local_150;
  undefined *local_148;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  long local_120;
  undefined *local_118;
  undefined8 local_110;
  long local_108;
  undefined *local_100;
  bool local_f1;
  undefined *local_f0;
  undefined *local_e8;
  long local_e0;
  int local_d4;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  local_b0 = param_1;
  _objc_storeStrong(&local_b8);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_3);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_4);
  uVar1 = *(ulong *)(param_1 + 0x20);
  local_d0 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_finished_026a15b0);
  if ((uVar1 & 1) == 0) {
    lVar8 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_statusCode_026a1578);
    lVar2 = local_b8;
    local_e0 = lVar8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_length_0269cca0);
    local_f1 = false;
    if (lVar2 == 0) {
      local_2a0 = (undefined *)0x0;
    }
    else {
      local_2a0 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_JSONObjectWithData_options_error_026ca480,local_b8,0,0);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = local_2a0;
    }
    local_f1 = lVar2 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_e8 = local_2a0;
    if ((local_f1 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_f0);
    }
    puVar3 = local_e8;
    FUN_009c6c6c();
    _objc_retainAutoreleasedReturnValue();
    local_100 = puVar3;
    if ((((local_c8 == 0) && (199 < local_e0)) && (local_e0 < 300)) &&
       ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0), puVar5 = local_e8,
       puVar3 == (undefined *)0x0)) {
      puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_151 = 0;
      local_161 = 0;
      local_171 = 0;
      local_181 = 0;
      if (((ulong)puVar5 & 1) == 0) {
        puVar3 = local_e8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
        _objc_retainAutoreleasedReturnValue();
        local_151 = 1;
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_150 = puVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((ulong)puVar3 & 1) == 0) {
          puVar3 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_models);
          _objc_retainAutoreleasedReturnValue();
          local_171 = 1;
          puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          local_170 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          if (((ulong)puVar3 & 1) == 0) {
            local_330 = *(undefined **)PTR____NSArray0___02578280;
          }
          else {
            local_330 = local_e8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_models);
            _objc_retainAutoreleasedReturnValue();
            local_181 = 1;
            local_180 = local_330;
          }
          local_320 = local_330;
        }
        else {
          local_320 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e8,PTR_s_objectForKeyedSubscript__0269d098,&cf_data);
          _objc_retainAutoreleasedReturnValue();
          local_161 = 1;
          local_160 = local_320;
        }
        local_310 = local_320;
      }
      else {
        local_310 = local_e8;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_148 = local_310;
      if ((local_181 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_180);
      }
      if ((local_171 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_170);
      }
      if ((local_161 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_160);
      }
      if ((local_151 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_150);
      }
      puVar3 = PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableOrderedSet_026ce340,PTR_s_orderedSet_0269f810);
      _objc_retainAutoreleasedReturnValue();
      local_190 = puVar3;
      _memset(auStack_1d8,0,0x40);
      puVar3 = local_148;
      (*(code *)PTR__objc_retain_02578638)();
      local_358 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,0x10)
      ;
      if (local_358 != (undefined *)0x0) {
        lVar8 = *local_1c8;
        local_360 = (undefined *)0x0;
        do {
          do {
            if (*local_1c8 - lVar8 != 0) {
              _objc_enumerationMutation(*local_1c8 - lVar8,puVar3);
            }
            uVar1 = *(ulong *)(local_1d0 + (long)local_360 * 8);
            puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_198 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar5);
            local_1e9 = 0;
            local_1f9 = 0;
            local_209 = 0;
            local_219 = 0;
            local_229 = 0;
            local_239 = 0;
            if ((uVar1 & 1) == 0) {
              uVar1 = local_198;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
              _objc_retainAutoreleasedReturnValue();
              local_1e9 = 1;
              puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
              local_1e8 = uVar1;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar5);
              if ((uVar1 & 1) == 0) {
                uVar1 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_model);
                _objc_retainAutoreleasedReturnValue();
                local_209 = 1;
                puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                local_208 = uVar1;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar5);
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_198;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
                  _objc_retainAutoreleasedReturnValue();
                  local_229 = 1;
                  puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
                  local_228 = uVar1;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
                  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar5);
                  if ((uVar1 & 1) == 0) {
                    local_3b8 = 0;
                  }
                  else {
                    local_3b8 = local_198;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_name);
                    _objc_retainAutoreleasedReturnValue();
                    local_239 = 1;
                    local_238 = local_3b8;
                  }
                  local_3a8 = local_3b8;
                }
                else {
                  local_3a8 = local_198;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_model);
                  _objc_retainAutoreleasedReturnValue();
                  local_219 = 1;
                  local_218 = local_3a8;
                }
                local_398 = local_3a8;
              }
              else {
                local_398 = local_198;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_198,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                _objc_retainAutoreleasedReturnValue();
                local_1f9 = 1;
                local_1f8 = local_398;
              }
              local_388 = local_398;
            }
            else {
              local_388 = local_198;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_1e0 = local_388;
            if ((local_239 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_238);
            }
            if ((local_229 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_228);
            }
            if ((local_219 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_218);
            }
            if ((local_209 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_208);
            }
            if ((local_1f9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1f8);
            }
            if ((local_1e9 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_1e8);
            }
            uVar1 = local_1e0;
            FUN_009af3fc();
            _objc_retainAutoreleasedReturnValue();
            uVar6 = uVar1;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(uVar1);
            puVar5 = local_190;
            if (uVar6 != 0) {
              uVar1 = local_1e0;
              FUN_009af3fc();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(uVar1);
            }
            _objc_storeStrong(&local_1e0,0);
            local_360 = local_360 + 1;
          } while (local_360 < local_358);
          local_358 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1d8,auStack_a8,
                     0x10);
          local_360 = (undefined *)0x0;
        } while (local_358 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setFinished__026a15b8,1);
      puVar5 = local_190;
      (*(code *)PTR__objc_msgSend_02578628)(local_190,PTR_s_array_0269d158);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR___dispatch_main_q_02578680;
      local_248 = puVar5;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_248;
      local_280 = PTR___NSConcreteStackBlock_02578660;
      local_278 = 0xc2000000;
      local_274 = 0;
      local_270 = FUN_009cc840;
      local_268 = &DAT_0257cb48;
      (*(code *)PTR__objc_retain_02578638)();
      local_260 = puVar5;
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      (*(code *)PTR__objc_retain_02578638)();
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      local_258 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      local_250 = uVar7;
      _dispatch_async(puVar3,&local_280);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_250);
      _objc_storeStrong(&local_258,0);
      _objc_storeStrong(&local_260,0);
      _objc_storeStrong(&local_248,0);
      _objc_storeStrong(&local_190,0);
      _objc_storeStrong(&local_148,0);
      local_d4 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setFinished__026a15b8,1);
      puVar3 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      local_140 = PTR___NSConcreteStackBlock_02578660;
      local_138 = 0xc2000000;
      local_134 = 0;
      local_130 = FUN_009cc6b4;
      local_128 = &DAT_0257a710;
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      (*(code *)PTR__objc_retain_02578638)();
      lVar8 = local_c8;
      local_110 = uVar4;
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = local_100;
      local_120 = lVar8;
      (*(code *)PTR__objc_retain_02578638)();
      local_118 = puVar5;
      local_108 = local_e0;
      _dispatch_async(puVar3,&local_140);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      local_d4 = 1;
      _objc_storeStrong(&local_118);
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_110,0);
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_e8,0);
    if (local_d4 == 0) {
      local_d4 = 0;
    }
  }
  else {
    local_d4 = 1;
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

