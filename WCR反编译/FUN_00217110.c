// FUN_00217110 @ 00217110

void FUN_00217110(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  uint local_180;
  undefined8 local_120;
  undefined8 local_d0;
  uint local_7c;
  long local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  long local_50;
  undefined4 local_48;
  byte local_41;
  long local_40;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_41 = 0;
  local_7c = 1;
  if (local_28 != 0) {
    lVar1 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c919d);
    _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_7c = (uint)lVar1 ^ 1;
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  if ((local_7c & 1) == 0) {
    lVar1 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028c919e);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_50 = lVar1;
    _objc_getAssociatedObject(local_28,&DAT_028c919f);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_58 = lVar2;
    _objc_getAssociatedObject(local_28,&DAT_028c91a0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_60 = lVar1;
    _objc_getAssociatedObject(local_28,&DAT_028c91a1);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_68 = lVar2;
    _objc_getAssociatedObject(local_28,&DAT_028c91a2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_28;
    local_70 = lVar1;
    _objc_getAssociatedObject(local_28,&DAT_028c91a3);
    _objc_retainAutoreleasedReturnValue();
    local_78 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_begin_026ca520);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_setDisableActions__026ca918,1);
    if (local_50 == 0) {
      local_d0 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_doubleValue_026ca608);
      local_d0 = param_1;
    }
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (local_68 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_unsignedIntegerValue_026cabb8);
    }
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (local_58 == 0) {
      local_120 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_doubleValue_026ca608);
      local_120 = local_d0;
    }
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_120);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (local_70 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_boolValue_026ca540);
    }
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(lVar1);
    if (local_78 == 0) {
      local_180 = 0;
    }
    else {
      lVar1 = local_78;
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_boolValue_026ca540);
      local_180 = (uint)lVar1;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setClipsToBounds__026ca8c8,local_180 & 1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___CATransaction_026ce3d8,PTR_s_commit_026ca580);
    FUN_00217f2c(local_28);
    _objc_storeStrong(&local_78);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
    _objc_storeStrong(&local_60,0);
    _objc_storeStrong(&local_58,0);
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

