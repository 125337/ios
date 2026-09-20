// contactsAddedSectionsVisibleForCurrentUser @ 00fab634

/* Function Stack Size: 0x10 bytes */

bool __thiscall
WCRefineHelper::contactsAddedSectionsVisibleForCurrentUser
          (WCRefineHelper *this,ID param_1,SEL param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double in_d0;
  byte local_a4;
  byte local_74;
  ID local_60;
  byte local_51;
  undefined *local_50;
  byte local_42;
  byte local_41;
  double local_40;
  SEL local_38;
  ID local_30;
  byte local_21;
  undefined8 local_20;
  long *local_18;
  
  local_38 = param_2;
  local_30 = param_1;
  _CFAbsoluteTimeGetCurrent();
  local_40 = in_d0;
  _os_unfair_lock_lock(&DAT_028e2f94);
  local_41 = (DAT_028e2fa0 & 1) != 0 && local_40 - DAT_028e2f98 < 1.0;
  local_42 = DAT_028e2fa1 & 1;
  _os_unfair_lock_unlock(&DAT_028e2f94);
  if ((local_41 & 1) == 0) {
    puVar2 = PTR_WCRefineRemoteUpdateManager_026ce600;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineRemoteUpdateManager_026ce600,PTR_s_sharedManager_0269db78);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_50 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    local_51 = 0;
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_all);
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_beta_only);
      bVar1 = (byte)puVar2;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_isEqualToString__0269ccc8,&cf_internal_only);
        bVar1 = (byte)puVar2;
        if (((ulong)puVar2 & 1) == 0) {
          puVar2 = local_50;
          (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_isEqualToString__0269ccc8,&cf_hidden)
          ;
          if (((ulong)puVar2 & 1) == 0) {
            local_18 = &DAT_028e2fb0;
            local_20 = 0;
            _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02583970);
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
            local_60 = IVar5;
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
            puVar7 = puVar6;
            (*(code *)PTR__objc_msgSend_02578628)();
            (*(code *)PTR__objc_release_02578630)(puVar6);
            (*(code *)PTR__objc_release_02578630)(puVar3);
            (*(code *)PTR__objc_release_02578630)(puVar2);
            local_74 = 1;
            if (((ulong)puVar7 & 1) == 0) {
              IVar4 = local_60;
              (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_length_0269cca0);
              local_a4 = 0;
              if (IVar4 != 0) {
                uVar8 = DAT_028e2fa8;
                (*(code *)PTR__objc_msgSend_02578628)
                          (DAT_028e2fa8,PTR_s_containsObject__0269cbb8,local_60);
                local_a4 = (byte)uVar8;
              }
              local_74 = local_a4;
            }
            local_51 = local_74 & 1;
            _objc_storeStrong(&local_60,0);
          }
          else {
            local_51 = 0;
          }
        }
        else {
          FUN_00963008();
          local_51 = bVar1;
        }
      }
      else {
        FUN_00966a44();
        local_51 = bVar1;
      }
    }
    else {
      local_51 = 1;
    }
    _os_unfair_lock_lock();
    DAT_028e2fa1 = local_51 & 1;
    DAT_028e2f98 = local_40;
    DAT_028e2fa0 = 1;
    _os_unfair_lock_unlock(&DAT_028e2f94);
    local_21 = local_51 & 1;
    _objc_storeStrong(&local_50,0);
  }
  else {
    local_21 = local_42 & 1;
  }
  return local_21 & 1;
}

