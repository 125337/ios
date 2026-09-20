// FUN_0078e498 @ 0078e498

void FUN_0078e498(long param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  bVar1 = 1;
  if (((ulong)puVar3 & 1) != 0) {
    bVar1 = *(byte *)(param_1 + 0x28);
  }
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if ((bVar1 & 1) == 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar4,PTR_s_respondsToSelector__026ca818,PTR_s_wcrefine_triggerQuoteMention_026a8020)
    ;
    if ((uVar4 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_wcrefine_triggerQuoteMention_026a8020);
    }
  }
  return;
}

