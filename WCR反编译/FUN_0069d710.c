// FUN_0069d710 @ 0069d710

void FUN_0069d710(double param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  double dVar6;
  double dVar7;
  char *local_c8;
  char *local_80;
  double local_78;
  double local_70;
  bool local_61;
  char *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  char *local_40;
  undefined4 local_34;
  undefined8 local_30;
  double local_28;
  long local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar3 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
    local_18 = (char *)0x0;
    local_34 = 1;
  }
  else {
    pcVar4 = "MMServiceCenter";
    _objc_getClass();
    pcVar5 = "MMThemeManager";
    local_40 = pcVar4;
    _objc_getClass();
    local_48 = pcVar5;
    if (((local_40 == (char *)0x0) || (pcVar5 == (char *)0x0)) ||
       (pcVar4 = local_40,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
       ((ulong)pcVar4 & 1) == 0)) {
      local_18 = (char *)0x0;
      local_34 = 1;
    }
    else {
      pcVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_50 = pcVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
      local_61 = false;
      bVar1 = ((ulong)pcVar4 & 1) == 0;
      if (bVar1) {
        local_c8 = (char *)0x0;
      }
      else {
        local_c8 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_getService__0269d170,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_60 = local_c8;
      }
      local_61 = !bVar1;
      (*(code *)PTR__objc_retain_02578638)();
      local_58 = local_c8;
      if ((local_61 & 1U) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      if (local_58 == (char *)0x0) {
        local_18 = (char *)0x0;
        local_34 = 1;
      }
      else {
        dVar6 = local_28;
        dVar7 = local_28;
        FUN_0069db58();
        puVar2 = PTR_s_svgImageNamed_size_color_alpha__026a3d18;
        local_80 = (char *)0x0;
        pcVar4 = local_58;
        local_78 = dVar6;
        local_70 = dVar7;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,
                   PTR_s_svgImageNamed_size_color_alpha__026a3d18);
        if (((ulong)pcVar4 & 1) != 0) {
          pcVar5 = local_58;
          dVar6 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,local_70,0x3ff0000000000000,local_58,puVar2,local_20,local_30);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_80;
          local_80 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
        }
        if ((local_80 == (char *)0x0) &&
           (pcVar4 = local_58,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_58,PTR_s_respondsToSelector__026ca818,
                      PTR_s_svgImageNamed_color__0269f760), ((ulong)pcVar4 & 1) != 0)) {
          pcVar5 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_svgImageNamed_color__0269f760,local_20,local_30);
          _objc_retainAutoreleasedReturnValue();
          pcVar4 = local_80;
          local_80 = pcVar5;
          (*(code *)PTR__objc_release_02578630)(pcVar4);
          if (local_80 != (char *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_size_026cab00);
            dVar7 = 0.5;
            if ((0.5 < ABS(dVar6 - local_28)) ||
               ((*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_size_026cab00),
               0.5 < ABS(dVar7 - local_28))) {
              pcVar5 = PTR_WCRefinePluginIconCatalog_026ce4e0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_28,PTR_WCRefinePluginIconCatalog_026ce4e0,
                         PTR_s_resizedImage_side__026a3d20,local_80);
              _objc_retainAutoreleasedReturnValue();
              pcVar4 = local_80;
              local_80 = pcVar5;
              (*(code *)PTR__objc_release_02578630)(pcVar4);
            }
          }
        }
        pcVar4 = local_80;
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = pcVar4;
        local_34 = 1;
        _objc_storeStrong(&local_80,0);
      }
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

