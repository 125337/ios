// FUN_004cfe68 @ 004cfe68

void FUN_004cfe68(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
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
  local_40 = param_2;
  uStack_38 = param_3;
  local_30 = param_4;
  uStack_28 = param_5;
  _objc_storeStrong(&local_68,param_6);
  uVar1 = local_68;
  if (param_1 <= 0.0) {
    _objc_setAssociatedObject(local_68,&DAT_028cac91,0,1);
    _objc_setAssociatedObject(local_68,&DAT_028cac92,0,1);
    _objc_setAssociatedObject(local_68,&DAT_028cac93,0,1);
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (param_1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028cac91,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = local_68;
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_40,uStack_38,local_30,uStack_28,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGRect__0269e130);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028cac92,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = local_68;
    puVar2 = PTR__OBJC_CLASS___NSValue_026ce1f0;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_60,uStack_58,local_50,uStack_48,PTR__OBJC_CLASS___NSValue_026ce1f0,
               PTR_s_valueWithCGRect__0269e130);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar1,&DAT_028cac93,puVar2,1);
    (*(code *)PTR__objc_release_02578630)(puVar2);
  }
  _objc_storeStrong(&local_68,0);
  return;
}

