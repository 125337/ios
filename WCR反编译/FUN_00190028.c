// FUN_00190028 @ 00190028

byte FUN_00190028(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong local_20;
  bool local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar2);
  if (((ulong)puVar3 & 1) == 0 || param_3 < 1) {
    local_11 = false;
  }
  else {
    bVar1 = false;
    uVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,
               PTR_s_ConvertToNormalContactSection__0269fce0);
    if ((uVar4 & 1) != 0) {
      uVar4 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_ConvertToNormalContactSection__0269fce0,param_2);
      bVar1 = -1 < (long)uVar4;
    }
    local_11 = bVar1;
    if ((!bVar1) && (uVar4 = local_20, FUN_00191e20(local_20,param_2), (uVar4 & 1) != 0)) {
      local_11 = true;
    }
    if (((local_11 == false) && (0 < param_2)) && (1 < param_3)) {
      local_11 = true;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

