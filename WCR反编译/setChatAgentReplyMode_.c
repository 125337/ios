// setChatAgentReplyMode: @ 009b8984

/* Function Stack Size: 0x18 bytes */

void WCRefineAIStore::setChatAgentReplyMode_(ID param_1,SEL param_2,long_long param_3)

{
  undefined *puVar1;
  long_long local_70;
  long_long local_68;
  
  puVar1 = PTR__OBJC_CLASS___NSUserDefaults_026ce338;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSUserDefaults_026ce338,PTR_s_standardUserDefaults_026cab10);
  _objc_retainAutoreleasedReturnValue();
  local_68 = param_3;
  if (2 < (long)param_3) {
    local_68 = 2;
  }
  if ((long)local_68 < 1) {
    local_70 = 0;
  }
  else {
    local_70 = local_68;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (puVar1,PTR_s_setInteger_forKey__026a9610,local_70,&cf_WCRAIChatAgentReplyModeV1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

