// FUN_01e1a2d4 @ 01e1a2d4

/* WARNING: Type propagation algorithm not settling */

void FUN_01e1a2d4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  cfstringStruct *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *local_50;
  ulong local_48;
  undefined4 local_3c;
  cfstringStruct *local_38;
  ulong local_30 [3];
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_30[1] = 0;
  local_30[2] = param_2;
  _objc_storeStrong(local_30 + 1,param_3);
  uVar2 = local_30[2];
  _NSStringFromSelector();
  _objc_retainAutoreleasedReturnValue();
  local_30[0] = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = &cf_wcr_sf_switch_;
  uVar3 = local_30[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_30[0],PTR_s_hasPrefix__0269d320,&cf_wcr_sf_switch_);
  uVar2 = local_30[0];
  if ((uVar3 & 1) == 0) {
    local_3c = 1;
  }
  else {
    pcVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_substringFromIndex__0269d120,pcVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    puVar5 = PTR_WCRSuperFloatProfileStore_026cee48;
    local_48 = uVar3;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRSuperFloatProfileStore_026cee48,PTR_s_normalizedProfiles_026b1878);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_48;
    local_50 = puVar5;
    if (((long)local_48 < 0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(puVar5,PTR_s_count_0269cfe0),
       puVar1 = PTR_WCRSuperFloatProfileStore_026cee48, (long)puVar5 <= (long)uVar2)) {
      local_3c = 1;
    }
    else {
      puVar5 = local_50;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_50,PTR_s_objectAtIndexedSubscript__0269cc78,local_48);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_switchToProfileId__026c5e60);
      (*(code *)PTR__objc_release_02578630)(puVar6);
      (*(code *)PTR__objc_release_02578630)(puVar5);
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_notifyChanged_026b43a0);
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__RbcMn_);
      local_3c = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(local_30,0);
  _objc_storeStrong(local_30 + 1,0);
  _objc_storeStrong(&local_18,0);
  return;
}

