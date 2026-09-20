// chatTopBarHostForTitleView: @ 010def60

/* Function Stack Size: 0x18 bytes */

ID WCRefineNameplateHelper::chatTopBarHostForTitleView_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  ulong uVar5;
  int iVar6;
  ulong local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  int local_34;
  ulong local_30;
  SEL local_28;
  ID local_20;
  ulong local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_18 = 0;
    iVar6 = 1;
    local_34 = 1;
  }
  else {
    pcVar3 = &cf_MMMsgContentNavBar;
    _NSClassFromString();
    pcVar4 = &cf_MMNewMsgContentNavBar;
    local_40 = pcVar3;
    _NSClassFromString();
    uVar2 = local_30;
    local_48 = pcVar4;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_50 = uVar2;
    while (local_50 != 0) {
      if (((local_40 != (cfstringStruct *)0x0) &&
          (uVar2 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_40),
          (uVar2 & 1) != 0)) ||
         ((local_48 != (cfstringStruct *)0x0 &&
          (uVar2 = local_50,
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isKindOfClass__0269cd68,local_48),
          (uVar2 & 1) != 0)))) {
        uVar2 = local_50;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = uVar2;
        local_34 = 1;
        goto LAB_010df108;
      }
      uVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_50;
      local_50 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    local_34 = 2;
LAB_010df108:
    _objc_storeStrong(&local_50,0);
    uVar2 = local_30;
    iVar6 = local_34 + -2;
    if (iVar6 == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = uVar2;
      iVar6 = 1;
      local_34 = 1;
    }
  }
  _objc_storeStrong(iVar6,&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

