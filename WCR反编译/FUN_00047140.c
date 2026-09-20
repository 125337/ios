// FUN_00047140 @ 00047140

void FUN_00047140(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    uVar4 = *(ulong *)(param_1 + 0x20);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,&cf_session)
    ;
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar4;
    FUN_0003102c();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar6;
    FUN_000366f8();
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar4);
    if ((uVar5 & 1) != 0) {
      uVar6 = *(ulong *)(param_1 + 0x28);
      (*(code *)PTR__objc_msgSend_02578628)
                (uVar6,PTR_s_respondsToSelector__026ca818,
                 PTR_s_OnWCPayTransferMoneyStatusViewCo_0269d860);
      uVar1 = DAT_026df728;
      if ((uVar6 & 1) != 0) {
        uVar7 = *(undefined8 *)(param_1 + 0x28);
        puVar2 = PTR__OBJC_CLASS___NSNumber_026ce038;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
        _objc_retainAutoreleasedReturnValue();
        _objc_setAssociatedObject(uVar7,uVar1,puVar2,1);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        (*(code *)PTR__objc_msgSend_02578628)
                  (*(undefined8 *)(param_1 + 0x28),PTR_s_OnWCPayTransferMoneyStatusViewCo_0269d860);
      }
    }
  }
  return;
}

