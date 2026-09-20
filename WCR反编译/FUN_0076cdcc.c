// FUN_0076cdcc @ 0076cdcc

void FUN_0076cdcc(double param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 in_x6;
  undefined8 in_x7;
  cfstringStruct *pcVar4;
  cfstringStruct *local_68;
  undefined *local_40 [3];
  double local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_026cdf88;
  local_20 = param_2;
  local_18 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  if ((DAT_028cc910 <= 0.0) || (3.0 <= param_1 - DAT_028cc910)) {
    lVar2 = *(long *)(param_2 + 0x20);
    DAT_028cc910 = param_1;
    local_28 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_68 = &cf__h_g;
    }
    else {
      local_68 = *(cfstringStruct **)(param_2 + 0x20);
    }
    pcVar4 = &cf_Apparete1115;
    (*(code *)PTR__objc_msgSend_02578628)
              (puVar1,PTR_s_stringWithFormat__0269cca8,&cf_hKm0RbUpenc_8__);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_WCRefineHelper_026ce000;
    local_40[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showAlertWithTitle_message_btnTi_0269ccf0,&cf_ic_y,
               puVar1,&cf_wSN,&PTR___NSConcreteGlobalBlock_0257fb68,in_x6,in_x7,local_68,pcVar4);
    _objc_unsafeClaimAutoreleasedReturnValue(puVar3);
    _objc_storeStrong(local_40,0);
  }
  return;
}

