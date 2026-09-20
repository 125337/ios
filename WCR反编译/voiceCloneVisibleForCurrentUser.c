// voiceCloneVisibleForCurrentUser @ 00fabc14

/* Function Stack Size: 0x10 bytes */

bool WCRefineHelper::voiceCloneVisibleForCurrentUser(ID param_1,SEL param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined8 uVar7;
  byte local_84;
  undefined *local_58;
  ID local_50;
  undefined4 local_44;
  undefined *local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  puVar2 = PTR_WCRefineRemoteUpdateManager_026ce600;
  local_38 = param_2;
  local_30 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_all);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_beta_only);
    bVar1 = (byte)puVar2;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_isEqualToString__0269ccc8,&cf_internal_only);
      bVar1 = (byte)puVar2;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isEqualToString__0269ccc8,&cf_hidden);
        if (((ulong)puVar2 & 1) == 0) {
          local_18 = &DAT_028e2fc0;
          local_20 = 0;
          _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02583990);
          if (*local_18 + 1 != 0) {
            _dispatch_once(*local_18 + 1,local_18,local_20);
          }
          _objc_storeStrong(&local_20,0);
          IVar4 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getCurrentUserWxid_0269e148);
          _objc_retainAutoreleasedReturnValue();
          puVar2 = PTR__OBJC_CLASS___NSCharacterSet_026ce078;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSCharacterSet_026ce078,
                     PTR_s_whitespaceAndNewlineCharacterSet_0269d0b8);
          _objc_retainAutoreleasedReturnValue();
          IVar5 = IVar4;
          (*(code *)PTR__objc_msgSend_02578628)
                    (IVar4,PTR_s_stringByTrimmingCharactersInSet__0269d0c0);
          _objc_retainAutoreleasedReturnValue();
          local_50 = IVar5;
          (*(code *)PTR__objc_release_02578630)(puVar2);
          (*(code *)PTR__objc_release_02578630)(IVar4);
          puVar2 = PTR_WCRefineRemoteUpdateManager_026ce600;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar3;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_58 = puVar6;
          (*(code *)PTR__objc_release_02578630)(puVar3);
          (*(code *)PTR__objc_release_02578630)(puVar2);
          puVar2 = local_58;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_58,PTR_s_respondsToSelector__026ca818,PTR_s_boolValue_026ca540);
          if (((ulong)puVar2 & 1) == 0) {
            IVar4 = local_50;
            (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
            local_84 = 0;
            if (IVar4 != 0) {
              uVar7 = DAT_028e2fb8;
              (*(code *)PTR__objc_msgSend_02578628)
                        (DAT_028e2fb8,PTR_s_containsObject__0269cbb8,local_50);
              local_84 = (byte)uVar7;
            }
          }
          else {
            puVar2 = local_58;
            (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_boolValue_026ca540);
            local_84 = (byte)puVar2;
          }
          local_21 = local_84 & 1;
          local_44 = 1;
          _objc_storeStrong(&local_58);
          _objc_storeStrong(&local_50,0);
        }
        else {
          local_21 = 0;
          local_44 = 1;
        }
      }
      else {
        FUN_00963008();
        local_21 = bVar1 & 1;
        local_44 = 1;
      }
    }
    else {
      FUN_00966a44();
      local_21 = bVar1 & 1;
      local_44 = 1;
    }
  }
  else {
    local_21 = 1;
    local_44 = 1;
  }
  _objc_storeStrong(&local_40,0);
  return local_21 & 1;
}

