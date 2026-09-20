// openConversationForUsername:action: @ 01601cec

/* Function Stack Size: 0x20 bytes */

void WCRQuickChatRuntime::openConversationForUsername_action_
               (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_70;
  undefined4 local_68;
  undefined4 local_64;
  code *local_60;
  undefined *local_58;
  ID local_50;
  long local_48;
  long_long local_40;
  uint local_34;
  long_long local_30;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = local_28;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (lVar3 != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    IVar2 = local_18;
    local_70 = PTR___NSConcreteStackBlock_02578660;
    local_68 = 0xc2000000;
    local_64 = 0;
    local_60 = FUN_01601e50;
    local_58 = &DAT_0257a740;
    (*(code *)PTR__objc_retain_02578638)();
    lVar1 = local_28;
    local_50 = IVar2;
    local_40 = local_30;
    (*(code *)PTR__objc_retain_02578638)();
    local_48 = lVar1;
    _dispatch_async(puVar4,&local_70);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_48);
    _objc_storeStrong(&local_50,0);
  }
  local_34 = (uint)(lVar3 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

