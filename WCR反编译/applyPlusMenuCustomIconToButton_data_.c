// applyPlusMenuCustomIconToButton:data: @ 00f28d48

/* Function Stack Size: 0x20 bytes */

void WCRefineDoNotDisturbSupport::applyPlusMenuCustomIconToButton_data_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  ID IVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  double dVar9;
  undefined8 uVar10;
  undefined *local_a0;
  double local_98;
  undefined8 local_90;
  double local_88;
  ulong local_78;
  double local_70;
  ulong local_68;
  byte local_59;
  cfstringStruct *local_40;
  undefined4 local_34;
  cfstringStruct *local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_30,param_4);
  if ((local_28 == 0) || (local_30 == (cfstringStruct *)0x0)) {
    local_34 = 1;
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = &::cf___;
    pcVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_valueForKey__0269d128,&cf_m_nsID);
    _objc_retainAutoreleasedReturnValue();
    pcVar2 = pcVar1;
    FUN_00f21dc0();
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = local_40;
    local_40 = pcVar2;
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    (*(code *)PTR__objc_release_02578630)(pcVar1);
    pcVar3 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_isEqualToString__0269ccc8,&cf_WCRefine_mainFrame_menu_doNotDisturb);
    if (((ulong)pcVar3 & 1) == 0) {
      local_34 = 1;
    }
    else {
      IVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_isEffectivelyActive_0269d708);
      local_59 = (byte)IVar4;
      uVar5 = (ulong)(local_59 & 1);
      FUN_00f28cb8();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = (ulong)(local_59 & 1);
      FUN_00f28d18();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar5;
      _WCRPluginIconResolvedIcon();
      _objc_retainAutoreleasedReturnValue();
      local_68 = uVar7;
      (*(code *)PTR__objc_release_02578630)(uVar6);
      (*(code *)PTR__objc_release_02578630)(uVar5);
      uVar7 = local_68;
      _WCRPluginIconValueIsAlbum();
      if ((uVar7 & 1) == 0) {
        local_34 = 1;
      }
      else {
        dVar9 = 24.0;
        local_70 = 24.0;
        uVar7 = local_28;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_imageForState__0269edf0);
        if ((uVar7 & 1) != 0) {
          uVar7 = local_28;
          (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_imageForState__0269edf0,0);
          _objc_retainAutoreleasedReturnValue();
          local_78 = uVar7;
          (*(code *)PTR__objc_msgSend_02578628)(uVar7,PTR_s_size_026cab00);
          uVar10 = 0x3fe0000000000000;
          local_88 = dVar9;
          if (0.5 < dVar9) {
            (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_size_026cab00);
            local_98 = dVar9;
            local_90 = uVar10;
            local_70 = dVar9;
          }
          _objc_storeStrong(&local_78,0);
        }
        puVar8 = PTR_WCRefinePluginIconCatalog_026ce4e0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_WCRefinePluginIconCatalog_026ce4e0,
                   PTR_s_displayImageForIconValue_size__026ab508,local_68);
        _objc_retainAutoreleasedReturnValue();
        local_a0 = puVar8;
        if ((puVar8 == (undefined *)0x0) ||
           (uVar7 = local_28,
           (*(code *)PTR__objc_msgSend_02578628)
                     (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_setImage_forState__0269cc60)
           , (uVar7 & 1) == 0)) {
          local_34 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_28,PTR_s_setImage_forState__0269cc60,local_a0,0);
          local_34 = 0;
        }
        _objc_storeStrong(&local_a0,0);
      }
      _objc_storeStrong(&local_68,0);
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

