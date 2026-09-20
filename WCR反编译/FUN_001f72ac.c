// FUN_001f72ac @ 001f72ac

void FUN_001f72ac(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  long lVar3;
  undefined *puVar4;
  long local_40;
  undefined4 local_38;
  undefined1 local_31;
  long local_30;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_31 = 0;
  bVar2 = true;
  uVar1 = local_18 != 0;
  if ((bool)uVar1) {
    lVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c9123);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar3 == 0;
    local_31 = uVar1;
    local_30 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if (bVar2) {
    local_38 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setClipsToBounds__026ca8c8,0);
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(0);
    (*(code *)PTR__objc_release_02578630)(lVar3);
    puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_CGColor_026ca470);
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    lVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028c9122);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar3;
    if (lVar3 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_removeFromSuperlayer_026ca7f8);
      _objc_setAssociatedObject(local_18,&DAT_028c9122,0,1);
    }
    _objc_setAssociatedObject(local_18,&DAT_028c9120,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c9121,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028c9123,0,1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
    _objc_storeStrong(&local_40,0);
    local_38 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

