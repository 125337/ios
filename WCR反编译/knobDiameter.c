// knobDiameter @ 0170bc00

/* Function Stack Size: 0x10 bytes */

double SwitchThemesDayNight::knobDiameter(ID param_1,SEL param_2)

{
  double dVar1;
  double in_d3;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_bounds_026ca548);
  dVar1 = in_d3;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_knobMargin_026b3778);
  return in_d3 - dVar1 * 2.0;
}

