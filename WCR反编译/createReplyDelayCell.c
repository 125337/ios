// createReplyDelayCell @ 01d22024

/* Function Stack Size: 0x10 bytes */

ID WCRefineRedEnvelopViewController::createReplyDelayCell(ID param_1,SEL param_2)

{
  undefined *puVar1;
  cfstringStruct *local_50;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  undefined *local_30;
  undefined *local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_redEnvelopAutoReplyDelaySeconds_026a6ab8);
  local_30 = puVar1;
  if ((long)puVar1 < 1) {
    local_50 = &cf_N_;
  }
  else {
    local_50 = (cfstringStruct *)PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&::cf__);
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_50;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_38 = local_50;
  if ((long)puVar1 >= 1) {
    (*(code *)PTR__objc_release_02578630)(local_40);
  }
  puVar1 = PTR_WCRefineHelper_026ce000;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_normalCellWithSel_target_title_r_0269e3f0,
             PTR_s_settingReplyDelay_026c42a0,local_18,&cf__VYve,local_38,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

