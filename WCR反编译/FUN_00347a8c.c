// FUN_00347a8c @ 00347a8c

void FUN_00347a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_e0;
  undefined *local_c8;
  undefined *local_88;
  undefined *local_78;
  undefined *local_68;
  undefined *local_60;
  byte local_51;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  long local_38;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if ((lVar2 == 0) ||
     (lVar2 = local_30, (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0),
     lVar2 == 0)) {
    local_3c = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_51 = 0;
    local_c8 = puVar5;
    if (puVar5 == (undefined *)0x0) {
      local_c8 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_c8;
    }
    local_51 = puVar5 == (undefined *)0x0;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = local_c8;
    if ((local_51 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    (*(code *)PTR__objc_release_02578630)(puVar5);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098,local_28)
    ;
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    puVar5 = puVar3;
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_isKindOfClass__0269cd68,puVar4);
    bVar1 = ((ulong)puVar5 & 1) == 0;
    if (bVar1) {
      local_e0 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_88 = local_e0;
    }
    else {
      local_68 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_objectForKeyedSubscript__0269d098,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_e0 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_78 = local_e0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_60 = local_e0;
    if (bVar1) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    else {
      (*(code *)PTR__objc_release_02578630)(local_78);
      (*(code *)PTR__objc_release_02578630)(local_68);
    }
    (*(code *)PTR__objc_release_02578630)(puVar3);
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_removeObjectForKey__0269d700,local_30);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_60,PTR_s_setObject_forKeyedSubscript__0269d248,local_38,local_30);
    }
    puVar3 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
    if (puVar3 == (undefined *)0x0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_removeObjectForKey__0269d700,local_28);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,local_28);
    }
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar3);
    FUN_0034945c();
    _objc_storeStrong(&local_60);
    _objc_storeStrong(&local_48,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

