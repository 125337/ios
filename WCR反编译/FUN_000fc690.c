// FUN_000fc690 @ 000fc690

void FUN_000fc690(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  cfstringStruct *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *local_88;
  undefined4 local_7c;
  cfstringStruct *local_78;
  char *local_70 [3];
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  char *local_38;
  long local_30;
  char *local_28;
  
  pcVar1 = "MMContext";
  local_30 = param_1;
  _objc_getClass();
  pcVar2 = "MMThemeManager";
  local_38 = pcVar1;
  _objc_getClass();
  pcVar1 = "WCColor";
  local_40 = pcVar2;
  _objc_getClass();
  local_48 = pcVar1;
  if (((local_38 == (char *)0x0) || (local_40 == (char *)0x0)) || (pcVar1 == (char *)0x0)) {
    local_28 = (char *)0x0;
    goto LAB_000fca2c;
  }
  pcVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_currentContext_0269d5f8);
  _objc_retainAutoreleasedReturnValue();
  local_50 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_getService__0269d170,local_40);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = local_48;
  local_58 = pcVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_Brand_0269ebd8);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = &cf_svgImageNamed_size_color_;
  local_70[0] = pcVar2;
  _NSSelectorFromString();
  local_78 = pcVar3;
  if ((local_58 == (char *)0x0) ||
     (pcVar2 = local_58,
     (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_respondsToSelector__026ca818,pcVar3),
     pcVar1 = local_58, pcVar3 = local_78, ((ulong)pcVar2 & 1) == 0)) {
    local_28 = (char *)0x0;
    local_7c = 1;
  }
  else {
    uVar6 = 0x4030000000000000;
    uVar5 = 0x4030000000000000;
    FUN_000fd0e4();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar5,uVar6,pcVar1,pcVar3,&cf_icons_outlined_double_arrow,local_70[0]);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar1;
    if (local_30 == 0) {
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar1,PTR_s_CGImage_0269e0e8);
      pcVar4 = local_88;
      pcVar2 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      if (pcVar1 == (char *)0x0) goto LAB_000fc8dc;
      _objc_retainAutorelease();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_CGImage_0269e0e8);
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_scale_026ca830);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,pcVar2,PTR_s_imageWithCGImage_scale_orientati_0269ebf0,pcVar4,1);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar2;
    }
    else {
LAB_000fc8dc:
      pcVar1 = local_88;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = pcVar1;
    }
    local_7c = 1;
    _objc_storeStrong(&local_88,0);
  }
  _objc_storeStrong(local_70);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
LAB_000fca2c:
  _objc_autoreleaseReturnValue(local_28);
  return;
}

