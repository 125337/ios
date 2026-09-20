// svgColorIncludeIconNames @ 0209e518

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::svgColorIncludeIconNames(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  uint local_40;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_20;
  local_28 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  IVar2 = local_30;
  FUN_0209df50();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  local_40 = 1;
  if ((IVar4 & 1) != 0) {
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_38);
    local_40 = (uint)IVar4 ^ 1;
  }
  IVar2 = local_28;
  IVar4 = local_38;
  if ((local_40 & 1) != 0) {
    SVar1 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,IVar4);
    (*(code *)PTR__objc_release_02578630)(SVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
  }
  IVar4 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return IVar4;
}

