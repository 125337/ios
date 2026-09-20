// FUN_00872320 @ 00872320

void FUN_00872320(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  undefined *local_2e0;
  undefined *local_2d8;
  undefined *local_290;
  undefined *local_288;
  ulong *local_230;
  undefined1 auStack_208 [8];
  long local_200;
  long *local_1f8;
  undefined8 local_1c8;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  undefined8 local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  ulong local_160;
  ulong local_158 [3];
  undefined4 local_13c;
  undefined8 local_138;
  ulong local_130;
  undefined1 auStack_128 [128];
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_130 = 0;
  _objc_storeStrong(&local_130,param_1);
  puVar1 = &local_138;
  local_138 = 0;
  _objc_storeStrong(puVar1,param_2);
  if (local_130 == 0) {
    local_13c = 1;
  }
  else {
    FUN_00871048();
    if (((ulong)puVar1 & 1) == 0) {
      local_13c = 1;
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSThread_026ce0a8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
      if (((ulong)puVar2 & 1) == 0) {
        local_13c = 1;
      }
      else {
        uVar3 = local_130;
        FUN_00872d54();
        _objc_retainAutoreleasedReturnValue();
        if (uVar3 == 0) {
          local_230 = &local_130;
        }
        else {
          local_230 = local_158;
        }
        uVar4 = *local_230;
        local_158[0] = uVar3;
        (*(code *)PTR__objc_retain_02578638)();
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        local_160 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_160;
        local_168 = puVar2;
        FUN_00871894();
        if ((uVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_160);
        }
        puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_arrayWithObject__0269d538,
                   local_160);
        _objc_retainAutoreleasedReturnValue();
        local_170 = puVar2;
        while (puVar2 = local_170,
              (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_count_0269cfe0),
              puVar2 != (undefined *)0x0) {
          puVar2 = local_170;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_lastObject_0269d200);
          _objc_retainAutoreleasedReturnValue();
          local_178 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_removeLastObject_0269e830);
          if ((((long)local_178 - local_160 != 0) &&
              (puVar2 = local_178, FUN_00871894((long)local_178 - local_160),
              ((ulong)puVar2 & 1) != 0)) &&
             (puVar2 = local_168,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_168,PTR_s_containsObject__0269cbb8,local_178),
             ((ulong)puVar2 & 1) == 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_addObject__0269d180,local_178);
          }
          _memset(auStack_1c0,0,0x40);
          puVar2 = local_178;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_subviews_026cab40);
          _objc_retainAutoreleasedReturnValue();
          local_288 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          if (local_288 != (undefined *)0x0) {
            lVar5 = *local_1b0;
            local_290 = (undefined *)0x0;
            do {
              do {
                if (*local_1b0 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_1b0 - lVar5,puVar2);
                }
                local_180 = *(undefined8 *)(local_1b8 + (long)local_290 * 8);
                (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_addObject__0269d180,local_180)
                ;
                local_290 = local_290 + 1;
              } while (local_290 < local_288);
              local_288 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,
                         auStack_a8,0x10);
              local_290 = (undefined *)0x0;
            } while (local_288 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          _objc_storeStrong(&local_178,0);
        }
        puVar2 = local_168;
        (*(code *)PTR__objc_msgSend_02578628)(local_168,PTR_s_count_0269cfe0);
        if (puVar2 == (undefined *)0x0) {
          local_13c = 1;
        }
        else {
          _memset(auStack_208,0,0x40);
          puVar2 = local_168;
          (*(code *)PTR__objc_retain_02578638)();
          local_2d8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,auStack_128,
                     0x10);
          if (local_2d8 != (undefined *)0x0) {
            lVar5 = *local_1f8;
            local_2e0 = (undefined *)0x0;
            do {
              do {
                if (*local_1f8 - lVar5 != 0) {
                  _objc_enumerationMutation(*local_1f8 - lVar5,puVar2);
                }
                local_1c8 = *(undefined8 *)(local_200 + (long)local_2e0 * 8);
                FUN_00872ef4(local_1c8,local_138);
                local_2e0 = local_2e0 + 1;
              } while (local_2e0 < local_2d8);
              local_2d8 = puVar2;
              (*(code *)PTR__objc_msgSend_02578628)
                        (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_208,
                         auStack_128,0x10);
              local_2e0 = (undefined *)0x0;
            } while (local_2d8 != (undefined *)0x0);
          }
          (*(code *)PTR__objc_release_02578630)(puVar2);
          local_13c = 0;
        }
        _objc_storeStrong(&local_170);
        _objc_storeStrong(&local_168,0);
        _objc_storeStrong(&local_160,0);
        _objc_storeStrong(local_158,0);
      }
    }
  }
  _objc_storeStrong(&local_138);
  _objc_storeStrong(&local_130,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

