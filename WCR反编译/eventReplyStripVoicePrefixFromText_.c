// eventReplyStripVoicePrefixFromText: @ 009b82a0

/* Function Stack Size: 0x18 bytes */

bool WCRefineAIStore::eventReplyStripVoicePrefixFromText_(ID param_1,SEL param_2,ID *param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *local_40;
  ulong local_38;
  ulong *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  if (param_3 == (ID *)0x0) {
    local_11 = 0;
  }
  else {
    uVar1 = *param_3;
    local_30 = param_3;
    local_28 = param_2;
    local_20 = param_1;
    FUN_009af3fc();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_WCRefineConfig_026cdf58;
    local_38 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    FUN_009af3fc();
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar3);
    (*(code *)PTR__objc_release_02578630)(puVar2);
    uVar1 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    if (((uVar1 == 0) ||
        (puVar2 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
        puVar2 == (undefined *)0x0)) ||
       (uVar5 = local_38,
       (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_hasPrefix__0269d320,local_40),
       uVar1 = local_38, (uVar5 & 1) == 0)) {
      local_11 = 0;
    }
    else {
      puVar2 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
      (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_substringFromIndex__0269d120,puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar1;
      FUN_009af3fc();
      _objc_retainAutoreleasedReturnValue();
      _objc_autorelease();
      *local_30 = uVar5;
      (*(code *)PTR__objc_release_02578630)(uVar1);
      local_11 = 1;
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return local_11 & 1;
}

