// FUN_000d3fbc @ 000d3fbc

void FUN_000d3fbc(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong local_28;
  undefined8 local_20;
  ulong local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c82c0)(param_1,param_2);
  FUN_000da710();
  if ((param_1 & 1) != 0) {
    uVar1 = local_18;
    FUN_000d8d08(local_18,"m_searchCurVC");
    _objc_retainAutoreleasedReturnValue();
    local_28 = uVar1;
    if (uVar1 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar1,&DAT_028c8371,puVar2,1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    _objc_storeStrong(&local_28,0);
  }
  return;
}

