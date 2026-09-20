// FUN_0027108c @ 0027108c

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0027108c(double param_1,double param_2,undefined8 param_3,double param_4,undefined8 param_5
                 ,undefined8 param_6)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  ulong local_58;
  ulong local_50;
  uint local_48;
  ulong local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  uVar1 = local_28;
  FUN_0026f338(local_28,&cf_detailLabel);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIView_026cdfd8;
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
  uVar3 = local_30;
  if ((uVar1 & 1) != 0) {
    puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
    uVar1 = local_38;
    if ((uVar3 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_50 = uVar1;
      uVar1 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = local_50;
      local_58 = uVar1;
      if (uVar1 != 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_bounds_026ca548);
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_convertRect_toView__0269ded8,local_58);
        dVar4 = param_2;
        dVar5 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_sizeToFit_0269ec08);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_frame_026ca640);
        _CGRectGetMaxX(param_1,param_2,param_3,param_4);
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1 + 4.0,param_2 + (param_4 - dVar5) * 0.5,dVar4,dVar5,local_30,
                   PTR_s_setFrame__026ca960);
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_setHidden__026ca970,0);
        (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000,local_30,PTR_s_setAlpha__026ca860);
        (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_bringSubviewToFront__026ca550,local_30)
        ;
      }
      local_48 = (uint)(uVar1 == 0);
      _objc_storeStrong(&local_58);
      _objc_storeStrong(&local_50,0);
      goto LAB_002714a0;
    }
  }
  local_48 = 1;
LAB_002714a0:
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

