// FUN_0034f844 @ 0034f844

double FUN_0034f844(undefined8 param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  double local_a8;
  undefined *local_68;
  undefined8 local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_4);
  puVar2 = PTR_WCRefineHomeAvatarStripView_026ce538;
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
  bVar1 = param_3 <= 0.0;
  if (bVar1) {
    local_68 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    local_a8 = param_3;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_bounds_026ca548);
    local_a8 = param_3;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar2,PTR_s_layoutRowHeightForConfig_tableWi_026a2210,puVar3);
  local_18 = local_a8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  (*(code *)PTR__objc_release_02578630)(puVar3);
  _objc_storeStrong(&local_20,0);
  return local_18;
}

