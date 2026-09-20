// FUN_01d89ff4 @ 01d89ff4

void FUN_01d89ff4(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  long local_28;
  ulong local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = lVar1;
  if ((lVar1 != 0) &&
     (uVar2 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_cancelled_026c4d28),
     (uVar2 & 1) == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setResult__026c4d40,local_20);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineSessionStatsEngine_026ced48,
               PTR_s_fillPeopleSnapshot_requestGender_026af7a0,local_20,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_wcr_reloadRows_026c4d18);
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

