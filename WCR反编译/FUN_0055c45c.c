// FUN_0055c45c @ 0055c45c

void FUN_0055c45c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  code *pcVar1;
  code *local_48;
  undefined4 local_3c;
  code *local_38;
  undefined8 local_30;
  code *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_1;
  local_18 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(param_3,PTR_s_WCRefineFindTimelineDataItem_026a5088);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_3;
  if (param_3 == (code *)0x0) {
    local_3c = 1;
  }
  else {
    pcVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_WCRefineFindTimelineViewControll_026a5048);
    _objc_retainAutoreleasedReturnValue();
    local_48 = pcVar1;
    if (pcVar1 == (code *)0x0) {
      local_3c = 1;
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)
                (pcVar1,PTR_s_respondsToSelector__026ca818,
                 PTR_s_showComment_refComment_touchedVi_026a5180);
      if (((ulong)pcVar1 & 1) != 0) {
        pcVar1 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_methodForSelector__0269e1d8,
                   PTR_s_showComment_refComment_touchedVi_026a5180);
        (*pcVar1)(local_48,PTR_s_showComment_refComment_touchedVi_026a5180,local_38,0,0,0);
      }
      local_3c = 0;
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

