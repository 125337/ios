// FUN_0107c5d4 @ 0107c5d4

byte FUN_0107c5d4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  byte local_34;
  undefined *local_30;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (uVar1 < 3) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    puVar2 = PTR_WCRefineLocalEmoticonStore_026ce440;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_extensionForData__026ac368,local_20);
    _objc_retainAutoreleasedReturnValue();
    local_30 = puVar2;
    (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_isEqualToString__0269ccc8,&cf_gif);
    local_34 = 1;
    if (((ulong)puVar2 & 1) == 0) {
      puVar2 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_png);
      local_34 = 1;
      if (((ulong)puVar2 & 1) == 0) {
        puVar2 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_isEqualToString__0269ccc8,&cf_jpg);
        local_34 = (byte)puVar2;
      }
    }
    local_11 = local_34 & 1;
    local_24 = 1;
    _objc_storeStrong(&local_30,0);
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

