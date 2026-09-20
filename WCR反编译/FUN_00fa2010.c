// FUN_00fa2010 @ 00fa2010

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00fa2010(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 long param_5)

{
  ulong uVar1;
  ulong uVar2;
  double dVar3;
  double dVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong local_40;
  ulong local_38;
  long local_30;
  long local_28;
  
  uVar1 = *(ulong *)(param_5 + 0x20);
  local_30 = param_5;
  local_28 = param_5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_tableView_0269e378);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_superview_026cab50);
  _objc_retainAutoreleasedReturnValue();
  local_40 = uVar1;
  if ((local_38 != 0) && (uVar1 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_frame_026ca640);
    dVar3 = param_1;
    uVar5 = param_2;
    uVar6 = param_3;
    uVar7 = param_4;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_bounds_026ca548);
    _CGRectGetWidth(dVar3,uVar5,uVar6,uVar7);
    if ((0.0 < dVar3) &&
       (dVar4 = param_1, _CGRectGetWidth(param_1,param_2,param_3,param_4), dVar4 != dVar3)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (param_1,param_2,dVar3,param_4,local_38,PTR_s_setFrame__026ca960);
    }
    uVar1 = local_38;
    uVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_autoresizingMask_026acdd8);
    (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_setAutoresizingMask__026ca878,uVar2 | 2);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  return;
}

