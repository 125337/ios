// FUN_00072a14 @ 00072a14

void FUN_00072a14(byte *param_1,double param_2,byte param_3,long param_4,byte param_5,
                 undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  undefined *local_a8;
  undefined *local_90;
  undefined *local_68;
  undefined *local_58;
  undefined *local_40;
  undefined *local_38;
  double local_30;
  byte local_21;
  long local_20;
  byte local_11;
  
  local_38 = (undefined *)0x0;
  local_30 = param_2;
  local_21 = param_5;
  local_20 = param_4;
  local_11 = param_3;
  _objc_storeStrong(&local_38,param_6);
  local_40 = (undefined *)0x0;
  _objc_storeStrong(&local_40,param_7);
  if (local_20 < 0) {
    local_20 = 0;
  }
  if (100 < local_20) {
    local_20 = 100;
  }
  if (local_30 < 0.0) {
    local_30 = 0.0;
  }
  if (5.0 < local_30) {
    local_30 = 5.0;
  }
  *param_1 = local_11 & 1;
  *(long *)(param_1 + 8) = local_20;
  param_1[0x10] = local_21 & 1;
  *(double *)(param_1 + 0x18) = local_30;
  bVar1 = local_38 == (undefined *)0x0;
  if (bVar1) {
    local_90 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_90;
  }
  else {
    local_90 = local_38;
  }
  *(undefined **)(param_1 + 0x20) = local_90;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_58);
  }
  bVar1 = local_40 == (undefined *)0x0;
  if (bVar1) {
    local_a8 = PTR__OBJC_CLASS___UIColor_026cdf78;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_lightGrayColor_0269dfe0);
    _objc_retainAutoreleasedReturnValue();
    local_68 = local_a8;
  }
  else {
    local_a8 = local_40;
  }
  *(undefined **)(param_1 + 0x28) = local_a8;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_68);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

