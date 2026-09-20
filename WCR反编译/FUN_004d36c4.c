// FUN_004d36c4 @ 004d36c4

void FUN_004d36c4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined *local_40 [3];
  undefined4 local_24;
  long local_20;
  undefined *local_18;
  
  local_18 = (undefined *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if ((local_18 == (undefined *)0x0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setGroupInfo__026a4178);
    if (((ulong)puVar1 & 1) == 0) {
      FUN_004d450c(local_18,&cf_groupInfo,local_20);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setGroupInfo__026a4178,local_20);
    }
    puVar1 = local_18;
    FUN_004d34d8(local_18,&cf_m_dicForwardParas);
    _objc_retainAutoreleasedReturnValue();
    local_48 = (undefined *)0x0;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
    local_40[0] = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_isKindOfClass__0269cd68,puVar2);
    if (((ulong)puVar1 & 1) == 0) {
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSMutableDictionary_026ce0b0,PTR_s_dictionary_0269d240);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_48;
      local_48 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else {
      puVar2 = local_40[0];
      (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_mutableCopy_0269d8a0);
      puVar1 = local_48;
      local_48 = puVar2;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48,PTR_s_setObject_forKeyedSubscript__0269d248,local_20,&cf_GroupInfo);
    puVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setM_dicForwardParas__026a4180);
    if (((ulong)puVar1 & 1) == 0) {
      FUN_004d450c(local_18,&cf_m_dicForwardParas,local_48);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setM_dicForwardParas__026a4180,local_48);
    }
    lVar3 = local_20;
    FUN_004d34d8(local_20,&cf_createTime);
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    if (lVar3 != 0) {
      FUN_004d450c(local_18,&cf_m_uiCreateTime,lVar3);
    }
    lVar3 = local_20;
    FUN_004d34d8(local_20,&cf_sequence);
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar3;
    if (lVar3 != 0) {
      FUN_004d450c(local_18,&cf_m_sequenceId,lVar3);
    }
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
    _objc_storeStrong(&local_48,0);
    _objc_storeStrong(local_40,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

