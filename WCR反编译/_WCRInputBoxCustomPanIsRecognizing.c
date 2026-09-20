// _WCRInputBoxCustomPanIsRecognizing @ 003f0c20

uint _WCRInputBoxCustomPanIsRecognizing(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint local_d8;
  ulong local_50;
  ulong local_48;
  ulong local_40;
  long local_38;
  undefined *local_30 [3];
  ulong local_18;
  
  local_18 = 0;
  puVar1 = &DAT_028ca520;
  _objc_loadWeakRetained();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  puVar4 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar4 & 1) != 0) {
    puVar1 = &DAT_028ca520;
    _objc_loadWeakRetained();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_30[0] = puVar2;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_38 = 0;
    while (local_30[0] != (undefined *)0x0 && local_38 < 0xc) {
      puVar1 = local_30[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar1);
      if (((ulong)puVar2 & 1) != 0) {
        _objc_storeStrong(&local_18,local_30[0]);
        break;
      }
      local_38 = local_38 + 1;
      puVar2 = local_30[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_30[0];
      local_30[0] = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    _objc_storeStrong(local_30,0);
  }
  uVar5 = local_18;
  _objc_getAssociatedObject(local_18,DAT_026e0300);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = local_18;
  local_40 = uVar5;
  FUN_003f1098();
  _objc_retainAutoreleasedReturnValue();
  local_48 = uVar6;
  _objc_getAssociatedObject(uVar6,DAT_026e0308);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = local_40;
  local_50 = uVar6;
  FUN_003f12c8();
  local_d8 = 1;
  if ((uVar5 & 1) == 0) {
    uVar5 = local_50;
    FUN_003f12c8();
    local_d8 = (uint)uVar5;
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_18,0);
  return local_d8 & 1;
}

