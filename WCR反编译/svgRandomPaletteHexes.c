// svgRandomPaletteHexes @ 0209d4dc

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::svgRandomPaletteHexes(ID param_1,SEL param_2)

{
  ID IVar1;
  SEL SVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  ulong uVar6;
  uint local_64;
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
  SVar2 = local_20;
  local_28 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  IVar4 = local_30;
  local_38 = 0;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((IVar4 & 1) == 0) {
    uVar6 = IVar4;
    FUN_0209da94();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_38;
    local_38 = uVar6;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  else {
    IVar5 = local_30;
    FUN_0209d760();
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_38;
    local_38 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar1);
  }
  local_64 = 1;
  if ((IVar4 & 1) != 0) {
    IVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToArray__0269e9b0,local_38);
    local_64 = (uint)IVar4 ^ 1;
  }
  IVar1 = local_28;
  IVar4 = local_38;
  if ((local_64 & 1) != 0) {
    SVar2 = local_20;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_setObject_forKey__026ca9e8,IVar4);
    (*(code *)PTR__objc_release_02578630)(SVar2);
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

