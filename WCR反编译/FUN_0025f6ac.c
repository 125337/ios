// FUN_0025f6ac @ 0025f6ac

void FUN_0025f6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_40;
  uint local_38;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar3);
  bVar1 = ((ulong)puVar4 & 1) != 0;
  if (bVar1) {
    local_40 = 0;
    uVar5 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_emojiInfoObj);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_40;
    local_40 = uVar5;
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineEmoticonToolsHelper_026ce448,
               PTR_s_saveEmoticonToAlbumFromEmojiInfo_026a1218,local_40);
    _objc_storeStrong(&local_40,0);
  }
  local_38 = (uint)!bVar1;
  _objc_storeStrong(&local_28,0);
  return;
}

