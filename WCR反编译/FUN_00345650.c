// FUN_00345650 @ 00345650

void FUN_00345650(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  int iVar7;
  uint local_138;
  cfstringStruct *local_f8;
  cfstringStruct *local_78;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  int local_58;
  undefined1 local_51;
  cfstringStruct *local_50;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_1);
  pcVar4 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = pcVar4;
  while( true ) {
    local_51 = 0;
    bVar3 = false;
    uVar1 = local_38 != (cfstringStruct *)0x0;
    if ((bool)uVar1) {
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      bVar3 = pcVar4 != (cfstringStruct *)0x0;
      local_51 = uVar1;
      local_50 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      uVar1 = local_51;
    }
    local_51 = uVar1;
    pcVar4 = local_38;
    if (!bVar3) goto LAB_00345cc4;
    puVar5 = PTR__OBJC_CLASS___UIControl_026ce2d0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIControl_026ce2d0,PTR_s_class_0269cd60)
    ;
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    pcVar6 = local_38;
    if (((ulong)pcVar4 & 1) != 0) break;
    puVar5 = PTR__OBJC_CLASS___UIButton_026cdfc8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)pcVar6 & 1) != 0) break;
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_class_0269cd60);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    local_f8 = pcVar4;
    if (pcVar4 == (cfstringStruct *)0x0) {
      local_f8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_f8;
    (*(code *)PTR__objc_release_02578630)(pcVar4);
    pcVar4 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_Check);
    if ((((ulong)pcVar4 & 1) == 0) &&
       (pcVar4 = local_60,
       (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_containsString__0269d0b0,&cf_Button),
       ((ulong)pcVar4 & 1) == 0)) {
      bVar2 = false;
      bVar3 = false;
      pcVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___UIWindow_026cdf68;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIWindow_026cdf68,PTR_s_class_0269cd60);
      pcVar6 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      local_138 = 1;
      if (((ulong)pcVar6 & 1) == 0) {
        local_68 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        puVar5 = PTR__OBJC_CLASS___UITableView_026ce1a8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60);
        pcVar6 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_isKindOfClass__0269cd68,puVar5);
        local_138 = 1;
        if (((ulong)pcVar6 & 1) == 0) {
          local_78 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
          _objc_retainAutoreleasedReturnValue();
          bVar3 = true;
          puVar5 = PTR__OBJC_CLASS___UICollectionView_026ce1f8;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UICollectionView_026ce1f8,PTR_s_class_0269cd60);
          pcVar6 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isKindOfClass__0269cd68,puVar5);
          local_138 = (uint)pcVar6;
        }
      }
      if (bVar3) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_68);
      }
      (*(code *)PTR__objc_release_02578630)(pcVar4);
      if ((local_138 & 1) == 0) {
        pcVar6 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_superview_026cab50);
        _objc_retainAutoreleasedReturnValue();
        pcVar4 = local_38;
        local_38 = pcVar6;
        (*(code *)PTR__objc_release_02578630)(pcVar4);
        local_58 = 0;
      }
      else {
        local_58 = 3;
      }
    }
    else {
      pcVar4 = local_38;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar4;
      local_58 = 1;
    }
    _objc_storeStrong(&local_60,0);
    if (local_58 != 0) {
      iVar7 = local_58 + -3;
      if (iVar7 == 0) {
LAB_00345cc4:
        pcVar4 = local_30;
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = pcVar4;
        iVar7 = 1;
        local_58 = 1;
      }
LAB_00345cec:
      _objc_storeStrong(iVar7,&local_38);
      _objc_storeStrong(&local_30,0);
      _objc_autoreleaseReturnValue(local_28);
      return;
    }
  }
  pcVar4 = local_38;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = pcVar4;
  iVar7 = 1;
  local_58 = 1;
  goto LAB_00345cec;
}

