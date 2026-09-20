// nativeAvatarForUsername:size: @ 01add294

/* Function Stack Size: 0x20 bytes */

ID WCRefineHomeAvatarStripEditorViewController::nativeAvatarForUsername_size_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  undefined *local_258;
  undefined *local_250;
  cfstringStruct *local_230;
  cfstringStruct *local_218;
  cfstringStruct *local_208;
  cfstringStruct *local_1f8;
  char *local_1c0 [2];
  uint local_1b0;
  char *local_1a0;
  undefined8 local_198;
  undefined1 auStack_190 [8];
  long local_188;
  long *local_180;
  undefined8 local_150;
  char *local_148;
  byte local_139;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  byte local_121;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  byte local_109;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  char *local_f8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  double local_e0;
  undefined8 local_d8;
  SEL local_d0;
  ID local_c8;
  char *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = 0;
  local_d0 = param_2;
  local_c8 = param_1;
  _objc_storeStrong(&local_d8,param_3);
  local_e0 = param_4;
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = &::cf___;
  pcVar2 = "MMServiceCenter";
  _objc_getClass();
  pcVar3 = "CContactMgr";
  local_f0 = (cfstringStruct *)pcVar2;
  _objc_getClass();
  local_109 = 0;
  local_f8 = pcVar3;
  if ((local_f0 == (cfstringStruct *)0x0) ||
     (pcVar4 = local_f0,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_f0,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar4 & 1) == 0)) {
    local_1f8 = (cfstringStruct *)0x0;
  }
  else {
    local_1f8 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    local_109 = 1;
    local_108 = local_1f8;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_100 = local_1f8;
  if ((local_109 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_108);
  }
  local_121 = 0;
  if ((local_100 == (cfstringStruct *)0x0) || (local_f8 == (char *)0x0)) {
    local_208 = (cfstringStruct *)0x0;
  }
  else {
    local_208 = local_100;
    (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_getService__0269d170,local_f8);
    _objc_retainAutoreleasedReturnValue();
    local_121 = 1;
    local_120 = local_208;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_118 = local_208;
  if ((local_121 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_120);
  }
  local_139 = 0;
  if ((local_118 == (cfstringStruct *)0x0) ||
     (pcVar4 = local_118,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_118,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178),
     ((ulong)pcVar4 & 1) == 0)) {
    local_218 = (cfstringStruct *)0x0;
  }
  else {
    local_218 = local_118;
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_getContactByName__0269d178,local_d8);
    _objc_retainAutoreleasedReturnValue();
    local_139 = 1;
    local_138 = local_218;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_130 = local_218;
  if ((local_139 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_138);
  }
  if ((local_130 != (cfstringStruct *)0x0) &&
     (pcVar4 = local_130,
     (*(code *)PTR__objc_msgSend_02578628)
               (local_130,PTR_s_respondsToSelector__026ca818,PTR_s_m_nsHeadImgUrl_026a6b60),
     ((ulong)pcVar4 & 1) != 0)) {
    pcVar4 = local_130;
    (*(code *)PTR__objc_msgSend_02578628)(local_130,PTR_s_m_nsHeadImgUrl_026a6b60);
    _objc_retainAutoreleasedReturnValue();
    local_230 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_230 = &::cf___;
    }
    _objc_storeStrong(&local_e8,local_230);
    (*(code *)PTR__objc_release_02578630)(pcVar4);
  }
  pcVar2 = "MMHeadImageHelper";
  _objc_getClass();
  local_148 = pcVar2;
  _memset(auStack_190,0,0x40);
  local_b8 = &cf_getMainFrameHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  local_b0 = &cf_getProfileHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  puVar5 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_250 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_250 != (undefined *)0x0) {
    lVar7 = *local_180;
    local_258 = (undefined *)0x0;
    do {
      do {
        if (*local_180 - lVar7 != 0) {
          _objc_enumerationMutation(*local_180 - lVar7,puVar5);
        }
        uVar8 = *(undefined8 *)(local_188 + (long)local_258 * 8);
        local_150 = uVar8;
        _NSSelectorFromString();
        pcVar2 = local_148;
        local_198 = uVar8;
        (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_respondsToSelector__026ca818,uVar8);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar2 = local_148;
          (*(code *)PTR__objc_msgSend_02578628)(local_148,local_198,local_d8,local_e8,1,0);
          _objc_retainAutoreleasedReturnValue();
          puVar6 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_1a0 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar6);
          bVar1 = ((ulong)pcVar2 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_e0,local_c8,PTR_s_wcr_forceAvatarGeometry_size__026be218,local_1a0);
            pcVar2 = local_1a0;
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = pcVar2;
          }
          local_1b0 = (uint)bVar1;
          _objc_storeStrong(&local_1a0,0);
          if (local_1b0 != 0) goto LAB_01add8d0;
        }
        local_258 = local_258 + 1;
      } while (local_258 < local_250);
      local_250 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar5,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_190,auStack_a8,0x10)
      ;
      local_258 = (undefined *)0x0;
    } while (local_250 != (undefined *)0x0);
  }
  local_1b0 = 0;
LAB_01add8d0:
  (*(code *)PTR__objc_release_02578630)(puVar5);
  if (local_1b0 == 0) {
    pcVar2 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    uVar9 = 0;
    uVar8 = 0;
    dVar10 = local_e0;
    dVar11 = local_e0;
    FUN_01add21c();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar8,uVar9,dVar10,dVar11,pcVar2,PTR_s_initWithFrame__026ca6e8);
    puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_1c0[0] = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323c60,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setContentMode__026ca8e0,2);
    (*(code *)PTR__objc_msgSend_02578628)(local_1c0[0],PTR_s_setClipsToBounds__026ca8c8,1);
    pcVar2 = local_1c0[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = pcVar2;
    local_1b0 = 1;
    _objc_storeStrong(local_1c0,0);
  }
  _objc_storeStrong(&local_130);
  _objc_storeStrong(&local_118,0);
  _objc_storeStrong(&local_100,0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

