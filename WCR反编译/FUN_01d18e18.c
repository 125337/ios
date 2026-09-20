// FUN_01d18e18 @ 01d18e18

void FUN_01d18e18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *local_50;
  long local_48;
  undefined8 local_40;
  ulong local_38;
  undefined8 local_30;
  long local_28;
  undefined *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong(&local_30);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  puVar2 = PTR_WCRefineQuickReplyStore_026cec50;
  local_48 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineQuickReplyStore_026cec50,PTR_s_textItemWithContent__026c40d0,local_30);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_WCRefineQuickReplyStore_026cec50;
  local_50 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_Q_N_Nzz);
  }
  else {
    puVar3 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    local_20 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_appendItems__026c40d8);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(param_1);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf__mRe_gmo_);
    uVar4 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_dismissWithAnimated__0269e420,1);
    }
  }
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

