// FUN_0162231c @ 0162231c

void FUN_0162231c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *local_80;
  undefined *local_70;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  undefined4 local_2c;
  undefined *local_28;
  undefined *local_20;
  undefined *local_18;
  
  local_20 = (undefined *)0x0;
  _objc_storeStrong(&local_20,param_1);
  puVar1 = local_20;
  FUN_01618794();
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    local_18 = (undefined *)0x0;
    local_2c = 1;
    goto LAB_0162263c;
  }
  lVar2 = 9;
  _NSSearchPathForDirectoriesInDomains(9,1,1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar3;
  (*(code *)PTR__objc_release_02578630)(lVar2);
  lVar3 = local_38;
  (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
  if (lVar3 == 0) {
LAB_01622530:
    puVar1 = PTR_WCRefinePluginIconCatalog_026ce4e0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefinePluginIconCatalog_026ce4e0,
               PTR_s_relativeAlbumIconPathFromAbsolut_026aeea0,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_48 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
    if (puVar1 == (undefined *)0x0) {
      local_80 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_50 = local_80;
    }
    else {
      local_80 = local_48;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_80;
    if (puVar1 == (undefined *)0x0) {
      (*(code *)PTR__objc_release_02578630)(local_50);
    }
    local_2c = 1;
    _objc_storeStrong(&local_48,0);
  }
  else {
    puVar4 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_hasPrefix__0269d320,local_38);
    puVar1 = local_28;
    if (((ulong)puVar4 & 1) == 0) goto LAB_01622530;
    lVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_length_0269cca0);
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_substringFromIndex__0269d120,lVar3);
    _objc_retainAutoreleasedReturnValue();
    local_40 = puVar1;
    (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_hasPrefix__0269d320,&cf__);
    if (((ulong)puVar1 & 1) != 0) {
      puVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_substringFromIndex__0269d120,1);
      _objc_retainAutoreleasedReturnValue();
      puVar1 = local_40;
      local_40 = puVar4;
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    puVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
    if (puVar1 == (undefined *)0x0) {
      local_70 = (undefined *)0x0;
    }
    else {
      local_70 = local_40;
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_18 = local_70;
    local_2c = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_38,0);
LAB_0162263c:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

