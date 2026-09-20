// FUN_00199ed4 @ 00199ed4

void FUN_00199ed4(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_258;
  undefined *local_250;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  undefined *local_118;
  undefined *local_110;
  byte local_101;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_e8;
  ulong local_e0;
  undefined4 local_d8;
  ulong local_c8;
  byte local_b9;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  uVar1 = local_b8;
  local_b9 = param_2;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  local_c8 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    puVar2 = *(undefined **)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = 1;
    local_b0 = puVar2;
  }
  else {
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_stringByDeletingLastPathComponen_0269fb90);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_c8;
    local_e0 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_pathExtension_0269e090);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_e8;
    local_f0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = uVar1;
    FUN_0019b2f0();
    _objc_retainAutoreleasedReturnValue();
    local_100 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isEqualToString__0269ccc8,local_f8);
    local_101 = ((byte)uVar1 ^ 1) & 1;
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_110 = puVar2;
    if ((local_b9 & 1) != 0) {
      if ((local_101 & 1) != 0) {
        FUN_0019b5d0(puVar2,local_e8);
      }
      uVar1 = local_f0;
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
      puVar2 = local_110;
      if (uVar1 == 0) {
        uVar1 = local_100;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_100,PTR_s_stringByAppendingString__0269d398,&cf__dark);
        _objc_retainAutoreleasedReturnValue();
        FUN_0019b5d0(puVar2);
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                   &cf____dark___);
        _objc_retainAutoreleasedReturnValue();
        FUN_0019b5d0(puVar2);
        (*(code *)PTR__objc_release_02578630)(puVar4);
      }
    }
    uVar1 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_length_0269cca0);
    puVar2 = local_110;
    if (uVar1 == 0) {
      FUN_0019b5d0(0,local_110,local_100);
    }
    else {
      puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf______);
      _objc_retainAutoreleasedReturnValue();
      FUN_0019b5d0(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
    }
    FUN_0019b5d0(local_110,local_e8);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    puVar4 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_count_0269cfe0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_arrayWithCapacity__0269d9b8,puVar4);
    _objc_retainAutoreleasedReturnValue();
    local_118 = puVar2;
    _memset(auStack_160,0,0x40);
    puVar2 = local_110;
    (*(code *)PTR__objc_retain_02578638)();
    local_250 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10);
    if (local_250 != (undefined *)0x0) {
      lVar5 = *local_150;
      local_258 = (undefined *)0x0;
      do {
        do {
          if (*local_150 - lVar5 != 0) {
            _objc_enumerationMutation(*local_150 - lVar5,puVar2);
          }
          local_120 = *(undefined8 *)(local_158 + (long)local_258 * 8);
          uVar1 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0);
          if ((uVar1 == 0) ||
             (uVar1 = local_e0,
             (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_isEqualToString__0269ccc8,&cf__),
             puVar4 = local_118, (uVar1 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_addObject__0269d180,local_120);
          }
          else {
            uVar1 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,PTR_s_stringByAppendingPathComponent__026cab30,local_120);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addObject__0269d180);
            (*(code *)PTR__objc_release_02578630)(uVar1);
          }
          local_258 = local_258 + 1;
        } while (local_258 < local_250);
        local_250 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                   0x10);
        local_258 = (undefined *)0x0;
      } while (local_250 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_118;
    (*(code *)PTR__objc_retain_02578638)();
    local_b0 = puVar2;
    local_d8 = 1;
    _objc_storeStrong(&local_118);
    _objc_storeStrong(&local_110,0);
    _objc_storeStrong(&local_100,0);
    _objc_storeStrong(&local_f8,0);
    _objc_storeStrong(&local_f0,0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c8);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

