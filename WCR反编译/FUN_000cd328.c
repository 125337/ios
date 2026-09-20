// FUN_000cd328 @ 000cd328

void FUN_000cd328(double param_1,double param_2,double param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  double local_190;
  double local_168;
  double local_140;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_60 = in_stack_00000000;
  uStack_58 = in_stack_00000008;
  local_50 = in_stack_00000010;
  uStack_48 = in_stack_00000018;
  local_68 = 0;
  local_40 = param_4;
  uStack_38 = param_5;
  local_30 = param_6;
  uStack_28 = param_7;
  _objc_storeStrong(&local_68,param_8);
  uVar1 = local_68;
  local_140 = param_1;
  if (param_1 <= 0.0) {
    local_140 = 0.0;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_140,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar1,&DAT_028c8294,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar1 = local_68;
  local_168 = param_2;
  if (param_2 <= 0.0) {
    local_168 = 0.0;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_168,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar1,&DAT_028c8295,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar1 = local_68;
  local_190 = param_3;
  if (param_3 <= 0.0) {
    local_190 = 0.0;
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_190,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar1,&DAT_028c8296,puVar2,1);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  uVar1 = local_68;
  if ((0.0 < param_1) || (0.0 < param_2)) {
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,uStack_38,local_30,uStack_28,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGRect__0269e130);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028c8299,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = local_68;
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,uStack_58,local_50,uStack_48,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGRect__0269e130);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028c829a,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  else {
    _objc_setAssociatedObject(local_68,&DAT_028c8299,0,1);
    _objc_setAssociatedObject(local_68,&DAT_028c829a,0,1);
  }
  _objc_storeStrong(&local_68,0);
  return;
}

