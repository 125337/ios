// refreshRightButton @ 00ee48a4

/* Function Stack Size: 0x10 bytes */

void WCRChatRoomPickerBridge::refreshRightButton(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  cfstringStruct *local_78;
  bool local_49;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  ID local_38;
  undefined4 local_2c;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pickerController_026ab800);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = param_1;
  FUN_00ee3a8c();
  _objc_retainAutoreleasedReturnValue();
  local_28 = IVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_28 == 0) {
    local_2c = 1;
  }
  else {
    IVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_pickerController_026ab800);
    _objc_retainAutoreleasedReturnValue();
    IVar2 = IVar1;
    FUN_00ee4b18();
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar2);
    (*(code *)PTR__objc_release_02578630)(IVar1);
    local_38 = IVar3;
    if (IVar3 == 0) {
      local_78 = &cf__b;
    }
    else {
      local_78 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf__b_);
      _objc_retainAutoreleasedReturnValue();
      local_48 = local_78;
    }
    local_49 = IVar3 != 0;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_78;
    if (local_49) {
      (*(code *)PTR__objc_release_02578630)(local_48);
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle_forState__026caab8,local_40,0);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle_forState__026caab8,local_40,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle_forState__026caab8,local_40,4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTitle_forState__026caab8,local_40,2);
    FUN_00ee4c38(local_28,local_40);
    _objc_storeStrong(&local_40,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

