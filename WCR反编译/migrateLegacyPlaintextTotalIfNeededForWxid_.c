// migrateLegacyPlaintextTotalIfNeededForWxid: @ 01512fb4

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCRefineSponsorSecureStore::migrateLegacyPlaintextTotalIfNeededForWxid_
          (WCRefineSponsorSecureStore *this,ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  double in_d0;
  double dVar7;
  double local_d0;
  undefined *local_a0;
  ID local_98;
  undefined *local_90;
  ID local_88;
  undefined *local_80;
  undefined4 local_74;
  ID local_70;
  SEL local_68;
  ID local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  undefined *local_40;
  undefined *local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_70 = 0;
  local_68 = param_2;
  local_60 = param_1;
  _objc_storeStrong(&local_70,param_3);
  IVar1 = local_60;
  (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_resolvedWxid__026a7de8,local_70);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = local_70;
  local_70 = IVar1;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  IVar2 = local_70;
  (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
  if (IVar2 == 0) {
    local_74 = 1;
  }
  else {
    IVar2 = local_60;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,PTR_s_decryptedTotalPayloadForWxid__026b00a0,local_70);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar2 == 0) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_70;
      local_90 = puVar3;
      FUN_01512e58();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_90;
      local_98 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_objectForKey__0269e048,IVar2);
      _objc_retainAutoreleasedReturnValue();
      local_a0 = puVar3;
      if (puVar3 == (undefined *)0x0) {
        local_d0 = 0.0;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_doubleValue_026ca608);
        local_d0 = in_d0;
      }
      puVar3 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
      dVar7 = local_d0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_70;
      FUN_01513478();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_doubleForKey__026a7e60);
      (*(code *)PTR__objc_release_02578630)(IVar2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      IVar2 = local_60;
      local_58 = &cf_v;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithInteger__0269e080,2);
      _objc_retainAutoreleasedReturnValue();
      local_50 = &cf_t;
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_40 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_d0,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      local_48 = &cf_g;
      puVar5 = PTR__OBJC_CLASS___NSNumber_026ce038;
      local_38 = puVar4;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedLongLong__0269d7f8,
                 (long)dVar7);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___NSDictionary_026ce090;
      local_30 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSDictionary_026ce090,
                 PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_40,&local_58,3);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar2,PTR_s_writeEncryptedTotalPayload_forWx_026b00a8,puVar6,local_70);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      _objc_storeStrong(&local_a0);
      _objc_storeStrong(&local_98,0);
      _objc_storeStrong(&local_90,0);
      local_74 = 0;
    }
    else {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineConfig_026cdf58,PTR_s_configDictionary_0269f958);
      _objc_retainAutoreleasedReturnValue();
      IVar2 = local_70;
      local_80 = puVar3;
      FUN_01512e58();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = local_80;
      local_88 = IVar2;
      (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_objectForKey__0269e048,IVar2);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_release_02578630)();
      if (puVar3 != (undefined *)0x0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_removeObjectForKey__0269d700,local_88);
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineConfig_026cdf58,PTR_s_saveConfigDictionary__0269f960,local_80);
      }
      local_74 = 1;
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
    }
  }
  _objc_storeStrong(&local_70,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

