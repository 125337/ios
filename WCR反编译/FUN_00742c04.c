// FUN_00742c04 @ 00742c04

void FUN_00742c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined8 param_6,undefined8 param_7,byte param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long local_70;
  undefined8 local_68 [3];
  byte local_49;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_34;
  long local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_40 = 0;
  local_34 = param_5;
  _objc_storeStrong(&local_40,param_6);
  local_48 = 0;
  _objc_storeStrong(&local_48,param_7);
  local_49 = param_8;
  FUN_00756560(local_18,local_30);
  uVar1 = local_48;
  (*(code *)PTR__objc_retain_02578638)();
  local_68[0] = uVar1;
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) != 0) {
    lVar4 = local_30;
    FUN_007524a8();
    _objc_retainAutoreleasedReturnValue();
    local_70 = lVar4;
    (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_length_0269cca0);
    if (lVar4 != 0) {
      _objc_storeStrong(lVar4,local_68,local_70);
    }
    _objc_storeStrong(&local_70,0);
  }
  (*DAT_028cc6d0)(local_18,local_20,local_28,local_30,local_34,local_40,local_68[0],local_49 & 1);
  FUN_00756824(local_18);
  FUN_0075701c(local_18);
  _objc_storeStrong(local_68);
  _objc_storeStrong(&local_48,0);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

