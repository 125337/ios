// FUN_0033acac @ 0033acac

byte FUN_0033acac(undefined8 param_1)

{
  int iVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  long lVar8;
  ulong uVar9;
  undefined *local_2a0;
  undefined *local_298;
  undefined *local_268;
  long local_248;
  long local_230;
  undefined *local_210;
  undefined4 local_208;
  undefined4 local_204;
  code *local_200;
  undefined *local_1f8;
  long local_1f0;
  undefined **local_1e8;
  int local_1dc;
  cfstringStruct *local_1d8;
  char *local_1d0;
  undefined1 auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  ulong local_180;
  byte local_171;
  undefined *local_170;
  byte local_161;
  undefined *local_160;
  undefined *local_158;
  undefined *local_150;
  cfstringStruct *local_148;
  cfstringStruct *local_140;
  long local_128;
  int local_11c;
  long local_118;
  byte local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  undefined1 auStack_c0 [128];
  long local_40;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_118 = 0;
  _objc_storeStrong(&local_118,param_1);
  if (local_118 == 0) {
    local_109 = 0;
    local_11c = 1;
    goto LAB_0033b7f4;
  }
  lVar8 = local_118;
  FUN_0033d694();
  _objc_retainAutoreleasedReturnValue();
  local_230 = lVar8;
  if (lVar8 == 0) {
    local_230 = local_118;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_128 = local_230;
  (*(code *)PTR__objc_release_02578630)(lVar8);
  if (local_128 == 0) {
    local_248 = local_118;
  }
  else {
    local_248 = local_128;
  }
  FUN_0033db34(local_248);
  FUN_0033ab8c(local_118);
  if ((local_128 != 0) && (local_128 - local_118 != 0)) {
    FUN_0033ab8c(local_128 - local_118,local_128);
  }
  FUN_0033dbc4(1);
  pcVar2 = &cf_showImagePicker_showsCameraButtonInPicker_showsCameraButtonAtBottom_shareInfo_;
  _NSSelectorFromString();
  pcVar3 = &cf_showImagePicker_showsCameraButtonInPicker_showsCameraButtonAtBottom_;
  local_140 = pcVar2;
  _NSSelectorFromString();
  local_150 = PTR_s_showImagePicker__026a21e8;
  local_161 = 0;
  local_171 = 0;
  local_268 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_148 = pcVar3;
  if ((local_128 == 0) || (local_128 == local_118)) {
    local_40 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_171 = 1;
    local_170 = local_268;
  }
  else {
    local_38 = local_118;
    local_30 = local_128;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_161 = 1;
    local_160 = local_268;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_158 = local_268;
  if ((local_171 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_170);
  }
  if ((local_161 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_160);
  }
  _memset(auStack_1c0,0,0x40);
  puVar5 = local_158;
  (*(code *)PTR__objc_retain_02578638)();
  local_298 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_c0,0x10);
  if (local_298 != (undefined *)0x0) {
    lVar8 = *local_1b0;
    local_2a0 = (undefined *)0x0;
    do {
      do {
        if (*local_1b0 - lVar8 != 0) {
          _objc_enumerationMutation(*local_1b0 - lVar8,puVar5);
        }
        uVar9 = *(ulong *)(local_1b8 + (long)local_2a0 * 8);
        local_180 = uVar9;
        if (uVar9 != 0) {
          if ((local_140 != (cfstringStruct *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (uVar9,PTR_s_respondsToSelector__026ca818,local_140), (uVar9 & 1) != 0)) {
            (*(code *)PTR__objc_msgSend_02578628)(local_180,local_140,0,0,0,0);
            local_109 = 1;
            local_11c = 1;
            goto LAB_0033b2f8;
          }
          if ((local_148 != (cfstringStruct *)0x0) &&
             (uVar9 = local_180,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_180,PTR_s_respondsToSelector__026ca818,local_148), (uVar9 & 1) != 0))
          {
            (*(code *)PTR__objc_msgSend_02578628)(local_180,local_148,0,0,0);
            local_109 = 1;
            local_11c = 1;
            goto LAB_0033b2f8;
          }
          uVar9 = local_180;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_180,PTR_s_respondsToSelector__026ca818,local_150);
          if ((uVar9 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_180,local_150,0);
            local_109 = 1;
            local_11c = 1;
            goto LAB_0033b2f8;
          }
        }
        local_2a0 = local_2a0 + 1;
      } while (local_2a0 < local_298);
      local_298 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c0,auStack_c0,0x10)
      ;
      local_2a0 = (undefined *)0x0;
    } while (local_298 != (undefined *)0x0);
  }
  local_11c = 0;
LAB_0033b2f8:
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (local_11c == 0) {
    pcVar4 = "WCTimelineRouterHelper";
    _objc_getClass();
    pcVar2 = &
             cf_showImagePickerWithPickerScene_sourceType_showsCameraButtonInPicker_showsCameraButtonAtBottom_customOptionsBlock_delegate_fromViewController_
    ;
    local_1d0 = pcVar4;
    _NSSelectorFromString();
    local_1d8 = pcVar2;
    if ((local_1d0 != (char *)0x0) &&
       (pcVar4 = local_1d0,
       (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_respondsToSelector__026ca818,pcVar2),
       lVar8 = local_118, ((ulong)pcVar4 & 1) != 0)) {
      local_f0 = &cf_getPickerScene;
      local_e8 = &cf_pickerScene;
      local_e0 = &cf_routePickerViewEnterScene;
      local_d8 = &cf_albumPickerEnterScene;
      local_d0 = &cf_startSourceScene;
      local_c8 = &cf_fromSourceScene;
      puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_f0
                 ,6);
      _objc_retainAutoreleasedReturnValue();
      FUN_0033dbe4();
      (*(code *)PTR__objc_release_02578630)(puVar5);
      lVar6 = local_128;
      local_1dc = (int)lVar8;
      if (local_1dc < 1) {
        local_108 = &cf_getPickerScene;
        local_100 = &cf_pickerScene;
        local_f8 = &cf_routePickerViewEnterScene;
        puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_108,3);
        _objc_retainAutoreleasedReturnValue();
        FUN_0033dbe4();
        local_1dc = (int)lVar6;
        (*(code *)PTR__objc_release_02578630)(puVar5);
      }
      lVar8 = local_128;
      if (local_1dc < 1) {
        local_1dc = 1;
      }
      ppuVar7 = &local_210;
      local_210 = PTR___NSConcreteStackBlock_02578660;
      local_208 = 0xc2000000;
      local_204 = 0;
      local_200 = FUN_0033e05c;
      local_1f8 = &DAT_0257c398;
      (*(code *)PTR__objc_retain_02578638)();
      local_1f0 = lVar8;
      _objc_retainBlock();
      pcVar4 = local_1d0;
      pcVar2 = local_1d8;
      iVar1 = local_1dc;
      local_1e8 = ppuVar7;
      _objc_retainBlock();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,pcVar2,iVar1,0,0,0,ppuVar7,local_128,local_118);
      (*(code *)PTR__objc_release_02578630)(ppuVar7);
      local_109 = 1;
      local_11c = 1;
      _objc_storeStrong(&local_1e8);
      _objc_storeStrong(&local_1f0,0);
      if (local_11c != 0) goto LAB_0033b7b4;
    }
    FUN_0033b858();
    local_109 = 0;
    local_11c = 1;
  }
LAB_0033b7b4:
  _objc_storeStrong(&local_158);
  _objc_storeStrong(&local_128,0);
LAB_0033b7f4:
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_109 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

