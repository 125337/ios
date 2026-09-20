// FUN_01a81408 @ 01a81408

void FUN_01a81408(undefined8 param_1,undefined8 param_2,byte param_3)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  cfstringStruct *local_108;
  cfstringStruct *local_d0;
  cfstringStruct *local_90;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  bool local_61;
  cfstringStruct *local_60;
  byte local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  byte local_39;
  ulong local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_2);
  pcVar2 = local_30;
  local_39 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes)
  ;
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  pcVar5 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  local_51 = 0;
  local_61 = false;
  bVar1 = ((ulong)pcVar5 & 1) == 0;
  if (bVar1) {
    local_d0 = *(cfstringStruct **)PTR____NSDictionary0___02578288;
  }
  else {
    local_d0 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_scenes);
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = local_d0;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_d0;
  }
  local_61 = !bVar1;
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_d0;
  if ((local_61 & 1U) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar3);
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  local_70 = &cf_night;
  if ((local_39 & 1) == 0) {
    local_70 = &cf_day;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,local_70);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  pcVar3 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
  bVar1 = ((ulong)pcVar3 & 1) == 0;
  if (bVar1) {
    local_108 = (cfstringStruct *)0x0;
  }
  else {
    local_80 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,local_70)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_108 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_90 = local_108;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_78 = local_108;
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_90);
    (*(code *)PTR__objc_release_02578630)(local_80);
  }
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  pcVar2 = local_78;
  (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    uVar6 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_isEqualToString__0269ccc8,_WCRPageBackgroundSceneGlobal);
    local_28 = &cf_eX_;
    if ((uVar6 & 1) == 0) {
      local_28 = &cf_hQ__;
    }
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    pcVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

