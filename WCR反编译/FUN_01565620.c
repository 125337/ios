// FUN_01565620 @ 01565620

byte FUN_01565620(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte local_3c;
  ulong local_38;
  undefined *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    uVar1 = local_20;
    FUN_01533f64(local_20,PTR_s_isSelf_0269ff30,0);
    if ((uVar1 & 1) == 0) {
      puVar2 = PTR_WCRefineHelper_026ce000;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHelper_026ce000,PTR_s_getCurrentUserWxid_0269e148);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      FUN_01528c84();
      _objc_retainAutoreleasedReturnValue();
      local_30 = puVar3;
      (*(code *)PTR__objc_release_02578630)(puVar2);
      uVar1 = local_20;
      FUN_01528d34();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = local_30;
      local_38 = uVar1;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
      local_3c = 0;
      if (puVar2 != (undefined *)0x0) {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,local_38);
        local_3c = (byte)puVar2;
      }
      local_11 = local_3c & 1;
      local_24 = 1;
      _objc_storeStrong(&local_38);
      _objc_storeStrong(&local_30,0);
    }
    else {
      local_11 = 1;
      local_24 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

