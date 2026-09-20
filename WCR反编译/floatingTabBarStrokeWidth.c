// floatingTabBarStrokeWidth @ 021383e0

/* Function Stack Size: 0x10 bytes */

double WCRefineConfig::floatingTabBarStrokeWidth(ID param_1,SEL param_2)

{
  SEL SVar1;
  ID IVar2;
  double dVar3;
  double local_98;
  double local_90;
  ID local_78;
  undefined4 local_6c;
  double local_68;
  double local_60;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  ID local_38;
  ID local_30;
  SEL local_28;
  ID local_20;
  double local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  SVar1 = local_28;
  local_30 = param_1;
  _cmdString();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_objectForKey__0269e048);
  _objc_retainAutoreleasedReturnValue();
  local_38 = param_1;
  (*(code *)PTR__objc_release_02578630)(SVar1);
  if (local_38 != 0) {
    local_40 = 4.0;
    dVar3 = 0.0;
    local_50 = 0.0;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_doubleValue_026ca608);
    local_90 = dVar3;
    if (dVar3 <= local_50) {
      local_90 = local_50;
    }
    local_60 = local_90;
    local_48 = local_90;
    if (local_90 <= local_40) {
      local_98 = local_90;
    }
    else {
      local_98 = local_40;
    }
    local_68 = local_98;
    local_18 = local_98;
    local_6c = 1;
    local_58 = dVar3;
    goto LAB_02138674;
  }
  IVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_30,PTR_s_objectForKey__0269e048,&cf_floatingTabBarStrokeStyleIndex);
  _objc_retainAutoreleasedReturnValue();
  local_78 = IVar2;
  if (IVar2 == 0) {
LAB_02138650:
    local_18 = 1.0;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_integerValue_026ca750);
    if (IVar2 == 0) {
      local_18 = 0.0;
    }
    else if (IVar2 == 1) {
      local_18 = 1.0;
    }
    else if (IVar2 == 2) {
      local_18 = DAT_02323f50;
    }
    else if (IVar2 == 3) {
      local_18 = 0.5;
    }
    else {
      if (IVar2 != 4) goto LAB_02138650;
      local_18 = DAT_023241e0;
    }
  }
  local_6c = 1;
  _objc_storeStrong(&local_78,0);
LAB_02138674:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return local_18;
}

