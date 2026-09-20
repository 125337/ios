// FUN_01986b9c @ 01986b9c

void FUN_01986b9c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  double dVar8;
  undefined8 uVar9;
  double dVar10;
  undefined8 uVar11;
  char *local_1f0;
  char *local_140;
  char *local_118;
  undefined8 local_110;
  undefined8 local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double local_e8;
  bool local_d9;
  char *local_d8;
  double local_c8;
  double local_c0;
  char *local_b8 [3];
  char *local_a0;
  byte local_91;
  char *local_90;
  char *local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined1 local_69;
  undefined4 local_68;
  bool local_61;
  char *local_60;
  long local_58;
  undefined8 local_50;
  double local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long *local_28;
  
  local_40 = 0;
  _objc_storeStrong(&local_40,param_2);
  local_50 = 0;
  local_48 = param_1;
  _objc_storeStrong(&local_50,param_3);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_4);
  lVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    local_61 = false;
    bVar1 = local_58 == 0;
    if (bVar1) {
      local_140 = (char *)0x0;
    }
    else {
      local_140 = PTR__OBJC_CLASS___UIImage_026cdfd0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_58);
      _objc_retainAutoreleasedReturnValue();
      local_60 = local_140;
    }
    local_61 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = local_140;
    if ((local_61 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_60);
    }
    local_68 = 1;
  }
  else {
    local_69 = 0;
    puVar3 = PTR__OBJC_CLASS___UITraitCollection_026ce138;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UITraitCollection_026ce138,PTR_s_currentTraitCollection_026ca5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_69 = puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar9 = local_50;
    (*(code *)PTR__objc_retain_02578638)();
    local_78 = uVar9;
    local_28 = &DAT_028e43c8;
    local_30 = 0;
    _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_0258a7f8);
    if (*local_28 + 1 != 0) {
      _dispatch_once(*local_28 + 1,local_28,local_30);
    }
    _objc_storeStrong(&local_30,0);
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    puVar5 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_hexStringFromColor__026b30d0,local_78);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf______0f_____d)
    ;
    _objc_retainAutoreleasedReturnValue();
    local_80 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar5);
    pcVar6 = DAT_028e43c0;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e43c0,PTR_s_objectForKey__0269e048,local_80);
    _objc_retainAutoreleasedReturnValue();
    local_88 = pcVar6;
    if (pcVar6 == (char *)0x0) {
      local_90 = (char *)0x0;
      local_91 = 0;
      pcVar6 = "MMServiceCenter";
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = "MMThemeManager";
      local_a0 = pcVar6;
      _objc_getClass();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar6,PTR_s_getService__0269d170,pcVar7);
      _objc_retainAutoreleasedReturnValue();
      local_b8[0] = pcVar6;
      if (((pcVar6 != (char *)0x0) && (0.0 < local_48)) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar6,PTR_s_respondsToSelector__026ca818,
                     PTR_s_svgImageNamed_size_color_alpha__026a3d18), lVar2 = local_40,
         pcVar7 = local_b8[0], ((ulong)pcVar6 & 1) != 0)) {
        dVar8 = local_48;
        dVar10 = local_48;
        FUN_0197b3e0();
        local_c8 = dVar8;
        local_c0 = dVar10;
        (*(code *)PTR__objc_msgSend_02578628)
                  (dVar8,dVar10,0x3ff0000000000000,pcVar7,
                   PTR_s_svgImageNamed_size_color_alpha__026a3d18,lVar2,local_78);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_90;
        local_90 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        local_91 = local_90 != (char *)0x0;
      }
      if (((local_90 == (char *)0x0) && (local_b8[0] != (char *)0x0)) &&
         (pcVar6 = local_b8[0],
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_b8[0],PTR_s_respondsToSelector__026ca818,
                    PTR_s_svgImageNamed_color__0269f760), ((ulong)pcVar6 & 1) != 0)) {
        pcVar7 = local_b8[0];
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_b8[0],PTR_s_svgImageNamed_color__0269f760,local_40,local_78);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_90;
        local_90 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
      }
      _objc_storeStrong(local_b8);
      _objc_storeStrong(&local_a0,0);
      if (local_90 == (char *)0x0) {
        local_d9 = false;
        bVar1 = local_58 == 0;
        if (bVar1) {
          local_1f0 = (char *)0x0;
        }
        else {
          local_1f0 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_systemImageNamed__026cab78,local_58);
          _objc_retainAutoreleasedReturnValue();
          local_d8 = local_1f0;
        }
        local_d9 = !bVar1;
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = local_1f0;
        if ((local_d9 & 1U) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_d8);
        }
      }
      else {
        if ((0.0 < local_48) && ((local_91 & 1) == 0)) {
          dVar8 = local_48;
          dVar10 = local_48;
          FUN_0197b3e0();
          puVar3 = PTR__OBJC_CLASS___UIScreen_026cdf70;
          local_f0 = dVar8;
          local_e8 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          _UIGraphicsBeginImageContextWithOptions(local_f0,local_e8,dVar8,0);
          (*(code *)PTR__objc_release_02578630)(puVar3);
          pcVar6 = local_90;
          uVar11 = 0;
          uVar9 = 0;
          dVar8 = local_48;
          dVar10 = local_48;
          FUN_0198a0ec();
          local_110 = uVar9;
          local_108 = uVar11;
          local_100 = dVar8;
          local_f8 = dVar10;
          (*(code *)PTR__objc_msgSend_02578628)
                    (uVar9,uVar11,dVar8,dVar10,pcVar6,PTR_s_drawInRect__026ca610);
          _UIGraphicsGetImageFromCurrentImageContext();
          _objc_retainAutoreleasedReturnValue();
          local_118 = pcVar6;
          _UIGraphicsEndImageContext();
          if (local_118 != (char *)0x0) {
            _objc_storeStrong(&local_90,local_118);
          }
          _objc_storeStrong(&local_118,0);
        }
        pcVar7 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_imageWithRenderingMode__026ca690,1);
        _objc_retainAutoreleasedReturnValue();
        pcVar6 = local_90;
        local_90 = pcVar7;
        (*(code *)PTR__objc_release_02578630)(pcVar6);
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_028e43c0,PTR_s_setObject_forKey__026ca9e8,local_90,local_80);
        pcVar6 = local_90;
        (*(code *)PTR__objc_retain_02578638)();
        local_38 = pcVar6;
      }
      local_68 = 1;
      _objc_storeStrong(&local_90,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_68 = 1;
      local_38 = pcVar6;
    }
    _objc_storeStrong(&local_88);
    _objc_storeStrong(&local_80,0);
    _objc_storeStrong(&local_78,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue(local_38);
  return;
}

