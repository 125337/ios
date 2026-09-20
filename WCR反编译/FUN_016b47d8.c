// FUN_016b47d8 @ 016b47d8

void FUN_016b47d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong local_1f8;
  ulong local_1f0;
  byte local_1c4;
  undefined *local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined1 auStack_148 [8];
  long local_140;
  long *local_138;
  ulong local_108;
  ulong local_100;
  byte local_f6;
  byte local_f5;
  uint local_f4;
  undefined *local_f0;
  undefined *local_e8 [3];
  undefined8 local_d0;
  ulong local_c8;
  undefined8 local_c0;
  ulong local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_3);
  uVar2 = local_c0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_stringByAppendingPathComponent__026cab30);
  _objc_retainAutoreleasedReturnValue();
  local_d0 = uVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  uVar4 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_fileExistsAtPath__026ca630,local_d0);
  if ((uVar4 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,local_d0);
    _objc_retainAutoreleasedReturnValue();
    local_e8[0] = puVar1;
    if (puVar1 == (undefined *)0x0) {
LAB_016b4a34:
      local_f4 = 0;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,puVar1);
      _objc_retainAutoreleasedReturnValue();
      local_f0 = puVar3;
      if (puVar3 != (undefined *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = puVar3;
      }
      local_f4 = (uint)(puVar3 != (undefined *)0x0);
      _objc_storeStrong(&local_f0,0);
      if (local_f4 == 0) goto LAB_016b4a34;
    }
    _objc_storeStrong(local_e8,0);
    if (local_f4 != 0) goto LAB_016b4f54;
  }
  uVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_hasPrefix__0269d320,&cf_Me);
  local_f5 = (byte)uVar4;
  uVar4 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_containsString__0269d0b0,&cf_dark);
  local_1c4 = 1;
  if ((uVar4 & 1) == 0) {
    uVar4 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_containsString__0269d0b0,&cf_Dark);
    local_1c4 = (byte)uVar4;
  }
  local_f6 = local_1c4 & 1;
  uVar4 = (ulong)(local_f5 & 1);
  FUN_016b5998(uVar4,local_f6);
  _objc_retainAutoreleasedReturnValue();
  local_100 = uVar4;
  _memset(auStack_148,0,0x40);
  uVar4 = local_100;
  (*(code *)PTR__objc_retain_02578638)();
  local_1f0 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
  if (local_1f0 != 0) {
    lVar5 = *local_138;
    local_1f8 = 0;
    do {
      do {
        if (*local_138 - lVar5 != 0) {
          _objc_enumerationMutation(*local_138 - lVar5,uVar4);
        }
        uVar6 = *(ulong *)(local_140 + local_1f8 * 8);
        local_108 = uVar6;
        (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_isEqualToString__0269ccc8,local_b8);
        uVar2 = local_c0;
        if ((uVar6 & 1) == 0) {
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf____png
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar2,PTR_s_stringByAppendingPathComponent__026cab30);
          _objc_retainAutoreleasedReturnValue();
          local_150 = uVar2;
          (*(code *)PTR__objc_release_02578630)(puVar1);
          uVar6 = local_c8;
          (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_fileExistsAtPath__026ca630,local_150)
          ;
          if ((uVar6 & 1) == 0) {
LAB_016b4e50:
            local_f4 = 0;
          }
          else {
            puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
                       local_150);
            _objc_retainAutoreleasedReturnValue();
            local_158 = puVar1;
            if (puVar1 == (undefined *)0x0) {
LAB_016b4e2c:
              local_f4 = 0;
            }
            else {
              puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithData__0269d4c8,puVar1);
              _objc_retainAutoreleasedReturnValue();
              local_160 = puVar3;
              if (puVar3 != (undefined *)0x0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_b0 = puVar3;
              }
              local_f4 = (uint)(puVar3 != (undefined *)0x0);
              _objc_storeStrong(&local_160,0);
              if (local_f4 == 0) goto LAB_016b4e2c;
            }
            _objc_storeStrong(&local_158,0);
            if (local_f4 == 0) goto LAB_016b4e50;
          }
          _objc_storeStrong(&local_150,0);
          if (local_f4 != 0) goto LAB_016b4ee4;
        }
        local_1f8 = local_1f8 + 1;
      } while (local_1f8 < local_1f0);
      local_1f0 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_148,auStack_a8,0x10);
      local_1f8 = 0;
    } while (local_1f0 != 0);
  }
  local_f4 = 0;
LAB_016b4ee4:
  (*(code *)PTR__objc_release_02578630)(uVar4);
  if (local_f4 == 0) {
    local_b0 = (undefined *)0x0;
    local_f4 = 1;
  }
  _objc_storeStrong(&local_100,0);
LAB_016b4f54:
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_c0,0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

