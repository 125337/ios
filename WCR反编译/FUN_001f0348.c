// FUN_001f0348 @ 001f0348

void FUN_001f0348(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_130;
  bool local_59;
  ulong local_58;
  ulong local_50 [3];
  ulong local_38;
  undefined4 local_2c;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  if (local_28 == 0) {
    local_2c = 1;
    goto LAB_001f08d0;
  }
  uVar2 = local_28;
  _objc_getAssociatedObject(local_28,DAT_026dfac0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  local_38 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar2 & 1) == 0) {
LAB_001f045c:
    uVar2 = local_28;
    uVar1 = DAT_026dfac8;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar2 = local_28;
    uVar1 = DAT_026dfad0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(param_1,puVar3,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    if (uVar4 == 0) {
      local_130 = *(ulong *)PTR__kCFNull_025782b0;
    }
    else {
      local_58 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
      _objc_retainAutoreleasedReturnValue();
      local_130 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)();
    }
    local_59 = uVar4 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_50[0] = local_130;
    if (local_59) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    (*(code *)PTR__objc_release_02578630)(uVar2);
    _objc_setAssociatedObject(local_28,DAT_026dfad8,local_50[0],1);
    uVar2 = local_28;
    uVar1 = DAT_026dfae0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithBool__0269ce60,uVar5 & 0xffffffff);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar2 = local_28;
    uVar1 = DAT_026dfac0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(local_50,0);
    local_2c = 0;
  }
  else {
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_boolValue_026ca540);
    if ((uVar2 & 1) == 0) goto LAB_001f045c;
    local_2c = 1;
  }
  _objc_storeStrong(&local_38,0);
LAB_001f08d0:
  _objc_storeStrong(&local_28,0);
  return;
}

