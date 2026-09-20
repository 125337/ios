// FUN_017abe1c @ 017abe1c

void FUN_017abe1c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,byte param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 local_38;
  byte local_29;
  undefined8 local_28;
  undefined8 local_20;
  undefined1 *local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_38 = 0;
  local_29 = param_4;
  _objc_storeStrong(&local_38,param_5);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) != 0) {
    puVar3 = local_18;
    FUN_017b772c(local_18,"_bIsScanFromAlbumImage");
    *puVar3 = 0;
  }
  (*DAT_028e4188)(local_18,local_20,local_28,local_29 & 1,local_38);
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_28,0);
  return;
}

