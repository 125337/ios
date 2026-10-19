// keyboard: @0x11fd4

/* Function Stack Size: 0x18 bytes */

void WCMVideoComments::keyboard_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  undefined8 in_d1;
  double in_d2;
  undefined8 in_d3;
  double local_158;
  undefined8 local_128;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 local_f4;
  code *local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  double local_d8;
  undefined8 local_d0;
  double local_c8;
  undefined8 local_b0;
  double local_90;
  int local_84;
  double local_80;
  undefined8 local_78;
  undefined8 local_58;
  undefined8 local_50;
  double local_48;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  _objc_msgSend_view(local_28,local_128);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_userInfo(local_38,local_128);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_
            (uVar2,local_128,*(undefined8 *)PTR__UIKeyboardFrameEndUserInfoKey_00110110);
  uVar3 = _objc_retainAutoreleasedReturnValue();
  local_78 = _objc_msgSend_CGRectValue(uVar3,local_128);
  local_58 = _objc_msgSend_convertRect_fromView_(local_78,uVar1,local_128,0);
  local_50 = in_d1;
  local_48 = in_d2;
  (*(code *)PTR__objc_release_00110458)(uVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_84 = 0;
  _objc_msgSend_view(local_28,local_128);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  local_b0 = _objc_msgSend_bounds(uVar1,local_128);
  dVar4 = (double)_CGRectGetMaxY(local_b0,in_d1,in_d2,in_d3);
  dVar5 = (double)_CGRectGetMinY(local_58,local_50);
  dVar4 = dVar4 - dVar5;
  _objc_msgSend_view(local_28,local_128);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  local_d0 = _objc_msgSend_safeAreaInsets(uVar2,local_128);
  dVar4 = dVar4 - local_48;
  local_c8 = dVar5;
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  local_158 = dVar4;
  if (dVar4 <= (double)(long)local_84) {
    local_158 = (double)(long)local_84;
  }
  local_d8 = local_158;
  local_80 = local_158;
  local_90 = dVar4;
  _objc_msgSend_inputBottom(local_28,local_128);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setConstant_(-local_158,uVar1,local_128);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_userInfo(local_38,local_128);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_objectForKeyedSubscript_
            (uVar1,local_128,*(undefined8 *)PTR__UIKeyboardAnimationDurationUserInfoKey_00110108);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = _objc_msgSend_doubleValue(uVar2,local_128);
  local_100 = PTR___NSConcreteStackBlock_001104f0;
  local_f8 = 0xc2000000;
  local_f4 = 0;
  local_f0 = ___29__WCMVideoComments_keyboard___block_invoke;
  local_e8 = &___block_descriptor_40_e8_32s_e5_v8__0l;
  local_e0 = (*(code *)PTR__objc_retain_00110460)(local_28);
  _objc_msgSend_animateWithDuration_animations_(uVar3,&_OBJC_CLASS___UIView,local_128,&local_100);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_storeStrong(&local_e0);
  _objc_storeStrong(&local_38,0);
  return;
}

