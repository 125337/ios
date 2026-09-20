// FUN_01f82c78 @ 01f82c78

void FUN_01f82c78(void)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *local_40 [3];
  char *local_28;
  undefined *local_20;
  char *local_18;
  
  local_18 = (char *)0x0;
  puVar1 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            (DAT_02323da8,DAT_02323f60,DAT_02323f38,0x3ff0000000000000,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "MMServiceCenter";
  local_20 = puVar1;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar3 = "MMThemeManager";
  local_28 = pcVar2;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
  _objc_retainAutoreleasedReturnValue();
  local_40[0] = pcVar2;
  if (pcVar2 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_respondsToSelector__026ca818,
               PTR_s_svgImageNamed_size_color_alpha__026a3d18);
    pcVar3 = local_40[0];
    puVar1 = PTR_s_svgImageNamed_size_color_alpha__026a3d18;
    if (((ulong)pcVar2 & 1) != 0) {
      uVar4 = 0x4041800000000000;
      uVar5 = uVar4;
      FUN_01f835a4();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar4,uVar5,0x3ff0000000000000,pcVar3,puVar1,&cf_icons_filled_folder,local_20);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_18;
      local_18 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  if (local_18 == (char *)0x0) {
    pcVar3 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,&cf_folder_fill);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = local_18;
    local_18 = pcVar3;
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  pcVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_imageWithRenderingMode__026ca690,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  _objc_autoreleaseReturnValue(pcVar2);
  return;
}

