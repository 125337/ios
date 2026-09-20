// FUN_007b7488 @ 007b7488

void FUN_007b7488(double param_1,undefined8 param_2)

{
  long lVar1;
  double dVar2;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  lVar1 = local_18;
  FUN_007ae408();
  _objc_retainAutoreleasedReturnValue();
  local_20 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_contentOffset_0269dd18);
    dVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_adjustedContentInset_0269dcd0);
    dVar2 = -dVar2;
    FUN_007ba834();
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,dVar2,local_20,PTR_s_setContentOffset_animated__0269ddd8,1);
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

