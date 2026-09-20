// _WCRefineToDoApplyHTMLLayoutForWork @ 01e6f008

void _WCRefineToDoApplyHTMLLayoutForWork(double param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_98;
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  double local_60;
  undefined *local_58;
  undefined *local_50;
  undefined4 local_44;
  undefined *local_40;
  undefined *local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar2 = local_28;
  FUN_01e6dc70();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
  if (lVar2 == 0) {
    FUN_01e6df84();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_30;
    local_30 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSData_026ce1d0;
  lVar2 = local_30;
  FUN_01e6e11c();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_dataWithContentsOfFile__0269e0b8);
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = local_38;
  local_40 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (puVar4 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)(0,local_40,PTR_s_setToDoCardHeight__026c6d90);
    local_44 = 1;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
               PTR_s_JSONObjectWithData_options_error_026ca480,local_38,0,0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_50 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    if (((ulong)puVar3 & 1) == 0) {
      local_98 = *(undefined **)PTR____NSDictionary0___02578288;
    }
    else {
      local_98 = local_50;
    }
    FUN_01e6cf14();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_98;
    (*(code *)PTR__objc_msgSend_02578628)(local_98,PTR_s_count_0269cfe0);
    if (local_98 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(0,local_40,PTR_s_setToDoCardHeight__026c6d90);
      local_44 = 1;
    }
    else {
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 == (undefined *)0x0) {
        param_1 = 0.0;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setToDoCardHeight__026c6d90);
      }
      else {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_height);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setToDoCardHeight__026c6d90);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 != (undefined *)0x0) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_width);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setToDoCardWidth__026c6d98);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_webContentScale);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 != (undefined *)0x0) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_webContentScale);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setToDoCardWebContentScale__026c6da0);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_webOverallScale);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 != (undefined *)0x0) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_webOverallScale);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setToDoCardWebOverallScale__026c6da8);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_webContentOffsetX);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 != (undefined *)0x0) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_webContentOffsetX);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setToDoCardWebContentOffsetX__026c6db0)
        ;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      puVar3 = local_58;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_webContentOffsetY);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 != (undefined *)0x0) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_webContentOffsetY);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_setToDoCardWebContentOffsetY__026c6db8)
        ;
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_toDoCardHeight_026a8948);
      if (param_1 <= 0.0) {
        puVar3 = local_58;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_58,PTR_s_objectForKeyedSubscript__0269d098,&cf_autoRawHeight);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar3);
        local_60 = param_1;
        if (0.0 < param_1) {
          puVar3 = local_40;
          FUN_01e6f90c();
          _objc_retainAutoreleasedReturnValue();
          puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
          local_68 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    ((double)(long)(local_60 * 100.0) / 100.0,PTR__OBJC_CLASS___NSNumber_026ce038,
                     PTR_s_numberWithDouble__0269d6d0);
          _objc_retainAutoreleasedReturnValue();
          local_70 = puVar4;
          FUN_01e6fbd4();
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_msgSend_02578628)();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          puVar3 = PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
          _objc_retainAutoreleasedReturnValue();
          local_78 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)
                    (puVar3,PTR_s_setObject_forKeyedSubscript__0269d248,local_68,
                     &cf_toDoCardWebAutoHeightSignature);
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_70,
                     &cf_toDoCardWebAutoRawHeight);
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_78);
          _objc_storeStrong(&local_78);
          _objc_storeStrong(&local_70,0);
          _objc_storeStrong(&local_68,0);
          local_44 = 0;
        }
        else {
          local_44 = 1;
        }
      }
      else {
        local_44 = 1;
      }
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

