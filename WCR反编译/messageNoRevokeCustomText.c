// messageNoRevokeCustomText @ 020836c8

/* Function Stack Size: 0x10 bytes */

ID WCRefineConfig::messageNoRevokeCustomText(ID param_1,SEL param_2)

{
  bool bVar1;
  SEL SVar2;
  ID IVar3;
  ID IVar4;
  ID IVar5;
  ID local_50;
  undefined4 local_44;
  ID local_40;
  cfstringStruct *local_38;
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
  (*(code *)PTR__objc_retain_02578638)();
  IVar3 = local_30;
  local_38 = &cf__b_b_;
  SVar2 = local_28;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar3;
  (*(code *)PTR__objc_release_02578630)(SVar2);
  IVar3 = local_40;
  if (local_40 == 0) {
    _objc_storeStrong(&local_40,local_38);
    IVar4 = local_30;
    IVar3 = local_40;
    SVar2 = local_28;
    _cmdString();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setObject_forKey__026ca9e8,IVar3);
    (*(code *)PTR__objc_release_02578630)(SVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)();
    IVar3 = local_40;
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar3;
    local_44 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_containsString__0269d0b0,&cf__N_);
    bVar1 = (IVar3 & 1) != 0;
    if (bVar1) {
      IVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_stringByReplacingOccurrencesOfSt_0269d188,&cf__N_,&cf__S);
      _objc_retainAutoreleasedReturnValue();
      IVar3 = local_50;
      local_50 = IVar4;
      (*(code *)PTR__objc_release_02578630)(IVar3);
    }
    IVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&::cf__);
    if (((IVar3 & 1) != 0) ||
       (IVar3 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&::cf__),
       (IVar3 & 1) != 0)) {
      _objc_storeStrong(&local_50,local_38);
      bVar1 = true;
    }
    IVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (IVar3 == 0) {
      _objc_storeStrong(&local_50,local_38);
      bVar1 = true;
    }
    if ((bVar1) &&
       (IVar5 = local_50,
       (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,local_40),
       IVar4 = local_30, IVar3 = local_50, (IVar5 & 1) == 0)) {
      SVar2 = local_28;
      _cmdString();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(IVar4,PTR_s_setObject_forKey__026ca9e8,IVar3);
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

