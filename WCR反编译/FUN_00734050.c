// FUN_00734050 @ 00734050

void FUN_00734050(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_a0;
  undefined *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = 0;
  _objc_storeStrong(&local_a0,param_1);
  uVar1 = local_a0;
  (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_isEqualToString__0269ccc8,&cf_profile);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_account_security);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_a0;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_personal_info);
      if ((uVar1 & 1) == 0) {
        uVar1 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_notification);
        if ((uVar1 & 1) == 0) {
          uVar1 = local_a0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_ui_display);
          if ((uVar1 & 1) == 0) {
            uVar1 = local_a0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_storage);
            if ((uVar1 & 1) == 0) {
              uVar1 = local_a0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_other_functions);
              if ((uVar1 & 1) == 0) {
                uVar1 = local_a0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_plugin);
                if ((uVar1 & 1) == 0) {
                  uVar1 = local_a0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_help_feedback);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = local_a0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_about);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = local_a0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_switch_account);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = local_a0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (local_a0,PTR_s_isEqualToString__0269ccc8,&cf_logout);
                        if ((uVar1 & 1) == 0) {
                          puVar2 = *(undefined **)PTR____NSArray0___02578280;
                          (*(code *)PTR__objc_retain_02578638)();
                          local_98 = puVar2;
                        }
                        else {
                          local_90 = &cf_Setting_Quit_Title;
                          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                          (*(code *)PTR__objc_msgSend_02578628)
                                    (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                     PTR_s_arrayWithObjects_count__0269cc70,&local_90,1);
                          _objc_retainAutoreleasedReturnValue();
                          local_98 = puVar2;
                        }
                      }
                      else {
                        local_88 = &cf_Login_LoginInfo_Mgr;
                        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                        (*(code *)PTR__objc_msgSend_02578628)
                                  (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                   PTR_s_arrayWithObjects_count__0269cc70,&local_88,1);
                        _objc_retainAutoreleasedReturnValue();
                        local_98 = puVar2;
                      }
                    }
                    else {
                      local_80 = &cf_Setting_Other_AboutMM;
                      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                      (*(code *)PTR__objc_msgSend_02578628)
                                (PTR__OBJC_CLASS___NSArray_026cdfe0,
                                 PTR_s_arrayWithObjects_count__0269cc70,&local_80,1);
                      _objc_retainAutoreleasedReturnValue();
                      local_98 = puVar2;
                    }
                  }
                  else {
                    local_78 = &cf_Setting_QA;
                    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                    (*(code *)PTR__objc_msgSend_02578628)
                              (PTR__OBJC_CLASS___NSArray_026cdfe0,
                               PTR_s_arrayWithObjects_count__0269cc70,&local_78,1);
                    _objc_retainAutoreleasedReturnValue();
                    local_98 = puVar2;
                  }
                }
                else {
                  local_70 = &cf_Wechat_Labs_Title;
                  puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                  (*(code *)PTR__objc_msgSend_02578628)
                            (PTR__OBJC_CLASS___NSArray_026cdfe0,
                             PTR_s_arrayWithObjects_count__0269cc70,&local_70,1);
                  _objc_retainAutoreleasedReturnValue();
                  local_98 = puVar2;
                }
              }
              else {
                local_68 = &cf_Setting_Other_Functions;
                puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70
                           ,&local_68,1);
                _objc_retainAutoreleasedReturnValue();
                local_98 = puVar2;
              }
            }
            else {
              local_60 = &cf_Setting_StorageUsageVC_Title;
              puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                         &local_60,1);
              _objc_retainAutoreleasedReturnValue();
              local_98 = puVar2;
            }
          }
          else {
            local_58 = &cf_Setting_General_UserInterface;
            puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
            (*(code *)PTR__objc_msgSend_02578628)
                      (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                       &local_58,1);
            _objc_retainAutoreleasedReturnValue();
            local_98 = puVar2;
          }
        }
        else {
          local_50 = &cf_Setting_NotificationSectionTitleV2;
          puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_50,1);
          _objc_retainAutoreleasedReturnValue();
          local_98 = puVar2;
        }
      }
      else {
        local_48 = &cf_Personal_Info_And_Authorization;
        puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_48,1);
        _objc_retainAutoreleasedReturnValue();
        local_98 = puVar2;
      }
    }
    else {
      local_40 = &cf_Setting_AccountSectionTitle;
      local_38 = &cf_Setting_AccountSectionTitle_onBakDevice;
      puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_40
                 ,2);
      _objc_retainAutoreleasedReturnValue();
      local_98 = puVar2;
    }
  }
  else {
    local_30 = &cf_Setting_Profile;
    puVar2 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_30,1
              );
    _objc_retainAutoreleasedReturnValue();
    local_98 = puVar2;
  }
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_98);
  return;
}

