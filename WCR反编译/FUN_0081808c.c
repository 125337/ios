// FUN_0081808c @ 0081808c

void FUN_0081808c(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_50 [3];
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  uVar1 = local_18;
  local_29 = param_4;
  (*DAT_028cd128)(local_18,local_20,local_28,param_4 & 1);
  _objc_retainAutoreleasedReturnValue();
  local_38 = uVar1;
  FUN_0080c9e4(uVar1,local_28);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_WCRefineBubbleCut_026ce9c8;
  local_50[0] = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineBubbleCut_026ce9c8,PTR_s_applyCutIfNeededToImage_assetNam_026a8c88,uVar1,
             local_28);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeStrong(local_50);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(puVar2);
  return;
}

