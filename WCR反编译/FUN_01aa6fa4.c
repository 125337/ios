// FUN_01aa6fa4 @ 01aa6fa4

double FUN_01aa6fa4(undefined8 param_1,double param_2,double param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  double local_120;
  double local_f8;
  ulong local_48;
  double local_40;
  undefined8 local_38;
  undefined *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  uVar2 = local_48;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  dVar6 = param_3;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  local_40 = param_3;
  if ((((uVar2 & 1) != 0) &&
      (uVar3 = local_48, (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_length_0269cca0),
      uVar2 = local_48, uVar3 != 0)) && (0.0 < param_2)) {
    local_f8 = param_2 - 72.0;
    if (local_f8 <= 120.0) {
      local_f8 = 120.0;
    }
    uVar5 = 0x7fefffffffffffff;
    FUN_01a9eca0();
    local_38 = *(undefined8 *)PTR__NSFontAttributeName_02578068;
    puVar1 = PTR__OBJC_CLASS___UIFont_026cdfc0;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR__OBJC_CLASS___UIFont_026cdfc0,PTR_s_systemFontOfSize__0269cc50);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_30 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,
               PTR_s_dictionaryWithObjects_forKeys_co_0269d528,&local_30,&local_38,1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar2,PTR_s_boundingRectWithSize_options_att_0269e550,3,puVar4,0);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    _CGRectGetHeight(local_f8,uVar5,dVar6,param_4);
    local_120 = param_3;
    if (param_3 < (double)(long)local_f8 + 20.0) {
      local_120 = (double)(long)local_f8 + 20.0;
    }
    local_40 = local_120;
  }
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return local_40;
}

