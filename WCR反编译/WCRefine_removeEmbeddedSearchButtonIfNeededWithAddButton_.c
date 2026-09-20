// WCRefine_removeEmbeddedSearchButtonIfNeededWithAddButton: @ 004ca378

/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Function Stack Size: 0x18 bytes */

void WCRefineMainFrameSearchButton::WCRefine_removeEmbeddedSearchButtonIfNeededWithAddButton_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 in_d0;
  undefined8 in_d1;
  undefined8 in_d2;
  undefined8 in_d3;
  ulong local_158 [10];
  ulong local_108 [10];
  ulong local_b8 [10];
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    uVar1 = local_38;
    FUN_004c9c5c();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_48 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((uVar1 & 1) == 0) {
      local_3c = 1;
    }
    else {
      uVar1 = local_48;
      _objc_getAssociatedObject(local_48,&DAT_028cac41);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar1;
      if (uVar1 != 0) {
        FUN_004ca080();
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar1;
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_removeFromSuperview_026ca800);
        _objc_storeStrong(&local_58,0);
      }
      uVar1 = local_48;
      FUN_004c9e4c();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_48;
      local_60 = uVar1;
      _objc_getAssociatedObject(local_48,&DAT_028cac44);
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar3;
      if ((local_60 != 0) && (uVar3 != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_CGRectValue_0269e128);
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setFrame__026ca960);
      }
      uVar1 = local_48;
      _objc_getAssociatedObject(local_48,&DAT_028cac45);
      _objc_retainAutoreleasedReturnValue();
      local_b8[0] = uVar1;
      if ((local_60 != 0) && (uVar1 != 0)) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_CGRectValue_0269e128);
        (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_setBounds__026ca8a0);
      }
      uVar1 = local_48;
      _objc_getAssociatedObject(local_48,&DAT_028cac42);
      _objc_retainAutoreleasedReturnValue();
      local_108[0] = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_CGRectValue_0269e128);
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_setFrame__026ca960);
      }
      uVar1 = local_48;
      _objc_getAssociatedObject(local_48,&DAT_028cac43);
      _objc_retainAutoreleasedReturnValue();
      local_158[0] = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_CGRectValue_0269e128);
        (*(code *)PTR__objc_msgSend_02578628)
                  (in_d0,in_d1,in_d2,in_d3,local_48,PTR_s_setBounds__026ca8a0);
      }
      _objc_setAssociatedObject(local_48,&DAT_028cac40,0,1);
      _objc_storeStrong(local_158,0);
      _objc_storeStrong(local_108,0);
      _objc_storeStrong(local_b8,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      _objc_storeStrong(&local_50,0);
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

