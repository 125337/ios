// hexFromColor: @ 00f8ba54

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x18 bytes */

ID WCRefineGradientPalette::hexFromColor_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  double local_70 [5];
  undefined4 local_44;
  ulong local_40;
  SEL local_38;
  ID local_30;
  cfstringStruct *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  if (local_40 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf__8E8E93;
  }
  else {
    local_70[4] = 0.0;
    local_70[3] = 0.0;
    local_70[2] = 0.0;
    local_70[1] = 1.0;
    uVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_getRed_green_blue_alpha__026ca660,local_70 + 4,local_70 + 3,
               local_70 + 2,local_70 + 1);
    if ((uVar1 & 1) == 0) {
      local_70[0] = 0.0;
      uVar1 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_getWhite_alpha__026ca668,local_70,local_70 + 1);
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = &cf__8E8E93;
        goto LAB_00f8be3c;
      }
      local_70[2] = local_70[0];
      local_70[3] = local_70[0];
      local_70[4] = local_70[0];
    }
    pcVar2 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
               &cf___02X_02X_02X);
    _objc_retainAutoreleasedReturnValue();
    local_28 = pcVar2;
  }
LAB_00f8be3c:
  local_44 = 1;
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

