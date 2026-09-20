// FUN_0076aadc @ 0076aadc

void FUN_0076aadc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_02578670;
  FUN_0076d0fc();
  if (param_1 != 0) {
    _MSHookMessageEx(param_1,PTR_s_viewWillAppear__0269cd48,FUN_0076d170,&DAT_028cc918);
    _class_addMethod(param_1,PTR_s_checkAndRecordSponsorFromPayment_026a7e00,FUN_0076d4c4);
    _MSHookMessageEx(param_1,PTR_s_viewDidDisappear__0269de98,FUN_0076e620,&DAT_028cc920);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - lVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - lVar1);
}

