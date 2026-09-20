// FUN_0028717c @ 0028717c

void FUN_0028717c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *local_310;
  undefined *local_308;
  undefined *local_280;
  undefined *local_278;
  ulong local_248;
  undefined1 auStack_240 [8];
  long local_238;
  long *local_230;
  undefined8 local_200;
  undefined *local_1f8;
  ulong local_1f0;
  undefined8 local_1e8;
  undefined1 auStack_1e0 [8];
  long local_1d8;
  long *local_1d0;
  undefined8 local_1a0;
  undefined *local_188;
  int local_17c;
  ulong local_178;
  ulong local_170;
  undefined1 auStack_168 [128];
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  undefined1 auStack_c8 [128];
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_178 = 0;
  _objc_storeStrong(&local_178,param_1);
  if (local_178 == 0) {
    local_170 = 0;
    local_17c = 1;
  }
  else {
    local_48 = &cf_coverUrlWithToken;
    local_40 = &cf_thumbUrlWithToken;
    local_38 = &cf_fullCoverUrlWithToken;
    local_30 = &cf_fullThumbUrlWithToken;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4
              );
    _objc_retainAutoreleasedReturnValue();
    local_188 = puVar1;
    _memset(auStack_1e0,0,0x40);
    puVar1 = local_188;
    (*(code *)PTR__objc_retain_02578638)();
    local_278 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_c8,0x10);
    if (local_278 != (undefined *)0x0) {
      lVar5 = *local_1d0;
      local_280 = (undefined *)0x0;
      do {
        do {
          if (*local_1d0 - lVar5 != 0) {
            _objc_enumerationMutation(*local_1d0 - lVar5,puVar1);
          }
          uVar6 = *(undefined8 *)(local_1d8 + (long)local_280 * 8);
          local_1a0 = uVar6;
          _NSSelectorFromString();
          uVar7 = local_178;
          local_1e8 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_respondsToSelector__026ca818,uVar6);
          if ((uVar7 & 1) != 0) {
            uVar2 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,local_1e8);
            _objc_retainAutoreleasedReturnValue();
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_1f0 = uVar2;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            uVar7 = uVar2 & 0xffffffff;
            if ((uVar2 & 1) == 0) {
LAB_00287460:
              local_17c = 0;
            }
            else {
              uVar4 = local_1f0;
              (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_length_0269cca0);
              uVar2 = local_1f0;
              uVar7 = 0;
              if (uVar4 == 0) goto LAB_00287460;
              (*(code *)PTR__objc_retain_02578638)();
              local_170 = uVar2;
              uVar7 = 1;
              local_17c = 1;
            }
            _objc_storeStrong(uVar7,&local_1f0,0);
            if (local_17c != 0) goto LAB_002874f8;
          }
          local_280 = local_280 + 1;
        } while (local_280 < local_278);
        local_278 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1e0,auStack_c8,
                   0x10);
        local_280 = (undefined *)0x0;
      } while (local_278 != (undefined *)0x0);
    }
    local_17c = 0;
LAB_002874f8:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_17c == 0) {
      local_e8 = &cf_coverURL;
      local_e0 = &cf_thumbURL;
      local_d8 = &cf_fullCoverUrl;
      local_d0 = &cf_fullThumbUrl;
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_e8
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      local_1f8 = puVar1;
      _memset(auStack_240,0,0x40);
      puVar1 = local_1f8;
      (*(code *)PTR__objc_retain_02578638)();
      local_308 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_168,0x10
                );
      if (local_308 != (undefined *)0x0) {
        lVar5 = *local_230;
        local_310 = (undefined *)0x0;
        do {
          do {
            if (*local_230 - lVar5 != 0) {
              _objc_enumerationMutation(*local_230 - lVar5,puVar1);
            }
            local_200 = *(undefined8 *)(local_238 + (long)local_310 * 8);
            local_248 = 0;
            uVar2 = local_178;
            (*(code *)PTR__objc_msgSend_02578628)(local_178,PTR_s_valueForKey__0269d128,local_200);
            _objc_retainAutoreleasedReturnValue();
            uVar7 = local_248;
            local_248 = uVar2;
            (*(code *)PTR__objc_release_02578630)(uVar7);
            uVar2 = local_248;
            puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
            uVar7 = uVar2 & 0xffffffff;
            if ((uVar2 & 1) == 0) {
LAB_002877e8:
              local_17c = 0;
            }
            else {
              uVar4 = local_248;
              (*(code *)PTR__objc_msgSend_02578628)(local_248,PTR_s_length_0269cca0);
              uVar2 = local_248;
              uVar7 = 0;
              if (uVar4 == 0) goto LAB_002877e8;
              (*(code *)PTR__objc_retain_02578638)();
              local_170 = uVar2;
              uVar7 = 1;
              local_17c = 1;
            }
            _objc_storeStrong(uVar7,&local_248,0);
            if (local_17c != 0) goto LAB_0028787c;
            local_310 = local_310 + 1;
          } while (local_310 < local_308);
          local_308 = puVar1;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_240,auStack_168,
                     0x10);
          local_310 = (undefined *)0x0;
        } while (local_308 != (undefined *)0x0);
      }
      local_17c = 0;
LAB_0028787c:
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (local_17c == 0) {
        local_170 = 0;
        local_17c = 1;
      }
      _objc_storeStrong(&local_1f8,0);
    }
    _objc_storeStrong(&local_188,0);
  }
  _objc_storeStrong(&local_178,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_170);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

