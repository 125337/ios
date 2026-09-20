// nativeHeadViewForUsername:size:autoUpdate: @ 01af702c

/* Function Stack Size: 0x24 bytes */

ID WCRefineHomeAvatarStripView::nativeHeadViewForUsername_size_autoUpdate_
             (ID param_1,SEL param_2,ID param_3,double param_4,bool param_5)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  undefined *local_2d8;
  undefined *local_2d0;
  char *local_278 [2];
  int local_264;
  double local_260;
  double local_258;
  undefined8 local_250;
  undefined8 uStack_248;
  double local_240;
  double dStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  double local_220;
  double dStack_218;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  double local_1d8;
  double dStack_1d0;
  undefined1 auStack_1c8 [48];
  undefined1 auStack_198 [48];
  char *local_168 [3];
  char *local_150;
  undefined8 local_148;
  undefined1 auStack_140 [8];
  long local_138;
  long *local_130;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  byte local_e1;
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
  local_e1 = (byte)param_5;
  uVar7 = local_d8;
  local_e0 = param_4;
  FUN_01af77ac();
  _objc_retainAutoreleasedReturnValue();
  pcVar1 = "MMHeadImageHelper";
  local_f0 = uVar7;
  _objc_getClass();
  local_f8 = pcVar1;
  _memset(auStack_140,0,0x40);
  local_b8 = &cf_getMainFrameHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  local_b0 = &cf_getProfileHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2);
  _objc_retainAutoreleasedReturnValue();
  local_2d0 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  if (local_2d0 != (undefined *)0x0) {
    lVar6 = *local_130;
    local_2d8 = (undefined *)0x0;
    do {
      do {
        if (*local_130 - lVar6 != 0) {
          _objc_enumerationMutation(*local_130 - lVar6,puVar2);
        }
        uVar7 = *(undefined8 *)(local_138 + (long)local_2d8 * 8);
        local_100 = uVar7;
        _NSSelectorFromString();
        pcVar1 = local_f8;
        local_148 = uVar7;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_respondsToSelector__026ca818,uVar7);
        if (((ulong)pcVar1 & 1) != 0) {
          pcVar3 = local_f8;
          (*(code *)PTR__objc_msgSend_02578628)(local_f8,local_148,local_d8,local_f0,local_e1 & 1,1)
          ;
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_150 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
          pcVar1 = local_150;
          if (((ulong)pcVar3 & 1) == 0) {
            local_264 = 0;
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_168[0] = pcVar1;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTag__026caa80,0x7f19a);
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_168[0],PTR_s_setAutoresizingMask__026ca878,0);
            _memcpy(auStack_198,PTR__CGAffineTransformIdentity_025782d8,0x30);
            pcVar1 = local_168[0];
            _memcpy(auStack_1c8,auStack_198,0x30);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_setTransform__026caad0,auStack_1c8);
            uVar10 = 0;
            uVar7 = 0;
            dVar8 = local_e0;
            dVar9 = local_e0;
            FUN_01af1c8c();
            local_1e8 = uVar7;
            uStack_1e0 = uVar10;
            local_1d8 = dVar8;
            dStack_1d0 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,uVar10,dVar8,dVar9,local_168[0],PTR_s_setBounds__026ca8a0);
            uVar10 = 0;
            uVar7 = 0;
            dVar8 = local_e0;
            dVar9 = local_e0;
            FUN_01af1c8c();
            local_250 = uVar7;
            uStack_248 = uVar10;
            local_240 = dVar8;
            dStack_238 = dVar9;
            local_230 = uVar7;
            uStack_228 = uVar10;
            local_220 = dVar8;
            dStack_218 = dVar9;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar7,uVar10,dVar8,dVar9,local_168[0],PTR_s_setFrame__026ca960);
            pcVar1 = local_168[0];
            pcVar5 = &cf_setImageSize_;
            _NSSelectorFromString();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_respondsToSelector__026ca818,pcVar5);
            pcVar3 = local_168[0];
            if (((ulong)pcVar1 & 1) != 0) {
              pcVar5 = &cf_setImageSize_;
              _NSSelectorFromString();
              dVar8 = local_e0;
              dVar9 = local_e0;
              FUN_01af1d30();
              local_260 = dVar8;
              local_258 = dVar9;
              (*(code *)PTR__objc_msgSend_02578628)(dVar8,dVar9,pcVar3,pcVar5);
            }
            pcVar1 = local_168[0];
            (*(code *)PTR__objc_retain_02578638)();
            local_c0 = pcVar1;
            local_264 = 1;
            _objc_storeStrong(local_168,0);
          }
          _objc_storeStrong(&local_150,0);
          if (local_264 != 0) goto LAB_01af75d4;
        }
        local_2d8 = local_2d8 + 1;
      } while (local_2d8 < local_2d0);
      local_2d0 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar2,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_140,auStack_a8,0x10)
      ;
      local_2d8 = (undefined *)0x0;
    } while (local_2d0 != (undefined *)0x0);
  }
  local_264 = 0;
LAB_01af75d4:
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (local_264 == 0) {
    pcVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
    _objc_alloc();
    uVar10 = 0;
    uVar7 = 0;
    dVar8 = local_e0;
    dVar9 = local_e0;
    FUN_01af1c8c();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar7,uVar10,dVar8,dVar9,pcVar1,PTR_s_initWithFrame__026ca6e8);
    puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
    local_278[0] = pcVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02323f88,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
               PTR_s_colorWithWhite_alpha__0269cf30);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_278[0],PTR_s_setBackgroundColor__026ca888);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    FUN_01af791c(local_e0,local_278[0]);
    (*(code *)PTR__objc_msgSend_02578628)(local_278[0],PTR_s_setContentMode__026ca8e0,2);
    pcVar1 = local_278[0];
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = pcVar1;
    local_264 = 1;
    _objc_storeStrong(local_278,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

