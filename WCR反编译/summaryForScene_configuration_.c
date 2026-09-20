// summaryForScene:configuration: @ 01a823fc

/* Function Stack Size: 0x20 bytes */

ID WCRefineGlobalPageBackgroundViewController::summaryForScene_configuration_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_130;
  ulong local_110;
  ulong local_e8;
  ulong local_b8;
  ulong local_a8;
  ulong local_a0;
  bool local_91;
  ulong local_90;
  byte local_81;
  ulong local_80;
  ulong local_78;
  bool local_69;
  ulong local_68;
  byte local_59;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  uVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes)
  ;
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  uVar5 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_59 = 0;
  local_69 = false;
  bVar1 = (uVar5 & 1) == 0;
  if (bVar1) {
    local_e8 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  else {
    local_e8 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    local_58 = local_e8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_e8;
  }
  local_69 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = local_e8;
  if ((local_69 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  (*(code *)PTR__objc_release_02578630)(uVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_day);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_81 = 0;
  local_91 = false;
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_110 = 0;
  }
  else {
    local_110 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_day);
    _objc_retainAutoreleasedReturnValue();
    local_81 = 1;
    local_80 = local_110;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_110;
  }
  local_91 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_110;
  if ((local_91 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_90);
  }
  if ((local_81 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_night);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    local_130 = 0;
  }
  else {
    local_a8 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_night);
    _objc_retainAutoreleasedReturnValue();
    local_130 = local_a8;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_b8 = local_130;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_a0 = local_130;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_b8);
    (*(code *)PTR__objc_release_02578630)(local_a8);
  }
  (*(code *)PTR__objc_release_02578630)(uVar2);
  uVar2 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if ((uVar2 == 0) &&
     (uVar2 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    uVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneGlobal);
    local_28 = &cf_eX_;
    if ((uVar2 & 1) == 0) {
      local_28 = &cf_hQ__;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    uVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
    if ((uVar2 == 0) ||
       (uVar2 = local_a0, (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_length_0269cca0),
       uVar2 == 0)) {
      uVar2 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
      local_28 = &cf_Ne;
      if (uVar2 == 0) {
        local_28 = &cf_NY;
      }
      (*(code *)PTR__objc_retain_02578638)();
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf_e;
    }
  }
  _objc_storeStrong(&local_a0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

