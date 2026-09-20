// FUN_005c50a8 @ 005c50a8

void FUN_005c50a8(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  undefined *local_278;
  ulong local_1e0;
  ulong local_1d8;
  ulong local_1c0;
  char *local_170;
  long local_168;
  byte local_159;
  undefined *local_158;
  undefined *local_150;
  long local_148;
  long local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  long local_f8;
  undefined *local_f0;
  ulong local_e8;
  ulong local_e0;
  undefined4 local_d8;
  char *local_c8;
  undefined8 local_c0;
  ulong local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = 0;
  _objc_storeStrong(&local_b8,param_1);
  local_c0 = 0;
  _objc_storeStrong(&local_c0,param_2);
  pcVar1 = "WCUploadTask";
  _objc_getClass();
  local_c8 = pcVar1;
  if (pcVar1 == (char *)0x0) {
    local_b0 = (char *)0x0;
    local_d8 = 1;
  }
  else {
    uVar2 = local_b8;
    (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_contentObj_026a5990);
    _objc_retainAutoreleasedReturnValue();
    local_e0 = uVar2;
    FUN_0059d260(uVar2,&cf_mediaList);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_026ce088;
    local_e8 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSMutableArray_026ce088,PTR_s_array_0269d158);
    _objc_retainAutoreleasedReturnValue();
    local_f0 = puVar3;
    _memset(auStack_138,0,0x40);
    uVar2 = local_e8;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) == 0) {
      local_1c0 = *(ulong *)PTR____NSArray0___02578280;
    }
    else {
      local_1c0 = local_e8;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_1d8 = local_1c0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_1c0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10
              );
    if (local_1d8 != 0) {
      lVar7 = *local_128;
      local_1e0 = 0;
      do {
        do {
          if (*local_128 - lVar7 != 0) {
            _objc_enumerationMutation(*local_128 - lVar7,local_1c0);
          }
          lVar8 = *(long *)(local_130 + local_1e0 * 8);
          local_f8 = lVar8;
          FUN_0059d260(lVar8,&cf_type);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar8);
          if (lVar4 == 1) {
            lVar4 = local_f8;
            FUN_005a7354(0);
            _objc_retainAutoreleasedReturnValue();
            local_140 = lVar4;
            (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
            if (lVar4 == 0) {
              lVar8 = local_f8;
              FUN_005b9830(local_f8,PTR_s_pathForData_026a4a20);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar8;
              FUN_005a0828();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = local_140;
              local_140 = lVar5;
              (*(code *)PTR__objc_release_02578630)(lVar4);
              (*(code *)PTR__objc_release_02578630)(lVar8);
            }
            lVar4 = local_140;
            (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
            if (lVar4 == 0) {
              lVar8 = local_f8;
              FUN_005b9830(local_f8,PTR_s_pathForPreview_026a4a18);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar8;
              FUN_005a0828();
              _objc_retainAutoreleasedReturnValue();
              lVar4 = local_140;
              local_140 = lVar5;
              (*(code *)PTR__objc_release_02578630)(lVar4);
              (*(code *)PTR__objc_release_02578630)(lVar8);
            }
            lVar4 = local_140;
            FUN_005c6b14();
            _objc_retainAutoreleasedReturnValue();
            local_148 = lVar4;
            if (lVar4 == 0) {
              local_d8 = 3;
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,lVar4);
              local_159 = 0;
              lVar4 = local_140;
              (*(code *)PTR__objc_msgSend_02578628)(local_140,PTR_s_length_0269cca0);
              if (lVar4 == 0) {
                local_278 = (undefined *)0x0;
              }
              else {
                local_278 = PTR__OBJC_CLASS___UIImage_026cdfd0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___UIImage_026cdfd0,
                           PTR_s_imageWithContentsOfFile__0269e0e0,local_140);
                _objc_retainAutoreleasedReturnValue();
                local_159 = 1;
                local_158 = local_278;
              }
              (*(code *)PTR__objc_retain_02578638)();
              local_150 = local_278;
              if ((local_159 & 1) != 0) {
                (*(code *)PTR__objc_release_02578630)(local_158);
              }
              lVar4 = local_f8;
              FUN_005c6f58(local_f8,local_150);
              _objc_retainAutoreleasedReturnValue();
              local_168 = lVar4;
              if (lVar4 != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addObject__0269d180,lVar4);
              }
              _objc_storeStrong(&local_168);
              _objc_storeStrong(&local_150,0);
              local_d8 = 0;
            }
            _objc_storeStrong(&local_148);
            _objc_storeStrong(&local_140,0);
          }
          local_1e0 = local_1e0 + 1;
        } while (local_1e0 < local_1d8);
        local_1d8 = local_1c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_1c0,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,
                   0x10);
        local_1e0 = 0;
      } while (local_1d8 != 0);
    }
    (*(code *)PTR__objc_release_02578630)(local_1c0);
    puVar3 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined *)0x0) {
      local_b0 = (char *)0x0;
      local_d8 = 1;
    }
    else {
      pcVar1 = local_c8;
      _objc_alloc_init();
      pcVar6 = pcVar1;
      FUN_005c6904(pcVar1,1,local_c0);
      _objc_retainAutoreleasedReturnValue();
      local_170 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      (*(code *)PTR__objc_msgSend_02578628)(local_170,PTR_s_setMediaList__026a5a88,local_f0);
      pcVar1 = local_170;
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar1;
      local_d8 = 1;
      _objc_storeStrong(&local_170,0);
    }
    _objc_storeStrong(&local_f0);
    _objc_storeStrong(&local_e8,0);
    _objc_storeStrong(&local_e0,0);
  }
  _objc_storeStrong(&local_c0);
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

