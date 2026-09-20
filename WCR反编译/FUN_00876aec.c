// FUN_00876aec @ 00876aec

void FUN_00876aec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_1b0;
  undefined *local_1a8;
  ulong local_170;
  ulong local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  undefined8 local_120;
  undefined *local_108;
  undefined4 local_fc;
  undefined8 local_f8;
  ulong local_f0;
  undefined1 auStack_e8 [128];
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f0 = 0;
  _objc_storeStrong(&local_f0,param_1);
  local_f8 = 0;
  _objc_storeStrong(&local_f8,param_2);
  if (local_f0 == 0) {
    local_fc = 1;
  }
  else {
    local_68 = &cf__imageName;
    local_60 = &cf_imageName;
    local_58 = &cf__assetName;
    local_50 = &cf_assetName;
    local_48 = &cf__symbolName;
    local_40 = &cf_symbolName;
    local_38 = &cf__name;
    local_30 = &cf_name;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_68,8
              );
    _objc_retainAutoreleasedReturnValue();
    local_108 = puVar1;
    _memset(auStack_160,0,0x40);
    puVar1 = local_108;
    (*(code *)PTR__objc_retain_02578638)();
    local_1a8 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_e8,0x10);
    if (local_1a8 != (undefined *)0x0) {
      lVar4 = *local_150;
      local_1b0 = (undefined *)0x0;
      do {
        do {
          if (*local_150 - lVar4 != 0) {
            _objc_enumerationMutation(*local_150 - lVar4,puVar1);
          }
          local_120 = *(undefined8 *)(local_158 + (long)local_1b0 * 8);
          uVar2 = local_f0;
          FUN_00876968(local_f0,local_120);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_168 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
          if ((uVar2 & 1) != 0) {
            FUN_00876528(local_f8,local_168);
            FUN_0087667c(local_f8,local_168);
          }
          _objc_storeStrong(&local_168,0);
          local_1b0 = local_1b0 + 1;
        } while (local_1b0 < local_1a8);
        local_1a8 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_e8,
                   0x10);
        local_1b0 = (undefined *)0x0;
      } while (local_1a8 != (undefined *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(puVar1);
    uVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_description_026ca5f8);
    _objc_retainAutoreleasedReturnValue();
    local_170 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
    if (uVar2 != 0) {
      FUN_0087667c(uVar2,local_f8,local_170);
    }
    _objc_storeStrong(&local_170);
    _objc_storeStrong(&local_108,0);
    local_fc = 0;
  }
  _objc_storeStrong(&local_f8);
  _objc_storeStrong(&local_f0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

