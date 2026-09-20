// FUN_008d6520 @ 008d6520

void FUN_008d6520(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  undefined8 local_30;
  undefined8 local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_28;
  uVar1 = DAT_026f4ac0;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  uVar2 = local_28;
  uVar1 = DAT_026f4ac8;
  puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
  _objc_retainAutoreleasedReturnValue();
  _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  FUN_008d6870(local_30);
  dVar4 = param_1;
  FUN_008d69a8(local_30);
  dVar5 = dVar4;
  FUN_008d6870(local_28);
  dVar5 = ABS(dVar5 - param_1);
  if ((0.5 <= dVar5) || (FUN_008d69a8(local_28), 0.5 <= ABS(dVar5 - dVar4))) {
    uVar2 = local_28;
    uVar1 = DAT_026f4ad0;
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    FUN_008d6ae0(param_1,local_28);
    FUN_008d6c40(dVar4,local_28);
    _objc_setAssociatedObject(local_28,DAT_026f4ad0,0,1);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

