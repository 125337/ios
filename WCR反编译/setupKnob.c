// setupKnob @ 01707344

/* Function Stack Size: 0x10 bytes */

ID SwitchThemes::setupKnob(ID param_1,SEL param_2)

{
  undefined *puVar1;
  double dVar2;
  double dVar3;
  double in_d3;
  double dVar4;
  undefined *local_50 [5];
  double local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_frame_026ca640);
  dVar2 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_knobMargin_026b3778);
  in_d3 = in_d3 - dVar2 * 2.0;
  puVar1 = PTR_Knob_026cef08;
  local_28 = in_d3;
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_knobMargin_026b3778);
  dVar2 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_knobMargin_026b3778);
  dVar3 = local_28;
  dVar4 = local_28;
  FUN_01705754();
  (*(code *)PTR__objc_msgSend_02578628)
            (in_d3,dVar2,dVar3,dVar4,puVar1,PTR_s_initWithFrame__026ca6e8);
  local_50[0] = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setKnob__026b3788,puVar1);
  puVar1 = local_50[0];
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(local_50,0);
  _objc_autoreleaseReturnValue();
  return (ID)puVar1;
}

