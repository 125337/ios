// dismissAirDropSheetAnimated: @ 01744130

/* Function Stack Size: 0x14 bytes */

void ThemeBoxAirDropViewController::dismissAirDropSheetAnimated_
               (ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_48;
  ID local_40;
  ID local_38;
  ID local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028e3fa3);
  _objc_retainAutoreleasedReturnValue();
  IVar1 = local_18;
  local_30 = param_1;
  _objc_getAssociatedObject(local_18,&DAT_028e3fa4);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_18;
  local_38 = IVar1;
  _objc_getAssociatedObject(local_18,&DAT_028e3fa1);
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resignFirstResponder_0269ea18);
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_resignFirstResponder_0269ea18);
  if (local_40 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setDelegate__026ca910);
    _objc_setAssociatedObject(local_40,&DAT_028e3fa0,0,1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_resignFirstResponder_0269ea18);
  IVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_airDropSheet_026b3fd8);
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar1;
  if (IVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_dismissWithAnimated__0269e420,local_21 & 1);
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAirDropSheet__026b3f50);
  _objc_setAssociatedObject(local_18,&DAT_028e3fa3,0);
  _objc_setAssociatedObject(local_18,&DAT_028e3fa4,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028e3fa1,0,1);
  _objc_setAssociatedObject(local_18,&DAT_028e3fa2,0,3);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  return;
}

