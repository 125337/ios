// stickyPreviewTopOffset @ 01ebc8e4

/* WARNING: Removing unreachable block (ram,0x01ebcb9c) */
/* WARNING: Removing unreachable block (ram,0x01ebcc00) */
/* WARNING: Removing unreachable block (ram,0x01ebcc04) */
/* WARNING: Removing unreachable block (ram,0x01ebcc18) */
/* WARNING: Removing unreachable block (ram,0x01ebcc08) */
/* WARNING: Removing unreachable block (ram,0x01ebcc24) */
/* Function Stack Size: 0x10 bytes */

double WCRefineToDoListSettingsViewController::stickyPreviewTopOffset(ID param_1,SEL param_2)

{
  double dVar1;
  ID IVar2;
  ID IVar3;
  double dVar4;
  double local_158;
  double local_138;
  double local_120;
  ID local_40;
  double local_38;
  SEL local_30;
  ID local_28;
  
  local_120 = 0.0;
  local_38 = 0.0;
  local_30 = param_2;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_navigationController_0269d458);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_40 = IVar2;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (((local_40 != 0) &&
      (IVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isHidden_026ca768),
      (IVar2 & 1) == 0)) &&
     ((*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_alpha_026ca4d8), DAT_02323d38 < local_120
     )) {
    IVar2 = local_40;
    dVar4 = DAT_02323d38;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_frame_026ca640);
    IVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_convertRect_toView__0269ded8);
    (*(code *)PTR__objc_release_02578630)(IVar3);
    (*(code *)PTR__objc_release_02578630)(IVar2);
    dVar1 = local_38;
    _CGRectGetMaxY(local_120,dVar4);
    if (local_120 <= dVar1) {
      local_120 = dVar1;
    }
    local_38 = local_120;
  }
  dVar1 = local_38;
  IVar2 = local_28;
  local_138 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  if (local_138 <= dVar1) {
    local_138 = dVar1;
  }
  local_38 = local_138;
  if (local_138 <= 0.0) {
    local_158 = 0.0;
  }
  else {
    local_158 = local_138;
  }
  _objc_storeStrong(&local_40,0);
  return local_158;
}

