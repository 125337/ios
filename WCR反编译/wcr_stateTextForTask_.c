// wcr_stateTextForTask: @ 0057a5b0

/* Function Stack Size: 0x18 bytes */

ID WCRMomentsScheduledTaskListViewController::wcr_stateTextForTask_
             (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_38;
  ulong local_30;
  SEL local_28;
  ID local_20;
  cfstringStruct *local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_state);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_0057a910();
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_enabled);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_firing);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_triggered);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_38;
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_isEqualToString__0269ccc8,&cf_failed);
      if ((uVar1 & 1) == 0) {
        if ((uVar2 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_18 = &cf__f_P;
        }
        else {
          uVar1 = local_30;
          FUN_0057aaf8();
          local_18 = &cf__s_N;
          if ((uVar1 & 1) == 0) {
            local_18 = &cf_I__S;
          }
          (*(code *)PTR__objc_retain_02578638)();
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_18 = &cf_S1Y_;
      }
    }
    else {
      (*(code *)PTR__objc_retain_02578638)();
      local_18 = &cf__S;
    }
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = &cf_S_N;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return (ID)local_18;
}

