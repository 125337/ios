// opacityForScene:configuration: @ 015d7f40

/* Function Stack Size: 0x20 bytes */

double WCRGlobalPageBackgroundStore::opacityForScene_configuration_
                 (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  double dVar7;
  double local_220;
  double local_218;
  double local_1f0;
  double local_1e8;
  ulong local_1b8;
  double local_1a8;
  double local_1a0;
  ulong local_170;
  cfstringStruct *local_158;
  ulong local_148;
  bool local_c9;
  ulong local_c8;
  ulong local_c0;
  int local_b4;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_90;
  double local_88;
  bool local_79;
  ulong local_78;
  ulong local_70;
  cfstringStruct *local_68;
  bool local_59;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  cfstringStruct *local_40;
  SEL local_38;
  ID local_30;
  double local_28;
  
  local_40 = (cfstringStruct *)0x0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes)
  ;
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_59 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_148 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  else {
    local_148 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_148;
  }
  local_59 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_148;
  if ((local_59 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  IVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_followsGlobal__026b0fe0,local_48);
  if ((IVar5 & 1) == 0) {
    local_158 = local_40;
  }
  else {
    local_158 = &cf_global;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = local_158;
  uVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,local_158);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_79 = false;
  bVar1 = (uVar4 & 1) == 0;
  if (bVar1) {
    local_170 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  else {
    local_170 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,local_68)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_78 = local_170;
  }
  local_79 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_70 = local_170;
  if ((local_79 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_78);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_opacity);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  uVar4 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  if ((uVar4 & 1) == 0) {
    pcVar6 = local_68;
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isEqualToString__0269ccc8,&cf_global);
    if (((ulong)pcVar6 & 1) == 0) {
      uVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_global);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      local_c9 = (uVar4 & 1) == 0;
      if (local_c9) {
        local_1b8 = *(ulong *)PTR____NSDictionary0___02578288;
      }
      else {
        local_1b8 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_global);
        _objc_retainAutoreleasedReturnValue();
        local_c8 = local_1b8;
      }
      local_c9 = !local_c9;
      (*(code *)PTR__objc_retain_02578638)();
      local_c0 = local_1b8;
      if (local_c9) {
        (*(code *)PTR__objc_release_02578630)(local_c8);
      }
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_c0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_opacity);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      uVar4 = uVar2;
      (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if ((uVar4 & 1) == 0) {
        local_b4 = 0;
      }
      else {
        local_1e8 = 0.0;
        uVar2 = local_c0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_c0,PTR_s_objectForKeyedSubscript__0269d098,&cf_opacity);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar2);
        if (local_1e8 <= 0.0) {
          local_1e8 = 0.0;
        }
        if (local_1e8 <= 1.0) {
          local_1f0 = local_1e8;
        }
        else {
          local_1f0 = 1.0;
        }
        local_28 = local_1f0;
        local_b4 = 1;
      }
      _objc_storeStrong(&local_c0,0);
      if (local_b4 != 0) goto LAB_015d8808;
    }
    uVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_opacity);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar2);
    if ((uVar4 & 1) == 0) {
      local_28 = 1.0;
      local_b4 = 1;
    }
    else {
      local_218 = 0.0;
      uVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_opacity);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(uVar2);
      if (local_218 <= 0.0) {
        local_218 = 0.0;
      }
      if (local_218 <= 1.0) {
        local_220 = local_218;
      }
      else {
        local_220 = 1.0;
      }
      local_28 = local_220;
      local_b4 = 1;
    }
  }
  else {
    local_88 = 1.0;
    dVar7 = 0.0;
    local_98 = 0.0;
    uVar2 = local_70;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_70,PTR_s_objectForKeyedSubscript__0269d098,&cf_opacity);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    local_1a0 = dVar7;
    if (dVar7 <= local_98) {
      local_1a0 = local_98;
    }
    local_a8 = local_1a0;
    local_90 = local_1a0;
    if (local_1a0 <= local_88) {
      local_1a8 = local_1a0;
    }
    else {
      local_1a8 = local_88;
    }
    local_b0 = local_1a8;
    local_28 = local_1a8;
    local_b4 = 1;
    local_a0 = dVar7;
  }
LAB_015d8808:
  _objc_storeStrong(&local_70);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

