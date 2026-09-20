// floatingBallIconImage @ 00901bc8

/* WARNING: Removing unreachable block (ram,0x00901d98) */
/* Function Stack Size: 0x10 bytes */

ID LogFloatingBall::floatingBallIconImage(ID param_1,SEL param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  char *local_70;
  char *local_68;
  undefined *local_60;
  char *local_58;
  char *local_50;
  char *local_48;
  uint local_3c;
  char *local_38;
  cfstringStruct *local_30;
  SEL local_28;
  ID local_20;
  char *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_monitorMode_026a9f18);
  local_30 = &cf_Icons_outlined_item;
  if (param_1 != 1) {
    local_30 = &cf_icons_filled_eyes_on;
  }
  (*(code *)PTR__objc_retain_02578638)();
  pcVar2 = "MMServiceCenter";
  _objc_getClass();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  if ((pcVar2 == (char *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)
                (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_defaultCenter_026ca5e0),
     ((ulong)pcVar2 & 1) == 0)) {
    local_18 = (char *)0x0;
    local_3c = 1;
    goto LAB_009020d0;
  }
  pcVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_defaultCenter_026ca5e0);
  _objc_retainAutoreleasedReturnValue();
  pcVar2 = "MMThemeManager";
  local_48 = pcVar3;
  _objc_getClass();
  local_50 = pcVar2;
  if ((local_48 == (char *)0x0) ||
     ((pcVar2 == (char *)0x0 ||
      (pcVar2 = local_48,
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
      ((ulong)pcVar2 & 1) == 0)))) {
    local_18 = (char *)0x0;
    local_3c = 1;
  }
  else {
    pcVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_getService__0269d170,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_58 = pcVar2;
    if (pcVar2 == (char *)0x0) {
      local_18 = (char *)0x0;
      local_3c = 1;
    }
    else {
      local_60 = (undefined *)0x0;
      puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_labelColor_026ca778);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = local_60;
      local_60 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar5);
      pcVar2 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760);
      if (((ulong)pcVar2 & 1) == 0) {
LAB_00901fac:
        pcVar2 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_imageNamed__0269fd20);
        if (((ulong)pcVar2 & 1) != 0) {
          pcVar3 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_imageNamed__0269fd20,local_30);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
          local_70 = pcVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
          pcVar2 = local_70;
          bVar1 = ((ulong)pcVar3 & 1) != 0;
          if (bVar1) {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = pcVar2;
          }
          local_3c = (uint)bVar1;
          _objc_storeStrong(&local_70,0);
          if (local_3c != 0) goto LAB_009020a0;
        }
        local_18 = (char *)0x0;
        local_3c = 1;
      }
      else {
        pcVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_svgImageNamed_color__0269f760,local_30,local_60);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
        local_68 = pcVar3;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_isKindOfClass__0269cd68,puVar5);
        pcVar2 = local_68;
        if (((ulong)pcVar3 & 1) == 0) {
          pcVar6 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_30,PTR_s_isEqualToString__0269ccc8,&cf_Icons_outlined_item);
          if (((ulong)pcVar6 & 1) != 0) {
            pcVar3 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_58,PTR_s_svgImageNamed_color__0269f760,&cf_icons_outlined_item,local_60
                      );
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_68;
            local_68 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            pcVar2 = local_68;
            puVar5 = PTR__OBJC_CLASS___UIImage_026cdfd0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___UIImage_026cdfd0,PTR_s_class_0269cd60);
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_isKindOfClass__0269cd68,puVar5);
            pcVar3 = local_68;
            if (((ulong)pcVar2 & 1) != 0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_18 = pcVar3;
              local_3c = 1;
              goto LAB_00901f90;
            }
          }
          local_3c = 0;
        }
        else {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = pcVar2;
          local_3c = 1;
        }
LAB_00901f90:
        _objc_storeStrong(&local_68,0);
        if (local_3c == 0) goto LAB_00901fac;
      }
LAB_009020a0:
      _objc_storeStrong(&local_60,0);
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_48,0);
LAB_009020d0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

