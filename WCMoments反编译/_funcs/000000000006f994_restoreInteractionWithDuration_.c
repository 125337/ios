// restoreInteractionWithDuration: @0x6f994

/* Function Stack Size: 0x18 bytes */

void __thiscall
WCMYBIBImageCell::restoreInteractionWithDuration_
          (WCMYBIBImageCell *this,ID param_1,SEL param_2,double param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 in_d1;
  undefined8 local_100;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  code *local_78;
  undefined *local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  double local_38;
  ID local_30;
  WCMYBIBImageCell *local_28;
  
  local_38 = param_3;
  local_30 = param_1;
  local_28 = this;
  _objc_msgSend_wcm_yb_containerSize(this);
  lVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_wcm_yb_currentOrientation(local_28,local_100);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  uVar3 = (**(code **)(lVar2 + 0x10))();
  local_48 = (**(code **)(lVar1 + 0x10))(lVar1,uVar3);
  uStack_40 = in_d1;
  (*(code *)PTR__objc_release_00110458)(lVar2);
  (*(code *)PTR__objc_release_00110458)(lVar1);
  local_88 = PTR___NSConcreteStackBlock_001104f0;
  local_80 = 0xc2000000;
  local_7c = 0;
  local_78 = ___51__WCMYBIBImageCell_restoreInteractionWithDuration___block_invoke;
  local_70 = &___block_descriptor_56_e8_32s_e5_v8__0l;
  local_68 = (*(code *)PTR__objc_retain_00110460)(local_28);
  uStack_58 = uStack_40;
  local_60 = local_48;
  local_50 = _objc_retainBlock();
  local_a8 = (*(code *)PTR__objc_retain_00110460)(local_28);
  uStack_98 = uStack_40;
  local_a0 = local_48;
  local_90 = _objc_retainBlock();
  if (0.0 < local_38) {
    _objc_msgSend_animateWithDuration_animations_completion_
              (local_38,&_OBJC_CLASS___UIView,local_100,local_50,local_90);
  }
  else {
    (**(code **)(local_50 + 0x10))();
    (**(code **)(local_90 + 0x10))(local_90,0);
  }
  _objc_storeStrong(&local_90);
  _objc_storeStrong(&local_a8,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_68,0);
  return;
}

