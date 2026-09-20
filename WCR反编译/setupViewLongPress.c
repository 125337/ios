// setupViewLongPress @ 01759500

/* Function Stack Size: 0x10 bytes */

void ThemeExchangeViewController::setupViewLongPress(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *puVar5;
  uint local_64;
  undefined *local_58;
  uint local_50;
  byte local_49;
  ID local_48;
  byte local_39;
  ID local_38;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  _objc_getAssociatedObject();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_28;
  if (local_28 != 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_39 = 0;
    local_49 = 0;
    local_64 = 0;
    if (IVar2 == IVar3) {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      local_39 = 1;
      local_38 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_49 = 1;
      local_48 = IVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_64 = (uint)IVar4;
    }
    if ((local_49 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    if ((local_39 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_38);
    }
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    bVar1 = (local_64 & 1) == 0;
    if (bVar1) {
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject();
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    local_50 = (uint)!bVar1;
    _objc_storeStrong(&local_30,0);
    if (local_50 != 0) goto LAB_01759918;
  }
  puVar5 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)();
  local_58 = puVar5;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x4000000000000000,puVar5,PTR_s_setMinimumPressDuration__026ca9c8);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setNumberOfTouchesRequired__0269cbc8);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setCancelsTouchesInView__026ca8b8,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDelaysTouchesBegan__026a1af0,0);
  (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDelaysTouchesEnded__026a1af8,0);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  _objc_storeStrong(&local_58,0);
  local_50 = 0;
LAB_01759918:
  _objc_storeStrong(&local_28,0);
  return;
}

