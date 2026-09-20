// FUN_01d4c3ec @ 01d4c3ec

void FUN_01d4c3ec(double param_1,double param_2,double param_3,double param_4,double param_5,
                 double param_6,double param_7,double param_8)

{
  undefined *puVar1;
  double in_stack_00000000;
  double local_138;
  double local_128;
  undefined *local_118;
  int local_10c;
  double local_108;
  double local_100;
  double local_f8;
  double local_f0;
  double dStack_e8;
  double local_e0;
  double dStack_d8;
  double local_d0;
  double dStack_c8;
  double local_c0;
  double dStack_b8;
  double local_b0 [5];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  double local_70 [5];
  double dStack_48;
  double local_40;
  double dStack_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_f8 = in_stack_00000000;
  local_100 = (param_1 + param_3 + param_5 + param_7) / 4.0;
  local_108 = (param_2 + param_4 + param_6 + param_8) / 4.0;
  local_70[1] = param_2;
  local_70[0] = param_1;
  local_70[3] = param_4;
  local_70[2] = param_3;
  dStack_48 = param_6;
  local_70[4] = param_5;
  dStack_38 = param_8;
  local_40 = param_7;
  for (local_10c = 0; local_10c < 4; local_10c = local_10c + 1) {
    if (local_70[(long)local_10c * 2] < local_100) {
      local_128 = -in_stack_00000000;
    }
    else {
      local_128 = in_stack_00000000;
    }
    local_b0[(long)local_10c * 2] = local_70[(long)local_10c * 2] + local_128;
    if (local_70[(long)local_10c * 2 + 1] < local_108) {
      local_138 = -in_stack_00000000;
    }
    else {
      local_138 = in_stack_00000000;
    }
    local_b0[(long)local_10c * 2 + 1] = local_70[(long)local_10c * 2 + 1] + local_138;
  }
  puVar1 = PTR__OBJC_CLASS___UIBezierPath_026ce268;
  local_f0 = param_7;
  dStack_e8 = param_8;
  local_e0 = param_5;
  dStack_d8 = param_6;
  local_d0 = param_3;
  dStack_c8 = param_4;
  local_c0 = param_1;
  dStack_b8 = param_2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___UIBezierPath_026ce268,PTR_s_bezierPath_026a01a8);
  _objc_retainAutoreleasedReturnValue();
  local_118 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(local_b0[0],local_b0[1],puVar1,PTR_s_moveToPoint__026a01b0);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0[2],local_b0[3],local_118,PTR_s_addLineToPoint__026a01b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_80,local_78,local_118,PTR_s_addLineToPoint__026a01b8);
  (*(code *)PTR__objc_msgSend_02578628)
            (local_b0[4],local_88,local_118,PTR_s_addLineToPoint__026a01b8);
  (*(code *)PTR__objc_msgSend_02578628)(local_118,PTR_s_closePath_026a66f8);
  puVar1 = local_118;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_118,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar1);
  return;
}

