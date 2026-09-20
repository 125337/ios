// removeBlurAnimated: @ 00eb6850

/* Function Stack Size: 0x14 bytes */

void WCRefineBackgroundBlur::removeBlurAnimated_(ID param_1,SEL param_2,bool param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0x3fc3333333333333;
  if ((param_3 & 1) == 0) {
    uVar1 = 0;
  }
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,param_1,PTR_s_removeBlurWithDuration__026ab278);
  return;
}

