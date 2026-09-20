// initWithAmount:ruleIndex: @ 01804ac4

/* Function Stack Size: 0x20 bytes */

ID WCRefineAutoAcceptTransferTierEditorViewController::initWithAmount_ruleIndex_
             (ID param_1,SEL param_2,double param_3,unsigned_long_long param_4)

{
  ID *pIVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined *local_50;
  undefined *local_48;
  ID local_40;
  undefined *local_38;
  undefined *local_30;
  double local_28;
  SEL local_20;
  ID *local_18;
  
  local_18 = (ID *)0x0;
  pIVar1 = &local_40;
  local_38 = PTR_WCRefineAutoAcceptTransferTierEditorViewController_026cfb90;
  local_40 = param_1;
  local_30 = (undefined *)param_4;
  local_28 = param_3;
  local_20 = param_2;
  _objc_msgSendSuper2(pIVar1,PTR_s_init_026ca6a8);
  local_18 = pIVar1;
  _objc_storeStrong(&local_18);
  if (local_18 != (ID *)0x0) {
    *(undefined **)((long)local_18 + (long)_storedRuleIndex) = local_30;
    *(double *)((long)local_18 + (long)_amount) = local_28;
    dVar5 = local_28;
    _objc_storeStrong((long)local_18 + (long)_replyText);
    _objc_storeStrong((long)local_18 + (long)_repositoryCode,&::cf___);
    _objc_storeStrong((long)local_18 + (long)_inviteChatRoom,&::cf___);
    if (local_30 != (undefined *)0x7fffffffffffffff) {
      puVar2 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      puVar2 = local_30;
      puVar3 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_count_0269cfe0);
      if (puVar2 < puVar3) {
        puVar2 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_objectAtIndexedSubscript__0269cc78,local_30);
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar2;
        FUN_01804e40(puVar2);
        *(double *)((long)local_18 + (long)_amount) = dVar5;
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_replyText);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        FUN_01804f2c();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)((long)local_18 + (long)_replyText);
        *(undefined8 *)((long)local_18 + (long)_replyText) = puVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_repositoryCode);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        FUN_01804f2c();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)((long)local_18 + (long)_repositoryCode);
        *(undefined8 *)((long)local_18 + (long)_repositoryCode) = puVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        puVar2 = local_50;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_50,PTR_s_objectForKeyedSubscript__0269d098,&cf_inviteChatRoom);
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        FUN_01804f2c();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(undefined8 *)((long)local_18 + (long)_inviteChatRoom);
        *(undefined8 *)((long)local_18 + (long)_inviteChatRoom) = puVar3;
        (*(code *)PTR__objc_release_02578630)(uVar4);
        (*(code *)PTR__objc_release_02578630)(puVar2);
        _objc_storeStrong(&local_50,0);
      }
      _objc_storeStrong(&local_48,0);
    }
  }
  pIVar1 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_18,0);
  return (ID)pIVar1;
}

