// FUN_002d5fe4 @ 002d5fe4

void FUN_002d5fe4(undefined8 param_1,undefined8 param_2,uint param_3,uint param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  uint local_7c;
  uint local_50;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_50 = 1;
  if (local_18 != 0) {
    puVar1 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_50 = (uint)puVar2 ^ 1;
    (*(code *)PTR__objc_release_02578630)(puVar1);
  }
  if ((local_50 & 1) == 0) {
    local_7c = 1;
    if ((param_3 & 1) == 0) {
      uVar3 = local_18;
      FUN_002d629c(local_18,param_2);
      local_7c = (uint)uVar3;
    }
    uVar3 = local_18;
    puVar1 = PTR__OBJC_CLASS___NSNumber_026ce038;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithUnsignedInteger__0269e4d0,param_2
              );
    _objc_retainAutoreleasedReturnValue();
    _objc_setAssociatedObject(uVar3,&DAT_028c9801,puVar1,1);
    (*(code *)PTR__objc_release_02578630)(puVar1);
    if ((((param_4 & 1) != 0) && ((local_7c & 1) != 0)) &&
       (uVar3 = local_18, FUN_002b3d00(), (uVar3 & 1) == 0)) {
      FUN_002b420c(local_18,param_2);
      FUN_002b4fe4();
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

