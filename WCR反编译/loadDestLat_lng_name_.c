// loadDestLat:lng:name: @ 01954950

/* Function Stack Size: 0x28 bytes */

bool __thiscall
WCRefineFakeLocationSettingsViewController::loadDestLat_lng_name_
          (WCRefineFakeLocationSettingsViewController *this,ID param_1,SEL param_2,double *param_3,
          double *param_4,ID *param_5)

{
  cfstringStruct *pcVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  double in_d0;
  double dVar4;
  cfstringStruct *local_b0;
  bool local_69;
  cfstringStruct *local_68;
  cfstringStruct *local_48;
  ID *local_40;
  double *local_38;
  double *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  pcVar1 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  local_40 = param_5;
  local_38 = param_4;
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar1,PTR_s_objectForKeyedSubscript__0269d098,&cf_wcr_fakeLocationDestLatitude);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(pcVar1);
  pcVar1 = local_48;
  dVar4 = in_d0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_wcr_fakeLocationDestLongitude);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)();
  FUN_01954c24(in_d0,dVar4);
  if (((ulong)pcVar1 & 1) == 0) {
    local_11 = 0;
  }
  else {
    if (local_30 != (double *)0x0) {
      *local_30 = in_d0;
    }
    if (local_38 != (double *)0x0) {
      *local_38 = dVar4;
    }
    if (local_40 != (ID *)0x0) {
      pcVar1 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_wcr_fakeLocationDestName);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      pcVar3 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
      local_69 = ((ulong)pcVar3 & 1) == 0;
      if (local_69) {
        local_b0 = &::cf___;
      }
      else {
        local_b0 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectForKeyedSubscript__0269d098,&cf_wcr_fakeLocationDestName);
        _objc_retainAutoreleasedReturnValue();
        local_68 = local_b0;
      }
      local_69 = !local_69;
      _objc_retainAutorelease();
      *local_40 = (ID)local_b0;
      if (local_69) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar1);
    }
    local_11 = 1;
  }
  _objc_storeStrong(&local_48,0);
  return local_11 & 1;
}

