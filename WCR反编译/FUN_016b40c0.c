// FUN_016b40c0 @ 016b40c0

void FUN_016b40c0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *local_48;
  uint local_40;
  byte local_39;
  ulong local_38;
  ulong local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar3 = local_20;
  local_39 = 0;
  puVar2 = PTR__OBJC_CLASS___UIButton_026cdfc8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIButton_026cdfc8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  bVar1 = true;
  if ((uVar3 & 1) != 0) {
    uVar3 = local_20;
    FUN_016b5c94();
    _objc_retainAutoreleasedReturnValue();
    local_39 = 1;
    bVar1 = uVar3 != 0;
    local_38 = uVar3;
  }
  if ((local_39 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  if (!bVar1) {
    puVar2 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_initWithTarget_action__026ca718,local_18,
               PTR_s_performRepeatEnhanceFileTagLongP_026b2ac0);
    local_48 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (DAT_02324020,puVar2,PTR_s_setMinimumPressDuration__026ca9c8);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCancelsTouchesInView__026ca8b8,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setEnabled__026ca938,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addGestureRecognizer__026ca4a8,local_48);
    _objc_setAssociatedObject(local_20,&DAT_028e3eb9,local_48,1);
    _objc_storeStrong(&local_48,0);
  }
  local_40 = (uint)bVar1;
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

