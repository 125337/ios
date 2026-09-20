// onMinimize @ 00fdb958

/* Function Stack Size: 0x10 bytes */

void WCRIconNameCaptureFloatWindow::onMinimize(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_WCRefineIconNameCaptureSupport_026cec30;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_isSuperFloatLinked_026ad310);
  if (((ulong)puVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_minimizeAnimated__026ad350,1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineIconNameCaptureSupport_026cec30,PTR_s_disableFeatureFromFloating_026ad348
              );
  }
  return;
}

