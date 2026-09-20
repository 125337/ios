// FUN_002813d8 @ 002813d8

/* WARNING: Type propagation algorithm not settling */

byte FUN_002813d8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_48;
  undefined4 local_40;
  long local_30;
  long local_28 [2];
  byte local_11;
  
  local_28[1] = 0;
  _objc_storeStrong(local_28 + 1,param_1);
  local_28[0] = 0;
  _objc_storeStrong(local_28,param_2);
  lVar1 = local_28[0];
  FUN_00272348();
  puVar3 = PTR__OBJC_CLASS___AVURLAsset_026ce330;
  local_30 = lVar1;
  if (lVar1 == 0) {
    local_11 = 0;
    local_40 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSURL_026ce328;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSURL_026ce328,PTR_s_fileURLWithPath__0269f540,local_28[0]);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_URLAssetWithURL_options__026a1748,puVar2,0);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar3;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar3 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isPlayable_026a1750);
    local_11 = (byte)puVar3 & 1;
    local_40 = 1;
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(local_28);
  _objc_storeStrong(local_28 + 1,0);
  return local_11 & 1;
}

