// placeDefault @ 00fd86e4

/* Function Stack Size: 0x10 bytes */

void WCRIconNameCaptureFloatWindow::placeDefault(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  double dVar3;
  double dVar4;
  double in_d2;
  double in_d3;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  if (in_d2 <= 1.0) {
    puVar1 = PTR__OBJC_CLASS___UIScreen_026cdf70;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScreen_026cdf70,PTR_s_mainScreen_026ca7b0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)();
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  }
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setPillDocked__026ad2a0,0);
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(0x3ff0000000000000);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  dVar3 = (in_d2 - 18.0) - 28.0;
  dVar4 = in_d3 * DAT_02323d60;
  FUN_00fd86b8();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_pill_026ad218);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(dVar3,dVar4);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  in_d2 = in_d2 * 0.5;
  in_d3 = in_d3 * DAT_02324038;
  FUN_00fd86b8();
  IVar2 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_panel_026ad220);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(in_d2,in_d3);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_refreshChrome_026ad2a8);
  return;
}

