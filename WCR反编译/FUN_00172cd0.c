// FUN_00172cd0 @ 00172cd0

void FUN_00172cd0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long local_28;
  long local_20;
  long local_18;
  
  lVar1 = param_1 + 0x28;
  local_20 = param_1;
  local_18 = param_1;
  _objc_loadWeakRetained();
  puVar3 = PTR__OBJC_CLASS___NSString_026cdfe8;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_28 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_reason_0269de08);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_stringWithFormat__0269cca8,&cf_b_Y1Y__);
  _objc_retainAutoreleasedReturnValue();
  FUN_0016f790(lVar1,0);
  (*(code *)PTR__objc_release_02578630)(puVar3);
  (*(code *)PTR__objc_release_02578630)(uVar2);
  _objc_storeStrong(&local_28,0);
  return;
}

