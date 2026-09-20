// FUN_0195cde0 @ 0195cde0

void FUN_0195cde0(double param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  undefined8 uVar8;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  double local_b0;
  double local_a8;
  double local_a0;
  double local_98;
  double local_88;
  double local_80;
  char *local_78 [3];
  char *local_60;
  byte local_51;
  char *local_50;
  undefined4 local_44;
  undefined8 local_40;
  double local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_40 = 0;
  local_38 = param_1;
  _objc_storeStrong(&local_40,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_28 = (char *)0x0;
    local_44 = 1;
  }
  else {
    local_50 = (char *)0x0;
    local_51 = 0;
    pcVar2 = "MMServiceCenter";
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = "MMThemeManager";
    local_60 = pcVar2;
    _objc_getClass();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
    _objc_retainAutoreleasedReturnValue();
    local_78[0] = pcVar2;
    if (((pcVar2 != (char *)0x0) && (0.0 < local_38)) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar2,PTR_s_respondsToSelector__026ca818,
                   PTR_s_svgImageNamed_size_color_alpha__026a3d18), lVar1 = local_30,
       pcVar3 = local_78[0], ((ulong)pcVar2 & 1) != 0)) {
      dVar5 = local_38;
      dVar7 = local_38;
      FUN_0195e30c();
      local_88 = dVar5;
      local_80 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,dVar7,0x3ff0000000000000,pcVar3,
                 PTR_s_svgImageNamed_size_color_alpha__026a3d18,lVar1,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_50;
      local_50 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      local_51 = local_50 != (char *)0x0;
    }
    if (((local_50 == (char *)0x0) && (local_78[0] != (char *)0x0)) &&
       (pcVar2 = local_78[0],
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_78[0],PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760
                 ), ((ulong)pcVar2 & 1) != 0)) {
      pcVar3 = local_78[0];
      (*(code *)PTR__objc_msgSend_02578628)
                (local_78[0],PTR_s_svgImageNamed_color__0269f760,local_30,local_40);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_50;
      local_50 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
    }
    _objc_storeStrong(local_78);
    _objc_storeStrong(&local_60,0);
    if (((local_50 == (char *)0x0) || (local_38 <= 0.0)) || ((local_51 & 1) != 0)) {
      if (local_50 != (char *)0x0) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_imageWithRenderingMode__026ca690,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_50;
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
    }
    else {
      dVar5 = local_38;
      dVar7 = local_38;
      FUN_0195e30c();
      puVar4 = PTR__OBJC_CLASS___UIScreen_026cdf70;
      local_a0 = dVar5;
      local_98 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      _UIGraphicsBeginImageContextWithOptions(local_a0,local_98,dVar5,0);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      pcVar2 = local_50;
      uVar8 = 0;
      uVar6 = 0;
      dVar5 = local_38;
      dVar7 = local_38;
      FUN_0196d370();
      local_c0 = uVar6;
      local_b8 = uVar8;
      local_b0 = dVar5;
      local_a8 = dVar7;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,uVar8,dVar5,dVar7,pcVar2,PTR_s_drawInRect__026ca610);
      _UIGraphicsGetImageFromCurrentImageContext();
      _objc_retainAutoreleasedReturnValue();
      local_c8 = pcVar2;
      _UIGraphicsEndImageContext();
      if (local_c8 != (char *)0x0) {
        pcVar3 = local_c8;
        (*(code *)PTR__objc_msgSend_02578628)(local_c8,PTR_s_imageWithRenderingMode__026ca690,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_50;
        local_50 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      _objc_storeStrong(&local_c8,0);
    }
    pcVar2 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = pcVar2;
    local_44 = 1;
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

