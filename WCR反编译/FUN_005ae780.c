// FUN_005ae780 @ 005ae780

void FUN_005ae780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long local_50;
  long local_48;
  long local_40;
  undefined4 local_38;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_ellSdkQ_);
    local_38 = 1;
  }
  else {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_valueForKey__0269d128,&cf_contentObj);
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_WCRefine_openForwardViewControll_026a57f0,local_28);
      local_38 = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_valueForKey__0269d128,&cf_type);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar1);
      local_48 = lVar2;
      if (lVar2 == 0x1a) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_WCRefine_forwardNoteMoment__026a57f8,local_28);
        local_38 = 1;
      }
      else if (((((lVar2 == 3) || (lVar2 == 5)) || (lVar2 == 6)) ||
               ((lVar2 == 0x18 || (lVar2 == 0x2a)))) || (lVar2 == 0x2b)) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_WCRefine_openForwardViewControll_026a57f0,local_28);
        local_38 = 1;
      }
      else {
        lVar1 = local_40;
        (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_valueForKey__0269d128,&cf_mediaList);
        _objc_retainAutoreleasedReturnValue();
        local_50 = lVar1;
        if ((lVar1 == 0) ||
           ((*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_count_0269cfe0), lVar1 == 0)) {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_WCRefine_openForwardViewControll_026a57f0,local_28);
          local_38 = 1;
        }
        else {
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_18,PTR_s_WCRefine_checkAndDownloadMedia__026a57e8,local_28);
          local_38 = 0;
        }
        _objc_storeStrong(&local_50,0);
      }
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

