// _WCRThemeLifeOpenMallMiniProgram @ 01526df8

void _WCRThemeLifeOpenMallMiniProgram(ulong param_1)

{
  ulong uVar1;
  ulong local_18;
  
  _WCRThemeLifeMallEntriesVisible();
  if ((param_1 & 1) != 0) {
    FUN_01526ea0();
    _objc_retainAutoreleasedReturnValue();
    local_18 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_length_0269cca0);
    if ((param_1 == 0) ||
       (uVar1 = local_18, _WCRSFOpenMiniProgramShortLink(local_18,1), (uVar1 & 1) == 0)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_elSb);
    }
    _objc_storeStrong(&local_18,0);
  }
  return;
}

