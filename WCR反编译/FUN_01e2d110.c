// FUN_01e2d110 @ 01e2d110

void FUN_01e2d110(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *local_540;
  undefined8 local_538;
  undefined8 local_530;
  utsname uStack_528;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_538 = param_1;
  local_530 = param_1;
  _bzero(&uStack_528,0x500);
  iVar1 = _uname(&uStack_528);
  if (iVar1 == 0) {
    puVar2 = PTR__OBJC_CLASS___NSString_026cdfe8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithUTF8String__0269fd30,
               uStack_528.machine);
    _objc_retainAutoreleasedReturnValue();
    local_540 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_hasPrefix__0269d320,&cf_iPad);
    DAT_028e47a8 = SUB81(puVar2,0);
    _objc_storeStrong(&local_540,0);
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

