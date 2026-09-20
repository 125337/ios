// FUN_00407cdc @ 00407cdc

byte FUN_00407cdc(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong local_220;
  ulong local_218;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined1 local_101;
  undefined *local_100;
  undefined *local_f8;
  byte local_ea;
  byte local_e9;
  ulong local_e8;
  double local_e0;
  double local_d8;
  int local_d0;
  undefined *local_c0;
  ulong local_b8;
  byte local_a9;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_c0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_keywordAutoReplyEnabled_026a0b18);
  if (((ulong)puVar1 & 1) == 0) {
    local_a9 = 0;
    local_d0 = 1;
    goto LAB_0040851c;
  }
  uVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b8,PTR_s_objectForKeyedSubscript__0269d098,&cf_createTime);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  local_d8 = param_1;
  if (0.0 < param_1) {
    puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    param_1 = param_1 - local_d8;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_e0 = param_1;
    if (120.0 < param_1) {
      local_a9 = 0;
      local_d0 = 1;
      goto LAB_0040851c;
    }
  }
  uVar3 = local_b8;
  FUN_0040a160();
  if (((uVar3 & 1) != 0) || (uVar3 = local_b8, FUN_0040a43c(), (uVar3 & 1) != 0)) {
    local_a9 = 0;
    local_d0 = 1;
    goto LAB_0040851c;
  }
  uVar3 = local_b8;
  FUN_004055cc(local_b8,&cf_sessionUserName);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineHelper_026ce000;
  local_e8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,uVar3);
  if (((ulong)puVar1 & 1) == 0) {
    uVar3 = local_e8;
    FUN_0040a974();
    local_e9 = (byte)uVar3;
    puVar1 = local_c0;
    (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_keywordAutoReplySessionGateEnabl_026a0b20);
    local_ea = (byte)puVar1;
    if ((local_e9 & 1) == 0) {
      if (((ulong)puVar1 & 1) != 0) {
        puVar1 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_keywordAutoReplySelectedContacts_026a0b28);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_e8;
        local_100 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
        if ((uVar3 == 0) ||
           (puVar1 = local_100,
           (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_containsObject__0269cbb8,local_e8),
           ((ulong)puVar1 & 1) == 0)) {
          local_a9 = 0;
          local_d0 = 1;
        }
        else {
          local_d0 = 0;
        }
        _objc_storeStrong(&local_100,0);
        if (local_d0 != 0) goto LAB_004084fc;
      }
LAB_004082fc:
      uVar3 = local_b8;
      FUN_0040aa48();
      local_101 = (undefined1)uVar3;
      if ((uVar3 & 1) != 0) {
        _memset(auStack_150,0,0x40);
        uVar3 = local_b8;
        FUN_0040ae9c();
        _objc_retainAutoreleasedReturnValue();
        local_218 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)();
        if (local_218 != 0) {
          lVar4 = *local_140;
          local_220 = 0;
          do {
            do {
              if (*local_140 - lVar4 != 0) {
                _objc_enumerationMutation(*local_140 - lVar4,uVar3);
              }
              local_110 = *(undefined8 *)(local_148 + local_220 * 8);
              uVar2 = local_e8;
              FUN_0040b7bc(local_e8,local_110);
              if ((uVar2 & 1) != 0) {
                local_a9 = 0;
                local_d0 = 1;
                goto LAB_004084c0;
              }
              local_220 = local_220 + 1;
            } while (local_220 < local_218);
            local_218 = uVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                       0x10);
            local_220 = 0;
          } while (local_218 != 0);
        }
        local_d0 = 0;
LAB_004084c0:
        (*(code *)PTR__objc_release_02578630)(uVar3);
        if (local_d0 != 0) goto LAB_004084fc;
      }
      local_a9 = 1;
      local_d0 = 1;
    }
    else {
      puVar1 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_keywordAutoReplyGroupMessagesEna_026a35e0);
      if (((ulong)puVar1 & 1) == 0) {
        local_a9 = 0;
        local_d0 = 1;
      }
      else {
        puVar1 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_keywordAutoReplySelectedGroups_026a35e8);
        _objc_retainAutoreleasedReturnValue();
        local_f8 = puVar1;
        if ((local_ea & 1) == 0) {
          (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_count_0269cfe0);
          uVar3 = 0;
          if (puVar1 != (undefined *)0x0) {
            puVar1 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_containsObject__0269cbb8,local_e8);
            uVar3 = (ulong)puVar1 & 0xffffffff;
            if (((ulong)puVar1 & 1) == 0) {
              uVar3 = 1;
              local_a9 = 0;
              local_d0 = 1;
              goto LAB_004081e8;
            }
          }
LAB_004081e0:
          local_d0 = 0;
        }
        else {
          uVar3 = local_e8;
          (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_length_0269cca0);
          if (uVar3 != 0) {
            puVar1 = local_f8;
            (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_containsObject__0269cbb8,local_e8);
            uVar3 = (ulong)puVar1 & 0xffffffff;
            if (((ulong)puVar1 & 1) != 0) goto LAB_004081e0;
          }
          uVar3 = 1;
          local_a9 = 0;
          local_d0 = 1;
        }
LAB_004081e8:
        _objc_storeStrong(uVar3,&local_f8,0);
        if (local_d0 == 0) goto LAB_004082fc;
      }
    }
  }
  else {
    local_a9 = 0;
    local_d0 = 1;
  }
LAB_004084fc:
  _objc_storeStrong(&local_e8,0);
LAB_0040851c:
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_a9 & 1;
}

