// FUN_01f728a0 @ 01f728a0

void FUN_01f728a0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  char *local_148;
  char *local_d0;
  bool local_a1;
  char *local_a0;
  char *local_80 [3];
  char *local_68;
  char *local_60;
  undefined4 local_58;
  bool local_51;
  char *local_50;
  long local_48;
  undefined8 local_40;
  double local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_40 = 0;
  local_38 = param_1;
  _objc_storeStrong(&local_40,param_3);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_4);
  lVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_51 = false;
    bVar1 = local_48 == 0;
    if (bVar1) {
      local_d0 = (char *)0x0;
    }
    else {
      local_d0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_d0;
    }
    local_51 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = local_d0;
    if ((local_51 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_58 = 1;
  }
  else {
    local_60 = (char *)0x0;
    pcVar4 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar5 = "MMThemeManager";
    local_68 = pcVar4;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar4,PTR_s_getService__0269d170,pcVar5);
    _objc_retainAutoreleasedReturnValue();
    local_80[0] = pcVar4;
    if (((pcVar4 != (char *)0x0) && (0.0 < local_38)) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar4,PTR_s_respondsToSelector__026ca818,
                   PTR_s_svgImageNamed_size_color_alpha__026a3d18), lVar3 = local_30,
       pcVar5 = local_80[0], puVar2 = PTR_s_svgImageNamed_size_color_alpha__026a3d18,
       ((ulong)pcVar4 & 1) != 0)) {
      dVar6 = local_38;
      dVar7 = local_38;
      FUN_01f71a84();
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar6,dVar7,0x3ff0000000000000,pcVar5,puVar2,lVar3,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_60;
      local_60 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    if (((local_60 == (char *)0x0) && (local_80[0] != (char *)0x0)) &&
       (pcVar4 = local_80[0],
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_80[0],PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760
                 ), ((ulong)pcVar4 & 1) != 0)) {
      pcVar5 = local_80[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_80[0],PTR_s_svgImageNamed_color__0269f760,local_30,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar4 = local_60;
      local_60 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar4);
    }
    _objc_storeStrong(local_80);
    _objc_storeStrong(&local_68,0);
    if (local_60 == (char *)0x0) {
      local_a1 = local_48 == 0;
      if (local_a1) {
        local_148 = (char *)0x0;
      }
      else {
        local_148 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = local_148;
      }
      local_a1 = !local_a1;
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = local_148;
      if (local_a1) {
        (*(code *)PTR__objc_release_02578630)(local_a0);
      }
    }
    else {
      pcVar4 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_imageWithRenderingMode__026ca690,1);
      _objc_retainAutoreleasedReturnValue();
      local_28 = pcVar4;
    }
    local_58 = 1;
    _objc_storeStrong(&local_60,0);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

