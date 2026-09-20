// FUN_0057bc48 @ 0057bc48

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_0057bc48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_308;
  undefined *local_300;
  undefined *local_2d0;
  undefined *local_268;
  undefined *local_260;
  undefined *local_210;
  ulong local_200;
  ulong local_1f8;
  undefined1 auStack_1f0 [8];
  long local_1e8;
  long *local_1e0;
  ulong local_1b0;
  undefined *local_1a8;
  undefined1 auStack_1a0 [8];
  long local_198;
  long *local_190;
  ulong local_160;
  byte local_151;
  undefined4 local_150;
  undefined *local_140;
  undefined *local_138;
  undefined *local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if ((DAT_028cb601 & 1) == 0) {
    puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    local_138 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_objectForKey__0269e048,&cf_com_wcrefine_moments_scheduled_tasks_v1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_140 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      _objc_storeStrong(&DAT_028cb5b0,*(undefined8 *)PTR____NSArray0___02578280);
      DAT_028cb601 = 1;
      DAT_028cb5f8 = 0x7fefffffffffffff;
      FUN_00573e9c();
      puVar1 = DAT_028cb5b0;
      (*(code *)PTR__objc_retain_02578638)();
      local_130 = puVar1;
      local_150 = 1;
    }
    else {
      local_151 = 0;
      _memset(auStack_1a0,0,0x40);
      puVar1 = local_140;
      (*(code *)PTR__objc_retain_02578638)();
      local_260 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,0x10)
      ;
      if (local_260 != (undefined *)0x0) {
        lVar3 = *local_190;
        local_268 = (undefined *)0x0;
        do {
          do {
            if (*local_190 - lVar3 != 0) {
              _objc_enumerationMutation(*local_190 - lVar3,puVar1);
            }
            uVar4 = *(ulong *)(local_198 + (long)local_268 * 8);
            puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
            local_160 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
            if ((uVar4 & 1) != 0) {
              uVar4 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_160,PTR_s_objectForKey__0269e048,&cf_payload);
              _objc_retainAutoreleasedReturnValue();
              puVar2 = PTR__OBJC_CLASS___NSData_026ce1d0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
              uVar5 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar2);
              (*(code *)PTR__objc_release_02578630)(uVar4);
              if ((uVar5 & 1) != 0) {
                local_151 = 1;
                local_150 = 2;
                goto LAB_0057c094;
              }
            }
            local_268 = local_268 + 1;
          } while (local_268 < local_260);
          local_260 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1a0,auStack_a8,
                     0x10);
          local_268 = (undefined *)0x0;
        } while (local_260 != (undefined *)0x0);
      }
      local_150 = 0;
LAB_0057c094:
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if ((local_151 & 1) == 0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        local_1a8 = puVar1;
        _memset(auStack_1f0,0,0x40);
        puVar1 = local_140;
        (*(code *)PTR__objc_retain_02578638)();
        local_300 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,auStack_128,
                   0x10);
        if (local_300 != (undefined *)0x0) {
          lVar3 = *local_1e0;
          local_308 = (undefined *)0x0;
          do {
            do {
              if (*local_1e0 - lVar3 != 0) {
                _objc_enumerationMutation(*local_1e0 - lVar3,puVar1);
              }
              uVar5 = *(ulong *)(local_1e8 + (long)local_308 * 8);
              puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
              local_1b0 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
              (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar2);
              uVar4 = local_1b0;
              if ((uVar5 & 1) != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_1f8 = uVar4;
                (*(code *)PTR__objc_msgSend_02578628)
                          (uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar4;
                FUN_0057a910();
                _objc_retainAutoreleasedReturnValue();
                local_200 = uVar5;
                (*(code *)PTR__objc_release_02578630)(uVar4);
                uVar4 = local_200;
                (*(code *)PTR__objc_msgSend_02578628)(local_200,PTR_s_length_0269cca0);
                puVar2 = local_1a8;
                if (uVar4 == 0) {
                  local_150 = 5;
                }
                else {
                  uVar4 = local_1f8;
                  FUN_00589694();
                  _objc_retainAutoreleasedReturnValue();
                  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_addObject__0269d180);
                  (*(code *)PTR__objc_release_02578630)(uVar4);
                  local_150 = 0;
                }
                _objc_storeStrong(&local_200);
                _objc_storeStrong(&local_1f8,0);
              }
              local_308 = local_308 + 1;
            } while (local_308 < local_300);
            local_300 = puVar1;
            (*(code *)PTR__objc_msgSend_02578628)
                      (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1f0,
                       auStack_128,0x10);
            local_308 = (undefined *)0x0;
          } while (local_300 != (undefined *)0x0);
        }
        (*(code *)PTR__objc_release_02578630)(puVar1);
        puVar2 = local_1a8;
        (*(code *)PTR__objc_msgSend_02578628)(local_1a8,PTR_s_copy_0269d150);
        puVar1 = DAT_028cb5b0;
        DAT_028cb5b0 = puVar2;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        DAT_028cb601 = 1;
        FUN_00589828(DAT_028cb5b0);
        puVar1 = DAT_028cb5b0;
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = puVar1;
        local_150 = 1;
        _objc_storeStrong(&local_1a8,0);
      }
      else {
        FUN_00588e58(local_140);
        if (DAT_028cb5b0 == (undefined *)0x0) {
          local_2d0 = *(undefined **)PTR____NSArray0___02578280;
        }
        else {
          local_2d0 = DAT_028cb5b0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_130 = local_2d0;
        local_150 = 1;
      }
    }
    _objc_storeStrong(&local_140);
    _objc_storeStrong(&local_138,0);
  }
  else {
    if (DAT_028cb5b0 == (undefined *)0x0) {
      local_210 = *(undefined **)PTR____NSArray0___02578280;
    }
    else {
      local_210 = DAT_028cb5b0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_130 = local_210;
  }
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_130);
  return;
}

