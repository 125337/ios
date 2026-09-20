// captureCurrentViewController @ 01d849ac

/* Function Stack Size: 0x10 bytes */

void WCRefineSearchSettingsViewController::captureCurrentViewController(ID param_1,SEL param_2)

{
  ulong uVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_140;
  undefined4 local_138;
  undefined4 local_134;
  code *local_130;
  undefined *local_128;
  ID local_120;
  ID local_118;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  code *local_100;
  undefined *local_f8;
  ID local_f0;
  ID local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  code *local_d0;
  undefined *local_c8;
  ID local_c0;
  ID local_b8;
  ID local_b0;
  undefined *local_a8;
  ID local_a0;
  ID local_98;
  ID local_90;
  ulong local_88;
  ID local_80;
  undefined *local_78;
  ID local_70;
  ID local_68;
  ID local_60;
  int local_54;
  ID local_50 [3];
  ID local_38;
  SEL local_30;
  ID local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_getCurrentCapturingKey_026c4c58);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_28;
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getKeyWindow_026c4c60);
  _objc_retainAutoreleasedReturnValue();
  local_50[0] = IVar2;
  if (IVar2 == 0) {
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_Uc1Y_
               ,&cf_elS_NzS,&cf_nx_,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
    local_54 = 1;
    goto LAB_01d8550c;
  }
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_rootViewController_026ca820);
  _objc_retainAutoreleasedReturnValue();
  local_60 = IVar2;
  if (IVar2 == 0) {
    puVar4 = PTR_WCRefineHelper_026ce000;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_Uc1Y_
               ,&cf_elS9hVc6RhV,&cf_nx_,0);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
    local_54 = 1;
  }
  else {
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_getTopmostViewController__026c4c50,IVar2);
    _objc_retainAutoreleasedReturnValue();
    local_68 = IVar3;
    if (IVar3 == 0) {
      puVar4 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,
                 &cf_Uc1Y_,&cf_elSS_MRub,&cf_nx_,0);
      _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
      local_54 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(IVar3,PTR_s_class_0269cd60);
      _NSStringFromClass();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___NSMutableString_026cdfb0;
      local_70 = IVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableString_026cdfb0,PTR_s_string_0269cc38);
      _objc_retainAutoreleasedReturnValue();
      local_78 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_appendFormat__0269d148,&cf_Uc0R__T_);
      IVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((IVar3 & 1) != 0) {
        IVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_80 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_80;
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
        lVar6 = IVar2 - 1;
        if (IVar2 != 0 && lVar6 != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_appendString__0269ccb0,&cf___h_);
          local_88 = 0;
          while( true ) {
            uVar1 = local_88;
            IVar2 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_count_0269cfe0);
            lVar6 = uVar1 - IVar2;
            if (IVar2 <= uVar1) break;
            IVar2 = local_80;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_80,PTR_s_objectAtIndexedSubscript__0269cc78,local_88);
            _objc_retainAutoreleasedReturnValue();
            local_90 = IVar2;
            (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_class_0269cd60);
            _NSStringFromClass();
            _objc_retainAutoreleasedReturnValue();
            local_98 = IVar2;
            if (local_90 == local_68) {
              (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_appendFormat__0269d148,&::cf__);
            }
            else {
              (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_appendFormat__0269d148,&cf___);
            }
            _objc_storeStrong(&local_98);
            _objc_storeStrong(&local_90,0);
            local_88 = local_88 + 1;
          }
        }
        _objc_storeStrong(lVar6,&local_80,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_appendString__0269ccb0,&::cf_newline_s_);
      IVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UINavigationController_026ce0c8,PTR_s_class_0269cd60);
      IVar3 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar4);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      if ((IVar3 & 1) == 0) {
LAB_01d853f0:
        IVar2 = local_70;
        puVar5 = local_78;
        puVar4 = PTR_WCRefineHelper_026ce000;
        local_140 = PTR___NSConcreteStackBlock_02578660;
        local_138 = 0xc2000000;
        local_134 = 0;
        local_130 = FUN_01d85768;
        local_128 = &DAT_0258c2f0;
        local_118 = local_28;
        (*(code *)PTR__objc_retain_02578638)();
        local_120 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar4,PTR_s_showAlertWithTitle_message_btnTi_0269d8f0,&cf_nxUc,puVar5,&cf_Sm,0,
                   &cf_OX_,&local_140);
        _objc_unsafeClaimAutoreleasedReturnValue(puVar4);
        _objc_storeStrong(&local_120,0);
        local_54 = 0;
      }
      else {
        IVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_navigationController_0269d458);
        _objc_retainAutoreleasedReturnValue();
        IVar3 = IVar2;
        (*(code *)PTR__objc_msgSend_02578628)();
        _objc_retainAutoreleasedReturnValue();
        local_a0 = IVar3;
        (*(code *)PTR__objc_release_02578630)(IVar2);
        IVar2 = local_a0;
        (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_count_0269cfe0);
        if (IVar2 < 2) {
          local_54 = 0;
        }
        else {
          puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIAlertController_026ce178,
                     PTR_s_alertControllerWithTitle_message_0269dc00,&cf_nxUc,local_78,1);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
          local_a8 = puVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___UIAlertAction_026ce180,
                     PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
          (*(code *)PTR__objc_release_02578630)(puVar5);
          IVar2 = local_a0;
          puVar5 = local_a8;
          puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
          local_e0 = PTR___NSConcreteStackBlock_02578660;
          local_d8 = 0xc2000000;
          local_d4 = 0;
          local_d0 = FUN_01d8568c;
          local_c8 = &DAT_0258c2c0;
          local_b0 = local_28;
          (*(code *)PTR__objc_retain_02578638)();
          IVar3 = local_68;
          local_c0 = IVar2;
          (*(code *)PTR__objc_retain_02578638)();
          local_b8 = IVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_bvQNub,0,&local_e0);
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          IVar2 = local_70;
          puVar5 = local_a8;
          puVar4 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
          local_110 = PTR___NSConcreteStackBlock_02578660;
          local_108 = 0xc2000000;
          local_104 = 0;
          local_100 = FUN_01d856fc;
          local_f8 = &DAT_02589f78;
          local_e8 = local_28;
          (*(code *)PTR__objc_retain_02578638)();
          local_f0 = IVar2;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar4,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_OX_S_MRub,0,&local_110
                    );
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_addAction__0269dc10);
          (*(code *)PTR__objc_release_02578630)(puVar4);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_68,PTR_s_presentViewController_animated_c_0269d2b0,local_a8,1,0);
          local_54 = 1;
          _objc_storeStrong(&local_f0);
          _objc_storeStrong(&local_b8,0);
          _objc_storeStrong(&local_c0,0);
          _objc_storeStrong(&local_a8,0);
        }
        _objc_storeStrong(&local_a0,0);
        if (local_54 == 0) goto LAB_01d853f0;
      }
      _objc_storeStrong(&local_78);
      _objc_storeStrong(&local_70,0);
    }
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_60,0);
LAB_01d8550c:
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  return;
}

