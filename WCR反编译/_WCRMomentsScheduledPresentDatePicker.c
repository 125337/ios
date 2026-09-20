// _WCRMomentsScheduledPresentDatePicker @ 00579c54

void _WCRMomentsScheduledPresentDatePicker
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_110;
  undefined *local_78;
  undefined *local_50;
  undefined4 local_48;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = (undefined *)0x0;
  _objc_storeStrong(&local_30,param_6);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_7);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar2 == 0) {
    local_48 = 1;
  }
  else {
    puVar3 = PTR_WCRMomentsScheduledDatePickerPanel_026ce798;
    _objc_alloc();
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,param_2,param_3,param_4,puVar3,PTR_s_initWithFrame__026ca6e8);
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_setCompletion__0269fdc8,local_38);
    puVar3 = local_50;
    lVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = local_30 == (undefined *)0x0;
    if (bVar1) {
      local_110 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)
                (0x4072c00000000000,PTR__OBJC_CLASS___NSDate_026cdf88,
                 PTR_s_dateWithTimeIntervalSinceNow__0269cf50);
      _objc_retainAutoreleasedReturnValue();
      local_78 = local_110;
    }
    else {
      local_110 = local_30;
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar3,PTR_s_presentInView_title_date__026a5380,lVar2,&cf_bSe,local_110);
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_78);
    }
    (*(code *)PTR__objc_release_02578630)(lVar2);
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

