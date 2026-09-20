// FUN_00f9d688 @ 00f9d688

void FUN_00f9d688(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined *local_a0;
  undefined *local_58;
  undefined4 local_4c;
  undefined8 local_48;
  undefined *local_40;
  long local_38;
  long *local_30;
  ulong local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_48 = 0;
  puVar2 = PTR_WCRefineHelper_026ce000;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_keywordAlertCanonicalKeyword_err_026acd98,local_18,
             &local_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38,local_48);
  local_40 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    if (((local_30 != (long *)0x0) && (*local_30 == 0)) &&
       (lVar3 = local_38, (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0),
       lVar1 = local_38, lVar3 != 0)) {
      _objc_retainAutorelease(lVar3);
      *local_30 = lVar1;
    }
    local_4c = 1;
  }
  else {
    puVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_lowercaseString_0269d9c0);
    _objc_retainAutoreleasedReturnValue();
    local_a0 = puVar2;
    if (puVar2 == (undefined *)0x0) {
      local_a0 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_58 = local_a0;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = local_58;
    (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_length_0269cca0);
    if ((puVar2 == (undefined *)0x0) ||
       (uVar4 = local_28,
       (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_containsObject__0269cbb8,local_58),
       (uVar4 & 1) != 0)) {
      local_4c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_addObject__0269d180,local_58);
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addObject__0269d180,local_40);
      local_4c = 0;
    }
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

