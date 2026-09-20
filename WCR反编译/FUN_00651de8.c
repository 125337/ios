// FUN_00651de8 @ 00651de8

void FUN_00651de8(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  ulong local_1c8;
  ulong local_1c0;
  undefined *local_158;
  byte local_149;
  ulong local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  ulong local_100;
  ulong local_f8;
  int local_f0;
  int local_ec;
  long local_e8;
  int local_e0;
  long local_d0;
  long local_c8;
  ulong local_c0;
  cfstringStruct *local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  local_c0 = param_1;
  _objc_storeStrong(&local_c8);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_3);
  lVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0);
  if ((lVar2 == 0) || (local_d0 == 0)) {
    local_e0 = 1;
  }
  else {
    lVar2 = local_d0;
    FUN_00655b28();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_e0 = 1;
    }
    else {
      lVar2 = local_d0;
      FUN_00656104();
      local_ec = (int)lVar2;
      lVar2 = local_d0;
      FUN_00656294();
      local_f0 = (int)lVar2;
      FUN_00656968();
      _objc_retainAutoreleasedReturnValue();
      _objc_sync_enter();
      uVar3 = local_c0;
      FUN_006569dc(local_c0,local_c8,1);
      _objc_retainAutoreleasedReturnValue();
      local_f8 = uVar3;
      _memset(auStack_140,0,0x40);
      uVar3 = local_f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_1c0 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10);
      if (local_1c0 != 0) {
        lVar7 = *local_130;
        local_1c8 = 0;
        do {
          do {
            if (*local_130 - lVar7 != 0) {
              _objc_enumerationMutation(*local_130 - lVar7,uVar3);
            }
            uVar8 = *(ulong *)(local_138 + local_1c8 * 8);
            local_149 = 0;
            local_100 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,PTR_s_objectForKeyedSubscript__0269d098,&cf_key);
            _objc_retainAutoreleasedReturnValue();
            uVar4 = uVar8;
            (*(code *)PTR__objc_msgSend_02578628)();
            bVar1 = true;
            if (((uVar4 & 1) == 0) && (bVar1 = false, local_ec != 0)) {
              uVar4 = local_100;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_objectForKeyedSubscript__0269d098,&cf_localId);
              _objc_retainAutoreleasedReturnValue();
              local_149 = 1;
              local_148 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar1 = (int)uVar4 == local_ec;
            }
            if ((local_149 & 1) != 0) {
              (*(code *)PTR__objc_release_02578630)(local_148);
            }
            (*(code *)PTR__objc_release_02578630)(uVar8);
            if (bVar1) {
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_100,PTR_s_setObject_forKeyedSubscript__0269d248,local_d0,&cf_msg);
              if (local_ec != 0) {
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800
                           ,local_ec);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_100,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_localId)
                ;
                (*(code *)PTR__objc_release_02578630)(puVar5);
              }
              if (local_f0 != 0) {
                puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800
                           ,local_f0);
                _objc_retainAutoreleasedReturnValue();
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_100,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,
                           &cf_createTime);
                (*(code *)PTR__objc_release_02578630)(puVar5);
              }
              local_e0 = 1;
              goto LAB_006523f0;
            }
            local_1c8 = local_1c8 + 1;
          } while (local_1c8 < local_1c0);
          local_1c0 = uVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                     0x10);
          local_1c8 = 0;
        } while (local_1c0 != 0);
      }
      local_e0 = 0;
LAB_006523f0:
      (*(code *)PTR__objc_release_02578630)(uVar3);
      if (local_e0 == 0) {
        local_b8 = &cf_key;
        local_b0 = local_e8;
        puVar5 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_b0,&local_b8,1);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_158 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
        if (local_ec != 0) {
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     local_ec);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_localId);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        if (local_f0 != 0) {
          puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInt__0269d800,
                     local_f0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,puVar5,&cf_createTime);
          (*(code *)PTR__objc_release_02578630)(puVar5);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_158,PTR_s_setObject_forKeyedSubscript__0269d248,local_d0,&cf_msg);
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_addObject__0269d180,local_158);
        _objc_storeStrong(&local_158,0);
        local_e0 = 0;
      }
      _objc_storeStrong(&local_f8,0);
      if (local_e0 == 0) {
        local_e0 = 0;
      }
      _objc_sync_exit(lVar2);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      if (local_e0 == 0) {
        local_e0 = 0;
      }
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

