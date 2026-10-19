// gestureRecognizerShouldBegin: @0xf294

/* Function Stack Size: 0x18 bytes */

bool WCMCommentPresentation::gestureRecognizerShouldBegin_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  double in_d1;
  undefined8 local_68;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_28;
  _objc_msgSend_presentedView(local_18,local_68);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  dVar3 = (double)_objc_msgSend_velocityInView_(uVar1,local_68);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  _objc_storeStrong(&local_28,0);
  return (uint)(ABS(dVar3) < ABS(in_d1));
}

