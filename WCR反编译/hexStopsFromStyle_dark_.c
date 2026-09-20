// hexStopsFromStyle:dark: @ 00f8d324

/* Function Stack Size: 0x1c bytes */

ID WCRefineGradientPalette::hexStopsFromStyle_dark_(ID param_1,SEL param_2,ID param_3,bool param_4)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  cfstringStruct *local_120;
  cfstringStruct *local_100;
  ID local_c8;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  byte local_81;
  ID local_80;
  byte local_71;
  ID local_70;
  ID local_68;
  undefined4 local_60;
  byte local_59;
  cfstringStruct *local_58;
  SEL local_50;
  ID local_48;
  ID local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_58 = (cfstringStruct *)0x0;
  local_50 = param_2;
  local_48 = param_1;
  _objc_storeStrong(&local_58,param_3);
  pcVar2 = local_58;
  local_59 = (byte)param_4;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  IVar3 = local_48;
  if (((ulong)pcVar2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_normalizedHexStops__026acc78,*(undefined8 *)PTR____NSArray0___02578280
              );
    _objc_retainAutoreleasedReturnValue();
    local_60 = 1;
    local_40 = IVar3;
  }
  else {
    pcVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_gradientPresetId);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_itemWithIdentifier__026acc80);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
    IVar3 = local_48;
    if (local_68 == 0) {
      pcVar2 = &cf_darkStops;
      if ((local_59 & 1) == 0) {
        pcVar2 = &cf_lightStops;
      }
      pcVar4 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_objectForKeyedSubscript__0269d098,pcVar2)
      ;
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      local_90 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar1);
      if ((((ulong)pcVar4 & 1) == 0) ||
         (pcVar2 = local_90, (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_count_0269cfe0),
         pcVar2 < (cfstringStruct *)0x2)) {
        pcVar2 = &cf_dark;
        if ((local_59 & 1) == 0) {
          pcVar2 = &cf_light;
        }
        (*(code *)PTR__objc_retain_02578638)();
        IVar3 = local_48;
        pcVar4 = local_58;
        local_98 = pcVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_stringByAppendingString__0269d398,&cf_Color);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_58;
        local_100 = pcVar4;
        if (pcVar4 == (cfstringStruct *)0x0) {
          local_100 = &cf__C45C6A;
        }
        local_38 = local_100;
        pcVar5 = local_98;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_98,PTR_s_stringByAppendingString__0269d398,&cf_EndColor);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_objectForKeyedSubscript__0269d098);
        _objc_retainAutoreleasedReturnValue();
        local_120 = pcVar6;
        if (pcVar6 == (cfstringStruct *)0x0) {
          local_120 = &cf__E8949E;
        }
        local_30 = local_120;
        puVar1 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_38,2);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_normalizedHexStops__026acc78);
        _objc_retainAutoreleasedReturnValue();
        local_40 = IVar3;
        (*(code *)PTR__objc_release_02578630)(puVar1);
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_release_02578630)(pcVar5);
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        (*(code *)PTR__objc_release_02578630)(pcVar2);
        local_60 = 1;
        _objc_storeStrong(&local_98,0);
      }
      else {
        IVar3 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_normalizedHexStops__026acc78,local_90);
        _objc_retainAutoreleasedReturnValue();
        local_60 = 1;
        local_40 = IVar3;
      }
      _objc_storeStrong(&local_90,0);
    }
    else {
      local_71 = 0;
      local_81 = 0;
      local_c8 = local_68;
      if ((local_59 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_lightStops_026acc90);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 1;
        local_80 = local_c8;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_darkStops_026acc88);
        _objc_retainAutoreleasedReturnValue();
        local_71 = 1;
        local_70 = local_c8;
      }
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_normalizedHexStops__026acc78,local_c8);
      _objc_retainAutoreleasedReturnValue();
      local_40 = IVar3;
      if ((local_81 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_80);
      }
      if ((local_71 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_70);
      }
      local_60 = 1;
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58,0);
  if (*(long *)PTR____stack_chk_guard_02578670 == local_28) {
    _objc_autoreleaseReturnValue(0);
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

