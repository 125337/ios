// FUN_014fa97c @ 014fa97c

void FUN_014fa97c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (DAT_028e3708 != (code *)0x0) {
    (*DAT_028e3708)(local_18,param_2,param_3 & 1);
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineSessionStatsEngine_026ced48,PTR_s_recordVisitFromChatController__026aff18,
             local_18);
  _objc_storeStrong(&local_18,0);
  return;
}

