// chatAgentReplyStyle @ 009b8b88

/* Function Stack Size: 0x10 bytes */

long_long WCRefineAIStore::chatAgentReplyStyle(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_30;
  SEL local_28;
  ID local_20;
  undefined1 *local_18;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_objectForKey__0269e048,&cf_WCRAIChatAgentReplyStyleV1);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (puVar1 == (undefined1 *)0x0) {
    puVar2 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_objectForKey__0269e048,&cf_WCRAIChatAgentQuoteReplyV1);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    if (puVar2 == (undefined1 *)0x0) {
      local_18 = (undefined1 *)0x0;
    }
    else {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_30,PTR_s_boolForKey__0269f3d8,&cf_WCRAIChatAgentQuoteReplyV1);
      iVar3 = 0;
      if (((ulong)puVar2 & 1) == 0) {
        iVar3 = 2;
      }
      local_18 = (undefined1 *)(long)iVar3;
    }
  }
  else {
    local_78 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_30,PTR_s_integerForKey__026a9600,&cf_WCRAIChatAgentReplyStyleV1);
    if (2 < (long)local_78) {
      local_78 = (undefined1 *)((long)&MACH_HEADER.magic + 2);
    }
    if ((long)local_78 < 1) {
      local_80 = (undefined1 *)0x0;
    }
    else {
      local_80 = local_78;
    }
    local_18 = local_80;
  }
  _objc_storeStrong(&local_30,0);
  return (long_long)local_18;
}

