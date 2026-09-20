// FUN_000e6f78 @ 000e6f78

void FUN_000e6f78(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  uint local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  pcVar2 = &cf_BaseMsgContentViewController;
  _NSClassFromString();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,pcVar2);
  if ((uVar3 & 1) == 0) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c839d);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_30 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((uVar3 & 1) == 0) || (uVar3 = local_30, FUN_000e739c(), (uVar3 & 1) == 0)) {
      local_38 = 0;
      uVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_getRightBarButton_0269ea20);
      if ((uVar3 & 1) != 0) {
        uVar5 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_getRightBarButton_0269ea20);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_38;
        local_38 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      uVar3 = local_38;
      FUN_000e7434();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      local_40 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      if (((uVar3 & 1) == 0) || (uVar3 = local_40, FUN_000e739c(), (uVar3 & 1) == 0)) {
        uVar5 = local_18;
        FUN_000e7778();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = local_40;
        local_40 = uVar5;
        (*(code *)PTR__objc_release_02578630)(uVar3);
      }
      if ((local_30 != 0) && (local_30 - local_40 != 0)) {
        FUN_000e799c(local_30 - local_40,local_30);
      }
      uVar3 = local_40;
      puVar4 = PTR__OBJC_CLASS___UIView_026cdfd8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      bVar1 = (uVar3 & 1) != 0;
      if (bVar1) {
        FUN_000e7dc4(local_18,local_40);
        _objc_setAssociatedObject(local_18,&DAT_028c839d,local_40,1);
      }
      else {
        _objc_setAssociatedObject(local_18,&DAT_028c839d,0,1);
      }
      local_28 = (uint)!bVar1;
      _objc_storeStrong(&local_40);
      _objc_storeStrong(&local_38,0);
    }
    else {
      local_28 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

