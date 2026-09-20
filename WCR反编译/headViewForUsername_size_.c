// headViewForUsername:size: @ 01c51b70

/* WARNING: Removing unreachable block (ram,0x01c51e08) */
/* Function Stack Size: 0x20 bytes */

ID WCRefineNameplateSpecialUsersViewController::headViewForUsername_size_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  double dVar11;
  cfstringStruct *local_408;
  cfstringStruct *local_3c0;
  undefined *local_380;
  undefined *local_378;
  cfstringStruct *local_2d0;
  undefined *local_2a8;
  undefined4 local_2a0;
  undefined4 local_29c;
  code *local_298;
  undefined *local_290;
  long local_288;
  undefined *local_280;
  double local_278;
  double local_270;
  undefined8 uStack_268;
  double local_260;
  double dStack_258;
  double local_250;
  undefined8 uStack_248;
  double local_240;
  double dStack_238;
  double local_230;
  undefined8 local_228;
  double local_220;
  double local_218;
  undefined *local_210 [2];
  char *local_200;
  cfstringStruct *local_1f8;
  char *local_1f0;
  char *local_1e8;
  char *local_1d8;
  undefined8 local_1d0;
  undefined1 auStack_1c8 [8];
  long local_1c0;
  long *local_1b8;
  undefined8 local_188;
  char *local_180;
  long local_178 [5];
  cfstringStruct *local_150;
  cfstringStruct *local_148;
  int local_13c;
  double local_138;
  undefined8 local_130;
  double local_128;
  double local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  undefined *local_f0;
  cfstringStruct *local_e8;
  double local_e0;
  cfstringStruct *local_d8;
  SEL local_d0;
  cfstringStruct *local_c8;
  undefined *local_c0;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  undefined1 auStack_a8 [128];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_d8 = (cfstringStruct *)0x0;
  local_d0 = param_2;
  local_c8 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_d8,param_3);
  pcVar2 = local_d8;
  puVar1 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
  local_e0 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
             PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
  _objc_retainAutoreleasedReturnValue();
  local_2d0 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_2d0 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_e8 = local_2d0;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  _objc_alloc();
  uVar9 = 0;
  uVar7 = 0;
  dVar10 = local_e0;
  dVar11 = local_e0;
  FUN_01c52a68();
  local_110 = uVar7;
  local_108 = uVar9;
  local_100 = dVar10;
  local_f8 = dVar11;
  (*(code *)PTR__objc_msgSend_02578628)(uVar7,uVar9,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_f0 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setClipsToBounds__026ca8c8,1);
  uVar7 = 0x3fe0000000000000;
  dVar8 = local_e0 * 0.5;
  puVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_f0;
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_tertiarySystemFillColor_026aa650);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_setBackgroundColor__026ca888);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  pcVar2 = local_e8;
  (*(code *)PTR__objc_msgSend_02578628)(local_e8,PTR_s_hasPrefix__0269d320,&cf_WCRefine_groupEntry);
  if (((ulong)pcVar2 & 1) == 0) {
    local_148 = (cfstringStruct *)0x0;
    pcVar2 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_contactForUsername__026ae878,local_e8);
    _objc_retainAutoreleasedReturnValue();
    local_150 = pcVar2;
    if (pcVar2 != (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_valueForKey__0269d128,&cf_m_nsHeadHDImgUrl)
      ;
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_148;
      local_148 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar2 = local_148;
      (*(code *)PTR__objc_msgSend_02578628)(local_148,PTR_s_length_0269cca0);
      if (pcVar2 == (cfstringStruct *)0x0) {
        pcVar3 = local_150;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_150,PTR_s_valueForKey__0269d128,&cf_m_nsHeadImgUrl);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_148;
        local_148 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    local_178[0] = 0;
    pcVar4 = "MMHeadImageHelper";
    _objc_getClass();
    local_180 = pcVar4;
    _memset(auStack_1c8,0,0x40);
    local_b8 = &cf_getMainFrameHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
    local_b0 = &cf_getProfileHeadImageViewWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
    puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_b8,2
              );
    _objc_retainAutoreleasedReturnValue();
    local_378 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (local_378 != (undefined *)0x0) {
      lVar6 = *local_1b8;
      local_380 = (undefined *)0x0;
      do {
        do {
          if (*local_1b8 - lVar6 != 0) {
            _objc_enumerationMutation(*local_1b8 - lVar6,puVar1);
          }
          uVar9 = *(undefined8 *)(local_1c0 + (long)local_380 * 8);
          local_188 = uVar9;
          _NSSelectorFromString();
          pcVar4 = local_180;
          local_1d0 = uVar9;
          (*(code *)PTR__objc_msgSend_02578628)(local_180,PTR_s_respondsToSelector__026ca818,uVar9);
          if (((ulong)pcVar4 & 1) != 0) {
            if (local_148 == (cfstringStruct *)0x0) {
              local_3c0 = &::cf___;
            }
            else {
              local_3c0 = local_148;
            }
            pcVar4 = local_180;
            (*(code *)PTR__objc_msgSend_02578628)(local_180,local_1d0,local_e8,local_3c0,1,0);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = PTR__OBJC_CLASS___UIView_026cdfd8;
            local_1d8 = pcVar4;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((ulong)pcVar4 & 1) == 0) {
              local_13c = 0;
            }
            else {
              _objc_storeStrong(local_178,local_1d8);
              local_13c = 4;
            }
            _objc_storeStrong(&local_1d8,0);
            if (local_13c != 0) goto LAB_01c52490;
          }
          local_380 = local_380 + 1;
        } while (local_380 < local_378);
        local_378 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_countByEnumeratingWithState_obje_0269cd58,auStack_1c8,auStack_a8,
                   0x10);
        local_380 = (undefined *)0x0;
      } while (local_378 != (undefined *)0x0);
    }
    local_13c = 0;
