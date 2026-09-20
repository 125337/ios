// editOnceDate @ 01d3fe64

/* Function Stack Size: 0x10 bytes */

void WCRefineScheduledTaskViewController::editOnceDate(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined *local_38;
  undefined4 local_2c;
  undefined *local_28;
  SEL local_20;
  undefined *local_18;
  
  local_20 = param_2;
  local_18 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_triggerHapticFeedback_0269dc78);
  puVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_currentTask_026b3988);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    local_2c = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_objectForKeyedSubscript__0269d098,_kWCRScheduledTaskKeyOnceDateText);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    local_38 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if ((((ulong)puVar1 & 1) == 0) ||
       (puVar1 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       puVar1 == (undefined *)0x0)) {
      puVar1 = PTR_WCRefineScheduledTask_026ce850;
      puVar3 = PTR__OBJC_CLASS___NSDate_026cdf88;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)(0x40ac200000000000);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_formatOnceDate__026c4660);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_38;
      local_38 = puVar1;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    _objc_initWeak(auStack_40,local_18);
    puVar2 = local_18;
    puVar1 = local_38;
    local_68 = PTR___NSConcreteStackBlock_02578660;
    local_60 = 0xc2000000;
    local_5c = 0;
    local_58 = FUN_01d40140;
    local_50 = &DAT_0257c558;
    _objc_copyWeak(auStack_48,auStack_40);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar2,PTR_s_showTextInputWithTitle_message_i_026c0570,&cf_gbLeg,&cf_<h_,puVar1,0x10,
               0,&local_68);
    _objc_destroyWeak(auStack_48);
    _objc_destroyWeak(auStack_40);
    _objc_storeStrong(&local_38,0);
    local_2c = 0;
  }
  _objc_storeStrong(&local_28,0);
  return;
}

