// FUN_0179d570 @ 0179d570

void FUN_0179d570(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long local_68;
  undefined *local_50;
  byte local_41;
  long local_40;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028e40e8)(param_1,param_2);
  lVar1 = local_18;
  _WCRefineSessionSelectCompletionAssociationKey();
  _objc_getAssociatedObject(lVar1,param_1);
  _objc_retainAutoreleasedReturnValue();
  local_41 = 0;
  local_68 = lVar1;
  if (lVar1 == 0) {
    local_68 = local_18;
    _objc_getAssociatedObject(local_18,"completionBlock");
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_68;
  }
  local_41 = lVar1 == 0;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_68;
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_reportTag_026b4a18);
  if ((lVar1 == 0x5ea0) && (local_28 != 0)) {
    puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithTitle_style_target_actio_0269cf00,&cf__b,2,local_18,
               PTR_s_onMultiDone_026b4910);
    lVar1 = local_18;
    local_50 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_navigationItem_0269cf08);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

