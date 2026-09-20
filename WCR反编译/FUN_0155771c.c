// FUN_0155771c @ 0155771c

void FUN_0155771c(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_190;
  undefined *local_188;
  ulong local_160;
  undefined8 local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  ulong local_108;
  undefined8 local_100;
  undefined *local_f8;
  ulong local_f0;
  undefined4 local_e4;
  ulong local_e0;
  ulong local_d8;
  undefined8 local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  uVar1 = local_d8;
  FUN_01528c84();
  _objc_retainAutoreleasedReturnValue();
  local_e0 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_d0 = 0;
    local_e4 = 1;
  }
  else {
    FUN_0152b7ec();
    _objc_retainAutoreleasedReturnValue();
    local_f0 = uVar1;
    if (uVar1 == 0) {
      local_d0 = 0;
      local_e4 = 1;
    }
    else {
      local_48 = &cf_getContactByNameFromCache_;
      local_40 = &cf_getContactByNameFromDB_;
      local_38 = &cf_getContactForSearchByName_;
      local_30 = &cf_getContactByName_;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_100 = 0;
      local_108 = 0x8000000000000000;
      local_f8 = puVar2;
      _memset(auStack_150,0,0x40);
      puVar2 = local_f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_188 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_c8,0x10)
      ;
      if (local_188 != (undefined *)0x0) {
        lVar3 = *local_140;
        local_190 = (undefined *)0x0;
        do {
          do {
            if (*local_140 - lVar3 != 0) {
              _objc_enumerationMutation(*local_140 - lVar3,puVar2);
            }
            uVar4 = *(undefined8 *)(local_148 + (long)local_190 * 8);
            local_110 = uVar4;
            _NSSelectorFromString();
            uVar1 = local_f0;
            local_158 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_respondsToSelector__026ca818,uVar4)
            ;
            if ((uVar1 & 1) != 0) {
              uVar1 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_158,local_e0);
              _objc_retainAutoreleasedReturnValue();
              local_160 = uVar1;
              if (uVar1 == 0) {
                local_e4 = 3;
              }
              else {
                FUN_0156471c();
                if ((long)local_108 < (long)uVar1) {
                  local_108 = uVar1;
                  _objc_storeStrong(&local_100,local_160);
                }
                local_e4 = 0;
              }
              _objc_storeStrong(&local_160,0);
            }
            local_190 = local_190 + 1;
          } while (local_190 < local_188);
          local_188 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_c8,
                     0x10);
          local_190 = (undefined *)0x0;
        } while (local_188 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar4 = local_100;
      (*(code *)PTR__objc_retain_02578638)();
      local_d0 = uVar4;
      local_e4 = 1;
      _objc_storeStrong(&local_100);
      _objc_storeStrong(&local_f8,0);
    }
    _objc_storeStrong(&local_f0,0);
  }
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

