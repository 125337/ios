// FUN_00f610dc @ 00f610dc

void FUN_00f610dc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *local_180;
  undefined *local_178;
  ulong local_140;
  undefined8 local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  ulong local_e8;
  uint local_dc;
  ulong local_d8;
  ulong local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  _objc_storeStrong(&local_d8,param_1);
  uVar1 = local_d8;
  (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_length_0269cca0);
  if (uVar1 == 0) {
    local_d0 = 0;
    local_dc = 1;
  }
  else {
    FUN_00f62910();
    _objc_retainAutoreleasedReturnValue();
    local_e8 = uVar1;
    if (uVar1 == 0) {
      local_d0 = 0;
      local_dc = 1;
    }
    else {
      _memset(auStack_130,0,0x40);
      local_c8 = &cf_getContactByNameFromCache_;
      local_c0 = &cf_getContactByNameFromDB_;
      local_b8 = &cf_getContactForSearchByName_;
      local_b0 = &cf_getContactByName_;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c8
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_178 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_178 != (undefined *)0x0) {
        lVar3 = *local_120;
        local_180 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar3 != 0) {
              _objc_enumerationMutation(*local_120 - lVar3,puVar2);
            }
            uVar4 = *(undefined8 *)(local_128 + (long)local_180 * 8);
            local_f0 = uVar4;
            _NSSelectorFromString();
            uVar1 = local_e8;
            local_138 = uVar4;
            (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_respondsToSelector__026ca818,uVar4)
            ;
            if ((uVar1 & 1) != 0) {
              uVar1 = local_e8;
              (*(code *)PTR__objc_msgSend_02578628)(local_e8,local_138,local_d8);
              _objc_retainAutoreleasedReturnValue();
              local_140 = uVar1;
              if (uVar1 != 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_d0 = uVar1;
              }
              local_dc = (uint)(uVar1 != 0);
              _objc_storeStrong(&local_140,0);
              if (local_dc != 0) goto LAB_00f613b0;
            }
            local_180 = local_180 + 1;
          } while (local_180 < local_178);
          local_178 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_180 = (undefined *)0x0;
        } while (local_178 != (undefined *)0x0);
      }
      local_dc = 0;
LAB_00f613b0:
      (*(code *)PTR__objc_release_02578630)(puVar2);
      if (local_dc == 0) {
        local_d0 = 0;
        local_dc = 1;
      }
    }
    _objc_storeStrong(&local_e8,0);
  }
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

