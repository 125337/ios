// FUN_0008d3c0 @ 0008d3c0

double FUN_0008d3c0(double param_1,double param_2,double param_3,double param_4,undefined8 param_5,
                   undefined8 param_6,undefined1 *param_7)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  double dVar5;
  long local_68;
  undefined4 local_5c;
  undefined1 *local_58;
  long local_50;
  long local_48;
  double local_40;
  double dStack_38;
  double local_30;
  double dStack_28;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  if (param_7 != (undefined1 *)0x0) {
    *param_7 = 0;
  }
  local_58 = param_7;
  if ((local_48 == 0) || (local_50 == 0)) {
    dStack_38 = *(double *)(PTR__CGRectZero_025782f0 + 8);
    local_40 = *(double *)PTR__CGRectZero_025782f0;
    dStack_28 = *(double *)(PTR__CGRectZero_025782f0 + 0x18);
    local_30 = *(double *)(PTR__CGRectZero_025782f0 + 0x10);
    local_5c = 1;
    goto LAB_0008d78c;
  }
  lVar2 = local_48;
  (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_layer_026ca788);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_68 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  bVar1 = false;
  if (local_68 != 0) {
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar2 != 0;
    (*(code *)PTR__objc_release_02578630)(lVar2);
  }
  dVar4 = param_3;
  dVar5 = param_4;
  if (bVar1) {
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_frame_026ca640);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertRect_toView__0269ded8,local_50);
    dVar4 = param_2;
    dVar5 = param_1;
    local_40 = param_1;
    dStack_38 = param_2;
    local_30 = param_3;
    dStack_28 = param_4;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    param_1 = local_30;
    if ((local_30 <= 0.5) || (param_1 = dStack_28, dStack_28 <= 0.5)) {
      param_2 = 0.5;
      goto LAB_0008d720;
    }
    if (local_58 != (undefined1 *)0x0) {
      *local_58 = 1;
    }
  }
  else {
LAB_0008d720:
    FUN_0008c210(local_48,local_50);
    local_40 = param_1;
    dStack_38 = param_2;
    local_30 = dVar4;
    dStack_28 = dVar5;
  }
  local_5c = 1;
  _objc_storeStrong(&local_68,0);
LAB_0008d78c:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return local_40;
}

