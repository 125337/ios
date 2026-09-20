// presenterFromHost: @ 001688bc

/* Function Stack Size: 0x18 bytes */

ID WCRefineClearSessionHook::presenterFromHost_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined *puVar2;
  ID IVar3;
  ID local_60;
  ID local_40;
  undefined4 local_34;
  ID local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar3 = local_30;
  puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  IVar1 = local_30;
  if ((IVar3 & 1) == 0) {
    IVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mainFrameViewController_0269f7f0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
    local_40 = IVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIViewController_026cdf80,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((IVar3 & 1) == 0) {
      local_60 = 0;
    }
    else {
      local_60 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_60;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = IVar1;
    local_34 = 1;
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

