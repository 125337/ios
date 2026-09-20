// presentGroupJoinTimeEditorFrom:room:completion: @ 01dc9ef8

/* Function Stack Size: 0x28 bytes */

void WCRefineSessionStatsViewController::presentGroupJoinTimeEditorFrom_room_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,undefined4 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_158;
  undefined *local_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  byte local_81;
  undefined *local_80;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined4 local_54;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  SEL local_30;
  ID local_28;
  
  uVar7 = DAT_02324040;
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  lVar1 = local_40;
  FUN_01dc8ed4();
  _objc_retainAutoreleasedReturnValue();
  local_50 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_length_0269cca0);
  if ((lVar1 == 0) || (local_38 == 0)) {
    local_54 = 1;
  }
  else {
    puVar2 = PTR_WCRefineSessionStatsEngine_026ced48;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineSessionStatsEngine_026ced48,
               PTR_s_groupJoinTimeIsOfficialForRoom__026b04f8,local_50);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___UIViewController_026cdf80;
      _objc_alloc_init();
      local_60 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setTitle__0269cef0,&cf_kXQReQe);
      uVar10 = 0x3ff0000000000000;
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      uVar9 = DAT_02323ff8;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar7,PTR__OBJC_CLASS___UIColor_026cdf78,
                 PTR_s_colorWithRed_green_blue_alpha__0269cc48);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar3);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIDatePicker_026ce060;
      _objc_alloc_init();
      local_68 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setDatePickerMode__0269cf38,2);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setPreferredDatePickerStyle__0269cf48,1);
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMaximumDate__0269cf40);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar5 = 0x41d3a19600000000;
      puVar2 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_dateWithTimeIntervalSince1970__0269d1d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setMinimumDate__026c5178);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR_WCRefineSessionStatsEngine_026ced48;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineSessionStatsEngine_026ced48,PTR_s_groupJoinTimeTextForRoom__026b04f0,
                 local_50);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
      if (puVar2 != (undefined *)0x0) {
        puVar2 = PTR__OBJC_CLASS___NSDateFormatter_026ce098;
        _objc_alloc_init();
        puVar3 = PTR__OBJC_CLASS___NSLocale_026ce0a0;
        local_78 = puVar2;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSLocale_026ce0a0,PTR_s_localeWithLocaleIdentifier__0269d1b8,
                   &cf_zh_CN);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setLocale__0269d1c0);
        (*(code *)PTR__objc_release_02578630)(puVar3);
        puVar2 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
                   &cf_Asia_Shanghai);
        _objc_retainAutoreleasedReturnValue();
        local_81 = 0;
        local_158 = puVar2;
        if (puVar2 == (undefined *)0x0) {
          local_158 = PTR__OBJC_CLASS___NSTimeZone_026ce360;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSTimeZone_026ce360,PTR_s_timeZoneWithName__026af750,
                     &cf_Asia_Chongqing);
          _objc_retainAutoreleasedReturnValue();
          local_80 = local_158;
        }
        local_81 = puVar2 == (undefined *)0x0;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_setTimeZone__0269f9d8,local_158);
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_78,PTR_s_setDateFormat__0269d1c8,&cf_yyyy_MM_ddHH_mm_ss);
        puVar2 = local_78;
        (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_dateFromString__026aa6a8,local_70);
        _objc_retainAutoreleasedReturnValue();
        local_90 = puVar2;
        if (puVar2 != (undefined *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setDate__0269cf58,puVar2);
        }
        _objc_storeStrong(&local_90);
        _objc_storeStrong(&local_78,0);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setTag__026caa80,0x47);
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      uVar6 = 0;
      uVar8 = 0x4054000000000000;
      uVar4 = 0x406b800000000000;
      local_d0 = uVar5;
      local_c8 = uVar7;
      local_c0 = uVar9;
      local_b8 = uVar10;
      FUN_01dca788();
      local_f0 = uVar6;
      uStack_e8 = uVar8;
      local_e0 = uVar9;
      uStack_d8 = uVar4;
      local_b0 = uVar6;
      uStack_a8 = uVar8;
      local_a0 = uVar9;
      uStack_98 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,uVar8,uVar9,uVar4,local_68,PTR_s_setFrame__026ca960);
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_setAutoresizingMask__026ca878,2);
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      _objc_setAssociatedObject(local_60,DAT_028c69c0,local_50,3);
      puVar2 = local_60;
      uVar7 = DAT_028c69c8;
      if (local_48 != 0) {
        lVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_copy_0269d150);
        _objc_setAssociatedObject(puVar2,uVar7,lVar1,3);
        (*(code *)PTR__objc_release_02578630)(lVar1);
      }
      puVar2 = PTR__OBJC_CLASS___UIBarButtonItem_026ce058;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_f8 = puVar2;
      _objc_setAssociatedObject(puVar2,DAT_028c69c0,local_60,0);
      puVar2 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_navigationItem_0269cf08);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = PTR__OBJC_CLASS___UINavigationController_026ce0c8;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_100 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_setModalPresentationStyle__0269d2a8,1);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_presentViewController_animated_c_0269d2b0,local_100,1);
      _objc_storeStrong(&local_100,0);
      _objc_storeStrong(&local_f8,0);
      _objc_storeStrong(&local_70,0);
      _objc_storeStrong(&local_68,0);
      _objc_storeStrong(&local_60,0);
      local_54 = 0;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf___u_bXTReQe);
      local_54 = 1;
    }
  }
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

