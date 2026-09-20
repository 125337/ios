// getDeviceModelIdentifier @ 0168aef4

/* Function Stack Size: 0x10 bytes */

ID AccountDetailViewController::getDeviceModelIdentifier(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_550;
  undefined *local_548;
  SEL local_540;
  ID local_538;
  undefined *local_530;
  utsname uStack_528;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_540 = param_2;
  local_538 = param_1;
  _uname(&uStack_528);
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithCString_encoding__026b2890,
             uStack_528.machine,4);
  _objc_retainAutoreleasedReturnValue();
  local_548 = puVar1;
  FUN_0168ff6c();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_550 = puVar2;
  (*(code *)PTR__objc_release_02578630)(puVar1);
  local_530 = local_548;
  puVar1 = local_550;
  if (local_550 == (undefined *)0x0) {
    (*(code *)PTR__objc_retain_02578638)();
  }
  else {
    (*(code *)PTR__objc_retain_02578638)();
    local_530 = puVar1;
  }
  _objc_storeStrong(&local_550);
  _objc_storeStrong(&local_548,0);
  if (*(long *)PTR____stack_chk_guard_02578670 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  _objc_autoreleaseReturnValue(0);
  return (ID)local_530;
}

