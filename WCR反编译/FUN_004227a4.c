// FUN_004227a4 @ 004227a4

void FUN_004227a4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long local_58;
  undefined *local_50;
  uint local_44;
  long local_40 [3];
  long local_28;
  long local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  lVar1 = local_18;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_20;
  local_28 = lVar1;
  FUN_0040494c();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_28;
  local_40[0] = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (((lVar1 == 0) ||
      (lVar1 = local_40[0], (*(code *)PTR__objc_msgSend_02578628)(local_40[0],PTR_s_length_0269cca0)
      , lVar1 == 0)) ||
     (puVar3 = PTR_WCRefineHelper_026ce000,
     (*(code *)PTR__objc_msgSend_02578628)
               (PTR_WCRefineHelper_026ce000,PTR_s_isOfficialAccountOrBrandUserName_0269d4e8,
                local_40[0]), ((ulong)puVar3 & 1) != 0)) {
    local_44 = 1;
  }
  else {
    puVar3 = PTR_WCRefineConfig_026cdf58;
    (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
    _objc_retainAutoreleasedReturnValue();
    lVar1 = local_28;
    local_50 = puVar3;
    FUN_00416224(local_28,puVar3);
    _objc_retainAutoreleasedReturnValue();
    local_58 = lVar1;
    if (lVar1 == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_28,
                 local_40[0]);
      FUN_00415f58(local_40[0],local_28);
    }
    else {
      FUN_0041694c(lVar1,local_40[0],0,0);
    }
    local_44 = (uint)(lVar1 != 0);
    _objc_storeStrong(&local_58);
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(local_40);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

