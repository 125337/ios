// FUN_007a84fc @ 007a84fc

double FUN_007a84fc(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_20;
  double local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  uVar2 = local_20;
  puVar1 = PTR__OBJC_CLASS___UITableView_026ce1a8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UITableView_026ce1a8,PTR_s_class_0269cd60)
  ;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_estimatedSectionHeaderHeight_026a8118),
     local_18 = param_1, param_1 <= 0.0)) {
    local_18 = *(double *)PTR__UITableViewAutomaticDimension_02578200;
  }
  _objc_storeStrong(&local_20,0);
  return local_18;
}

