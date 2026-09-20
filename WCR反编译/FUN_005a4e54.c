// FUN_005a4e54 @ 005a4e54

void FUN_005a4e54(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  char *local_250;
  char *local_248;
  char *local_230;
  char *local_190;
  char *local_188;
  char *local_180;
  char *local_178;
  byte local_16a;
  byte local_169;
  long local_168;
  undefined1 auStack_160 [8];
  long local_158;
  long *local_150;
  long local_120;
  byte local_112;
  byte local_111;
  char *local_110 [2];
  char *local_100;
  char *local_f8;
  char *local_f0;
  char *local_e8;
  char *local_e0 [3];
  char *local_c8;
  uint local_bc;
  char *local_b8;
  char *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_b8 = (char *)0x0;
  _objc_storeStrong(&local_b8,param_1);
  if (local_b8 == (char *)0x0) {
    local_b0 = (char *)0x0;
    local_bc = 1;
    goto LAB_005a5944;
  }
  pcVar6 = "FavoritesUtil";
  _objc_getClass();
  pcVar2 = local_b8;
  local_c8 = pcVar6;
  (*(code *)PTR__objc_msgSend_02578628)(local_b8,PTR_s_contentObj_026a5990);
  _objc_retainAutoreleasedReturnValue();
  local_e0[0] = pcVar2;
  FUN_0059d260(pcVar2,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_b8;
  local_e8 = pcVar6;
  FUN_005c391c();
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = local_e8 + -0x1a;
  local_f0 = pcVar2;
  if ((pcVar6 == (char *)0x0) && (pcVar6 = (char *)0x0, local_c8 != (char *)0x0)) {
    pcVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_respondsToSelector__026ca818,
               PTR_s_ConvertNoteContentObj2WCUploadTa_026a5a58);
    pcVar6 = (char *)((ulong)pcVar2 & 0xffffffff);
    if (((ulong)pcVar2 & 1) == 0) goto LAB_005a5204;
    pcVar6 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_ConvertNoteContentObj2WCUploadTa_026a5a58,local_e0[0]);
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar6;
    FUN_0059d260(pcVar6,&cf_noteInfo);
    _objc_retainAutoreleasedReturnValue();
    local_100 = pcVar6;
    if (pcVar6 != (char *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInt__0269d810,1);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar6,PTR_s_setValue_forKey__0269d300,puVar3,&cf_fromScene);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    pcVar6 = local_f8;
    bVar1 = local_f8 != (char *)0x0;
    if (bVar1) {
      (*(code *)PTR__objc_retain_02578638)();
      local_b0 = pcVar6;
    }
    local_bc = (uint)bVar1;
    _objc_storeStrong(&local_100);
    _objc_storeStrong(&local_f8,0);
    if (local_bc == 0) {
      pcVar6 = (char *)0x0;
      goto LAB_005a5204;
    }
  }
  else {
LAB_005a5204:
    pcVar2 = local_e0[0];
    FUN_0059d260(pcVar6,local_e0[0],&cf_mediaList);
    _objc_retainAutoreleasedReturnValue();
    local_111 = 0;
    local_112 = 0;
    local_110[0] = pcVar2;
    _memset(auStack_160,0,0x40);
    pcVar6 = local_110[0];
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)pcVar6 & 1) == 0) {
      local_230 = *(char **)PTR____NSArray0___02578280;
    }
    else {
      local_230 = local_110[0];
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_248 = local_230;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_230,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,0x10
              );
    if (local_248 != (char *)0x0) {
      lVar7 = *local_150;
      local_250 = (char *)0x0;
      do {
        do {
          if (*local_150 - lVar7 != 0) {
            _objc_enumerationMutation(*local_150 - lVar7,local_230);
          }
          lVar8 = *(long *)(local_158 + (long)local_250 * 8);
          local_120 = lVar8;
          FUN_0059d260(lVar8,&cf_type);
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar8;
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(lVar8);
          if (((lVar4 == 2) || (lVar4 == 3)) || (lVar4 == 5)) {
            local_111 = 1;
          }
          else if (lVar4 == 1) {
            local_112 = 1;
          }
          local_250 = local_250 + 1;
          local_168 = lVar4;
        } while (local_250 < local_248);
        local_248 = local_230;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_230,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_160,auStack_a8,
                   0x10);
        local_250 = (char *)0x0;
      } while (local_248 != (char *)0x0);
    }
    (*(code *)PTR__objc_release_02578630)(local_230);
    local_169 = true;
    if (((local_e8 != (char *)0x3) && (local_169 = true, local_e8 != "")) &&
       ((local_169 = true, local_e8 != "" &&
        ((local_169 = true, local_e8 != (char *)0x18 && (local_169 = true, local_e8 != "TEXT"))))))
    {
      local_169 = local_e8 == "EXT";
    }
    pcVar6 = local_e0[0];
    FUN_0059d260(local_e0[0],&cf_linkUrl);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar6;
    FUN_005a0828();
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    bVar1 = pcVar5 != (char *)0x0;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    local_16a = bVar1;
    if (((local_111 & 1) == 0) || ((local_169 & 1) != 0)) {
LAB_005a5710:
      if (((local_169 & 1) != 0) ||
         ((((local_16a & 1) != 0 && ((local_112 & 1) == 0)) && ((local_111 & 1) == 0)))) {
        pcVar6 = local_b8;
        FUN_005c4528(local_b8,local_f0);
        _objc_retainAutoreleasedReturnValue();
        local_180 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar6;
        }
        local_bc = (uint)(pcVar6 != (char *)0x0);
        _objc_storeStrong(&local_180,0);
        if (local_bc != 0) goto LAB_005a58e4;
      }
      if ((local_112 & 1) != 0) {
        pcVar6 = local_b8;
        FUN_005c50a8(local_b8,local_f0);
        _objc_retainAutoreleasedReturnValue();
        local_188 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar6;
        }
        local_bc = (uint)(pcVar6 != (char *)0x0);
        _objc_storeStrong(&local_188,0);
        if (local_bc != 0) goto LAB_005a58e4;
      }
      if (((local_112 & 1) == 0) && ((local_111 & 1) == 0)) {
        pcVar6 = local_f0;
        FUN_005c5a54();
        _objc_retainAutoreleasedReturnValue();
        local_190 = pcVar6;
        if (pcVar6 != (char *)0x0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = pcVar6;
        }
        local_bc = (uint)(pcVar6 != (char *)0x0);
        _objc_storeStrong(&local_190,0);
        if (local_bc != 0) goto LAB_005a58e4;
      }
      local_b0 = (char *)0x0;
      local_bc = 1;
    }
    else {
      pcVar6 = local_b8;
      FUN_005c3b7c(local_b8,local_f0);
      _objc_retainAutoreleasedReturnValue();
      local_178 = pcVar6;
      if (pcVar6 != (char *)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_b0 = pcVar6;
      }
      local_bc = (uint)(pcVar6 != (char *)0x0);
      _objc_storeStrong(&local_178,0);
      if (local_bc == 0) goto LAB_005a5710;
    }
LAB_005a58e4:
    _objc_storeStrong(local_110,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(local_e0,0);
LAB_005a5944:
  _objc_storeStrong(&local_b8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0,local_b0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

