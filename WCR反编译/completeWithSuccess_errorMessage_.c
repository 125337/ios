// completeWithSuccess:errorMessage: @ 0059ba1c

/* Function Stack Size: 0x1c bytes */

void WCRefineMomentsMediaDownloader::completeWithSuccess_errorMessage_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  cfstringStruct *pcVar1;
  byte bVar2;
  bool bVar3;
  ID IVar4;
  ID IVar5;
  cfstringStruct *pcVar6;
  ID IVar7;
  cfstringStruct *local_108;
  cfstringStruct *local_f8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  code *local_a0;
  undefined *local_98;
  ID local_90;
  cfstringStruct *local_88;
  ID local_80;
  byte local_78;
  cfstringStruct *local_70;
  ID local_68;
  undefined4 local_60;
  byte local_59;
  ID local_58;
  cfstringStruct *local_40;
  byte local_31;
  SEL local_30;
  ID local_28;
  
  local_31 = (byte)param_3;
  local_40 = (cfstringStruct *)0x0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_40,param_4);
  local_59 = 0;
  IVar4 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasFinished_026a5640);
  bVar3 = false;
  if ((IVar4 & 1) != 0) {
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_completionBlock_026a5690);
    _objc_retainAutoreleasedReturnValue();
    local_59 = 1;
    bVar3 = IVar4 == 0;
    local_58 = IVar4;
  }
  if ((local_59 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  if (bVar3) {
    local_60 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setHasFinished__026a55f0,1);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_timeoutTimer_026a5660);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setTimeoutTimer__026a5658,0);
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_completionBlock_026a5690);
    _objc_retainAutoreleasedReturnValue();
    IVar5 = IVar4;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_68 = IVar5;
    (*(code *)PTR__objc_release_02578630)(IVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_setCompletionBlock__026a55d0,0);
    if ((local_31 & 1) == 0) {
      if (local_40 == (cfstringStruct *)0x0) {
        local_108 = &cf_ZSON_1Y_;
      }
      else {
        local_108 = local_40;
      }
      local_f8 = local_108;
    }
    else {
      local_f8 = (cfstringStruct *)0x0;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_70 = local_f8;
    IVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressToast_026a5608);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (IVar4 == 0) {
      IVar4 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_silent_026a55f8);
      if (((IVar4 & 1) == 0) && ((local_31 & 1) == 0)) {
        pcVar6 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
        if (pcVar6 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_70);
        }
      }
      if (local_68 != 0) {
        (**(code **)(local_68 + 0x10))(local_68,local_31 & 1,local_40);
      }
      local_60 = 1;
    }
    else {
      IVar7 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_progressToast_026a5608);
      _objc_retainAutoreleasedReturnValue();
      IVar5 = local_28;
      bVar2 = local_31;
      pcVar6 = local_70;
      local_b0 = PTR___NSConcreteStackBlock_02578660;
      local_a8 = 0xc2000000;
      local_a4 = 0;
      local_a0 = FUN_0059c060;
      local_98 = &DAT_0257e178;
      (*(code *)PTR__objc_retain_02578638)();
      IVar4 = local_68;
      local_90 = IVar5;
      (*(code *)PTR__objc_retain_02578638)();
      pcVar1 = local_40;
      local_80 = IVar4;
      local_78 = local_31 & 1;
      (*(code *)PTR__objc_retain_02578638)();
      local_88 = pcVar1;
      (*(code *)PTR__objc_msgSend_02578628)
                (IVar7,PTR_s_finishWithText_success_completio_026a1728,pcVar6,bVar2 & 1,&local_b0);
      (*(code *)PTR__objc_release_02578630)(IVar7);
      _objc_storeStrong(&local_88);
      _objc_storeStrong(&local_80,0);
      _objc_storeStrong(&local_90,0);
      local_60 = 0;
    }
    _objc_storeStrong(&local_70);
    _objc_storeStrong(&local_68,0);
  }
  _objc_storeStrong(&local_40,0);
  return;
}

