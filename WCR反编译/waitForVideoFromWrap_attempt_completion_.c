// waitForVideoFromWrap:attempt:completion: @ 00f42970

/* Function Stack Size: 0x28 bytes */

void WCRefineEmoticonToolsHelper::waitForVideoFromWrap_attempt_completion_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4,ID param_5,
               undefined4 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined8 local_58;
  undefined8 local_50;
  ID local_48;
  unsigned_long_long local_40;
  undefined8 local_38;
  unsigned_long_long local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_30 = param_4;
  _objc_storeStrong(&local_38,param_5);
  dVar3 = _dispatch_time(0,500000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = local_28;
  local_48 = local_18;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_38;
  local_58 = uVar2;
  local_40 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_50 = uVar1;
  _dispatch_after(dVar3,puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_58,0);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  return;
}

