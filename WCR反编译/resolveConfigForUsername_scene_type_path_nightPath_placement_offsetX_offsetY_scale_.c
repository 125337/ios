// resolveConfigForUsername:scene:type:path:nightPath:placement:offsetX:offsetY:scale: @ 010daf4c

/* Function Stack Size: 0x58 bytes */

bool WCRefineNameplateHelper::
     resolveConfigForUsername_scene_type_path_nightPath_placement_offsetX_offsetY_scale_
               (ID param_1,SEL param_2,ID param_3,long_long param_4,long_long *param_5,ID *param_6,
               ID *param_7,long_long *param_8,double *param_9,double *param_10,double *param_11)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  long_long lVar3;
  cfstringStruct *pcVar4;
  double dVar5;
  cfstringStruct *local_1e8;
  cfstringStruct *local_1d0;
  cfstringStruct *local_1a8;
  cfstringStruct *local_198;
  uint local_17c;
  cfstringStruct *local_138;
  cfstringStruct *local_130;
  cfstringStruct *local_128;
  cfstringStruct *local_120;
  cfstringStruct *local_118;
  cfstringStruct *local_110;
  cfstringStruct *local_108;
  cfstringStruct *local_100;
  cfstringStruct *local_f8;
  long_long local_f0;
  double local_e8;
  double local_e0;
  double local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  cfstringStruct *local_c0;
  cfstringStruct *local_b8;
  long_long local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  undefined4 local_8c;
  undefined *local_88;
  double *local_80;
  double *local_78;
  double *local_70;
  ID *local_68;
  ID *local_60;
  ID *local_58;
  ID *local_50;
  long_long local_48;
  undefined8 local_40;
  SEL local_38;
  cfstringStruct *local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_70 = param_9;
  local_78 = param_10;
  local_80 = param_11;
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_68 = param_8;
  local_60 = param_7;
  local_58 = param_6;
  local_50 = param_5;
  local_48 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_30;
  local_88 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isSceneEnabled__026a5d60,local_48);
  if (((ulong)pcVar2 & 1) == 0) {
    local_21 = 0;
    local_8c = 1;
  }
  else {
    pcVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_specialConfigForUsername__026ae870,local_40);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_88;
    local_98 = pcVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_88,PTR_s_nameplateSpecialUserPaused__026ae860,local_40);
    local_a1 = 0;
    local_17c = 1;
    if (((ulong)puVar1 & 1) == 0) {
      pcVar2 = local_98;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_98,PTR_s_objectForKeyedSubscript__0269d098,&cf_paused);
      _objc_retainAutoreleasedReturnValue();
      local_a1 = 1;
      local_a0 = pcVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_17c = (uint)pcVar2;
    }
    if ((local_a1 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_a0);
    }
    if ((local_17c & 1) != 0) {
      _objc_storeStrong(&local_98,0);
    }
    lVar3 = local_48;
    FUN_010db7dc();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = (cfstringStruct *)0x0;
    local_c0 = (cfstringStruct *)0x0;
    local_c8 = (cfstringStruct *)0x0;
    local_d0 = (cfstringStruct *)0x1;
    local_d8 = 0.0;
    local_e0 = 0.0;
    dVar5 = 1.0;
    local_e8 = 1.0;
    local_b0 = lVar3;
    if ((local_98 == (cfstringStruct *)0x0) ||
       (pcVar2 = local_98, FUN_010db958(local_98,lVar3), lVar3 = local_b0, ((ulong)pcVar2 & 1) == 0)
       ) {
      local_130 = local_c0;
      local_138 = local_c8;
      FUN_010dbe7c(local_88,local_48,&local_b8,&local_130,&local_138,&local_d0,&local_d8,&local_e0,
                   &local_e8);
      _objc_storeStrong(&local_c0,local_130);
      _objc_storeStrong(&local_c8,local_138);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_f0 = lVar3;
      pcVar2 = local_98;
      FUN_010dbbf8(local_98,lVar3,&cf_Type);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_98;
      local_f8 = pcVar2;
      FUN_010dbbf8(local_98,local_f0,&cf_Path);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_98;
      local_100 = pcVar4;
      FUN_010dbbf8(local_98,local_f0,&cf_NightPath);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_98;
      local_108 = pcVar2;
      FUN_010dbbf8(local_98,local_f0,&cf_Placement);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_98;
      local_110 = pcVar4;
      FUN_010dbbf8(local_98,local_f0,&cf_OffsetX);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_98;
      local_118 = pcVar2;
      FUN_010dbbf8(local_98,local_f0,&cf_OffsetY);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_98;
      local_120 = pcVar4;
      FUN_010dbbf8(local_98,local_f0,&cf_Scale);
      _objc_retainAutoreleasedReturnValue();
      local_128 = pcVar2;
      if (local_f8 != (cfstringStruct *)0x0) {
        pcVar2 = local_f8;
        (*(code *)PTR__objc_msgSend_02578628)(local_f8,PTR_s_integerValue_026ca750);
        local_b8 = pcVar2;
      }
      pcVar2 = local_100;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)pcVar2 & 1) == 0) {
        local_198 = &::cf___;
      }
      else {
        local_198 = local_100;
      }
      _objc_storeStrong(&local_c0,local_198);
      pcVar2 = local_108;
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
      if (((ulong)pcVar2 & 1) == 0) {
        local_1a8 = &::cf___;
      }
      else {
        local_1a8 = local_108;
      }
      _objc_storeStrong(&local_c8,local_1a8);
      if (local_110 != (cfstringStruct *)0x0) {
        pcVar2 = local_110;
        (*(code *)PTR__objc_msgSend_02578628)(local_110,PTR_s_integerValue_026ca750);
        local_d0 = pcVar2;
      }
      if (local_118 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_doubleValue_026ca608);
        local_d8 = dVar5;
      }
      if (local_120 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_120,PTR_s_doubleValue_026ca608);
        local_e0 = dVar5;
      }
      if (local_128 != (cfstringStruct *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_128,PTR_s_doubleValue_026ca608);
        local_e8 = dVar5;
      }
      _objc_storeStrong(&local_128);
      _objc_storeStrong(&local_120,0);
      _objc_storeStrong(&local_118,0);
      _objc_storeStrong(&local_110,0);
      _objc_storeStrong(&local_108,0);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_f0,0);
    }
    if (local_e8 <= 0.0) {
      local_e8 = 1.0;
    }
    if (local_d0 != (cfstringStruct *)0x0) {
      local_d0 = (cfstringStruct *)0x1;
    }
    if (local_b8 != (cfstringStruct *)0x1) {
      local_b8 = (cfstringStruct *)0x0;
    }
    if ((local_b8 == (cfstringStruct *)0x1) &&
       (pcVar2 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_selfBuildTypeAllowed_026ae7f0),
       ((ulong)pcVar2 & 1) == 0)) {
      local_b8 = (cfstringStruct *)0x0;
    }
    if (((local_b8 == (cfstringStruct *)0x0) &&
        (pcVar2 = local_c0, (*(code *)PTR__objc_msgSend_02578628)(local_c0,PTR_s_length_0269cca0),
        pcVar2 == (cfstringStruct *)0x0)) &&
       (pcVar2 = local_c8, (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_length_0269cca0),
       pcVar2 == (cfstringStruct *)0x0)) {
      local_21 = 0;
    }
    else {
      if (local_50 != (ID *)0x0) {
        *local_50 = (ID)local_b8;
      }
      if (local_58 != (ID *)0x0) {
        if (local_c0 == (cfstringStruct *)0x0) {
          local_1d0 = &::cf___;
        }
        else {
          local_1d0 = local_c0;
        }
        _objc_retainAutorelease();
        *local_58 = (ID)local_1d0;
      }
      if (local_60 != (ID *)0x0) {
        if (local_c8 == (cfstringStruct *)0x0) {
          local_1e8 = &::cf___;
        }
        else {
          local_1e8 = local_c8;
        }
        _objc_retainAutorelease();
        *local_60 = (ID)local_1e8;
      }
      if (local_68 != (ID *)0x0) {
        *local_68 = (ID)local_d0;
      }
      if (local_70 != (double *)0x0) {
        *local_70 = local_d8;
      }
      if (local_78 != (double *)0x0) {
        *local_78 = local_e0;
      }
      if (local_80 != (double *)0x0) {
        *local_80 = local_e8;
      }
      local_21 = 1;
    }
    local_8c = 1;
    _objc_storeStrong(&local_c8);
    _objc_storeStrong(&local_c0,0);
    _objc_storeStrong(&local_b0,0);
    _objc_storeStrong(&local_98,0);
  }
  _objc_storeStrong(&local_88);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

