// nicknameLineHeightOfView: @ 010dfda8

/* Function Stack Size: 0x18 bytes */

double WCRefineNameplateHelper::nicknameLineHeightOfView_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  double dVar2;
  double in_d3;
  double local_100;
  double local_f8;
  double local_f0;
  double local_78;
  ID local_48;
  undefined8 local_40;
  SEL local_38;
  ID local_30;
  double local_28;
  
  local_40 = 0;
  local_38 = param_2;
  local_30 = param_1;
  _objc_storeStrong(&local_40,param_3);
  IVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_nicknameTextLabelFromView__026ae8c0,local_40)
  ;
  _objc_retainAutoreleasedReturnValue();
  local_48 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
  local_f0 = 0.0;
  local_78 = 0.0;
  IVar1 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_font_0269ea00);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar1 != 0) {
    IVar1 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_font_0269ea00);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    IVar1 = local_48;
    dVar2 = local_f0;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_font_0269ea00);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(IVar1);
    if (local_f0 < dVar2) {
      local_f0 = dVar2;
    }
    local_78 = local_f0;
  }
  if (local_78 < 8.0) {
    if (in_d3 <= 36.0) {
      local_100 = in_d3;
      if (in_d3 < 12.0) {
        local_100 = 12.0;
      }
      local_f8 = local_100;
    }
    else {
      local_f8 = 20.0;
    }
    local_78 = local_f8;
  }
  if ((in_d3 <= 1.0) || (local_28 = in_d3, local_78 * DAT_0232c690 < in_d3)) {
    local_28 = local_78;
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  return local_28;
}

