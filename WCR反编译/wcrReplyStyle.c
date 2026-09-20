// wcrReplyStyle @ 017ce2d4

/* Function Stack Size: 0x10 bytes */

long_long WCRefineAISessionSettingsViewController::wcrReplyStyle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  ID IVar2;
  ID IVar3;
  undefined *puVar4;
  int iVar5;
  undefined *local_88;
  undefined *local_80;
  ID local_70;
  undefined4 local_64;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  int local_44;
  undefined *local_40;
  int local_34;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  undefined *local_18;
  
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_wcrOptions_026b5098);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = (undefined *)param_1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (local_30 == (undefined *)0x0) {
    IVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_wcrOptions_026b5098);
    _objc_retainAutoreleasedReturnValue();
    IVar3 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_70 = IVar3;
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (local_70 == 0) {
      puVar1 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineAIStore_026ce048,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar1;
      (*(code *)PTR__objc_msgSend_02578628)();
      local_18 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      IVar2 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_boolValue_026ca540);
      iVar5 = 0;
      if ((IVar2 & 1) == 0) {
        iVar5 = 2;
      }
      local_18 = (undefined *)(long)iVar5;
    }
    local_64 = 1;
    _objc_storeStrong(&local_70,0);
  }
  else {
    local_34 = 0;
    local_44 = 2;
    puVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_integerValue_026ca750);
    local_80 = puVar1;
    if ((long)local_44 < (long)puVar1) {
      local_80 = (undefined *)(long)local_44;
    }
    local_58 = local_80;
    local_40 = local_80;
    if ((long)local_34 < (long)local_80) {
      local_88 = local_80;
    }
    else {
      local_88 = (undefined *)(long)local_34;
    }
    local_60 = local_88;
    local_18 = local_88;
    local_64 = 1;
    local_50 = puVar1;
  }
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

