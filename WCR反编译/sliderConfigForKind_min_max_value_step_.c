// sliderConfigForKind:min:max:value:step: @ 019daa2c

/* Function Stack Size: 0x38 bytes */

void WCRefineFontBeautifyViewController::sliderConfigForKind_min_max_value_step_
               (ID param_1,SEL param_2,long_long param_3,double *param_4,double *param_5,
               double *param_6,double *param_7)

{
  undefined *puVar1;
  double local_70;
  double local_68;
  double local_60;
  double local_58;
  undefined *local_50;
  double *local_48;
  double *local_40;
  double *local_38;
  double *local_30;
  long_long local_28;
  SEL local_20;
  ID local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_48 = param_7;
  local_40 = param_6;
  local_38 = param_5;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_58 = 0.0;
  local_60 = 1.0;
  local_68 = 0.0;
  local_70 = 0.0;
  local_50 = puVar1;
  if (local_28 == 0x7d1) {
    local_58 = 0.7;
    local_68 = 1.4;
    local_60 = 1.4;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fontBeautifyScale_026baf50);
    local_70 = DAT_02323d38;
  }
  else if (local_28 == 0x7d2) {
    local_58 = -3.0;
    local_60 = 3.0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fontBeautifyWeightDelta_026a1d18);
    local_68 = (double)(long)puVar1;
    local_70 = 1.0;
  }
  else if (local_28 == 0x7d3) {
    local_58 = -2.0;
    local_68 = 8.0;
    local_60 = 8.0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fontBeautifyLetterSpacing_026a1d20);
    local_70 = 0.5;
  }
  else if (local_28 == 0x7d4) {
    local_58 = 0.0;
    local_68 = 12.0;
    local_60 = 12.0;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_fontBeautifyLineSpacing_026a1d28);
    local_70 = 0.5;
  }
  if (local_30 != (double *)0x0) {
    *local_30 = local_58;
  }
  if (local_38 != (double *)0x0) {
    *local_38 = local_60;
  }
  if (local_40 != (double *)0x0) {
    *local_40 = local_68;
  }
  if (local_48 != (double *)0x0) {
    *local_48 = local_70;
  }
  _objc_storeStrong(&local_50,0);
  return;
}

