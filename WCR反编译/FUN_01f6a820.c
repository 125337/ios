// FUN_01f6a820 @ 01f6a820

void FUN_01f6a820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *local_68 [3];
  char *local_50;
  char *local_48;
  long local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_38 = 0;
  local_30 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = (char *)0x0;
  pcVar3 = "MMServiceCenter";
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar4 = "MMThemeManager";
  local_50 = pcVar3;
  _objc_getClass();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar4);
  _objc_retainAutoreleasedReturnValue();
  local_68[0] = pcVar3;
  if (pcVar3 != (char *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar3,PTR_s_respondsToSelector__026ca818,
               PTR_s_svgImageNamed_size_color_alpha__026a3d18);
    uVar2 = local_28;
    pcVar4 = local_68[0];
    puVar1 = PTR_s_svgImageNamed_size_color_alpha__026a3d18;
    if (((ulong)pcVar3 & 1) != 0) {
      uVar5 = local_30;
      uVar6 = local_30;
      FUN_01f6c83c();
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar5,uVar6,0x3ff0000000000000,pcVar4,puVar1,uVar2,local_38);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = local_48;
      local_48 = pcVar4;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
    }
  }
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_50,0);
  if ((local_48 == (char *)0x0) && (local_40 != 0)) {
    pcVar4 = PTR__OBJC_CLASS___UIImage_026cdfd0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_40);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_48;
    local_48 = pcVar4;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
  }
  pcVar3 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_imageWithRenderingMode__026ca690,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(pcVar3);
  return;
}

