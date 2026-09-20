// FUN_00604edc @ 00604edc

void FUN_00604edc(undefined8 param_1,undefined8 param_2,byte param_3)

{
  (*DAT_028cb8f0)(param_1,param_2,param_3 & 1);
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineTopBarProfileCardPresenter_026ce228,
             PTR_s_wcr_handleChatSearchControllerDi_026a5fb0,param_1);
  return;
}

