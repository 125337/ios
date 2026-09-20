// FUN_000f8ec0 @ 000f8ec0

void FUN_000f8ec0(undefined8 param_1,uint param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *local_70;
  undefined *local_38;
  undefined8 local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar3 = local_18;
  uVar2 = DAT_026df878;
  bVar1 = (param_2 & 1) == 0;
  if (bVar1) {
    local_70 = (undefined *)0x0;
  }
  else {
    local_70 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
    _objc_retainAutoreleasedReturnValue();
    local_38 = local_70;
  }
  _objc_setAssociatedObject(uVar3,uVar2,local_70,1);
  if (!bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

