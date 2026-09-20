// FUN_00405f68 @ 00405f68

void FUN_00405f68(undefined8 param_1)

{
  bool bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  ulong uVar10;
  double dVar11;
  ulong local_268;
  ulong local_260;
  uint local_210;
  byte local_1e0;
  undefined *local_1a8;
  double local_1a0;
  double local_198;
  byte local_189;
  undefined1 *local_188;
  undefined1 *local_180;
  undefined1 *local_178;
  undefined1 *local_170;
  undefined1 *local_168;
  ulong local_160;
  ulong local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  ulong local_110;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  byte local_e9;
  ulong local_e8;
  byte local_da;
  byte local_d9;
  ulong local_d8;
  byte local_c9;
  uint local_c8;
  undefined1 *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar5 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_atMeAutoReplyEnabled_026a36b8);
  if (((ulong)puVar5 & 1) == 0) {
    local_c8 = 1;
    goto LAB_00406f0c;
  }
  uVar6 = local_b0;
  FUN_0040aa48();
  if ((uVar6 & 1) != 0) {
    local_c8 = 1;
    goto LAB_00406f0c;
  }
  local_d9 = 0;
  uVar6 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_isAtMe)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  if ((uVar10 & 1) == 0) {
    local_1e0 = 0;
  }
  else {
    uVar10 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_isAtMe);
    _objc_retainAutoreleasedReturnValue();
    local_d9 = 1;
    local_d8 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_1e0 = (byte)uVar10;
  }
  if ((local_d9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d8);
  }
  (*(code *)PTR__objc_release_02578630)(uVar6);
  local_c9 = local_1e0 & 1;
  local_e9 = 0;
  uVar6 = local_b0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_isAtAll);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar6;
  (*(code *)PTR__objc_msgSend_02578628)();
  if ((uVar10 & 1) == 0) {
    local_210 = 0;
  }
  else {
    uVar10 = local_b0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_b0,PTR_s_objectForKeyedSubscript__0269d098,&cf_isAtAll);
    _objc_retainAutoreleasedReturnValue();
    local_e9 = 1;
    local_e8 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_210 = (uint)uVar10;
  }
  if ((local_e9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_e8);
  }
  (*(code *)PTR__objc_release_02578630)();
  local_da = (byte)local_210 & 1;
  if (((local_c9 & 1) == 0) && ((local_210 & 1) == 0)) {
    FUN_0040c4c4();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = local_b0;
    local_f8 = uVar6;
    FUN_004055cc(local_b0,&cf_atUserList);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = local_f8;
    local_100 = uVar10;
    (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_length_0269cca0);
    if ((uVar6 != 0) &&
       (uVar6 = local_100, (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0),
       uVar6 != 0)) {
      uVar6 = local_100;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_100,PTR_s_componentsSeparatedByString__0269d3c0,&cf__);
      _objc_retainAutoreleasedReturnValue();
      local_108 = uVar6;
      _memset(auStack_150,0,0x40);
      uVar6 = local_108;
      (*(code *)PTR__objc_retain_02578638)();
      local_260 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,0x10);
      if (local_260 != 0) {
        lVar9 = *local_140;
        local_268 = 0;
        do {
          do {
            if (*local_140 - lVar9 != 0) {
              _objc_enumerationMutation(*local_140 - lVar9,uVar6);
            }
            uVar10 = *(ulong *)(local_148 + local_268 * 8);
            local_110 = uVar10;
            FUN_0040494c();
            _objc_retainAutoreleasedReturnValue();
            local_158 = uVar10;
            (*(code *)PTR__objc_msgSend_02578628)(uVar10,PTR_s_isEqualToString__0269ccc8,local_f8);
            if ((uVar10 & 1) == 0) {
              uVar10 = local_158;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_158,PTR_s_isEqualToString__0269ccc8,&cf_notify_all);
              if (((uVar10 & 1) == 0) &&
                 (uVar10 = local_158,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_158,PTR_s_isEqualToString__0269ccc8,&cf__all), (uVar10 & 1) == 0))
              {
                local_c8 = 0;
              }
              else {
                local_da = 1;
                local_c8 = 2;
              }
            }
            else {
              local_c9 = 1;
              local_c8 = 2;
            }
            _objc_storeStrong(&local_158,0);
            if (local_c8 != 0) goto LAB_004066f0;
            local_268 = local_268 + 1;
          } while (local_268 < local_260);
          local_260 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                     0x10);
          local_268 = 0;
        } while (local_260 != 0);
      }
      local_c8 = 0;
