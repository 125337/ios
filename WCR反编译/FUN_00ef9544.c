// FUN_00ef9544 @ 00ef9544

byte FUN_00ef9544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  cfstringStruct *local_68;
  undefined8 local_30;
  cfstringStruct *local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  if (local_28 == (cfstringStruct *)0x0) {
    local_68 = &cf___;
  }
  else {
    local_68 = local_28;
  }
  _NSSelectorFromString();
  if (((local_20 == 0) ||
      (pcVar1 = local_28, (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0),
      pcVar1 == (cfstringStruct *)0x0)) ||
     (uVar2 = local_20,
     (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_respondsToSelector__026ca818,local_68),
     (uVar2 & 1) == 0)) {
    local_11 = 0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,local_68,local_30);
    local_11 = 1;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

