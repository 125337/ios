// FUN_015c3a54 @ 015c3a54

double FUN_015c3a54(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  double dVar1;
  double dVar2;
  undefined8 uVar3;
  double local_d8;
  undefined8 local_40;
  undefined8 local_38;
  double local_30;
  double local_28;
  double local_20;
  undefined8 local_18;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  uVar3 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_convertRect_toView__0269ded8,local_38);
  local_d8 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  if (local_d8 <= 72.0) {
    local_d8 = 72.0;
  }
  dVar1 = param_1;
  _CGRectGetMinX(param_1,param_2,param_3,param_4);
  _CGRectGetMinY(param_1,param_2,param_3,param_4);
  dVar2 = (param_1 - 16.0) - 2.0;
  uVar3 = 0x4030000000000000;
  FUN_015c0c34();
  local_30 = dVar1;
  local_28 = dVar2;
  local_20 = local_d8;
  local_18 = uVar3;
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return local_30;
}

