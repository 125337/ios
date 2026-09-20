// FUN_002d33d0 @ 002d33d0

void FUN_002d33d0(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  char *local_140;
  undefined *local_110;
  undefined *local_90;
  char *local_88;
  undefined *local_80;
  char *local_78;
  char *local_70;
  undefined *local_68;
  undefined *local_60;
  char *local_58;
  char *local_50;
  undefined4 local_48;
  undefined *local_38;
  long local_30;
  char *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  local_38 = (undefined *)0x0;
  _objc_storeStrong(&local_38,param_2);
  if ((local_30 == 0) ||
     (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_28 = (char *)0x0;
    local_48 = 1;
  }
  else {
    pcVar3 = "MMServiceCenter";
    _objc_getClass();
    pcVar4 = "MMThemeManager";
    local_50 = pcVar3;
    _objc_getClass();
    local_58 = pcVar4;
    if ((local_50 == (char *)0x0) || (pcVar4 == (char *)0x0)) {
      local_28 = (char *)0x0;
      local_48 = 1;
    }
    else {
      local_60 = PTR_s_defaultCenter_026ca5e0;
      local_68 = PTR_s_getService__0269d170;
      pcVar3 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0);
      if (((ulong)pcVar3 & 1) == 0) {
        local_28 = (char *)0x0;
        local_48 = 1;
      }
      else {
        pcVar3 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,local_60);
        _objc_retainAutoreleasedReturnValue();
        local_70 = pcVar3;
        if ((pcVar3 == (char *)0x0) ||
           ((*(code *)PTR__objc_msgSend_02578628)
                      (pcVar3,PTR_s_respondsToSelector__026ca818,local_68), ((ulong)pcVar3 & 1) == 0
           )) {
          local_28 = (char *)0x0;
          local_48 = 1;
        }
        else {
          pcVar3 = local_70;
          (*(code *)PTR__objc_msgSend_02578628)(local_70,local_68,local_58);
          _objc_retainAutoreleasedReturnValue();
          local_80 = PTR_s_svgImageNamed_color__0269f760;
          local_78 = pcVar3;
          if ((pcVar3 == (char *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_respondsToSelector__026ca818,
                         PTR_s_svgImageNamed_color__0269f760), lVar2 = local_30, pcVar4 = local_78,
             puVar5 = local_80, ((ulong)pcVar3 & 1) == 0)) {
            local_28 = (char *)0x0;
            local_48 = 1;
          }
          else {
            bVar1 = local_38 == (undefined *)0x0;
            if (bVar1) {
              local_110 = PTR__OBJC_CLASS___UIColor_026cdf78;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_blackColor_026ca538);
              _objc_retainAutoreleasedReturnValue();
              local_90 = local_110;
            }
            else {
              local_110 = local_38;
            }
            (*(code *)PTR__objc_msgSend_02578628)(pcVar4,puVar5,lVar2,local_110);
            _objc_retainAutoreleasedReturnValue();
            local_88 = pcVar4;
            if (bVar1) {
              (*(code *)PTR__objc_release_02578630)(local_90);
            }
            pcVar3 = local_88;
            puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
            if (((ulong)pcVar3 & 1) == 0) {
              local_140 = (char *)0x0;
            }
            else {
              local_140 = local_88;
            }
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = local_140;
            local_48 = 1;
            _objc_storeStrong(&local_88,0);
          }
          _objc_storeStrong(&local_78,0);
        }
        _objc_storeStrong(&local_70,0);
      }
    }
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

