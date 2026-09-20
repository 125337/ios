// FUN_000a49c0 @ 000a49c0

double FUN_000a49c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double local_e0;
  double local_d8;
  double local_b8;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_5);
  local_b8 = 5.26354424712089e-315;
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  _CGRectGetWidth(local_b8,param_2,param_3,param_4);
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_18;
  if (local_b8 <= 1.0) {
    local_b8 = 1.0;
  }
  uVar2 = local_18;
  dVar3 = local_b8;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_translationInView__026cabb0);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  local_d8 = ABS(dVar3) / local_b8;
  if (local_d8 <= 0.0) {
    local_d8 = 0.0;
  }
  if (local_d8 <= 1.0) {
    local_e0 = local_d8;
  }
  else {
    local_e0 = 1.0;
  }
  _objc_storeStrong(&local_18,0);
  return local_e0;
}

