// FUN_00419f54 @ 00419f54

byte FUN_00419f54(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *local_180;
  undefined *local_178;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  int local_f8;
  ulong local_e8;
  byte local_d9;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e8 = 0;
  _objc_storeStrong(&local_e8,param_1);
  uVar2 = local_e8;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_d9 = 0;
    local_f8 = 1;
  }
  else {
    _memset(auStack_140,0,0x40);
    local_d8 = &cf_sessionUserName;
    local_d0 = &cf_senderUserName;
    local_c8 = &cf_realChatUserName;
    local_c0 = &cf_fromUserName;
    local_b8 = &cf_toUserName;
    local_b0 = &cf_sessionHint;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d8,6
              );
    _objc_retainAutoreleasedReturnValue();
    local_178 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_178 != (undefined *)0x0) {
      lVar4 = *local_130;
      local_180 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar4 != 0) {
            _objc_enumerationMutation(*local_130 - lVar4,puVar1);
          }
          local_100 = *(undefined8 *)(local_138 + (long)local_180 * 8);
          uVar2 = local_e8;
          FUN_004055cc(local_e8,local_100);
          _objc_retainAutoreleasedReturnValue();
          uVar3 = uVar2;
          FUN_0041df0c();
          (*(code *)PTR__objc_release_02578630)(uVar2);
          if ((uVar3 & 1) != 0) {
            local_d9 = 1;
            local_f8 = 1;
            goto LAB_0041a248;
          }
          local_180 = local_180 + 1;
        } while (local_180 < local_178);
        local_178 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,
                   0x10);
        local_180 = (undefined *)0x0;
      } while (local_178 != (undefined *)0x0);
    }
    local_f8 = 0;
LAB_0041a248:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_f8 == 0) {
      local_d9 = 0;
      local_f8 = 1;
    }
  }
  _objc_storeStrong(&local_e8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d9 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

