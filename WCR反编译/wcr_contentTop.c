// wcr_contentTop @ 01dce3fc

/* Function Stack Size: 0x10 bytes */

double WCRefineSessionStatsViewController::wcr_contentTop(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  double dVar4;
  double dVar5;
  double in_d3;
  double local_178;
  ID local_140;
  double local_128;
  ID local_80;
  ID local_78;
  double local_70;
  double local_68;
  double local_48;
  double local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 8.0;
  dVar4 = 8.0;
  local_40 = 8.0;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  dVar5 = dVar4 + 6.0;
  local_68 = dVar4;
  (*(code *)PTR__objc_release_02578630)(param_1);
  local_128 = dVar5;
  if (dVar5 <= local_40) {
    local_128 = local_40;
  }
  local_70 = local_128;
  local_38 = local_128;
  IVar2 = local_28;
  local_48 = dVar5;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar3 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_78 = IVar3;
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if ((local_78 != 0) &&
     (IVar2 = local_78, (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isHidden_026ca768),
     (IVar2 & 1) == 0)) {
    IVar2 = local_78;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    local_140 = IVar2;
    if (IVar2 == 0) {
      local_140 = local_78;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_80 = local_140;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    IVar2 = local_80;
    (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_frame_026ca640);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_convertRect_toView__0269ded8);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    _CGRectGetMaxY();
    bVar1 = false;
    if (0.0 < local_128) {
      IVar2 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = local_128 < in_d3 * DAT_02323c78;
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    if (bVar1) {
      local_178 = local_128 + 8.0;
      if (local_178 <= local_38) {
        local_178 = local_38;
      }
      local_38 = local_178;
    }
    _objc_storeStrong(&local_80,0);
  }
  dVar4 = local_38;
  _objc_storeStrong(&local_78,0);
  return dVar4;
}

