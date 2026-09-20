// FUN_0209fea8 @ 0209fea8

void FUN_0209fea8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  cfstringStruct *pcVar4;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  undefined8 *local_20;
  cfstringStruct *local_18;
  
  local_20 = (undefined8 *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__000000;
  }
  else {
    local_30 = 0;
    local_38 = 0;
    local_40 = 0;
    local_48 = 0;
    puVar3 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_getRed_green_blue_alpha__026ca660,&local_30,&local_38,&local_40,
               &local_48);
    puVar2 = local_20;
    if (((ulong)puVar3 & 1) == 0) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_CGColor_026ca470);
      puVar3 = puVar2;
      _CGColorGetComponents();
      _CGColorGetNumberOfComponents();
      if ((puVar3 != (undefined8 *)0x0) && ((undefined8 *)((long)&MACH_HEADER.magic + 2) < puVar2))
      {
        local_30 = *puVar3;
        local_38 = puVar3[1];
        local_40 = puVar3[2];
      }
    }
    pcVar4 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf___02X_02X_02X);
    _objc_retainAutoreleasedReturnValue();
    local_18 = pcVar4;
  }
  local_24 = 1;
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

