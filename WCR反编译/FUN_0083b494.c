// FUN_0083b494 @ 0083b494

void FUN_0083b494(void)

{
  u_int32_t uVar1;
  u_int32_t uVar2;
  u_int32_t uVar3;
  
  uVar1 = _arc4random_uniform(0x100);
  uVar2 = _arc4random_uniform(0x100);
  uVar3 = _arc4random_uniform(0x100);
  (*(code *)PTR__objc_msgSend_02578628)
            ((double)uVar1 / 255.0,(double)uVar2 / 255.0,(double)uVar3 / 255.0,DAT_026f4868,
             PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_colorWithRed_green_blue_alpha__0269cc48);
  return;
}

