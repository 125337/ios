// FUN_00588e58 @ 00588e58

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00588e58(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong local_208;
  ulong local_180;
  ulong local_178;
  ulong local_160;
  bool local_139;
  ulong local_138;
  ulong local_130;
  undefined4 local_124;
  ulong local_120;
  ulong local_118;
  undefined1 auStack_110 [8];
  long local_108;
  long *local_100;
  ulong local_d0;
  undefined *local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b0 = 0;
  _objc_storeStrong(&local_b0,param_1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  local_b8 = puVar1;
  _memset(auStack_110,0,0x40);
  local_160 = local_b0;
  if (local_b0 == 0) {
    local_160 = *(ulong *)PTR____NSArray0___02578280;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_178 = local_160;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_160,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,0x10);
  if (local_178 != 0) {
    lVar4 = *local_100;
    local_180 = 0;
    do {
      do {
        if (*local_100 - lVar4 != 0) {
          _objc_enumerationMutation(*local_100 - lVar4,local_160);
        }
        uVar5 = *(ulong *)(local_108 + local_180 * 8);
        puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        local_d0 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_isKindOfClass__0269cd68,puVar1);
        uVar2 = local_d0;
        if ((uVar5 & 1) != 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_118 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_objectForKeyedSubscript__0269d098,&cf_id);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar2;
          FUN_0057a910();
          _objc_retainAutoreleasedReturnValue();
          local_120 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar2);
          uVar2 = local_120;
          (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_length_0269cca0);
          if (uVar2 == 0) {
            local_124 = 3;
          }
          else {
            uVar2 = local_118;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
            _objc_retainAutoreleasedReturnValue();
            puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
            uVar5 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
            local_139 = (uVar5 & 1) == 0;
            if (local_139) {
              local_208 = 0;
            }
            else {
              local_208 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_118,PTR_s_objectForKeyedSubscript__0269d098,&cf_payload);
              _objc_retainAutoreleasedReturnValue();
              local_138 = local_208;
            }
            local_139 = !local_139;
            (*(code *)PTR__objc_retain_02578638)();
            local_130 = local_208;
            if (local_139) {
              (*(code *)PTR__objc_release_02578630)(local_138);
            }
            (*(code *)PTR__objc_release_02578630)(uVar2);
            uVar2 = local_130;
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_length_0269cca0);
            if ((uVar2 == 0) ||
               (uVar5 = local_120, FUN_005898a4(uVar2,local_120,local_130), puVar1 = local_b8,
               (uVar5 & 1) != 0)) {
              puVar1 = local_b8;
              uVar2 = local_118;
              FUN_00589694();
              _objc_retainAutoreleasedReturnValue();
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180);
              (*(code *)PTR__objc_release_02578630)(uVar2);
              local_124 = 0;
            }
            else {
              uVar2 = local_118;
              (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_copy_0269d150);
              (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_addObject__0269d180,uVar2);
              (*(code *)PTR__objc_release_02578630)(uVar2);
              local_124 = 3;
            }
            _objc_storeStrong(&local_130,0);
          }
          _objc_storeStrong(&local_120);
          _objc_storeStrong(&local_118,0);
        }
        local_180 = local_180 + 1;
      } while (local_180 < local_178);
      local_178 = local_160;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_160,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_110,auStack_a8,
                 0x10);
      local_180 = 0;
    } while (local_178 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(local_160);
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_copy_0269d150);
  puVar1 = DAT_028cb5b0;
  DAT_028cb5b0 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  DAT_028cb601 = 1;
  FUN_00589828(DAT_028cb5b0);
  _objc_storeStrong(&local_b8);
  _objc_storeStrong(&local_b0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

