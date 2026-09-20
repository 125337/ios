// FUN_00918ba4 @ 00918ba4

void FUN_00918ba4(long param_1)

{
  cfstringStruct *pcVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  
  pcVar1 = &cf__bgN;
  if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
    pcVar1 = &cf__bg__e__nd;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf__nd,
             pcVar1,&cf_nx_,&PTR___NSConcreteGlobalBlock_02580fd0,in_x6,in_x7,param_1,param_1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  return;
}

