// isEntryVisibleForCurrentUser @ 0110cfe0

/* Function Stack Size: 0x10 bytes */

bool WCRefinePrivateFriendManager::isEntryVisibleForCurrentUser(ID param_1,SEL param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte local_54;
  undefined *local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  FUN_0110d24c();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = PTR_WCRefineRemoteUpdateManager_026ce600;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar3;
  (*(code *)PTR__objc_release_02578630)(puVar2);
  puVar2 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_hidden);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_all);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_isEqualToString__0269ccc8,&cf_internal_only);
      bVar1 = (byte)puVar2;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_38;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_38,PTR_s_isEqualToString__0269ccc8,&cf_beta_only);
        bVar1 = (byte)puVar2;
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
          local_54 = 0;
          if (puVar2 != (undefined *)0x0) {
            puVar2 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_30,PTR_s_isEqualToString__0269ccc8,&cf_wxid_919w3ffmhln712);
            local_54 = (byte)puVar2;
          }
          local_11 = local_54 & 1;
        }
        else {
          FUN_00966a44();
          local_11 = bVar1 & 1;
        }
      }
      else {
        FUN_00963008();
        local_11 = bVar1 & 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  else {
    local_11 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

