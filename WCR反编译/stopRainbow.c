// stopRainbow @ 01f48114

/* Function Stack Size: 0x10 bytes */

void WCRefineUpdateLogView::stopRainbow(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_rainbowDisplayLink_026c8f20);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setRainbowDisplayLink__026c8f38,0);
  return;
}

