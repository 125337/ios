// wcr_cornerExtra @ 01be4f00

/* Function Stack Size: 0x10 bytes */

double WCRMomentsDraftRowView::wcr_cornerExtra(ID param_1,SEL param_2)

{
  undefined *puVar1;
  double local_80;
  double local_78;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_homepageCornerEnabled_0269fc40);
  if (((ulong)puVar1 & 1) == 0) {
    local_18 = 0.0;
  }
  else {
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_globalCornerRadius_026a2040);
    if (12.0 <= (double)(long)puVar1) {
      local_78 = (double)(long)puVar1 * DAT_02323e88;
      if (local_78 < 6.0) {
        local_78 = 6.0;
      }
      if (22.0 <= local_78) {
        local_80 = 22.0;
      }
      else {
        local_80 = local_78;
      }
      local_18 = local_80;
    }
    else {
      local_18 = 0.0;
    }
  }
  _objc_storeStrong(&local_30,0);
  return local_18;
}

