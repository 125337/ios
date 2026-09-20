// ensureLongPressGestureForView:handler: @ 01130488

/* Function Stack Size: 0x20 bytes */

void WCRefineQuickRemarkEditor::ensureLongPressGestureForView_handler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,undefined4 param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined *local_48;
  ulong local_40;
  uint local_34;
  long local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3,param_3,param_4,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if ((local_28 == 0) || (local_30 == 0)) {
    local_34 = 1;
  }
  else {
    uVar3 = local_28;
    _objc_getAssociatedObject(local_28,&DAT_028e3581);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
    local_40 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    uVar2 = local_40;
    bVar1 = (uVar3 & 1) == 0;
    if (bVar1) {
      puVar4 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_026ce220;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_48 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323c78,puVar4,PTR_s_setMinimumPressDuration__026ca9c8);
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setCancelsTouchesInView__026ca8b8,0);
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4028000000000000,local_48,PTR_s_setAllowableMovement__0269e520);
      _objc_setAssociatedObject(local_28,&DAT_028e3581,local_48,1);
      puVar4 = local_48;
      lVar5 = local_30;
      _objc_retainBlock();
      _objc_setAssociatedObject(puVar4,&DAT_028e3582,lVar5,3);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUserInteractionEnabled__026caad8,1);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addGestureRecognizer__026ca4a8,local_48);
      _objc_storeStrong(&local_48,0);
    }
    else {
      lVar5 = local_30;
      _objc_retainBlock();
      _objc_setAssociatedObject(uVar2,&DAT_028e3582,lVar5,3);
      (*(code *)PTR__objc_release_02578630)(lVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setUserInteractionEnabled__026caad8,1);
    }
    local_34 = (uint)!bVar1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