LAB_01c52490:
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if (local_178[0] == 0) {
      pcVar4 = "MMHeadImageView";
      _objc_getClass();
      local_1e8 = pcVar4;
      if (pcVar4 != (char *)0x0) {
        _objc_alloc();
        pcVar2 = &cf_initWithUsrName_headImgUrl_bAutoUpdate_bRoundCorner_;
        local_1f0 = pcVar4;
        _NSSelectorFromString();
        pcVar4 = local_1f0;
        local_1f8 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)(local_1f0,PTR_s_respondsToSelector__026ca818,pcVar2);
        if (((ulong)pcVar4 & 1) != 0) {
          if (local_148 == (cfstringStruct *)0x0) {
            local_408 = &::cf___;
          }
          else {
            local_408 = local_148;
          }
          pcVar4 = local_1f0;
          (*(code *)PTR__objc_msgSend_02578628)(local_1f0,local_1f8,local_e8,local_408,1,0);
          _objc_retainAutoreleasedReturnValue();
          puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
          local_200 = pcVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
          if (((ulong)pcVar4 & 1) != 0) {
            _objc_storeStrong(local_178,local_200);
          }
          _objc_storeStrong(&local_200,0);
        }
        _objc_storeStrong(&local_1f0,0);
      }
    }
    if (local_178[0] == 0) {
      puVar1 = PTR__OBJC_CLASS___UIImageView_026ce1c0;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_bounds_026ca548);
      local_230 = dVar8;
      local_228 = uVar7;
      local_220 = dVar10;
      local_218 = dVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar8,uVar7,dVar10,dVar11,puVar1,PTR_s_initWithFrame__026ca6e8);
      puVar5 = PTR__OBJC_CLASS___UIColor_026cdf78;
      local_210[0] = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323f88,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithWhite_alpha__0269cf30);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_210[0],PTR_s_setBackgroundColor__026ca888);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_210[0],PTR_s_setContentMode__026ca8e0,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_210[0],PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addSubview__026ca4c0,local_210[0]);
      puVar1 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = puVar1;
      local_13c = 1;
      _objc_storeStrong(local_210,0);
    }
    else {
      dVar8 = local_e0;
      FUN_01c52ab4(local_178[0]);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_bounds_026ca548);
      local_270 = dVar8;
      uStack_268 = uVar7;
      local_260 = dVar10;
      dStack_258 = dVar11;
      local_250 = dVar8;
      uStack_248 = uVar7;
      local_240 = dVar10;
      dStack_238 = dVar11;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar8,uVar7,dVar10,dVar11,local_178[0],PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_msgSend_02578628)(local_178[0],PTR_s_setAutoresizingMask__026ca878,0x12);
      (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addSubview__026ca4c0,local_178[0]);
      puVar1 = PTR___dispatch_main_q_02578680;
      _objc_retainAutoreleaseReturnValue();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = local_178[0];
      local_2a8 = PTR___NSConcreteStackBlock_02578660;
      local_2a0 = 0xc2000000;
      local_29c = 0;
      local_298 = FUN_01c52dc4;
      local_290 = &DAT_0257a740;
      (*(code *)PTR__objc_retain_02578638)();
      puVar5 = local_f0;
      local_288 = lVar6;
      local_278 = local_e0;
      (*(code *)PTR__objc_retain_02578638)();
      local_280 = puVar5;
      _dispatch_async(puVar1,&local_2a8);
      (*(code *)PTR__objc_release_02578630)(puVar1);
      puVar1 = local_f0;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = puVar1;
      local_13c = 1;
      _objc_storeStrong(&local_280);
      _objc_storeStrong(&local_288,0);
    }
    _objc_storeStrong(local_178);
    _objc_storeStrong(&local_150,0);
    _objc_storeStrong(&local_148,0);
  }
  else {
    puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_bounds_026ca548);
    local_138 = dVar8;
    local_130 = uVar7;
    local_128 = dVar10;
    local_120 = dVar11;
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar8,uVar7,dVar10,dVar11,puVar1,PTR_s_initWithFrame__026ca6e8);
    local_118 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_setText__026caa88,&cf__);
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setTextAlignment__026caa90,1);
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x402c000000000000,*(undefined8 *)PTR__UIFontWeightSemibold_02578160,
               PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize_weight__026cab60);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setFont__026ca958);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_setAutoresizingMask__026ca878,0x12);
    (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_addSubview__026ca4c0,local_118);
    puVar1 = local_f0;
    (*(code *)PTR__objc_retain_02578638)();
    local_c0 = puVar1;
    local_13c = 1;
    _objc_storeStrong(&local_118,0);
  }
  _objc_storeStrong(&local_f0);
  _objc_storeStrong(&local_e8,0);
  _objc_storeStrong(&local_d8,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return (ID)local_c0;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

