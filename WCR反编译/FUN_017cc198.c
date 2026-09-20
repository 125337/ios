// FUN_017cc198 @ 017cc198

void FUN_017cc198(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long local_50;
  int local_44;
  long local_40;
  long local_38;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar1 = param_1 + 0x20;
  local_38 = param_1;
  _objc_loadWeakRetained();
  local_40 = lVar1;
  if (lVar1 == 0) {
    local_44 = 1;
  }
  else {
    lVar2 = local_20;
    FUN_017cc39c();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    lVar1 = local_40;
    if (lVar2 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_c_yN_Nzz);
      local_44 = 1;
    }
    else {
      lVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_workingName_026b5008);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)
                (lVar1,PTR_s_wcrCommitName_prompt__026b5010,lVar2,local_50);
      (*(code *)PTR__objc_release_02578630)(lVar2);
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_resignFirstResponder_0269ea18);
      uVar3 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_28,PTR_s_respondsToSelector__026ca818,PTR_s_dismissWithAnimated__0269e420);
      if ((uVar3 & 1) != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_dismissWithAnimated__0269e420,1);
      }
      local_44 = 0;
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_40,0);
  if (local_44 == 0) {
    local_44 = 0;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

