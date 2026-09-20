// wcr_forwardImage:fromViewController: @ 00fb4258

/* Function Stack Size: 0x20 bytes */

void WCRefineHelper::wcr_forwardImage_fromViewController_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  long lVar1;
  undefined *puVar2;
  long local_40;
  undefined4 local_34;
  long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  if ((local_28 == 0) || (local_30 == 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGreHe);
    local_34 = 1;
  }
  else {
    lVar1 = local_28;
    FUN_00fb43c0();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar1;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&cf_VGrmo_pencub1Y_);
      local_34 = 1;
    }
    else {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_wcr_startOfficialForwardForMessa_026acf90,lVar1,
                 local_30);
      if (((ulong)puVar2 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,&::cf_elSb);
      }
      local_34 = 0;
    }
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

