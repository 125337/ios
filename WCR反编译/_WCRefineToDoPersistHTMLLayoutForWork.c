// _WCRefineToDoPersistHTMLLayoutForWork @ 01e6e1b0

void _WCRefineToDoPersistHTMLLayoutForWork(double param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  double dVar6;
  undefined *local_38;
  undefined1 *local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar2 = local_18;
  FUN_01e6dc70();
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_length_0269cca0);
  if (uVar2 == 0) {
    FUN_01e6df84();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = local_20;
    local_20 = uVar2;
    (*(code *)PTR__objc_release_02578630)(uVar1);
  }
  uVar2 = local_20;
  FUN_01e6e6e0();
  if ((uVar2 & 1) == 0) {
    local_24 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_toDoCardSourceMode_026a8828);
    if ((puVar3 == (undefined1 *)((long)&MACH_HEADER.magic + 2)) &&
       (puVar4 = local_30,
       (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardWebHTMLEnabled_026c6d68),
       ((ulong)puVar4 & 1) != 0)) {
      puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardHeight_026a8948);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_height);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardWidth_026a8950);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_width);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardWebContentScale_026c6d70);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_webContentScale);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardWebOverallScale_026c6d78);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_webOverallScale);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardWebContentOffsetX_026c6d80);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_webContentOffsetX);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardWebContentOffsetY_026c6d88);
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_webContentOffsetY);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      FUN_01e6ebac(local_30);
      dVar6 = param_1;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_toDoCardHeight_026a8948);
      if ((dVar6 <= 0.0) && (0.0 < param_1)) {
        puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
        _objc_retainAutoreleasedReturnValue();
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_setObject_forKeyedSubscript__0269d248,puVar3,&cf_autoRawHeight);
        (*(code *)PTR__objc_release_02578630)(puVar3);
      }
      _WCRefineToDoSeedHTMLLayoutJSONForWork(local_20,local_38);
      _objc_storeStrong(&local_38,0);
      local_24 = 0;
    }
    else {
      local_24 = 1;
    }
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

