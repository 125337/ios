// FUN_0040373c @ 0040373c

undefined4
FUN_0040373c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  cfstringStruct *local_b8;
  undefined4 local_64;
  cfstringStruct *local_48;
  undefined8 local_40;
  undefined8 local_38;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  pcVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_40 = param_6;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)pcVar2 & 1) == 0) {
    local_b8 = &cf___;
  }
  else {
    local_b8 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48 = local_b8;
  FUN_0042f834(local_28,local_b8,0);
  _objc_storeStrong(&local_48,0);
  local_64 = 0;
  if (DAT_028ca6c0 != (code *)0x0) {
    uVar3 = local_18;
    (*DAT_028ca6c0)(local_18,local_20,local_28,local_30,local_38,local_40);
    local_64 = (undefined4)uVar3;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return local_64;
}

