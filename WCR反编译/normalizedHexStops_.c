// normalizedHexStops: @ 00f8cad4

/* Function Stack Size: 0x18 bytes */

ID WCRefineGradientPalette::normalizedHexStops_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  ulong local_1b8;
  ulong local_1b0;
  ID local_188;
  undefined4 local_17c;
  undefined1 auStack_178 [8];
  long local_170;
  long *local_168;
  ulong local_138;
  undefined1 *local_130;
  ulong local_128;
  SEL local_120;
  ID local_118;
  undefined1 *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  undefined1 *local_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined1 *local_d8;
  ID local_d0;
  undefined1 *local_c8;
  undefined1 *local_c0;
  undefined1 *local_b8;
  undefined1 *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_128 = 0;
  local_120 = param_2;
  local_118 = param_1;
  _objc_storeStrong(&local_128,param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = local_128;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_130 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) != 0) {
    _memset(auStack_178,0,0x40);
    uVar3 = local_128;
    (*(code *)PTR__objc_retain_02578638)();
    local_1b0 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10);
    if (local_1b0 != 0) {
      lVar11 = *local_168;
      local_1b8 = 0;
      do {
        do {
          if (*local_168 - lVar11 != 0) {
            _objc_enumerationMutation(*local_168 - lVar11,uVar3);
          }
          uVar12 = *(ulong *)(local_170 + local_1b8 * 8);
          puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
          local_138 = uVar12;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(uVar12,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((uVar12 & 1) != 0) &&
             (uVar12 = local_138,
             (*(code *)PTR__objc_msgSend_02578628)(local_138,PTR_s_length_0269cca0), uVar12 != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_addObject__0269d180,local_138);
          }
          local_1b8 = local_1b8 + 1;
        } while (local_1b8 < local_1b0);
        local_1b0 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar3,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_178,auStack_a8,0x10
                  );
        local_1b8 = 0;
      } while (local_1b0 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
  }
  puVar4 = local_130;
  (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
  if (puVar4 < (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
    puVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
    IVar8 = local_118;
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) {
      puVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_objectAtIndexedSubscript__0269cc78);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_colorFromHex__026acc68);
      _objc_retainAutoreleasedReturnValue();
      IVar6 = local_118;
      puVar9 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_objectAtIndexedSubscript__0269cc78);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar6,PTR_s_colorFromHex__026acc68);
      _objc_retainAutoreleasedReturnValue();
      IVar7 = IVar8;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x3fe0000000000000,IVar8,PTR_s_colorByMixing_with_amount__026acc60,IVar5);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar8,PTR_s_hexFromColor__026acc70);
      _objc_retainAutoreleasedReturnValue();
      local_188 = IVar8;
      (*(code *)PTR__objc_release_02578630)(IVar7);
      (*(code *)PTR__objc_release_02578630)(IVar6);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(IVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_objectAtIndexedSubscript__0269cc78,0);
      _objc_retainAutoreleasedReturnValue();
      local_d0 = local_188;
      puVar9 = local_130;
      local_d8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_objectAtIndexedSubscript__0269cc78,1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_c8 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_d8
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar9);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_17c = 1;
      _objc_storeStrong(&local_188,0);
    }
    else {
      puVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
      if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 1)) {
        puVar4 = local_130;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_objectAtIndexedSubscript__0269cc78);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = local_130;
        local_f0 = puVar4;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        puVar10 = local_130;
        local_e8 = puVar9;
        (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_objectAtIndexedSubscript__0269cc78,0);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        local_e0 = puVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_f0,3);
        _objc_retainAutoreleasedReturnValue();
        local_110 = puVar1;
        (*(code *)PTR__objc_release_02578630)(puVar10);
        (*(code *)PTR__objc_release_02578630)(puVar9);
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_17c = 1;
      }
      else {
        local_108 = &cf__B85A72;
        local_100 = &cf__D48868;
        local_f8 = &cf__D4A850;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_108,3);
        _objc_retainAutoreleasedReturnValue();
        local_17c = 1;
        local_110 = puVar1;
      }
    }
  }
  else {
    puVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
    if (puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 3)) {
      puVar4 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_copy_0269d150);
      local_17c = 1;
      local_110 = puVar4;
    }
    else {
      puVar9 = local_130;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_firstObject_0269d1f8);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = local_130;
      puVar10 = local_130;
      local_c0 = puVar9;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_count_0269cfe0);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_objectAtIndexedSubscript__0269cc78,(ulong)puVar10 / 2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = local_130;
      local_b8 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_lastObject_0269d200);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_b0 = puVar10;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_c0
                 ,3);
      _objc_retainAutoreleasedReturnValue();
      local_110 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar10);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar9);
      local_17c = 1;
    }
  }
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_128,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_110;
}

