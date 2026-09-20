// FUN_00f872a0 @ 00f872a0

void FUN_00f872a0(undefined4 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_b0;
  undefined *local_60;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_28;
  undefined1 local_21;
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_2);
  local_21 = 0;
  bVar2 = true;
  uVar1 = local_18 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e2e80);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar3 == (undefined *)0x0;
    local_21 = uVar1;
    local_20 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar1 = local_21;
  }
  local_21 = uVar1;
  if (bVar2) {
    local_28 = 1;
  }
  else {
    puVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e2e81);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      if (puVar3 == puVar4) {
        local_60 = (undefined *)0x0;
      }
      else {
        local_60 = local_30;
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setBackgroundColor__026ca888,local_60);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      puVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundColor_026ca518);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_CGColor_026ca470);
      puVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e2e82);
    _objc_retainAutoreleasedReturnValue();
    local_38 = puVar3;
    if (puVar3 != (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_floatValue_026a5b48);
      puVar3 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(param_1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    puVar4 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e2e83);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_18;
    local_40 = puVar4;
    if (puVar4 != (undefined *)0x0) {
      puVar4 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
      puVar4 = local_40;
      if (((ulong)puVar3 & 1) != 0) {
        puVar3 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        if (puVar4 == puVar3) {
          local_b0 = (undefined *)0x0;
        }
        else {
          local_b0 = local_40;
        }
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setEffect__026ca930,local_b0);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
    }
    _objc_setAssociatedObject(local_18,&DAT_028e2e81);
    _objc_setAssociatedObject(local_18,&DAT_028e2e82,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028e2e83,0,1);
    _objc_setAssociatedObject(local_18,&DAT_028e2e80,0,1);
    _objc_storeStrong(&local_40,0);
    _objc_storeStrong(&local_38,0);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

