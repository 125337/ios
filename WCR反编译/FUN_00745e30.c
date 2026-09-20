// FUN_00745e30 @ 00745e30

/* WARNING: Removing unreachable block (ram,0x00745ef4) */

void FUN_00745e30(void)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  cfstringStruct *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  cfstringStruct *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *local_60;
  undefined *local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  
  pcVar2 = &cf_MMThemeManager;
  _NSClassFromString();
  local_30 = pcVar2;
  FUN_00744160();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_28 = (cfstringStruct *)0x0;
    local_3c = 1;
  }
  else {
    local_48 = (undefined *)0x0;
    puVar3 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithDynamicProvider__0269e538,
               &PTR___NSConcreteGlobalBlock_0257f668);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = local_48;
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar1);
    local_60 = PTR_s_svgImageNamed_size_color__026a1350;
    pcVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_size_color__026a1350)
    ;
    if (((ulong)pcVar2 & 1) == 0) {
      local_78 = PTR_s_svgImageNamed_size_color_alpha__026a3d18;
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_respondsToSelector__026ca818,
                 PTR_s_svgImageNamed_size_color_alpha__026a3d18);
      if (((ulong)pcVar2 & 1) == 0) {
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_svgImageNamed_color__0269f760);
        if (((ulong)pcVar2 & 1) == 0) {
          local_28 = (cfstringStruct *)0x0;
          local_3c = 1;
        }
        else {
          pcVar2 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_svgImageNamed_color__0269f760,&cf_bell_on_filled,local_48);
          _objc_retainAutoreleasedReturnValue();
          local_98 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            local_28 = (cfstringStruct *)0x0;
            local_3c = 1;
          }
          else {
            uStack_a8 = DAT_02324290;
            local_b0 = DAT_02324288;
            _UIGraphicsBeginImageContextWithOptions(DAT_02324288,DAT_02324290,0,0);
            pcVar2 = local_98;
            uVar5 = 0;
            uVar4 = 0;
            uVar6 = DAT_02324288;
            uVar7 = DAT_02324290;
            FUN_00746404();
            local_d0 = uVar4;
            local_c8 = uVar5;
            local_c0 = uVar6;
            local_b8 = uVar7;
            (*(code *)PTR__objc_msgSend_02578628)
                      (uVar4,uVar5,uVar6,uVar7,pcVar2,PTR_s_drawInRect__026ca610);
            _UIGraphicsGetImageFromCurrentImageContext();
            _objc_retainAutoreleasedReturnValue();
            local_d8 = pcVar2;
            _UIGraphicsEndImageContext();
            pcVar2 = local_d8;
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar2;
            local_3c = 1;
            _objc_storeStrong(&local_d8,0);
          }
          _objc_storeStrong(&local_98,0);
        }
      }
      else {
        uStack_88 = DAT_02324290;
        local_90 = DAT_02324288;
        pcVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (DAT_02324288,DAT_02324290,0x3ff0000000000000,local_38,local_78,&cf_bell_on_filled
                   ,local_48);
        _objc_retainAutoreleasedReturnValue();
        local_3c = 1;
        local_28 = pcVar2;
      }
    }
    else {
      uStack_68 = DAT_02324290;
      local_70 = DAT_02324288;
      pcVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02324288,DAT_02324290,local_38,local_60,&cf_bell_on_filled,local_48);
      _objc_retainAutoreleasedReturnValue();
      local_3c = 1;
      local_28 = pcVar2;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

