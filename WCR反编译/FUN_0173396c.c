// FUN_0173396c @ 0173396c

void FUN_0173396c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  cfstringStruct *local_c8;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  code *local_70;
  undefined *local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  code *local_38;
  cfstringStruct *local_30;
  undefined4 local_24;
  ulong local_20;
  cfstringStruct *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf___;
    local_24 = 1;
  }
  else {
    local_58 = 0;
    local_48 = 0x32000000;
    local_44 = 0x30;
    local_40 = FUN_0173793c;
    local_38 = FUN_01737990;
    local_50 = &local_58;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = &cf___;
    local_80 = PTR___NSConcreteStackBlock_02578660;
    local_78 = 0xc2000000;
    local_74 = 0;
    local_70 = FUN_017379bc;
    local_68 = &DAT_02588798;
    local_60 = &local_58;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_enumerateLinesUsingBlock__026b3db0,&local_80);
    local_c8 = (cfstringStruct *)local_50[5];
    if (local_c8 == (cfstringStruct *)0x0) {
      local_c8 = &cf___;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_c8;
    local_24 = 1;
    __Block_object_dispose(&local_58,8);
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

