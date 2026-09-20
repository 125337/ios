// FUN_015cde04 @ 015cde04

void FUN_015cde04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char *pcVar1;
  cfstringStruct *pcVar2;
  long lVar3;
  undefined8 ****ppppuVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 ****ppppuVar7;
  undefined8 ***local_118;
  undefined8 ***local_108;
  undefined8 ***local_100;
  undefined8 ***local_98;
  undefined *local_90;
  undefined8 ***local_88;
  undefined8 ***local_80;
  ulong local_78;
  ulong local_70;
  code *local_68;
  uint local_5c;
  cfstringStruct *local_58;
  undefined8 ***local_50;
  ulong local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 ***local_28;
  
  local_40 = 0;
  local_38 = param_1;
  local_30 = param_2;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  pcVar1 = "WCSVGImage";
  _objc_getClass();
  pcVar2 = &cf_imageWithContentsOfFile_size_color_alpha_rotate_;
  local_50 = (undefined8 ***)pcVar1;
  _NSSelectorFromString();
  lVar3 = local_40;
  local_58 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (((lVar3 == 0) || ((undefined8 ****)local_50 == (undefined8 ****)0x0)) ||
     (ppppuVar4 = (undefined8 ****)local_50,
     (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_respondsToSelector__026ca818,local_58),
     ((ulong)ppppuVar4 & 1) == 0)) {
    local_28 = (undefined8 ****)0x0;
    local_5c = 1;
    goto LAB_015ce2e8;
  }
  local_68 = (code *)PTR__objc_msgSend_02578628;
  local_70 = 0;
  local_78 = 0;
  uVar5 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_colorInLightMode_026b0fb0);
  if ((uVar5 & 1) != 0) {
    uVar6 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_colorInLightMode_026b0fb0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_70;
    local_70 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  uVar5 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_colorInDarkMode_026b0fb8);
  if ((uVar5 & 1) != 0) {
    uVar6 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_colorInDarkMode_026b0fb8);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = local_78;
    local_78 = uVar6;
    (*(code *)PTR__objc_release_02578630)(uVar5);
  }
  uVar5 = local_70;
  if ((local_70 == 0) || (local_78 == 0)) {
LAB_015ce288:
    ppppuVar4 = (undefined8 ****)local_50;
    (*local_68)(local_38,local_30,0x3ff0000000000000,0,local_50,local_58,local_40,local_48);
    _objc_retainAutoreleasedReturnValue();
    local_5c = 1;
    local_28 = ppppuVar4;
  }
  else {
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_CGColor_026ca470);
    uVar6 = local_78;
    if (uVar5 == 0) goto LAB_015ce288;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_CGColor_026ca470);
    uVar5 = local_70;
    if (uVar6 == 0) goto LAB_015ce288;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_CGColor_026ca470);
    uVar6 = local_78;
    _objc_retainAutorelease();
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_CGColor_026ca470);
    _CGColorEqualToColor(uVar5,uVar6);
    if ((uVar5 & 1) != 0) goto LAB_015ce288;
    ppppuVar4 = (undefined8 ****)local_50;
    (*local_68)(local_38,local_30,local_50,local_58,local_40,local_70);
    _objc_retainAutoreleasedReturnValue();
    ppppuVar7 = (undefined8 ****)local_50;
    local_80 = ppppuVar4;
    (*local_68)(local_38,local_30,0x3ff0000000000000,0,local_50,local_58,local_40,local_78);
    _objc_retainAutoreleasedReturnValue();
    local_90 = PTR_s_imageInLightMode_darkMode__026b0fc0;
    local_88 = ppppuVar7;
    if ((((undefined8 ****)local_80 == (undefined8 ****)0x0) || (ppppuVar7 == (undefined8 ****)0x0))
       || (ppppuVar7 = (undefined8 ****)PTR__OBJC_CLASS___UIImage_026cdfd0,
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_respondsToSelector__026ca818,
                     PTR_s_imageInLightMode_darkMode__026b0fc0), ((ulong)ppppuVar7 & 1) == 0)) {
LAB_015ce1cc:
      FUN_015cc9d8();
      if (((ulong)ppppuVar7 & 1) == 0) {
        if ((undefined8 ****)local_80 == (undefined8 ****)0x0) {
          local_118 = local_88;
        }
        else {
          local_118 = local_80;
        }
        local_108 = local_118;
      }
      else {
        if ((undefined8 ****)local_88 == (undefined8 ****)0x0) {
          local_100 = local_80;
        }
        else {
          local_100 = local_88;
        }
        local_108 = local_100;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_108;
      local_5c = 1;
    }
    else {
      ppppuVar4 = (undefined8 ****)PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60)
      ;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_98 = ppppuVar4;
      if (ppppuVar4 != (undefined8 ****)0x0) {
        (*(code *)PTR__objc_retain_02578638)();
        local_28 = ppppuVar4;
      }
      local_5c = (uint)(ppppuVar4 != (undefined8 ****)0x0);
      ppppuVar7 = &local_98;
      _objc_storeStrong(ppppuVar7,0);
      if (local_5c == 0) goto LAB_015ce1cc;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
  }
  _objc_storeStrong(&local_78);
  _objc_storeStrong(&local_70,0);
LAB_015ce2e8:
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

