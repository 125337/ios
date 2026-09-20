// FUN_00857d4c @ 00857d4c

undefined1  [16]
FUN_00857d4c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  double local_b0;
  double local_78;
  double local_28;
  
  puVar2 = PTR__OBJC_CLASS___UIScreen_026cdf70;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  local_28 = param_1;
  if (param_1 < 160.0) {
    local_28 = 320.0;
  }
  local_b0 = local_28 - 32.0;
  if (local_b0 < 160.0) {
    local_b0 = 160.0;
  }
  local_78 = local_b0;
  _WCRefineProfileBgHTMLResolvedHeight();
  if (local_78 < 80.0) {
    local_78 = 180.0;
  }
  FUN_0083b734();
  auVar1._8_8_ = local_78;
  auVar1._0_8_ = local_b0;
  return auVar1;
}

