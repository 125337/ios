// FUN_007a8fac @ 007a8fac

void FUN_007a8fac(long param_1,undefined8 param_2,byte param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long local_50;
  uint local_44;
  long local_40 [3];
  byte local_21;
  undefined8 local_20;
  long local_18;
  
  local_21 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028ccb70)(param_1,param_2,param_3 & 1);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_view_026cabd8);
    _objc_retainAutoreleasedReturnValue();
    local_40[0] = lVar3;
    if (lVar3 == 0) {
      local_44 = 1;
    }
    else {
      FUN_007a9270();
      _objc_retainAutoreleasedReturnValue();
      local_50 = lVar3;
      if (lVar3 != 0) {
        FUN_007a9658(lVar3);
      }
      local_44 = (uint)(lVar3 == 0);
      _objc_storeStrong(&local_50,0);
    }
    _objc_storeStrong(local_40,0);
  }
  return;
}

