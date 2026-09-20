// FUN_0025e378 @ 0025e378

void FUN_0025e378(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined *local_78;
  undefined *local_48 [3];
  undefined *local_30;
  undefined *local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  ppuVar1 = &local_28;
  local_28 = (undefined *)0x0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(ppuVar1,param_3);
  puVar2 = PTR_WCRefineEmoticonToolsHelper_026ce448;
  FUN_00261a28();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fullExternXmlIfNeededForUploadWr_026a11f0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar2;
  (*(code *)PTR__objc_release_02578630)(ppuVar1);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar2 == (undefined *)0x0) {
    local_78 = local_28;
  }
  else {
    local_78 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = local_78;
  (*DAT_028c9408)(local_18,local_20,local_78);
  puVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (puVar2 != (undefined *)0x0) {
    FUN_00261cc0(puVar2,local_18);
  }
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

