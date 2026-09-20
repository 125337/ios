// FUN_01af4580 @ 01af4580

double FUN_01af4580(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  double dVar7;
  double local_238;
  double local_228;
  uint local_204;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1b0;
  double local_1a0;
  double local_198;
  bool local_171;
  ulong local_170;
  ulong local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  undefined8 local_108;
  ulong local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  double local_d0;
  undefined4 local_c4;
  double local_c0;
  ulong local_b8;
  double local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 1.0;
  uVar1 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_avatarFrameChatListEnabled_0269def0);
  if ((uVar1 & 1) == 0) {
    local_b0 = local_c0;
    local_c4 = 1;
  }
  else {
    local_d0 = local_c0;
    dVar7 = 1.0;
    local_e0 = 1.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_avatarFrameChatListScale_0269df80);
    local_198 = dVar7;
    if (dVar7 <= local_e0) {
      local_198 = local_e0;
    }
    local_f0 = local_198;
    local_d8 = local_198;
    if (local_198 <= local_d0) {
      local_1a0 = local_d0;
    }
    else {
      local_1a0 = local_198;
    }
    local_f8 = local_1a0;
    local_c0 = local_1a0;
    uVar1 = local_b8;
    local_e8 = dVar7;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_avatarFrameSpecialUserConfigs_0269e040);
    _objc_retainAutoreleasedReturnValue();
    local_1b0 = uVar1;
    if (uVar1 == 0) {
      local_1b0 = *(ulong *)PTR____NSDictionary0___02578288;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = local_1b0;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _memset(auStack_148,0,0x40);
    uVar1 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
    if (local_1d8 != 0) {
      lVar6 = *local_138;
      local_1e0 = 0;
      do {
        do {
          local_228 = local_1a0;
          if (*local_138 - lVar6 != 0) {
            _objc_enumerationMutation(*local_138 - lVar6,uVar1);
            local_228 = local_1a0;
          }
          local_108 = *(undefined8 *)(local_140 + local_1e0 * 8);
          uVar2 = local_100;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_100,PTR_s_objectForKeyedSubscript__0269d098,local_108);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
          local_150 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar2 & 1) == 0) {
            local_c4 = 3;
          }
          else {
            uVar2 = local_150;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_configured);
            _objc_retainAutoreleasedReturnValue();
            local_204 = 0;
            if (uVar2 != 0) {
              uVar4 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_configured);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_204 = (uint)uVar5 ^ 1;
              (*(code *)PTR__objc_release_02578630)(uVar4);
            }
            (*(code *)PTR__objc_release_02578630)(uVar2);
            if ((local_204 & 1) == 0) {
              uVar2 = local_150;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListScale);
              _objc_retainAutoreleasedReturnValue();
              uVar4 = uVar2;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_171 = (uVar4 & 1) == 0;
              if (local_171) {
                local_228 = 0.0;
              }
              else {
                local_170 = local_150;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_150,PTR_s_objectForKeyedSubscript__0269d098,&cf_chatListScale);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)();
              }
              local_171 = !local_171;
              if (local_171) {
                (*(code *)PTR__objc_release_02578630)(local_170);
              }
              (*(code *)PTR__objc_release_02578630)(uVar2);
              if ((DAT_02323da8 < local_228) && (local_228 <= 5.0)) {
                if (local_228 <= local_c0) {
                  local_238 = local_c0;
                }
                else {
                  local_238 = local_228;
                }
                local_c0 = local_238;
                local_228 = local_238;
              }
              local_c4 = 0;
            }
            else {
              local_c4 = 3;
            }
          }
          _objc_storeStrong(&local_150,0);
          local_1e0 = local_1e0 + 1;
          local_1a0 = local_228;
        } while (local_1e0 < local_1d8);
        local_1d8 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10
                  );
        local_1e0 = 0;
        local_1a0 = local_228;
      } while (local_1d8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_b0 = local_c0;
    local_c4 = 1;
    _objc_storeStrong(&local_100,0);
  }
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_b0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

