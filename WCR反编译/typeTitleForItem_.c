// typeTitleForItem: @ 0113474c

/* Function Stack Size: 0x18 bytes */

ID WCRefineQuickReplyStore::typeTitleForItem_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  cfstringStruct *local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = (cfstringStruct *)param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_type);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_01130f58();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_invite);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_repository);
    pcVar3 = local_20;
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf_e_g;
    }
    else {
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_repoType);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_repositoryTypeTitle__026af358);
      _objc_retainAutoreleasedReturnValue();
      local_18 = pcVar3;
      (*(code *)PTR__objc_release_02578630)(uVar1);
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf__J;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

