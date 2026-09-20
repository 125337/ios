// FUN_003e221c @ 003e221c

void FUN_003e221c(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_e0;
  ulong local_a0;
  ulong auStack_70 [9];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  uVar1 = 5;
  FUN_003e24b4();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  _NSClassFromString();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (uVar2 != 0) {
    _memcpy(auStack_70,&DAT_0257ce48,0x48);
    for (local_a0 = 0; local_a0 < 3; local_a0 = local_a0 + 1) {
      uVar7 = auStack_70[local_a0 * 3 + 1];
      uVar6 = auStack_70[local_a0 * 3];
      uVar5 = auStack_70[local_a0 * 3 + 2];
      FUN_003e24b4();
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      uVar1 = uVar6;
      (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_UTF8String_026a2e68);
      _sel_registerName();
      (*(code *)PTR__objc_release_02578630)(uVar6);
      uVar6 = uVar2;
      _class_getInstanceMethod(uVar2,uVar1);
      if (((uVar6 != 0) && (local_e0 = uVar6, _method_getImplementation(), local_e0 != 0)) &&
         (local_e0 != uVar5)) {
        uVar3 = uVar6;
        _method_getTypeEncoding(uVar6);
        uVar4 = uVar2;
        _class_addMethod(uVar2,uVar1,uVar5,uVar3);
        if ((uVar4 & 1) == 0) {
          _method_setImplementation(uVar6,uVar5);
          local_e0 = uVar6;
        }
        if ((local_e0 != 0) && (local_e0 != uVar5)) {
          *(ulong *)(&DAT_028ca3e8 + uVar7 * 8) = local_e0;
        }
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

