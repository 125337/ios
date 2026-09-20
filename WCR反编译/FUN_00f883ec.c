// FUN_00f883ec @ 00f883ec

void FUN_00f883ec(undefined8 param_1)

{
  undefined1 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_b8;
  undefined *local_78;
  undefined *local_50;
  undefined *local_48;
  byte local_39;
  undefined *local_38;
  undefined *local_30;
  undefined4 local_28;
  undefined1 local_21;
  undefined *local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_21 = 0;
  bVar2 = true;
  uVar1 = local_18 != (undefined *)0x0;
  if ((bool)uVar1) {
    puVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028e2e80);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = puVar3 != (undefined *)0x0;
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
    local_78 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_backgroundColor_026ca518);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = local_18;
    local_39 = 0;
    bVar2 = local_78 == (undefined *)0x0;
    local_30 = local_78;
    if (bVar2) {
      local_78 = PTR__OBJC_CLASS___NSNull_026ce0e8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450);
      _objc_retainAutoreleasedReturnValue();
      local_38 = local_78;
    }
    local_39 = bVar2;
    _objc_setAssociatedObject(puVar3,&DAT_028e2e81,local_78,1);
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    puVar5 = local_18;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    puVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithFloat__0269fe98);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(puVar5,&DAT_028e2e82,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    puVar3 = local_18;
    puVar5 = PTR__OBJC_CLASS___UIVisualEffectView_026cdf98;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIVisualEffectView_026cdf98,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((ulong)puVar3 & 1) != 0) {
      local_b8 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_effect_026a1fb0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_18;
      bVar2 = local_b8 == (undefined *)0x0;
      local_48 = local_b8;
      if (bVar2) {
        local_50 = PTR__OBJC_CLASS___NSNull_026ce0e8;
        (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNull_026ce0e8,PTR_s_null_0269d450)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_b8 = local_50;
      }
      _objc_setAssociatedObject(puVar3,&DAT_028e2e83,local_b8,1);
      if (bVar2) {
        (*(code *)PTR__objc_release_02578630)(local_50);
      }
      _objc_storeStrong(&local_48,0);
    }
    puVar3 = local_18;
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(puVar3,&DAT_028e2e80,puVar5,1);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    _objc_storeStrong(&local_30,0);
    local_28 = 0;
  }
  _objc_storeStrong(&local_18,0);
  return;
}

