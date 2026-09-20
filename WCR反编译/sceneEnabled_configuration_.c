// sceneEnabled:configuration: @ 015d79d0

/* Function Stack Size: 0x20 bytes */

bool WCRGlobalPageBackgroundStore::sceneEnabled_configuration_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong local_e8;
  ulong local_d0;
  uint local_a8;
  bool local_81;
  ulong local_80;
  ulong local_78;
  bool local_69;
  ulong local_68;
  ulong local_60;
  undefined4 local_58;
  byte local_51;
  ID local_50;
  ulong local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar3 = local_40;
  puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  local_51 = 0;
  local_a8 = 1;
  if ((uVar3 & 1) != 0) {
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_supportedScenes_026a8e20);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = (uint)IVar4 ^ 1;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_a8 & 1) == 0) {
    uVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    uVar5 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_69 = false;
    bVar1 = (uVar5 & 1) == 0;
    if (bVar1) {
      local_d0 = *(ulong *)PTR____NSDictionary0___02578288;
    }
    else {
      local_d0 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes);
      _objc_retainAutoreleasedReturnValue();
      local_68 = local_d0;
    }
    local_69 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_d0;
    if ((local_69 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_objectForKeyedSubscript__0269d098,local_40)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    uVar5 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    local_81 = (uVar5 & 1) == 0;
    if (local_81) {
      local_e8 = *(ulong *)PTR____NSDictionary0___02578288;
    }
    else {
      local_e8 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_objectForKeyedSubscript__0269d098,local_40);
      _objc_retainAutoreleasedReturnValue();
      local_80 = local_e8;
    }
    local_81 = !local_81;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = local_e8;
    if (local_81) {
      (*(code *)PTR__objc_release_02578630)(local_80);
    }
    (*(code *)PTR__objc_release_02578630)(uVar3);
    uVar3 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_day);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    FUN_015d5afc();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_21 = 1;
    if (uVar6 == 0) {
      uVar6 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78,PTR_s_objectForKeyedSubscript__0269d098,&cf_night);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      FUN_015d5afc();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_21 = uVar8 != 0;
      (*(code *)PTR__objc_release_02578630)(uVar7);
      (*(code *)PTR__objc_release_02578630)(uVar6);
    }
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar3);
    local_58 = 1;
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_60,0);
  }
  else {
    local_21 = 0;
    local_58 = 1;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

