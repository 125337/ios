// FUN_004147f8 @ 004147f8

/* WARNING: Type propagation algorithm not settling */

void FUN_004147f8(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4,byte param_5
                 ,undefined8 param_6)

{
  undefined1 *puVar1;
  u_int32_t uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_218;
  undefined1 *local_210;
  long local_160;
  undefined1 auStack_158 [8];
  long local_150;
  long *local_148;
  long local_118;
  undefined *local_110;
  ulong local_108;
  undefined1 *local_100;
  undefined4 local_f8;
  long local_e8 [2];
  byte local_d1;
  undefined8 local_d0;
  long local_c8;
  byte local_b9;
  undefined *local_b8;
  undefined1 auStack_b0 [128];
  undefined1 *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (undefined1 *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  local_c8 = 0;
  local_b9 = param_2;
  _objc_storeStrong(&local_c8,param_3);
  local_d0 = 0;
  _objc_storeStrong(&local_d0,param_4);
  local_e8[1] = 0;
  local_d1 = param_5;
  _objc_storeStrong(local_e8 + 1,param_6);
  lVar5 = local_c8;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  local_e8[0] = lVar5;
  (*(code *)PTR__objc_msgSend_02578628)(lVar5,PTR_s_length_0269cca0);
  if (((lVar5 == 0) ||
      (puVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0),
      puVar3 == (undefined1 *)0x0)) ||
     (puVar4 = PTR_WCRefineHelper_026ce000,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                local_e8[0]), puVar3 = local_b8, ((ulong)puVar4 & 1) != 0)) {
    local_f8 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_100 = puVar3;
    if (((local_b9 & 1) != 0) &&
       (puVar3 = local_b8, (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0),
       (undefined1 *)((long)&MACH_HEADER.magic + 1) < puVar3)) {
      puVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_count_0269cfe0);
      uVar2 = _arc4random_uniform((u_int32_t)puVar3);
      local_108 = (ulong)uVar2;
      puVar3 = local_b8;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_b8,PTR_s_objectAtIndexedSubscript__0269cc78,local_108);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_30 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30
                 ,1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_100;
      local_100 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar3;
    _memset(auStack_158,0,0x40);
    puVar1 = local_100;
    (*(code *)PTR__objc_retain_02578638)();
    local_210 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_b0,0x10);
    if (local_210 != (undefined1 *)0x0) {
      lVar5 = *local_148;
      local_218 = (undefined1 *)0x0;
      do {
        do {
          if (*local_148 - lVar5 != 0) {
            _objc_enumerationMutation(*local_148 - lVar5,puVar1);
          }
          lVar6 = *(long *)(local_150 + (long)local_218 * 8);
          local_118 = lVar6;
          FUN_00416224(lVar6,local_110);
          _objc_retainAutoreleasedReturnValue();
          local_160 = lVar6;
          if (lVar6 == 0) {
            FUN_00414e40(local_118,local_e8[0],local_d0,local_d1 & 1);
            FUN_00415f58(local_e8[0],local_118);
            local_f8 = 0;
          }
          else {
            FUN_0041694c(lVar6,local_e8[0],local_d0,local_d1 & 1);
            local_f8 = 3;
          }
          _objc_storeStrong(&local_160,0);
          local_218 = local_218 + 1;
        } while (local_218 < local_210);
        local_210 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_158,auStack_b0,
                   0x10);
        local_218 = (undefined1 *)0x0;
      } while (local_210 != (undefined1 *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _objc_storeStrong(&local_110);
    _objc_storeStrong(&local_100,0);
    local_f8 = 0;
  }
  _objc_storeStrong(local_e8);
  _objc_storeStrong(local_e8 + 1,0);
  _objc_storeStrong(&local_d0,0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

