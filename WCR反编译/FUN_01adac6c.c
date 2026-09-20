// FUN_01adac6c @ 01adac6c

void FUN_01adac6c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *local_1a8;
  undefined *local_1a0;
  ulong local_168 [4];
  ulong local_148;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  undefined *local_f0;
  int local_e4;
  ulong local_e0;
  ulong local_d8;
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
  uVar7 = local_e0;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar2 = local_e0;
  if ((uVar7 & 1) == 0) {
    local_50 = &cf_m_nsUsrName;
    local_48 = &cf_m_nsUserName;
    local_40 = &cf_username;
    local_38 = &cf_userName;
    local_30 = &cf_getContactUserName;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5
              );
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar1;
    _memset(auStack_138,0,0x40);
    puVar1 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a0 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_d0,0x10);
    if (local_1a0 != (undefined *)0x0) {
      lVar5 = *local_128;
      local_1a8 = (undefined *)0x0;
      do {
        do {
          if (*local_128 - lVar5 != 0) {
            _objc_enumerationMutation(*local_128 - lVar5,puVar1);
          }
          uVar6 = *(undefined8 *)(local_130 + (long)local_1a8 * 8);
          local_f8 = uVar6;
          _NSSelectorFromString();
          uVar7 = local_e0;
          local_140 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_respondsToSelector__026ca818,uVar6);
          if ((uVar7 & 1) != 0) {
            uVar2 = local_e0;
            (*(code *)PTR__objc_msgSend_02578628)(local_e0,local_140);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_148 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            uVar7 = uVar2 & 0xffffffff;
            if ((uVar2 & 1) == 0) {
LAB_01adaf64:
              local_e4 = 0;
            }
            else {
              uVar4 = local_148;
              (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
              uVar2 = local_148;
              uVar7 = 0;
              if (uVar4 == 0) goto LAB_01adaf64;
              (*(code *)PTR__objc_retain_02578638)();
              local_d8 = uVar2;
              uVar7 = 1;
              local_e4 = 1;
            }
            _objc_storeStrong(uVar7,&local_148,0);
            if (local_e4 != 0) goto LAB_01adb154;
          }
          uVar2 = local_e0;
          (*(code *)PTR__objc_msgSend_02578628)(local_e0,PTR_s_valueForKey__0269d128,local_f8);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_168[0] = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          uVar7 = uVar2 & 0xffffffff;
          if ((uVar2 & 1) == 0) {
LAB_01adb0c8:
            local_e4 = 0;
          }
          else {
            uVar4 = local_168[0];
            (*(code *)PTR__objc_msgSend_02578628)(local_168[0],PTR_s_length_0269cca0);
            uVar2 = local_168[0];
            uVar7 = 0;
            if (uVar4 == 0) goto LAB_01adb0c8;
            (*(code *)PTR__objc_retain_02578638)();
            local_d8 = uVar2;
            uVar7 = 1;
            local_e4 = 1;
          }
          _objc_storeStrong(uVar7,local_168,0);
          if (local_e4 != 0) goto LAB_01adb154;
          local_1a8 = local_1a8 + 1;
        } while (local_1a8 < local_1a0);
        local_1a0 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_d0,
                   0x10);
        local_1a8 = (undefined *)0x0;
      } while (local_1a0 != (undefined *)0x0);
    }
    local_e4 = 0;
LAB_01adb154:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_e4 == 0) {
      local_d8 = 0;
      local_e4 = 1;
    }
    _objc_storeStrong(&local_f0,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_d8 = uVar2;
    local_e4 = 1;
  }
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

