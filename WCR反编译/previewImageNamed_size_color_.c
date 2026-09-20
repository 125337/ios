// previewImageNamed:size:color: @ 01107f40

/* Function Stack Size: 0x28 bytes */

ID WCRefinePluginIconCatalog::previewImageNamed_size_color_
             (ID param_1,SEL param_2,ID param_3,double param_4,ID param_5)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  double dVar6;
  double local_110;
  long local_100;
  char *local_a8;
  double local_a0;
  char *local_98;
  char *local_90;
  char *local_88;
  char *local_80;
  byte local_71;
  long local_70;
  long local_68;
  undefined4 local_5c;
  long local_58;
  long local_50;
  double local_48;
  long local_40;
  SEL local_38;
  char *local_30;
  char *local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = (char *)param_1;
  _objc_storeStrong(&local_40,param_3);
  local_50 = 0;
  local_48 = param_4;
  _objc_storeStrong(&local_50,param_5);
  local_100 = local_40;
  FUN_010f4f48();
  _objc_retainAutoreleasedReturnValue();
  local_58 = local_100;
  (*(code *)PTR__objc_msgSend_02578628)(local_100,PTR_s_length_0269cca0);
  if (local_100 == 0) {
    local_28 = (char *)0x0;
    local_5c = 1;
  }
  else {
    local_71 = 0;
    bVar1 = local_50 == 0;
    if (bVar1) {
      FUN_01107cdc();
      _objc_retainAutoreleasedReturnValue();
      local_70 = local_100;
    }
    else {
      local_100 = local_50;
    }
    local_71 = bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = local_100;
    if ((local_71 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_70);
    }
    pcVar4 = "MMServiceCenter";
    _objc_getClass();
    pcVar5 = "MMThemeManager";
    local_80 = pcVar4;
    _objc_getClass();
    local_88 = pcVar5;
    if ((local_80 == (char *)0x0) || (pcVar5 == (char *)0x0)) {
      local_28 = (char *)0x0;
      local_5c = 1;
    }
    else {
      pcVar4 = local_80;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      local_90 = pcVar4;
      if ((pcVar4 == (char *)0x0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
         ((ulong)pcVar4 & 1) == 0)) {
        local_28 = (char *)0x0;
        local_5c = 1;
      }
      else {
        pcVar4 = local_90;
        (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_getService__0269d170,local_88);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR_s_svgImageNamed_size_color_alpha__026a3d18;
        local_98 = pcVar4;
        if (pcVar4 == (char *)0x0) {
          local_28 = (char *)0x0;
          local_5c = 1;
        }
        else {
          if (local_48 <= 0.0) {
            local_110 = 24.0;
          }
          else {
            local_110 = local_48;
          }
          local_a0 = local_110;
          local_a8 = (char *)0x0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar4,PTR_s_respondsToSelector__026ca818,
                     PTR_s_svgImageNamed_size_color_alpha__026a3d18);
          lVar3 = local_58;
          pcVar5 = local_98;
          if (((ulong)pcVar4 & 1) != 0) {
            local_110 = local_a0;
            dVar6 = local_a0;
            FUN_0110846c();
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_110,dVar6,0x3ff0000000000000,pcVar5,puVar2,lVar3,local_68);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_a8;
            local_a8 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          if ((local_a8 == (char *)0x0) &&
             (pcVar4 = local_98,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_98,PTR_s_respondsToSelector__026ca818,
                        PTR_s_svgImageNamed_color__0269f760), ((ulong)pcVar4 & 1) != 0)) {
            pcVar5 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_svgImageNamed_color__0269f760,local_58,local_68);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_a8;
            local_a8 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          if (local_a8 == (char *)0x0) {
            pcVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_imageNamed__0269fd20,local_58);
            _objc_retainAutoreleasedReturnValue();
            pcVar4 = local_a8;
            local_a8 = pcVar5;
            (*(code *)PTR__objc_release_02578630)(pcVar4);
          }
          if (local_a8 == (char *)0x0) {
            local_28 = (char *)0x0;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_size_026cab00);
            dVar6 = 0.5;
            if ((0.5 <= ABS(local_110 - local_a0)) ||
               ((*(code *)PTR__objc_msgSend_02578628)(local_a8,PTR_s_size_026cab00),
               local_28 = local_a8, 0.5 <= ABS(dVar6 - local_a0))) {
              pcVar4 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,local_30,PTR_s_resizedImage_side__026a3d20,local_a8);
              _objc_retainAutoreleasedReturnValue();
              local_28 = pcVar4;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
            }
          }
          local_5c = 1;
          _objc_storeStrong(&local_a8,0);
        }
        _objc_storeStrong(&local_98,0);
      }
      _objc_storeStrong(&local_90,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_28;
}

