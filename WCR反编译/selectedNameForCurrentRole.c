// selectedNameForCurrentRole @ 01fba9fc

/* Function Stack Size: 0x10 bytes */

ID WCRefineWechatThemeManagerViewController::selectedNameForCurrentRole(ID param_1,SEL param_2)

{
  bool bVar1;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 local_30;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_isBubbleRole_026c9f68);
  bVar1 = (param_1 & 1) == 0;
  if (bVar1) {
    local_50 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_60 = local_70;
  }
  else {
    local_30 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = local_70;
  }
  (*(code *)PTR__objc_retain_02578638)();
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_60);
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  else {
    (*(code *)PTR__objc_release_02578630)(local_40);
    (*(code *)PTR__objc_release_02578630)(local_30);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_70;
}

