// FUN_0112f158 @ 0112f158

void FUN_0112f158(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  uVar1 = param_1 + 0x20;
  local_28 = param_1;
  _objc_loadWeakRetained();
  local_30 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_view_026cabd8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (uVar2 != 0) {
    uVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_0112f2fc();
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_30;
    if ((uVar2 & 1) != 0) {
      puVar3 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar1,&DAT_028e357c,puVar3,1);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

