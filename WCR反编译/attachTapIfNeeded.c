// attachTapIfNeeded @ 00067618

/* Function Stack Size: 0x10 bytes */

void WCRAutoScrollDriver::attachTapIfNeeded(ID param_1,SEL param_2)

{
  undefined1 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *local_40;
  uint local_38;
  undefined1 local_31;
  ID local_30;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_scrollView_0269dcc0);
  _objc_retainAutoreleasedReturnValue();
  local_31 = 0;
  bVar2 = true;
  uVar1 = param_1 != 0;
  local_28 = param_1;
  if ((bool)uVar1) {
    IVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_tapMonitor_0269dcf8);
    _objc_retainAutoreleasedReturnValue();
    bVar2 = IVar3 != 0;
    local_31 = uVar1;
    local_30 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar3);
    uVar1 = local_31;
  }
  local_31 = uVar1;
  if (!bVar2) {
    puVar4 = PTR__OBJC_CLASS___UITapGestureRecognizer_026cdfa0;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_setCancelsTouchesInView__026ca8b8,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addGestureRecognizer__026ca4a8,local_40);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setTapMonitor__0269dd08,local_40);
    _objc_storeStrong(&local_40,0);
  }
  local_38 = (uint)bVar2;
  _objc_storeStrong(&local_28,0);
  return;
}

