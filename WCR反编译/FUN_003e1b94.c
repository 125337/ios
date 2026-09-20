// FUN_003e1b94 @ 003e1b94

void FUN_003e1b94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 *param_5)

{
  cfstringStruct *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  cfstringStruct *local_48;
  undefined8 *local_40;
  undefined8 local_38;
  ulong local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  pcVar1 = &cf_embedded_mobileprovision;
  local_40 = param_5;
  local_38 = param_4;
  FUN_003e6e28();
  _objc_retainAutoreleasedReturnValue();
  local_48 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_length_0269cca0);
  if (((pcVar1 == (cfstringStruct *)0x0) ||
      (uVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
      uVar2 == 0)) ||
     (uVar2 = local_30,
     (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_48),
     (uVar2 & 1) == 0)) {
    uVar4 = local_20;
    (*DAT_028ca3b0)(local_20,local_28,local_30,local_38,local_40);
    _objc_retainAutoreleasedReturnValue();
    local_18 = uVar4;
  }
  else {
    FUN_003e3274(0x4014000000000000);
    if (local_40 != (undefined8 *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSError_026ce470;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSError_026ce470,PTR_s_errorWithDomain_code_userInfo__026a1648,
                 *(undefined8 *)PTR__NSCocoaErrorDomain_02578010,2,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_40 = puVar3;
    }
    local_18 = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

