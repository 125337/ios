// FUN_008e59f0 @ 008e59f0

void FUN_008e59f0(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *local_1d0;
  undefined *local_1c8;
  long local_188;
  undefined1 auStack_180 [8];
  long local_178;
  long *local_170;
  undefined8 local_140;
  undefined *local_138 [3];
  long local_120;
  ulong local_118;
  uint local_10c;
  long local_108;
  long local_100;
  undefined1 auStack_f8 [128];
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  undefined *local_48 [4];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_108 = 0;
  _objc_storeStrong(&local_108,param_1);
  if (local_108 == 0) {
    local_100 = 0;
    local_10c = 1;
  }
  else {
    local_48[0] = PTR_s_messageWrap_0269d070;
    local_48[1] = PTR_s_getMessageWrap_0269d068;
    local_48[2] = PTR_s_getCurrentMessageWrap_0269d060;
    local_48[3] = PTR_s_msgWrap_0269d078;
    for (local_118 = 0; local_118 < 4; local_118 = local_118 + 1) {
      lVar3 = local_108;
      FUN_008e6088(local_108,local_48[local_118]);
      _objc_retainAutoreleasedReturnValue();
      local_120 = lVar3;
      if (lVar3 != 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_100 = lVar3;
      }
      local_10c = (uint)(lVar3 != 0);
      _objc_storeStrong(&local_120,0);
      if (local_10c != 0) goto LAB_008e5e38;
    }
    local_78 = &cf_messageWrap;
    local_70 = &cf_msgWrap;
    local_68 = &cf_m_messageWrap;
    local_60 = &cf_m_msgWrap;
    local_58 = &cf__messageWrap;
    local_50 = &cf__msgWrap;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_78,6
              );
    _objc_retainAutoreleasedReturnValue();
    local_138[0] = puVar1;
    _memset(auStack_180,0,0x40);
    puVar1 = local_138[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_1c8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_f8,0x10);
    if (local_1c8 != (undefined *)0x0) {
      lVar3 = *local_170;
      local_1d0 = (undefined *)0x0;
      do {
        do {
          if (*local_170 - lVar3 != 0) {
            _objc_enumerationMutation(*local_170 - lVar3,puVar1);
          }
          local_140 = *(undefined8 *)(local_178 + (long)local_1d0 * 8);
          lVar2 = local_108;
          (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_valueForKey__0269d128,local_140);
          _objc_retainAutoreleasedReturnValue();
          local_188 = lVar2;
          if (lVar2 != 0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_100 = lVar2;
          }
          local_10c = (uint)(lVar2 != 0);
          _objc_storeStrong(&local_188,0);
          if (local_10c != 0) goto LAB_008e5da4;
          local_1d0 = local_1d0 + 1;
        } while (local_1d0 < local_1c8);
        local_1c8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_180,auStack_f8,
                   0x10);
        local_1d0 = (undefined *)0x0;
      } while (local_1c8 != (undefined *)0x0);
    }
    local_10c = 0;
LAB_008e5da4:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_10c == 0) {
      local_100 = 0;
      local_10c = 1;
    }
    _objc_storeStrong(local_138,0);
  }
LAB_008e5e38:
  _objc_storeStrong(&local_108,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_100);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

