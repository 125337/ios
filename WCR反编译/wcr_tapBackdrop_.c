// wcr_tapBackdrop: @ 01555280

/* Function Stack Size: 0x18 bytes */

void WCRefineTopBarProfileCardPresenter::wcr_tapBackdrop_(ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined8 in_d0;
  undefined8 uVar2;
  undefined8 in_d1;
  undefined8 uVar3;
  undefined8 in_d2;
  undefined8 in_d3;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((DAT_028e3870 != 0) && (DAT_028e3878 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_locationInView__026ca798,DAT_028e3878);
    uVar1 = DAT_028e3878;
    uVar2 = in_d0;
    uVar3 = in_d1;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028e3878,PTR_s_bounds_026ca548);
    _CGRectContainsPoint(uVar2,uVar3,in_d2,in_d3,in_d0,in_d1);
    if ((uVar1 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_dismissProfileCardIfNeeded_026b0598);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

