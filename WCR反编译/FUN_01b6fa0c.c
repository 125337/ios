// FUN_01b6fa0c @ 01b6fa0c

/* WARNING: Type propagation algorithm not settling */

void FUN_01b6fa0c(long param_1)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong local_1c0;
  ulong local_1b8;
  undefined *local_190;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  code *local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined *local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined *local_138;
  byte local_130;
  undefined8 local_128;
  undefined1 auStack_120 [8];
  long local_118;
  long *local_110;
  undefined8 local_e0;
  bool local_d1;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c0 = (undefined *)0x0;
  local_d1 = false;
  bVar1 = (*(byte *)(param_1 + 0x40) & 1) == 0;
  local_b8 = param_1;
  local_b0 = param_1;
  if (bVar1) {
    local_190 = (undefined *)0x0;
  }
  else {
    local_190 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_d0 = local_190;
  }
  local_d1 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_c8 = local_190;
  if ((local_d1 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_d0);
  }
  _memset(auStack_120,0,0x40);
  uVar3 = *(ulong *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_1b8 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
  if (local_1b8 != 0) {
    lVar6 = *local_110;
    local_1c0 = 0;
    do {
      do {
        if (*local_110 - lVar6 != 0) {
          _objc_enumerationMutation(*local_110 - lVar6,uVar3);
        }
        uVar7 = *(undefined8 *)(local_118 + local_1c0 * 8);
        local_e0 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_path_0269d4d8);
        _objc_retainAutoreleasedReturnValue();
        local_128 = uVar7;
        if ((*(byte *)(param_1 + 0x40) & 1) == 0) {
          puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,
                     PTR_s_importContentsAtPath_intoPack__026ae3b0,uVar7,
                     *(undefined8 *)(param_1 + 0x28));
          local_c0 = local_c0 + (long)puVar4;
        }
        else {
          puVar4 = PTR_WCRefineLocalEmoticonStore_026ce440;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineLocalEmoticonStore_026ce440,
                     PTR_s_importDouTuBackupAtPath_intoPack_026ae400,uVar7,
                     *(undefined8 *)(param_1 + 0x28),local_c8);
          local_c0 = local_c0 + (long)puVar4;
        }
        _objc_storeStrong(&local_128,0);
        local_1c0 = local_1c0 + 1;
      } while (local_1c0 < local_1b8);
      local_1b8 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_120,auStack_a8,0x10);
      local_1c0 = 0;
    } while (local_1b8 != 0);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_180 = PTR___NSConcreteStackBlock_02578660;
  local_178 = 0xc2000000;
  local_174 = 0;
  local_170 = FUN_01b6feb4;
  local_168 = &DAT_0258b3b8;
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = *(byte *)(param_1 + 0x40) & 1;
  uVar5 = *(undefined8 *)(param_1 + 0x30);
  local_160 = uVar7;
  (*(code *)PTR__objc_retain_02578638)();
  puVar2 = local_c8;
  local_138 = local_c0;
  local_158 = uVar5;
  (*(code *)PTR__objc_retain_02578638)();
  local_150 = puVar2;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  (*(code *)PTR__objc_retain_02578638)();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  local_148 = uVar7;
  (*(code *)PTR__objc_retain_02578638)();
  local_140 = uVar5;
  _dispatch_async(puVar4,&local_180);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_140);
  _objc_storeStrong(&local_148,0);
  _objc_storeStrong(&local_150,0);
  _objc_storeStrong(&local_158,0);
  _objc_storeStrong(&local_160,0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

