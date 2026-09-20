// nativeHeadViewForUsername:size: @ 01845f04

/* Function Stack Size: 0x20 bytes */

ID WCRefineAvatarFrameSpecialUsersViewController::nativeHeadViewForUsername_size_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  long lVar7;
  undefined8 uVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined *local_298;
  undefined *local_290;
  cfstringStruct *local_268;
  cfstringStruct *local_248;
  undefined8 local_240;
  undefined8 local_238;
  double local_230;
  double local_228;
  char *local_220 [2];
  undefined8 local_210;
  undefined8 uStack_208;
  double local_200;
  double dStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  double local_1e0;
  double dStack_1d8;
  char *local_1d0;
  cfstringStruct *local_1c8;
  char *local_1c0;
  char *local_1b8;
  uint local_1a4;
  undefined8 local_178;
  undefined8 uStack_170;
  double local_168;
  double dStack_160;
  char *local_148;
  undefined8 local_140;
  undefined1 auStack_138 [8];
  long local_130;
  long *local_128;
  undefined8 local_f8;
  char *local_f0;
  cfstringStruct *local_e8;
  double local_e0;
  undefined8 local_d8;
  SEL local_d0;
  cfstringStruct *local_c8;
  char *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_d8,param_3);
  pcVar2 = local_c8;
  local_e0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_avatarURLForUsername__026b6798,local_d8);
  _objc_retainAutoreleasedReturnValue();
  local_268 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_268 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = local_268;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar3 = "MMHeadImageHelper";
  _objc_getClass();
  local_f0 = pcVar3;
  _memset(auStack_138,0,0x40);
  local_b8 = &cf_getProfileHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  local_b0 = &cf_getMainFrameHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_290 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_290 != (undefined *)0x0) {
    lVar7 = *local_128;
    local_298 = (undefined *)0x0;
    do {
      do {
        if (*local_128 - lVar7 != 0) {
          _objc_enumerationMutation(*local_128 - lVar7,puVar4);
        }
        uVar8 = *(undefined8 *)(local_130 + (long)local_298 * 8);
        local_f8 = uVar8;
        _NSSelectorFromString();
        pcVar3 = local_f0;
        local_140 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_respondsToSelector__026ca818,uVar8);
        if (((ulong)pcVar3 & 1) != 0) {
          pcVar3 = local_f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_f0,local_140,local_d8,local_e8,1,1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_148 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          bVar1 = ((ulong)pcVar3 & 1) != 0;
          if (bVar1) {
            uVar10 = 0;
            uVar8 = 0;
            dVar9 = local_e0;
            dVar11 = local_e0;
            FUN_01846960();
            local_178 = uVar8;
            uStack_170 = uVar10;
            local_168 = dVar9;
            dStack_160 = dVar11;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar8,uVar10,dVar9,dVar11,local_148,PTR_s_setFrame__026ca960);
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_setClipsToBounds__026ca8c8,1);
            dVar9 = local_e0 / 2.0;
            pcVar3 = local_148;
            (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_layer_026ca788);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(dVar9);
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            pcVar3 = local_148;
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = pcVar3;
          }
          local_1a4 = (uint)bVar1;
          _objc_storeStrong(&local_148,0);
          if (local_1a4 != 0) goto LAB_0184638c;
        }
        local_298 = local_298 + 1;
      } while (local_298 < local_290);
      local_290 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar4,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_138,auStack_a8,0x10)
      ;
      local_298 = (undefined *)0x0;
    } while (local_290 != (undefined *)0x0);
  }
  local_1a4 = 0;
LAB_0184638c:
  (*(code *)PTR__objc_release_02578630)(puVar4);
  if (local_1a4 != 0) goto LAB_01846900;
  pcVar3 = "MMHeadImageView";
  _objc_getClass();
  local_1b8 = pcVar3;
  if (pcVar3 != (char *)0x0) {
    _objc_alloc();
    pcVar2 = &cf_initWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
    local_1c0 = pcVar3;
    _NSSelectorFromString();
    pcVar3 = local_1c0;
    local_1c8 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0,PTR_s_respondsToSelector__026ca818,pcVar2);
    if (((ulong)pcVar3 & 1) == 0) {
LAB_01846690:
      local_1a4 = 0;
    }
    else {
      pcVar3 = local_1c0;
      (*(code *)PTR__objc_msgSend_02578628)(local_1c0,local_1c8,local_d8,local_e8,1,1);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_1d0 = pcVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      bVar1 = ((ulong)pcVar3 & 1) != 0;
      if (bVar1) {
        uVar10 = 0;
        uVar8 = 0;
        dVar9 = local_e0;
        dVar11 = local_e0;
        FUN_01846960();
        local_210 = uVar8;
        uStack_208 = uVar10;
        local_200 = dVar9;
        dStack_1f8 = dVar11;
        local_1f0 = uVar8;
        uStack_1e8 = uVar10;
        local_1e0 = dVar9;
        dStack_1d8 = dVar11;
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar8,uVar10,dVar9,dVar11,local_1d0,PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_setClipsToBounds__026ca8c8,1);
        dVar9 = local_e0 / 2.0;
        pcVar3 = local_1d0;
        (*(code *)PTR__objc_msgSend_02578628)(local_1d0,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(dVar9);
        (*(code *)PTR__objc_release_02578630)(pcVar3);
        pcVar3 = local_1d0;
        (*(code *)PTR__objc_retain_02578638)();
        local_c0 = pcVar3;
      }
      local_1a4 = (uint)bVar1;
      _objc_storeStrong(&local_1d0,0);
      if (local_1a4 == 0) goto LAB_01846690;
    }
    _objc_storeStrong(&local_1c0,0);
    if (local_1a4 != 0) goto LAB_01846900;
  }
  pcVar3 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
  _objc_alloc();
  uVar10 = 0;
  uVar8 = 0;
  dVar9 = local_e0;
  dVar11 = local_e0;
  FUN_01846960();
  local_240 = uVar8;
  local_238 = uVar10;
  local_230 = dVar9;
  local_228 = dVar11;
  (*(code *)PTR__objc_msgSend_02578628)
            (uVar8,uVar10,dVar9,dVar11,pcVar3,PTR_s_initWithFrame__026ca6e8);
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_220[0] = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_023242b8,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_220[0],PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  (*(code *)PTR__objc_msgSend_02578628)(local_220[0],PTR_s_setClipsToBounds__026ca8c8,1);
  dVar9 = local_e0 / 2.0;
  pcVar3 = local_220[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_220[0],PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar9);
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_220[0],PTR_s_setContentMode__026ca8e0,2);
  pcVar2 = local_c8;
  (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_avatarImageCache_026b67a0);
  _objc_retainAutoreleasedReturnValue();
  pcVar6 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_248 = pcVar6;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  if (local_248 == (cfstringStruct *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_loadAvatarImageForUsername__026b67a8,local_d8);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_220[0],PTR_s_setImage__026ca978,local_248);
  }
  pcVar3 = local_220[0];
  (*(code *)PTR__objc_retain_02578638)();
  local_c0 = pcVar3;
  local_1a4 = 1;
  _objc_storeStrong(&local_248);
  _objc_storeStrong(local_220,0);
LAB_01846900:
  _objc_storeStrong(&local_e8);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

