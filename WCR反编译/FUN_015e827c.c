// FUN_015e827c @ 015e827c

void FUN_015e827c(double param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  char *local_b0;
  char *local_78;
  char *local_70;
  char *local_68;
  char *local_60;
  char *local_58;
  char *local_50;
  ulong local_48;
  char *local_40;
  int local_34;
  undefined8 local_30;
  double local_28;
  ulong local_20;
  char *local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if ((uVar1 == 0) || (local_28 < 1.0)) {
    local_18 = (char *)0x0;
    local_34 = 1;
    goto LAB_015e8778;
  }
  pcVar2 = PTR_WCRefinePluginIconCatalog_026ce4e0;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_28,PTR_WCRefinePluginIconCatalog_026ce4e0,
             PTR_s_previewImageNamed_size_color__026a6580,local_20,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_40 = pcVar2;
  if (pcVar2 == (char *)0x0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_stringByDeletingPathExtension_0269fd18);
    _objc_retainAutoreleasedReturnValue();
    local_48 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_length_0269cca0);
    if ((uVar1 == 0) ||
       (uVar1 = local_48,
       (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isEqualToString__0269ccc8,local_20),
       (uVar1 & 1) != 0)) {
LAB_015e8458:
      pcVar2 = "MMThemeManager";
      _objc_getClass();
      local_58 = (char *)0x0;
      local_50 = pcVar2;
      if ((pcVar2 != (char *)0x0) &&
         ((*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_sharedInstance_0269cd30),
         ((ulong)pcVar2 & 1) != 0)) {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_sharedInstance_0269cd30);
        _objc_retainAutoreleasedReturnValue();
        pcVar2 = local_58;
        local_58 = pcVar3;
        (*(code *)PTR__objc_release_02578630)(pcVar2);
      }
      if (local_58 == (char *)0x0) {
        pcVar2 = "MMServiceCenter";
        _objc_getClass();
        local_60 = pcVar2;
        if ((pcVar2 != (char *)0x0) && (local_50 != (char *)0x0)) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
          _objc_retainAutoreleasedReturnValue();
          local_68 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170);
          if (((ulong)pcVar2 & 1) != 0) {
            pcVar3 = local_68;
            (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_getService__0269d170,local_50);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_58;
            local_58 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
          }
          _objc_storeStrong(&local_68,0);
        }
      }
      if ((local_58 == (char *)0x0) ||
         (pcVar2 = local_58,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_imageNamed__0269fd20),
         ((ulong)pcVar2 & 1) == 0)) {
LAB_015e8738:
        local_18 = (char *)0x0;
        local_34 = 1;
      }
      else {
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_imageNamed__0269fd20,local_20);
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar2;
        if ((pcVar2 == (char *)0x0) &&
           (uVar1 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
           uVar1 != 0)) {
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_imageNamed__0269fd20,local_48);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_70;
          local_70 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
        }
        if (local_70 == (char *)0x0) {
          local_34 = 0;
        }
        else {
          pcVar2 = PTR_WCRefinePluginIconCatalog_026ce4e0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_WCRefinePluginIconCatalog_026ce4e0,
                     PTR_s_resizedImage_side__026a3d20,local_70);
          _objc_retainAutoreleasedReturnValue();
          local_b0 = pcVar2;
          if (pcVar2 == (char *)0x0) {
            local_b0 = local_70;
          }
          local_78 = pcVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = local_b0;
          local_34 = 1;
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_70,0);
        if (local_34 == 0) goto LAB_015e8738;
      }
      _objc_storeStrong(&local_58,0);
    }
    else {
      pcVar3 = PTR_WCRefinePluginIconCatalog_026ce4e0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_WCRefinePluginIconCatalog_026ce4e0,
                 PTR_s_previewImageNamed_size_color__026a6580,local_48,local_30);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = local_40;
      local_40 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(pcVar2);
      pcVar2 = local_40;
      if (local_40 == (char *)0x0) goto LAB_015e8458;
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = pcVar2;
      local_34 = 1;
    }
    _objc_storeStrong(&local_48,0);
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_34 = 1;
    local_18 = pcVar2;
  }
  _objc_storeStrong(&local_40,0);
LAB_015e8778:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

