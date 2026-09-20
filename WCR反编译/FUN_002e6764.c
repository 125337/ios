// FUN_002e6764 @ 002e6764

void FUN_002e6764(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_2);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UILabel_026cdfb8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setAdjustsFontSizeToFitWidth__026ca850,1);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_minimumScaleFactor_026a1d70);
    if ((param_1 <= 0.0) ||
       ((*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_minimumScaleFactor_026a1d70),
       0.75 < param_1)) {
      (*(code *)PTR__objc_msgSend_02578628)
                (DAT_02323db8,local_18,PTR_s_setMinimumScaleFactor__026ca9d0);
    }
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lineBreakMode_026a1d78);
    if (((uVar2 == 4) ||
        (uVar2 = local_18,
        (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lineBreakMode_026a1d78), uVar2 == 5))
       || (uVar2 = local_18,
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_lineBreakMode_026a1d78), uVar2 == 3))
    {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setLineBreakMode__026ca988,2);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

