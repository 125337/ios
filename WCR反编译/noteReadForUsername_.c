// noteReadForUsername: @ 01601b4c

/* Function Stack Size: 0x18 bytes */

void WCRQuickChatRuntime::noteReadForUsername_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_54;
  code *local_50;
  undefined *local_48;
  long local_40;
  ID local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  puVar4 = PTR___dispatch_main_q_02578680;
  if (lVar3 != 0) {
    _objc_retainAutoreleaseReturnValue();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_60 = PTR___NSConcreteStackBlock_02578660;
    local_58 = 0xc2000000;
    local_54 = 0;
    local_50 = FUN_01601c9c;
    local_48 = &DAT_0257a7a0;
    (*(code *)PTR__objc_retain_02578638)();
    IVar2 = local_18;
    local_40 = lVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = IVar2;
    _dispatch_async(puVar4,&local_60);
    (*(code *)PTR__objc_release_02578630)(puVar4);
    _objc_storeStrong(&local_38);
    _objc_storeStrong(&local_40,0);
  }
  local_2c = (uint)(lVar3 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

