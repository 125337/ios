// FUN_001525dc @ 001525dc

void FUN_001525dc(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (uVar1 == 0) {
    local_28 = 1;
  }
  else {
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_getAssociatedObject();
    _objc_retainAutoreleasedReturnValue();
    local_30 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_30;
    puVar3 = PTR_WCRAttachmentVideoBackgroundView_026ce310;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRAttachmentVideoBackgroundView_026ce310,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_stop_0269dd58);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_removeFromSuperview_026ca800);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_getAssociatedObject();
    _objc_retainAutoreleasedReturnValue();
    local_38 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_removeFromSuperview_026ca800);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

