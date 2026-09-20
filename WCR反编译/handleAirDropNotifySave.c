// handleAirDropNotifySave @ 01742da4

/* Function Stack Size: 0x10 bytes */

void ThemeBoxAirDropViewController::handleAirDropNotifySave(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  ID IVar2;
  undefined *puVar3;
  dispatch_time_t dVar4;
  cfstringStruct *local_78;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  ID local_38;
  cfstringStruct *local_30;
  cfstringStruct *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_getAssociatedObject(param_1,&DAT_028e3fa1);
  _objc_retainAutoreleasedReturnValue();
  local_28 = (cfstringStruct *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_text_0269ce68);
  _objc_retainAutoreleasedReturnValue();
  local_78 = (cfstringStruct *)param_1;
  if ((cfstringStruct *)param_1 == (cfstringStruct *)0x0) {
    local_78 = &::cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_30 = local_78;
  (*(code *)PTR__objc_release_02578630)(param_1);
  IVar2 = local_18;
  _objc_getAssociatedObject(local_18,&DAT_028e3fa2);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
  if (((IVar2 & 1) == 0) ||
     (IVar2 = local_38,
     (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_notifyFail),
     (IVar2 & 1) == 0)) {
    IVar2 = local_38;
    puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if (((IVar2 & 1) == 0) ||
       (IVar2 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_sendCode),
       (IVar2 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setNotifyFormat_forCurrentProvid_026b3fb0,local_30,0);
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      pcVar1 = local_30;
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_editingSendCodeFormatStockReposi_026b3fb8);
      (*(code *)PTR__objc_msgSend_02578628)
                (puVar3,PTR_s_setThemeBoxAirDropSendCodeFormat_026b3fc0,pcVar1,IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_setNotifyFormat_forCurrentProvid_026b3fb0,local_30,1);
  }
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resignFirstResponder_0269ea18);
  _objc_initWeak(auStack_40,local_18);
  dVar4 = _dispatch_time(0,280000000);
  puVar3 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc2000000;
  local_5c = 0;
  local_58 = FUN_01743170;
  local_50 = &DAT_0257be28;
  _objc_copyWeak(auStack_48,auStack_40);
  _dispatch_after(dVar4,puVar3,&local_68);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

