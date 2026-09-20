// profileBackgroundColorLight @ 020aa24c

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::profileBackgroundColorLight(ID param_1,SEL param_2)

{
  bool bVar1;
  SEL SVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar2 = local_28;
  local_30 = (undefined *)param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = (undefined *)param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  puVar4 = local_38;
  if (local_38 != (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((ulong)puVar4 & 1) != 0) goto LAB_020aa458;
  }
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSKeyedArchiver_026ce750;
  local_40 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSKeyedArchiver_026ce750,PTR_s_archivedDataWithRootObject__026a4fa0,
             puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_38;
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar4);
  puVar3 = local_30;
  puVar4 = local_38;
  SVar2 = local_28;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_setObject_forKey__026ca9e8,puVar4);
  (*(code *)PTR__objc_release_02578630)(SVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_storeStrong(&local_40,0);
LAB_020aa458:
  puVar4 = PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSKeyedUnarchiver_026ce748,PTR_s_unarchiveObjectWithData__026a4f98,
             local_38);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_48 = puVar4;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  bVar1 = ((ulong)puVar4 & 1) == 0;
  if (bVar1) {
    local_a0 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,
               PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
    _objc_retainAutoreleasedReturnValue();
    local_50 = local_a0;
  }
  else {
    local_a0 = local_48;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_a0;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

