// homeAvatarStripUsernamesForRow: @ 0215b0e4

/* Function Stack Size: 0x18 bytes */

ID WCRefineConfig::homeAvatarStripUsernamesForRow_(ID param_1,SEL param_2,long_long param_3)

{
  long_long lVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  ID local_80;
  bool local_51;
  ID local_50;
  ID local_48;
  undefined4 local_3c;
  ID local_38;
  long_long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_homeAvatarStripNormalizedRowConf_026be298);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_30;
  local_38 = param_1;
  if (((long)local_30 < 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0),
     (long)param_1 <= (long)lVar1)) {
    IVar2 = *(ID *)PTR____NSArray0___02578280;
    (*(code *)PTR__objc_retain_02578638)();
    local_3c = 1;
    local_18 = IVar2;
  }
  else {
    IVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_48 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_48;
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
    local_51 = (IVar2 & 1) == 0;
    if (local_51) {
      local_80 = *(ID *)PTR____NSArray0___02578280;
    }
    else {
      local_80 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
      local_50 = local_80;
    }
    local_51 = !local_51;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_80;
    if (local_51) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_3c = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

