// FUN_002f5d90 @ 002f5d90

byte FUN_002f5d90(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined *local_1a0;
  undefined *local_198;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  undefined *local_f8;
  int local_f0;
  ulong local_e0;
  byte local_d1;
  undefined1 auStack_d0 [128];
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_e0 = 0;
  _objc_storeStrong(&local_e0,param_1);
  uVar2 = local_e0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_e0, (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    local_d1 = 0;
    local_f0 = 1;
  }
  else {
    local_50 = &cf_UIInput;
    local_48 = &cf_UIKeyboard;
    local_40 = &cf_UIKB;
    local_38 = &cf_TextEffects;
    local_30 = &cf_RemoteKeyboard;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5
              );
    _objc_retainAutoreleasedReturnValue();
    local_f8 = puVar1;
    _memset(auStack_140,0,0x40);
    puVar1 = local_f8;
    (*(code *)PTR__objc_retain_02578638)();
    local_198 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_d0,0x10);
    if (local_198 != (undefined *)0x0) {
      lVar3 = *local_130;
      local_1a0 = (undefined *)0x0;
      do {
        do {
          if (*local_130 - lVar3 != 0) {
            _objc_enumerationMutation(*local_130 - lVar3,puVar1);
          }
          local_100 = *(undefined8 *)(local_138 + (long)local_1a0 * 8);
          uVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_e0,PTR_s_rangeOfString_options__0269d118,local_100,1);
          if (uVar2 != 0x7fffffffffffffff) {
            local_d1 = 1;
            local_f0 = 1;
            goto LAB_002f60c0;
          }
          local_1a0 = local_1a0 + 1;
        } while (local_1a0 < local_198);
        local_198 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_d0,
                   0x10);
        local_1a0 = (undefined *)0x0;
      } while (local_198 != (undefined *)0x0);
    }
    local_f0 = 0;
LAB_002f60c0:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_f0 == 0) {
      local_d1 = 0;
      local_f0 = 1;
    }
    _objc_storeStrong(&local_f8,0);
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_d1 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