LAB_004066f0:
      (*(code *)PTR__objc_release_02578630)(uVar6);
      _objc_storeStrong(&local_108,0);
    }
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
  }
  if (((local_c9 & 1) == 0) && ((local_da & 1) == 0)) {
    local_c8 = 1;
    goto LAB_00406f0c;
  }
  uVar6 = local_b0;
  FUN_004055cc(local_b0,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  local_160 = uVar6;
  FUN_0040a974();
  if ((uVar6 & 1) == 0) {
    local_c8 = 1;
  }
  else {
    puVar7 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_atMeAutoReplySelectedGroups_026a36c0);
    _objc_retainAutoreleasedReturnValue();
    local_168 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_count_0269cfe0);
    if ((puVar7 == (undefined1 *)0x0) ||
       (puVar7 = local_168,
       (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_containsObject__0269cbb8,local_160),
       ((ulong)puVar7 & 1) != 0)) {
      puVar7 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_atMeAutoReplyText_026a36c8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      local_170 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar7 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_atMeAutoReplyRepositoryCode_026a36d0);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = puVar7;
      FUN_0040494c();
      _objc_retainAutoreleasedReturnValue();
      local_178 = puVar8;
      (*(code *)PTR__objc_release_02578630)(puVar7);
      puVar7 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_atMeAutoReplyMultiContent_026a36d8);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = local_b8;
      local_180 = puVar7;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_atMeAutoReplyCountMode_026a36e0);
      puVar7 = local_b8;
      local_188 = puVar8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_atMeAutoReplyRandomOneFromMulti_026a36e8)
      ;
      local_189 = (byte)puVar7;
      if (local_188 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        puVar7 = local_180;
        FUN_00418e40(0);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar7;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar7);
        if (puVar8 == (undefined1 *)0x0) {
          local_c8 = 1;
        }
        else {
LAB_00406b70:
          uVar6 = local_b0;
          FUN_0040bb14(local_b0,&cf_createTime);
          dVar11 = (double)(uVar6 & 0xffffffff);
          local_198 = dVar11;
          if (0.0 < dVar11) {
            puVar5 = PTR__OBJC_CLASS___NSDate_026cdf88;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)();
            dVar11 = dVar11 - local_198;
            (*(code *)PTR__objc_release_02578630)(puVar5);
            local_1a0 = dVar11;
            if (120.0 < dVar11) {
              local_c8 = 1;
              goto LAB_00406ec0;
            }
          }
          puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
          uVar6 = local_b0;
          FUN_004055cc(local_b0,&cf_senderUserName);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = local_b0;
          FUN_004055cc(local_b0,&cf_mesSvrID);
          _objc_retainAutoreleasedReturnValue();
          FUN_0040bb14(local_b0,&cf_localID);
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar5,PTR_s_stringWithFormat__0269cca8,&cf_atme___________u);
          _objc_retainAutoreleasedReturnValue();
          local_1a8 = puVar5;
          (*(code *)PTR__objc_release_02578630)(uVar10);
          (*(code *)PTR__objc_release_02578630)(uVar6);
          puVar5 = local_1a8;
          FUN_00418ed4();
          uVar6 = local_160;
          puVar4 = local_170;
          puVar3 = local_178;
          puVar8 = local_180;
          puVar7 = local_188;
          bVar2 = local_189;
          bVar1 = ((ulong)puVar5 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_atMeAutoReplyDelaySeconds_026a36f0)
            ;
            uVar10 = local_b0;
            FUN_00413a2c();
            _objc_retainAutoreleasedReturnValue();
            FUN_004194e4(dVar11,puVar4,puVar3,puVar8,puVar7,bVar2 & 1,uVar6,&cf_atme);
            (*(code *)PTR__objc_release_02578630)(uVar10);
          }
          local_c8 = (uint)!bVar1;
          _objc_storeStrong(&local_1a8,0);
        }
      }
      else {
        puVar7 = local_170;
        (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_length_0269cca0);
        if ((puVar7 != (undefined1 *)0x0) ||
           (puVar7 = local_178,
           (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_length_0269cca0),
           puVar7 != (undefined1 *)0x0)) goto LAB_00406b70;
        local_c8 = 1;
      }
LAB_00406ec0:
      _objc_storeStrong(&local_180);
      _objc_storeStrong(&local_178,0);
      _objc_storeStrong(&local_170,0);
    }
    else {
      local_c8 = 1;
    }
    _objc_storeStrong(&local_168,0);
  }
  _objc_storeStrong(&local_160,0);
LAB_00406f0c:
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

