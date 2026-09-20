// stampIconCaptureOnView:action: @ 0161d510

/* Function Stack Size: 0x20 bytes */

void WCRSuperFloatDisplayHelper::stampIconCaptureOnView_action_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_f0;
  ulong local_d0;
  ulong local_80;
  ulong local_78;
  ulong local_70;
  ulong local_68;
  ulong local_60;
  ulong local_58;
  ulong local_50;
  undefined4 local_44;
  ulong local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  uVar2 = local_38;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  uVar3 = local_40;
  if ((uVar2 & 1) != 0) {
    puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar1);
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineIconNameCaptureSupport_026cec30,
                 PTR_s_stampResourceName_onView__026b1a00,0,local_38);
      uVar3 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrAvatar);
      _objc_retainAutoreleasedReturnValue();
      local_50 = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar3,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
      if (((uVar3 & 1) == 0) ||
         (uVar3 = local_50, (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_boolValue_026ca540)
         , (uVar3 & 1) == 0)) {
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomKind);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        local_58 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_action);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        local_60 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomPayload);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        local_68 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf__wcrCustomIcon);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        local_70 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_icon);
        _objc_retainAutoreleasedReturnValue();
        uVar2 = uVar3;
        FUN_01618794();
        _objc_retainAutoreleasedReturnValue();
        local_78 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar3);
        uVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        if (uVar3 == 0) {
          local_d0 = local_78;
        }
        else {
          local_d0 = local_70;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_80 = local_d0;
        uVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_isEqualToString__0269ccc8,&cf_actionmenu);
        if ((((((uVar3 & 1) != 0) ||
              (uVar3 = local_58,
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_58,PTR_s_isEqualToString__0269ccc8,&cf_chatmore), (uVar3 & 1) != 0))
             || (uVar3 = local_60,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_60,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_actionmenu_),
                (uVar3 & 1) != 0)) ||
            (uVar3 = local_60,
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_60,PTR_s_hasPrefix__0269d320,&cf_wcr_sf_chatmore_), (uVar3 & 1) != 0))
           && (((uVar3 = local_80,
                (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_length_0269cca0), uVar3 == 0 ||
                (uVar3 = local_80,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_80,PTR_s_isEqualToString__0269ccc8,&cf_icons_outlined_setting),
                (uVar3 & 1) != 0)) ||
               (uVar3 = local_80,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_80,PTR_s_isEqualToString__0269ccc8,&cf_icons_outlined_more),
               (uVar3 & 1) != 0)))) {
          uVar3 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_objectForKeyedSubscript__0269d098,&cf_title);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar3;
          FUN_01618794();
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_length_0269cca0);
          if (uVar4 == 0) {
            local_f0 = local_60;
          }
          else {
            local_f0 = local_68;
          }
          uVar5 = uVar2;
          FUN_0161db0c(uVar2,local_f0);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_80;
          local_80 = uVar5;
          (*(code *)PTR__objc_release_02578630)(uVar4);
          (*(code *)PTR__objc_release_02578630)(uVar2);
          (*(code *)PTR__objc_release_02578630)(uVar3);
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineIconNameCaptureSupport_026cec30,
                   PTR_s_stampResourceName_onView__026b1a00,local_80,local_38);
        _objc_storeStrong(&local_80);
        _objc_storeStrong(&local_78,0);
        _objc_storeStrong(&local_70,0);
        _objc_storeStrong(&local_68,0);
        _objc_storeStrong(&local_60,0);
        _objc_storeStrong(&local_58,0);
        local_44 = 0;
      }
      else {
        local_44 = 1;
      }
      _objc_storeStrong(&local_50,0);
      goto LAB_0161dae0;
    }
  }
  local_44 = 1;
LAB_0161dae0:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

