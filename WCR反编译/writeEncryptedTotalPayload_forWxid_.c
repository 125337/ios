// writeEncryptedTotalPayload:forWxid: @ 01512824

/* Function Stack Size: 0x20 bytes */

void __thiscall
WCRefineSponsorSecureStore::writeEncryptedTotalPayload_forWxid_
          (WCRefineSponsorSecureStore *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  cfstringStruct *pcVar7;
  undefined8 in_d0;
  cfstringStruct *local_128;
  cfstringStruct *local_100;
  ulong local_e0;
  undefined8 local_c8;
  ID local_a8;
  ID local_a0;
  cfstringStruct *local_98;
  undefined *local_90;
  undefined *local_88;
  byte local_79;
  ulong local_78;
  ulong local_70;
  byte local_61;
  ulong local_60;
  undefined8 local_58;
  ulong local_50;
  undefined4 local_44;
  ID local_40;
  ulong local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  IVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_resolvedWxid__026a7de8,local_40);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_40;
  local_40 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  uVar4 = local_38;
  if (IVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar4 & 1) != 0) {
      uVar4 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_mutableCopy_0269d8a0);
      local_50 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_t);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_61 = 0;
      if ((uVar5 & 1) == 0) {
        local_c8 = 0;
      }
      else {
        uVar5 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_t);
        _objc_retainAutoreleasedReturnValue();
        local_61 = 1;
        local_60 = uVar5;
        (*(code *)PTR__objc_msgSend_02578628)();
        local_c8 = in_d0;
      }
      if ((local_61 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_60);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_58 = local_c8;
      uVar4 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_g);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_79 = 0;
      if ((uVar5 & 1) == 0) {
        local_e0 = 0;
      }
      else {
        local_e0 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_g);
        _objc_retainAutoreleasedReturnValue();
        local_79 = 1;
        local_78 = local_e0;
        (*(code *)PTR__objc_msgSend_02578628)();
      }
      if ((local_79 & 1) != 0) {
        (*(code *)PTR__objc_release_02578630)(local_78);
      }
      (*(code *)PTR__objc_release_02578630)(uVar4);
      local_70 = local_e0;
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_58,local_28,PTR_s_totalSealForWxid_amount_generati_026b0098,local_40,local_e0
                );
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_setObject_forKeyedSubscript__0269d248,IVar2,&cf_s);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      _objc_storeStrong(&local_38,local_50);
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSJSONSerialization_026ce458;
      local_88 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSJSONSerialization_026ce458,
                 PTR_s_dataWithJSONObject_options_error_026a64a8,local_38,0,0);
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
      local_90 = puVar6;
      _objc_alloc();
      (*(code *)PTR__objc_msgSend_02578628)();
      local_100 = pcVar7;
      if (pcVar7 == (cfstringStruct *)0x0) {
        local_100 = &cf___;
      }
      (*(code *)PTR__objc_retain_02578638)();
      local_98 = local_100;
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      IVar2 = local_40;
      FUN_01512568();
      _objc_retainAutoreleasedReturnValue();
      pcVar7 = local_98;
      IVar1 = local_40;
      local_a0 = IVar2;
      FUN_01510c28(local_40,&cf_WCRefineUserTotalEnc2026);
      _objc_retainAutoreleasedReturnValue();
      FUN_0151145c();
      _objc_retainAutoreleasedReturnValue();
      local_128 = pcVar7;
      if (pcVar7 == (cfstringStruct *)0x0) {
        local_128 = &::cf___;
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (local_88,PTR_s_setObject_forKeyedSubscript__0269d248,local_128,local_a0);
      (*(code *)PTR__objc_release_02578630)(pcVar7);
      (*(code *)PTR__objc_release_02578630)(IVar1);
      IVar2 = local_40;
      FUN_01512e58();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_88;
      local_a8 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_objectForKey__0269e048,IVar2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_88,PTR_s_removeObjectForKey__0269d700,local_a8);
      }
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_88);
      _objc_storeStrong(&local_a8);
      _objc_storeStrong(&local_a0,0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      _objc_storeStrong(&local_88,0);
      _objc_storeStrong(&local_50,0);
      local_44 = 0;
      goto LAB_01512e2c;
    }
  }
  local_44 = 1;
LAB_01512e2c:
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

