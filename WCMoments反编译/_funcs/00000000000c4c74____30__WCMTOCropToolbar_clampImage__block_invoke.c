// ___30+[WCMTOCropToolbar_clampImage]_block_invoke @0xc4c74

void ___30__WCMTOCropToolbar_clampImage__block_invoke(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_120;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  local_30 = 0;
  local_28 = param_1;
  _objc_storeStrong();
  local_38 = param_1;
  _objc_msgSend_colorWithRed_green_blue_alpha_
            (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3fe1b22d0e560419,
             &_OBJC_CLASS___UIColor,local_120);
  local_40 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_colorWithRed_green_blue_alpha_
            (0x3ff0000000000000,0x3ff0000000000000,0x3ff0000000000000,0x3fe8bc6a7ef9db23,
             &_OBJC_CLASS___UIColor,local_120);
  local_48 = _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x4008000000000000;
  uVar3 = 0x402a000000000000;
  uVar2 = 0x402a000000000000;
  local_70 = _CGRectMake();
  local_68 = uVar1;
  local_60 = uVar2;
  local_58 = uVar3;
  _objc_msgSend_bezierPathWithRect_
            (local_70,uVar1,uVar2,uVar3,&_OBJC_CLASS___UIBezierPath,local_120);
  local_50 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_whiteColor(&_OBJC_CLASS___UIColor,local_120);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFill(uVar1,local_120);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_fill(local_50,local_120);
  uVar1 = 0;
  uVar2 = 0x4036000000000000;
  uVar3 = 0x4000000000000000;
  local_98 = _CGRectMake(0);
  local_90 = uVar1;
  local_88 = uVar2;
  local_80 = uVar3;
  _objc_msgSend_bezierPathWithRect_
            (local_98,uVar1,uVar2,uVar3,&_OBJC_CLASS___UIBezierPath,local_120);
  local_78 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFill(local_40,local_120);
  _objc_msgSend_fill(local_78,local_120);
  uVar1 = 0x4000000000000000;
  uVar2 = 0x4008000000000000;
  uVar3 = 0x402c000000000000;
  local_c0 = _CGRectMake(0x4033000000000000);
  local_b8 = uVar1;
  local_b0 = uVar2;
  local_a8 = uVar3;
  _objc_msgSend_bezierPathWithRect_
            (local_c0,uVar1,uVar2,uVar3,&_OBJC_CLASS___UIBezierPath,local_120);
  local_a0 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFill(local_40,local_120);
  _objc_msgSend_fill(local_a0,local_120);
  _objc_storeStrong(&local_a0,0);
  _objc_storeStrong(&local_78,0);
  uVar2 = 0x4008000000000000;
  uVar4 = 0x402a000000000000;
  uVar3 = 0x4010000000000000;
  uVar1 = _CGRectMake(0x402c000000000000);
  _objc_msgSend_bezierPathWithRect_(uVar1,uVar2,uVar3,uVar4,&_OBJC_CLASS___UIBezierPath,local_120);
  local_c8 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setFill(local_48,local_120);
  _objc_msgSend_fill(local_c8,local_120);
  _objc_storeStrong(&local_c8,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

