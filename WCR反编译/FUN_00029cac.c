// FUN_00029cac @ 00029cac

void FUN_00029cac(long param_1,byte param_2)

{
  if ((param_2 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_ub1Y_
               ,&cf__ubFOS1Y_,&cf_wSN,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,&cf_A,
               *(undefined8 *)(param_1 + 0x20));
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showWeToastDoneWithText__0269cee0,&cf__S);
  }
  return;
}

