// voiceInputBreathingLightPaletteOverrides @ 02033d34

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::voiceInputBreathingLightPaletteOverrides(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  uint local_68;
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
  SVar1 = local_20;
  local_28 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_30 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  IVar2 = local_30;
  FUN_02034008();
  _objc_retainAutoreleasedReturnValue();
  IVar4 = local_30;
  puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((IVar4 & 1) != 0) || (local_64 = 1, local_30 == 0)) {
    local_68 = 0;
    if ((IVar4 & 1) != 0) {
      IVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToArray__0269e9b0,local_38);
      local_68 = (uint)IVar4 ^ 1;
    }
    local_64 = local_68;
  }
  if ((local_64 & 1) != 0) {
    IVar5 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_count_0269cfe0);
    IVar2 = local_28;
    IVar4 = local_38;
    if (IVar5 == 0) {
      SVar1 = local_20;
      _cmdString();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removeObjectForKey__0269d700);
      (*(code *)PTR__objc_release_02578630)(SVar1);
    }
    else {
      SVar1 = local_20;
      _cmdString();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_setObject_forKey__026ca9e8,IVar4);
      (*(code *)PTR__objc_release_02578630)(SVar1);
    }
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

