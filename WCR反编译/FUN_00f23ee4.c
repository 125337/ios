// FUN_00f23ee4 @ 00f23ee4

void FUN_00f23ee4(long param_1)

{
  u_int32_t uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 *local_190;
  undefined1 *local_188;
  long local_140;
  long local_138;
  long local_130;
  undefined1 auStack_128 [8];
  long local_120;
  long *local_118;
  long local_e8;
  ulong local_e0;
  undefined1 *local_d8;
  undefined4 local_cc;
  undefined1 *local_c8;
  long local_c0;
  long local_b8;
  undefined1 auStack_b0 [128];
  undefined1 *local_30;
  long local_28;
  
  puVar3 = PTR_WCRefineHelper_026ce000;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = param_1;
  local_b8 = param_1;
  if (*(long *)(param_1 + 0x30) == 1) {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_doNotDisturbAutoReplyMultiConten_026abe38);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_autoReplyNormalizedMultiItems__0269efa0);
    _objc_retainAutoreleasedReturnValue();
    local_c8 = puVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar4 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
    puVar6 = local_c8;
    if (puVar4 == (undefined1 *)0x0) {
      local_cc = 1;
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_d8 = puVar6;
      uVar5 = *(ulong *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_doNotDisturbAutoReplyRandomOneFr_026abe40);
      if (((uVar5 & 1) != 0) &&
         (puVar6 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0),
         (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar6)) {
        puVar6 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_count_0269cfe0);
        uVar1 = _arc4random_uniform((u_int32_t)puVar6);
        local_e0 = (ulong)uVar1;
        puVar4 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c8,PTR_s_objectAtIndexedSubscript__0269cc78,local_e0);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_30 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_30,1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = local_d8;
        local_d8 = puVar3;
        (*(code *)PTR__objc_release_02578630)(puVar6);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
      _memset(auStack_128,0,0x40);
      puVar6 = local_d8;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_b0,0x10)
      ;
      if (local_188 != (undefined1 *)0x0) {
        lVar8 = *local_118;
        local_190 = (undefined1 *)0x0;
        do {
          do {
            if (*local_118 - lVar8 != 0) {
              _objc_enumerationMutation(*local_118 - lVar8,puVar6);
            }
            local_e8 = *(long *)(local_120 + (long)local_190 * 8);
            puVar3 = PTR_WCRefineVoicePackSender_026ce128;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR_WCRefineVoicePackSender_026ce128,
                       PTR_s_sendRepositoryCode_toChatName__0269efa8,local_e8,
                       *(undefined8 *)(param_1 + 0x28));
            if (((ulong)puVar3 & 1) == 0) {
              lVar7 = local_e8;
              FUN_00f21dc0();
              _objc_retainAutoreleasedReturnValue();
              local_130 = lVar7;
              (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_length_0269cca0);
              if (lVar7 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,
                           local_130,*(undefined8 *)(param_1 + 0x28));
              }
              _objc_storeStrong(&local_130,0);
            }
            local_190 = local_190 + 1;
          } while (local_190 < local_188);
          local_188 = puVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar6,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_128,auStack_b0,
                     0x10);
          local_190 = (undefined1 *)0x0;
        } while (local_188 != (undefined1 *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar6);
      local_cc = 1;
      _objc_storeStrong(&local_d8,0);
    }
    _objc_storeStrong(&local_c8,0);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_doNotDisturbAutoReplyText_026abe48);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    FUN_00f21dc0();
    _objc_retainAutoreleasedReturnValue();
    local_138 = lVar8;
    (*(code *)PTR__objc_release_02578630)(lVar7);
    lVar7 = *(long *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(lVar7,PTR_s_doNotDisturbAutoReplyRepositoryC_026abe50);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar7;
    FUN_00f21dc0();
    _objc_retainAutoreleasedReturnValue();
    local_140 = lVar8;
    (*(code *)PTR__objc_release_02578630)(lVar7);
    lVar8 = local_138;
    (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0);
    if (lVar8 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_138,
                 *(undefined8 *)(param_1 + 0x28));
    }
    lVar8 = local_140;
    (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
    if (lVar8 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineVoicePackSender_026ce128,PTR_s_sendRepositoryCode_toChatName__0269efa8,
                 local_140,*(undefined8 *)(param_1 + 0x28));
    }
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_138,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

