// FUN_018d5a58 @ 018d5a58

void FUN_018d5a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  long lVar8;
  cfstringStruct *local_c8;
  undefined4 local_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  code *local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  code *local_80;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_40 = 0;
  _objc_storeStrong(&local_40,param_1);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_2);
  pcVar2 = &cf_WCActionSheet;
  local_50 = param_3;
  _NSClassFromString();
  pcVar3 = &cf_WCActionSheetItem;
  local_58 = pcVar2;
  _NSClassFromString();
  local_60 = pcVar3;
  if (((local_58 == (cfstringStruct *)0x0) || (pcVar3 == (cfstringStruct *)0x0)) || (local_40 == 0))
  {
    puVar4 = PTR__OBJC_CLASS___UIAlertController_026ce178;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertController_026ce178,
               PTR_s_alertControllerWithTitle_message_0269dc00,0);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_48;
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    puVar7 = PTR___NSConcreteStackBlock_02578660;
    local_90 = PTR___NSConcreteStackBlock_02578660;
    local_88 = 0xc2000000;
    local_84 = 0;
    local_80 = FUN_018e0068;
    local_78 = &DAT_0257c5b8;
    local_68 = puVar4;
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_hQmR,0,&local_90);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    uVar1 = local_48;
    puVar4 = local_68;
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    local_b8 = puVar7;
    local_b0 = 0xc2000000;
    local_ac = 0;
    local_a8 = FUN_018e00fc;
    local_a0 = &DAT_0257c5b8;
    (*(code *)PTR__objc_retain_02578638)();
    local_98 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar5,PTR_s_actionWithTitle_style_handler__0269dc08,&cf_hQRd,2,&local_b8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar4,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    puVar7 = local_68;
    puVar5 = PTR__OBJC_CLASS___UIAlertAction_026ce180;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIAlertAction_026ce180,
               PTR_s_actionWithTitle_style_handler__0269dc08,&cf_Sm,1,0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_addAction__0269dc10);
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,PTR_s_presentViewController_animated_c_0269d2b0,local_68,1,0);
    local_bc = 1;
    _objc_storeStrong(&local_98,0);
    _objc_storeStrong(&local_70,0);
    _objc_storeStrong(&local_68,0);
  }
  else {
    pcVar2 = local_58;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar3 = local_60;
    local_c8 = pcVar2;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    pcVar6 = local_60;
    local_38 = pcVar3;
    _objc_alloc();
    (*(code *)PTR__objc_msgSend_02578628)();
    puVar7 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_30 = pcVar6;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_38,2
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (pcVar2,PTR_s_setValue_forKey__0269d300,puVar7,&cf_buttonTitleList);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_release_02578630)(pcVar6);
    (*(code *)PTR__objc_release_02578630)(pcVar3);
    pcVar2 = local_c8;
    puVar7 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,local_50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_setValue_forKey__0269d300,puVar7,&cf_tag);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    pcVar3 = local_c8;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_c8,PTR_s_respondsToSelector__026ca818,PTR_s_showInView__0269d310);
    pcVar2 = local_c8;
    puVar7 = PTR_s_showInView__0269d310;
    if (((ulong)pcVar3 & 1) != 0) {
      lVar8 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar7);
      (*(code *)PTR__objc_release_02578630)(lVar8);
    }
    _objc_storeStrong(&local_c8,0);
    local_bc = 0;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

