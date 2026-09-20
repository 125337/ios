// FUN_0158205c @ 0158205c

void FUN_0158205c(double param_1,undefined8 param_2)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  double local_130;
  double local_118;
  double local_100;
  double local_f0;
  double local_e8;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  dVar1 = DAT_02323e88;
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_50 = 0;
  _objc_storeStrong(&local_50,param_2);
  local_e8 = param_1;
  if (DAT_02323d40 < param_1) {
    local_e8 = DAT_02323d40;
  }
  if (local_e8 <= 0.0) {
    local_f0 = 0.0;
  }
  else {
    local_f0 = local_e8;
  }
  local_100 = DAT_02323cc0 + local_f0;
  if (0.3 < local_100) {
    local_100 = 0.3;
  }
  uVar2 = local_50;
  FUN_0157fe2c(local_100,DAT_02323f60);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  uVar3 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_CGColor_026ca470);
  local_118 = dVar1 + local_f0;
  if (DAT_02332e58 < local_118) {
    local_118 = DAT_02332e58;
  }
  uVar4 = local_50;
  local_48 = uVar3;
  FUN_0157fe2c(local_118,DAT_02324050);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  uVar3 = uVar4;
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_CGColor_026ca470);
  local_130 = local_f0 + 0.5;
  if (DAT_023243c8 < local_130) {
    local_130 = DAT_023243c8;
  }
  uVar5 = local_50;
  local_40 = uVar3;
  FUN_0157fe2c(local_130,dVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  uVar3 = uVar5;
  (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_CGColor_026ca470);
  puVar6 = PTR__OBJC_CLASS___UIColor_026cdf78;
  local_38 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (0x3ff0000000000000,0,PTR__OBJC_CLASS___UIColor_026cdf78,
             PTR_s_colorWithWhite_alpha__0269cf30);
  _objc_retainAutoreleasedReturnValue();
  _objc_retainAutorelease();
  puVar7 = puVar6;
  (*(code *)PTR__objc_msgSend_02578628)(puVar6,PTR_s_CGColor_026ca470);
  puVar8 = PTR__OBJC_CLASS___NSArray_026cdfe0;
  local_30 = puVar7;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48,4);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(puVar6);
  (*(code *)PTR__objc_release_02578630)(uVar5);
  (*(code *)PTR__objc_release_02578630)(uVar4);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_50,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0,puVar8);
  return;
}

