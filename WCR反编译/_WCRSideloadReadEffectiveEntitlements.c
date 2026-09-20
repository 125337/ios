// _WCRSideloadReadEffectiveEntitlements @ 01505aa0

void _WCRSideloadReadEffectiveEntitlements(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_c8;
  undefined *local_70;
  undefined *local_68;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined *local_38;
  undefined *local_30;
  cfstringStruct *local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_01505efc();
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_count_0269cfe0);
  puVar1 = local_38;
  if (param_1 != (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = puVar1;
    local_3c = 1;
    goto LAB_01505eb8;
  }
  _WCRSideloadReadProvisioningProfile(0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  _WCRSideloadReadEntitlementsFromProfile();
  _objc_retainAutoreleasedReturnValue();
  local_48 = puVar1;
  (*(code *)PTR__objc_release_02578630)();
  _WCRSideloadReadCodeSignatureEntitlements();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = local_48;
  local_50 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_01506040();
  _objc_retainAutoreleasedReturnValue();
  local_58 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_50,PTR_s_objectForKeyedSubscript__0269d098,
             &cf_com_apple_security_application_groups);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  FUN_01506040();
  _objc_retainAutoreleasedReturnValue();
  local_60 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
  if (puVar1 == (undefined *)0x0) {
LAB_01505c70:
    puVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
    if (puVar1 != (undefined *)0x0) {
      puVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,PTR_s_count_0269cfe0);
      if (puVar1 != (undefined *)0x0) {
        puVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_mutableCopy_0269d8a0);
        local_68 = puVar1;
        (*(code *)PTR__objc_msgSend_02578628)
                  (puVar1,PTR_s_setObject_forKeyedSubscript__0269d248,local_60,
                   &cf_com_apple_security_application_groups);
        puVar1 = local_68;
        (*(code *)PTR__objc_retain_02578638)();
        local_30 = puVar1;
        local_3c = 1;
        _objc_storeStrong(&local_68,0);
        goto LAB_01505e80;
      }
    }
    puVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_count_0269cfe0);
    puVar1 = local_50;
    if (puVar2 == (undefined *)0x0) {
      FUN_01506378(0);
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_count_0269cfe0);
      if (puVar2 == (undefined *)0x0) {
        puVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
        if (puVar1 == (undefined *)0x0) {
          local_c8 = *(undefined **)PTR____NSDictionary0___02578288;
        }
        else {
          local_c8 = local_48;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_30 = local_c8;
      }
      else {
        local_28 = &cf_com_apple_security_application_groups;
        local_20 = local_70;
        puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSDictionary_026ce090,
                   PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_20,&local_28,1);
        _objc_retainAutoreleasedReturnValue();
        local_30 = puVar1;
      }
      local_3c = 1;
      _objc_storeStrong(&local_70,0);
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_30 = puVar1;
      local_3c = 1;
    }
  }
  else {
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_count_0269cfe0);
    puVar1 = local_48;
    if (puVar2 == (undefined *)0x0) goto LAB_01505c70;
    (*(code *)PTR__objc_retain_02578638)();
    local_30 = puVar1;
    local_3c = 1;
  }
LAB_01505e80:
  _objc_storeStrong(&local_60);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
LAB_01505eb8:
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,local_30);
  return;
}

