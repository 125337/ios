// FUN_002149c8 @ 002149c8

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_002149c8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  bool bVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  long local_50;
  long local_30;
  long local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_5);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_6);
  bVar1 = false;
  bVar3 = true;
  dVar5 = param_1;
  if ((local_28 != 0) && (bVar3 = true, local_30 != 0)) {
    local_50 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = true;
    bVar3 = local_50 == 0;
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  lVar2 = local_28;
  if (!bVar3) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertRect_toView__0269ded8,local_30);
    lVar2 = local_30;
    _CGRectGetMidX(dVar5,param_2);
    FUN_001e6228();
    lVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertPoint_toView__0269e548);
    dVar6 = param_1;
    (*(code *)PTR__objc_release_02578630)(lVar4);
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_frame_026ca640);
    dVar7 = dVar6;
    _CGRectGetHeight(dVar6,dVar5,param_3,param_4);
    (*(code *)PTR__objc_msgSend_02578628)
              (dVar6,(long)(param_1 - dVar7 * 0.5),param_3,param_4,local_28,PTR_s_setFrame__026ca960
              );
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

