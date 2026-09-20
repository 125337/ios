// FUN_00780cc4 @ 00780cc4

void FUN_00780cc4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  uVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrefine_isMyMessage_026a42e0);
  uVar2 = (ulong)((byte)uVar1 & 1);
  FUN_00784138();
  FUN_0078abc0(param_1,uVar2,(byte)uVar1 & 1);
  puVar3 = PTR___dispatch_main_q_02578680;
  if ((param_1 & 1) == 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    _dispatch_async();
    (*(code *)PTR__objc_release_02578630)(puVar3);
  }
  return;
}

