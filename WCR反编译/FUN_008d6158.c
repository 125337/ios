// FUN_008d6158 @ 008d6158

void FUN_008d6158(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  double dVar5;
  double dVar6;
  double local_110;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  uVar4 = local_28;
  puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  uVar2 = local_28;
  uVar1 = DAT_026f4ac0;
  if ((uVar4 & 1) != 0) {
    puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
    dVar5 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar2,uVar1,puVar3,1);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    uVar4 = local_28;
    FUN_008d48e4();
    if (((uVar4 & 1) != 0) && (FUN_008d6870(local_28), dVar5 < param_1 - 0.5)) {
      dVar6 = dVar5;
      FUN_008d69a8(local_28);
      uVar4 = local_28;
      uVar1 = DAT_026f4ac8;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (dVar5,PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithDouble__0269d6d0);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar4,uVar1,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      uVar4 = local_28;
      uVar1 = DAT_026f4ad0;
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar4,uVar1,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
      FUN_008d6ae0(param_1,local_28);
      local_110 = (dVar5 + dVar6) - param_1;
      if (local_110 <= 40.0) {
        local_110 = 40.0;
      }
      FUN_008d6c40(local_110,local_28);
      _objc_setAssociatedObject(local_28,DAT_026f4ad0,0,1);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

