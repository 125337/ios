// quoteMeMessageTipRedStrongCustomText @ 02186504

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::quoteMeMessageTipRedStrongCustomText(ID param_1,SEL param_2)

{
  ID IVar1;
  SEL SVar2;
  ID IVar3;
  undefined *puVar4;
  ID IVar5;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  FUN_021867f0();
  _objc_retainAutoreleasedReturnValue();
  IVar3 = local_30;
  SVar2 = local_28;
  local_38 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  IVar3 = local_40;
  puVar4 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
  if ((IVar3 & 1) == 0) {
    _objc_storeStrong(&local_40,local_38);
    IVar1 = local_30;
    IVar3 = local_40;
    SVar2 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,IVar3);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar3 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar3;
    local_44 = 1;
  }
  else {
    IVar5 = local_40;
    FUN_021867fc();
    _objc_retainAutoreleasedReturnValue();
    local_50 = IVar5;
    (*(code *)PTR__objc_msgSend_02578628)(IVar5,PTR_s_isEqualToString__0269ccc8,local_40);
    IVar1 = local_30;
    IVar3 = local_50;
    if ((IVar5 & 1) == 0) {
      SVar2 = local_28;
      _cmdString();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,IVar3);
      (*(code *)PTR__objc_release_02578630)(SVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    IVar3 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar3;
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

