// FUN_01a9b024 @ 01a9b024

void FUN_01a9b024(undefined8 param_1)

{
  bool bVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_170;
  undefined *local_168;
  ulong local_138;
  undefined1 auStack_130 [8];
  long local_128;
  long *local_120;
  undefined8 local_f0;
  undefined *local_e8;
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
  local_50 = &cf_m_nsUsrName;
  local_48 = &cf_m_nsUserName;
  local_40 = &cf_username;
  local_38 = &cf_userName;
  local_30 = &cf_getContactUserName;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_50,5);
  _objc_retainAutoreleasedReturnValue();
  local_e8 = puVar3;
  _memset(auStack_130,0,0x40);
  puVar3 = local_e8;
  (*(code *)PTR__objc_retain_02578638)();
  local_168 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_d0,0x10);
  if (local_168 != (undefined *)0x0) {
    lVar7 = *local_120;
    local_170 = (undefined *)0x0;
    do {
      do {
        if (*local_120 - lVar7 != 0) {
          _objc_enumerationMutation(*local_120 - lVar7,puVar3);
        }
        local_f0 = *(undefined8 *)(local_128 + (long)local_170 * 8);
        uVar4 = local_e0;
        FUN_01a9c404(local_e0,local_f0);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        local_138 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if ((uVar4 & 1) == 0) {
          uVar6 = local_e0;
          FUN_01a9c574(local_e0,local_f0);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_138;
          local_138 = uVar6;
          (*(code *)PTR__objc_release_02578630)(uVar4);
        }
        uVar4 = local_138;
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
        if (((uVar4 & 1) == 0) ||
           (uVar6 = local_138,
           (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0), uVar4 = local_138
           , uVar6 == 0)) {
          bVar1 = false;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_d8 = uVar4;
          bVar1 = true;
        }
        _objc_storeStrong(&local_138,0);
        bVar2 = true;
        if (bVar1) goto LAB_01a9b334;
        local_170 = local_170 + 1;
      } while (local_170 < local_168);
      local_168 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_130,auStack_d0,0x10)
      ;
      local_170 = (undefined *)0x0;
    } while (local_168 != (undefined *)0x0);
  }
  bVar2 = false;
LAB_01a9b334:
  (*(code *)PTR__objc_release_02578630)(puVar3);
  if (!bVar2) {
    local_d8 = 0;
  }
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_e0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_d8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

