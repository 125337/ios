// randomColor @ 01d2f9c8

/* Function Stack Size: 0x10 bytes */

ID WCRefineRootViewController::randomColor(ID param_1,SEL param_2)

{
  u_int32_t uVar1;
  u_int32_t uVar2;
  u_int32_t uVar3;
  undefined *puVar4;
  
  uVar1 = _arc4random();
  uVar2 = _arc4random();
  uVar3 = _arc4random();
  puVar4 = PTR__OBJC_CLASS___UIColor_026cdf78;
  (*(code *)PTR__objc_msgSend_02578628)
            ((double)(uVar1 % 0x100) / 255.0,(double)(uVar2 % 0x100) / 255.0,
             (double)(uVar3 % 0x100) / 255.0,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  return (ID)puVar4;
}

