// knobTravel @ 0170bc74

/* Function Stack Size: 0x10 bytes */

double SwitchThemesDayNight::knobTravel(ID param_1,SEL param_2)

{
  double dVar1;
  double dVar2;
  double in_d2;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  dVar1 = in_d2;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_knobDiameter_026b3898);
  dVar2 = in_d2 - dVar1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_knobMargin_026b3778);
  return (in_d2 - dVar1) - dVar2 * 2.0;
}

