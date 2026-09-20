// FUN_001ef4e0 @ 001ef4e0

void FUN_001ef4e0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_48;
  undefined1 local_41;
  ulong local_40;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_41 = 0;
  bVar3 = true;
  uVar1 = local_28 != 0;
  if ((bool)uVar1) {
    uVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
    _objc_retainAutoreleasedReturnValue();
    bVar3 = uVar4 == 0;
    local_41 = uVar1;
    local_40 = uVar4;
    (*(code *)PTR__objc_release_02578630)(uVar4);
    uVar1 = local_41;
  }
  local_41 = uVar1;
  if (bVar3) {
    local_48 = 1;
  }
  else {
    uVar4 = local_28;
    _objc_getAssociatedObject(local_28,DAT_026dfab8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
    local_50 = uVar4;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_boolValue_026ca540),
       (uVar4 & 1) == 0)) {
      local_48 = 1;
    }
    else {
      uVar4 = local_28;
      _objc_getAssociatedObject(local_28,DAT_026dfac8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_28;
      local_58 = uVar4;
      _objc_getAssociatedObject(local_28,DAT_026dfad0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_28;
      local_60 = uVar6;
      _objc_getAssociatedObject(local_28,DAT_026dfad8);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = local_28;
      local_68 = uVar4;
      _objc_getAssociatedObject(local_28,DAT_026dfae0);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = local_58;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_70 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_doubleValue_026ca608);
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      uVar4 = local_60;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_doubleValue_026ca608);
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(param_1);
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      if ((local_68 == *(ulong *)PTR__kCFNull_025782b0) || (local_68 == 0)) {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      else {
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      uVar4 = local_70;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_class_0269cd60);
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar5);
      if ((uVar4 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_boolValue_026ca540);
        uVar4 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_layer_026ca788);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(uVar4);
      }
      uVar4 = local_28;
      uVar2 = DAT_026dfab8;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar4,uVar2,puVar5,1);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      _objc_storeStrong(&local_70);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_58,0);
      local_48 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

