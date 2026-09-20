// FUN_003c7be4 @ 003c7be4

void FUN_003c7be4(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined *local_1d0;
  undefined *local_1c8;
  cfstringStruct *local_190;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  ulong local_f0;
  undefined1 local_e1;
  cfstringStruct *local_e0;
  undefined4 local_d4;
  cfstringStruct *local_d0;
  ulong local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = 0;
  _objc_storeStrong(&local_c8,param_1);
  local_d0 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_d0,param_2);
  if (local_c8 == 0) {
    local_d4 = 1;
  }
  else {
    if (local_d0 == (cfstringStruct *)0x0) {
      local_190 = &cf___;
    }
    else {
      local_190 = local_d0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_e0 = local_190;
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    local_e1 = (undefined1)uVar5;
    if ((uVar5 & 1) != 0) {
      _memset(auStack_130,0,0x40);
      local_c0 = &cf_setCpKey_;
      local_b8 = &cf_setCPKey_;
      local_b0 = &cf_clearCpKey;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_1c8 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      if (local_1c8 != (undefined *)0x0) {
        lVar4 = *local_120;
        local_1d0 = (undefined *)0x0;
        do {
          do {
            if (*local_120 - lVar4 != 0) {
              _objc_enumerationMutation(*local_120 - lVar4,puVar2);
            }
            uVar5 = *(ulong *)(local_128 + (long)local_1d0 * 8);
            local_f0 = uVar5;
            _NSSelectorFromString();
            uVar1 = local_c8;
            (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,uVar5)
            ;
            if ((uVar1 & 1) != 0) {
              uVar1 = local_f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_hasSuffix__0269d018,&cf__);
              if ((uVar1 & 1) == 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,uVar5);
              }
              else {
                (*(code *)PTR__objc_msgSend_02578628)(local_c8,uVar5,&cf___);
              }
            }
            local_1d0 = local_1d0 + 1;
          } while (local_1d0 < local_1c8);
          local_1c8 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_a8,
                     0x10);
          local_1d0 = (undefined *)0x0;
        } while (local_1c8 != (undefined *)0x0);
      }
      (*(code *)PTR__objc_release_02578630)(puVar2);
      pcVar3 = &cf_setTextForceUpdate_;
      _NSSelectorFromString();
      uVar1 = local_c8;
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_respondsToSelector__026ca818,pcVar3);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,pcVar3,local_e0);
      }
    }
    puVar2 = PTR_s_setText__026caa88;
    uVar1 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,puVar2,local_e0);
    }
    uVar1 = local_c8;
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_setText__026caa88,local_e0);
    }
    _objc_storeStrong(&local_e0,0);
    local_d4 = 0;
  }
  _objc_storeStrong(&local_d0);
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

