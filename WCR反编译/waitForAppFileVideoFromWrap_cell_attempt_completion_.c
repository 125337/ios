// waitForAppFileVideoFromWrap:cell:attempt:completion: @ 00f43064

/* Function Stack Size: 0x30 bytes */

void WCRefineEmoticonToolsHelper::waitForAppFileVideoFromWrap_cell_attempt_completion_
               (ID param_1,SEL param_2,ID param_3,ID param_4,unsigned_long_long param_5,ID param_6,
               undefined4 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  dispatch_time_t dVar3;
  undefined *puVar4;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  ID local_60;
  unsigned_long_long local_58;
  undefined8 local_50;
  unsigned_long_long local_48;
  undefined8 local_40;
  undefined8 local_38;
  SEL local_30;
  ID local_28;
  
  local_38 = 0;
  local_30 = param_2;
  local_28 = param_1;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  local_50 = 0;
  local_48 = param_5;
  _objc_storeStrong(&local_50,param_6);
  dVar3 = _dispatch_time(0,500000000);
  puVar4 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_38;
  local_60 = local_28;
  (*(code *)PTR__objc_retain_02578638)();
  uVar2 = local_40;
  local_78 = uVar1;
  (*(code *)PTR__objc_retain_02578638)();
  uVar1 = local_50;
  local_70 = uVar2;
  (*(code *)PTR__objc_retain_02578638)();
  local_68 = uVar1;
  local_58 = local_48;
  _dispatch_after(dVar3,puVar4);
  (*(code *)PTR__objc_release_02578630)(puVar4);
  _objc_storeStrong(&local_68,0);
  _objc_storeStrong(&local_70,0);
  _objc_storeStrong(&local_78,0);
  _objc_storeStrong(&local_50,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_38,0);
  return;
}

