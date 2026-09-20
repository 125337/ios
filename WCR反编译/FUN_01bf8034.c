// FUN_01bf8034 @ 01bf8034

void FUN_01bf8034(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *local_208;
  undefined *local_200;
  undefined *local_1a8;
  undefined *local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined1 auStack_150 [8];
  long local_148;
  long *local_140;
  undefined8 local_110;
  undefined *local_108;
  byte local_f9;
  undefined *local_f8;
  undefined *local_f0 [3];
  undefined *local_d8;
  uint local_cc;
  undefined *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_c8 = (undefined *)0x0;
  _objc_storeStrong(&local_c8,param_1);
  if ((local_c8 == (undefined *)0x0) ||
     (puVar2 = local_c8,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_itemAry_026a4dd8),
     ((ulong)puVar2 & 1) == 0)) {
    local_c0 = (undefined *)0x0;
    local_cc = 1;
    goto LAB_01bf8728;
  }
  puVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_c8,PTR_s_performSelector__026ca7b8,PTR_s_itemAry_026a4dd8);
  _objc_retainAutoreleasedReturnValue();
  local_f9 = 0;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_d8 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((((ulong)puVar2 & 1) == 0) ||
     (puVar2 = local_d8, (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_count_0269cfe0),
     puVar2 == (undefined *)0x0)) {
    local_1a8 = (undefined *)0x0;
  }
  else {
    local_1a8 = local_d8;
    (*(code *)PTR__objc_msgSend_02578628)(local_d8,PTR_s_firstObject_0269d1f8);
    _objc_retainAutoreleasedReturnValue();
    local_f9 = 1;
    local_f8 = local_1a8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_f0[0] = local_1a8;
  if ((local_f9 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_f8);
  }
  if (local_f0[0] == (undefined *)0x0) {
    local_c0 = (undefined *)0x0;
    local_cc = 1;
  }
  else {
    puVar2 = local_f0[0];
    (*(code *)PTR__objc_msgSend_02578628)
              (local_f0[0],PTR_s_respondsToSelector__026ca818,PTR_s_thumbImg_026c0b70);
    if (((ulong)puVar2 & 1) != 0) {
      puVar3 = local_f0[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_f0[0],PTR_s_performSelector__026ca7b8,PTR_s_thumbImg_026c0b70);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      local_108 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
      puVar2 = local_108;
      bVar1 = ((ulong)puVar3 & 1) != 0;
      if (bVar1) {
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = puVar2;
      }
      local_cc = (uint)bVar1;
      _objc_storeStrong(&local_108,0);
      if (local_cc != 0) goto LAB_01bf86b8;
    }
    _memset(auStack_150,0,0x40);
    local_b8 = &cf_thumbPath;
    local_b0 = &cf_getThumbPath;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_200 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_200 != (undefined *)0x0) {
      lVar5 = *local_140;
      local_208 = (undefined *)0x0;
      do {
        do {
          if (*local_140 - lVar5 != 0) {
            _objc_enumerationMutation(*local_140 - lVar5,puVar2);
          }
          uVar6 = *(undefined8 *)(local_148 + (long)local_208 * 8);
          local_110 = uVar6;
          _NSSelectorFromString();
          puVar3 = local_f0[0];
          local_158 = uVar6;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_f0[0],PTR_s_respondsToSelector__026ca818,uVar6);
          if (((ulong)puVar3 & 1) != 0) {
            puVar3 = local_f0[0];
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_f0[0],PTR_s_performSelector__026ca7b8,local_158);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
            local_160 = puVar3;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
            uVar7 = (ulong)puVar3 & 0xffffffff;
            if (((ulong)puVar3 & 1) == 0) {
LAB_01bf85fc:
              local_cc = 0;
            }
            else {
              puVar3 = local_160;
              (*(code *)PTR__objc_msgSend_02578628)(local_160,PTR_s_length_0269cca0);
              uVar7 = 0;
              if (puVar3 == (undefined *)0x0) goto LAB_01bf85fc;
              puVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageWithContentsOfFile__0269e0e0,
                         local_160);
              _objc_retainAutoreleasedReturnValue();
              local_168 = puVar3;
              if (puVar3 != (undefined *)0x0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_c0 = puVar3;
              }
              local_cc = (uint)(puVar3 != (undefined *)0x0);
              _objc_storeStrong(&local_168,0);
              uVar7 = (ulong)local_cc;
              if (local_cc == 0) goto LAB_01bf85fc;
            }
            _objc_storeStrong(uVar7,&local_160,0);
            if (local_cc != 0) goto LAB_01bf8690;
          }
          local_208 = local_208 + 1;
        } while (local_208 < local_200);
        local_200 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_150,auStack_a8,
                   0x10);
        local_208 = (undefined *)0x0;
      } while (local_200 != (undefined *)0x0);
    }
    local_cc = 0;
LAB_01bf8690:
    (*(code *)PTR__objc_release_02578630)(puVar2);
    if (local_cc == 0) {
      local_cc = 0;
    }
  }
LAB_01bf86b8:
  _objc_storeStrong(local_f0);
  _objc_storeStrong(&local_d8,0);
  if (local_cc == 0) {
    local_c0 = (undefined *)0x0;
    local_cc = 1;
  }
LAB_01bf8728:
  _objc_storeStrong(&local_c8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_c0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

