// FUN_02140690 @ 02140690

void FUN_02140690(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *local_58;
  cfstringStruct *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == (cfstringStruct *)0x0) {
    local_58 = &cf___;
  }
  else {
    local_58 = local_28;
  }
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setObject_forKey__026ca9e8,local_58,local_20)
  ;
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

