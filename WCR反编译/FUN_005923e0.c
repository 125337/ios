// FUN_005923e0 @ 005923e0

void FUN_005923e0(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  char *pcVar6;
  ulong local_70 [2];
  ulong local_60;
  cfstringStruct *local_58;
  char *local_50;
  undefined4 local_48;
  char *local_38;
  ulong local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  pcVar1 = "WCLocationInfo";
  _objc_getClass();
  local_38 = pcVar1;
  if (((pcVar1 == (char *)0x0) || (local_30 == 0)) ||
     (uVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isKindOfClass__0269cd68,pcVar1),
     (uVar2 & 1) == 0)) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    pcVar1 = local_38;
    _objc_alloc_init();
    uVar2 = local_30;
    local_50 = pcVar1;
    if (pcVar1 == (char *)0x0) {
      local_28 = (char *)0x0;
      local_48 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      FUN_0059321c(pcVar1,uVar2,&cf_city,puVar3);
      uVar2 = local_30;
      pcVar1 = local_50;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      FUN_0059321c(pcVar1,uVar2,&cf_poiName,puVar3);
      uVar2 = local_30;
      pcVar1 = local_50;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      FUN_0059321c(pcVar1,uVar2,&cf_poiAddress,puVar3);
      uVar2 = local_30;
      pcVar1 = local_50;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      FUN_0059321c(pcVar1,uVar2,&cf_poiInfoUrl,puVar3);
      uVar2 = local_30;
      pcVar1 = local_50;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      FUN_0059321c(pcVar1,uVar2,&cf_poiClassifyId,puVar3);
      uVar2 = local_30;
      pcVar1 = local_50;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      FUN_0059321c(pcVar1,uVar2,&cf_floorName,puVar3);
      uVar2 = local_30;
      pcVar1 = local_50;
      puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
      FUN_0059321c(pcVar1,uVar2,&cf_buildingID,puVar3);
      pcVar4 = &cf_CLLocation;
      _NSClassFromString();
      local_58 = pcVar4;
      if (pcVar4 != (cfstringStruct *)0x0) {
        FUN_0059321c(local_50,local_30,&cf_location,pcVar4);
      }
      uVar2 = local_30;
      pcVar1 = local_50;
      puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
      FUN_0059321c(pcVar1,uVar2,&cf_poiBuff,puVar3);
      local_60 = 0;
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_poiScale);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_60;
      local_60 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_respondsToSelector__026ca818,PTR_s_intValue_0269cc88);
      if (((uVar2 & 1) != 0) &&
         (pcVar6 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setPoiScale__026a5528),
         pcVar1 = local_50, puVar3 = PTR_s_setPoiScale__026a5528, ((ulong)pcVar6 & 1) != 0)) {
        uVar2 = local_60;
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_intValue_0269cc88);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar3,uVar2 & 0xffffffff);
      }
      local_70[0] = 0;
      uVar5 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_valueForKey__0269d128,&cf_poiClassifyType);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_70[0];
      local_70[0] = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar2);
      uVar2 = local_70[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_70[0],PTR_s_respondsToSelector__026ca818,PTR_s_unsignedIntValue_0269db10);
      if (((uVar2 & 1) != 0) &&
         (pcVar6 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_setPoiClassifyType__026a5530),
         pcVar1 = local_50, puVar3 = PTR_s_setPoiClassifyType__026a5530, ((ulong)pcVar6 & 1) != 0))
      {
        uVar2 = local_70[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_70[0],PTR_s_unsignedIntValue_0269db10);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar1,puVar3,uVar2 & 0xffffffff);
      }
      pcVar1 = local_50;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
      local_48 = 1;
      _objc_storeStrong(local_70);
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

