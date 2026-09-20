// ballLongPressed: @ 00904db0

/* Function Stack Size: 0x18 bytes */

void LogFloatingBall::ballLongPressed_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  long lVar2;
  undefined *puVar3;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  code *local_48;
  undefined *local_40;
  ID local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
  puVar3 = PTR___dispatch_main_q_02578680;
  if (lVar2 == 1) {
    _objc_retainAutoreleaseReturnValue(0);
    _objc_retainAutoreleasedReturnValue();
    IVar1 = local_18;
    local_58 = PTR___NSConcreteStackBlock_02578660;
    local_50 = 0xc2000000;
    local_4c = 0;
    local_48 = FUN_00904ecc;
    local_40 = &DAT_0257a800;
    (*(code *)PTR__objc_retain_02578638)();
    local_38 = IVar1;
    _dispatch_async(puVar3,&local_58);
    (*(code *)PTR__objc_release_02578630)(puVar3);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(lVar2 != 1);
  _objc_storeStrong(&local_28,0);
  return;
}

