// FUN_001b3014 @ 001b3014

void FUN_001b3014(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_50;
  undefined4 local_44;
  ulong local_40 [3];
  undefined8 local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*DAT_028c8aa0)(local_18,local_20,local_28);
  uVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  local_40[0] = uVar1;
  _objc_getAssociatedObject(uVar1,&DAT_028c8ac9);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if ((uVar2 & 1) == 0) {
    local_50 = 0;
    uVar2 = local_40[0];
    (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_valueForKey__0269d128,&cf_arrMenuItems);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_50;
    local_50 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_50;
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((uVar1 & 1) == 0) ||
       (uVar1 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0),
       uVar1 == 0)) {
      local_44 = 1;
    }
    else {
      FUN_001b496c(local_40[0],local_28);
      uVar1 = local_40[0];
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar1,&DAT_028c8ac9,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR_s_setMenuItemsWithNoDeleteBtn__0269ff00;
      uVar1 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40[0],PTR_s_respondsToSelector__026ca818,
                 PTR_s_setMenuItemsWithNoDeleteBtn__0269ff00);
      if ((uVar1 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_40[0],puVar3,local_50);
      }
      _objc_setAssociatedObject(local_40[0],&DAT_028c8ac9,0,1);
      local_44 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_44 = 1;
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  return;
}

