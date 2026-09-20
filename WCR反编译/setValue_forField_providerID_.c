// setValue:forField:providerID: @ 009c0e14

/* Function Stack Size: 0x28 bytes */

void WCRefineAIStore::setValue_forField_providerID_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  undefined1 uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  cfstringStruct *pcVar5;
  cfstringStruct *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *local_c0;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  cfstringStruct *local_70;
  undefined4 local_68;
  undefined1 local_61;
  long local_60;
  long local_58;
  ulong local_50;
  cfstringStruct *local_48;
  SEL local_40;
  undefined *local_38;
  undefined8 local_30;
  long *local_28;
  
  local_48 = (cfstringStruct *)0x0;
  local_40 = param_2;
  local_38 = (undefined *)param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_4);
  local_58 = 0;
  _objc_storeStrong(&local_58,param_5);
  local_28 = &DAT_028e27e0;
  local_30 = 0;
  _objc_storeStrong(&local_30,&PTR___NSConcreteGlobalBlock_02581468);
  if (*local_28 + 1 != 0) {
    _dispatch_once(*local_28 + 1,local_28,local_30);
  }
  _objc_storeStrong(&local_30,0);
  uVar3 = DAT_028e27d8;
  (*(code *)PTR__objc_msgSend_02578628)(DAT_028e27d8,PTR_s_containsObject__0269cbb8,local_50);
  local_61 = 0;
  bVar2 = true;
  uVar1 = (uVar3 & 1) != 0;
  if ((bool)uVar1) {
    lVar4 = local_58;
    FUN_009c14c0();
    _objc_retainAutoreleasedReturnValue();
    bVar2 = lVar4 == 0;
    local_61 = uVar1;
    local_60 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    uVar1 = local_61;
  }
  local_61 = uVar1;
  if (bVar2) {
    local_68 = 1;
  }
  else {
    pcVar5 = local_48;
    FUN_009af3fc();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = local_50;
    local_70 = pcVar5;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_baseURL);
    if ((uVar3 & 1) != 0) {
      pcVar6 = local_70;
      FUN_009c1714();
      _objc_retainAutoreleasedReturnValue();
      pcVar5 = local_70;
      local_70 = pcVar6;
      (*(code *)PTR__objc_release_02578630)(pcVar5);
    }
    uVar3 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_chatPath);
    if (((((uVar3 & 1) != 0) ||
         (uVar3 = local_50,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_50,PTR_s_isEqualToString__0269ccc8,&cf_imagePath), (uVar3 & 1) != 0)) &&
        (pcVar5 = local_70, (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0),
        pcVar5 != (cfstringStruct *)0x0)) &&
       (pcVar5 = local_70,
       (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_hasPrefix__0269d320,&cf__),
       ((ulong)pcVar5 & 1) == 0)) {
      pcVar5 = &cf__;
      (*(code *)PTR__objc_msgSend_02578628)(&cf__,PTR_s_stringByAppendingString__0269d398,local_70);
      _objc_retainAutoreleasedReturnValue();
      pcVar6 = local_70;
      local_70 = pcVar5;
      (*(code *)PTR__objc_release_02578630)(pcVar6);
    }
    puVar7 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mutableOverrides_026aadd8);
    _objc_retainAutoreleasedReturnValue();
    local_78 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)(puVar7,PTR_s_objectForKeyedSubscript__0269d098,local_58);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = puVar7;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_c0 = puVar8;
    if (puVar8 == (undefined *)0x0) {
      local_88 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      local_c0 = local_88;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_c0;
    if (puVar8 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_88);
    }
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_80,PTR_s_setObject_forKeyedSubscript__0269d248,local_70,local_50);
    (*(code *)PTR__objc_msgSend_02578628)
              (local_78,PTR_s_setObject_forKeyedSubscript__0269d248,local_80,local_58);
    puVar7 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_copy_0269d150);
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar7,PTR_s_setObject_forKey__026ca9e8,puVar8,&cf_WCRAIProviderOverridesV1);
    (*(code *)PTR__objc_release_02578630)(puVar8);
    (*(code *)PTR__objc_release_02578630)(puVar7);
    puVar7 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar7);
    _objc_storeStrong(&local_80);
    _objc_storeStrong(&local_78,0);
    _objc_storeStrong(&local_70,0);
    local_68 = 0;
  }
  _objc_storeStrong(&local_58);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  return;
}

