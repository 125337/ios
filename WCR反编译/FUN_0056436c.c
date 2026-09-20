// FUN_0056436c @ 0056436c

void FUN_0056436c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long local_58 [2];
  long local_48;
  undefined4 local_40;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  puVar1 = PTR_WCRefineConfig_026cdf58;
  local_28 = param_2;
  local_20 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = puVar1;
  if ((puVar1 == (undefined *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_momentsCommentImageEnlarge_026a5238),
     ((ulong)puVar1 & 1) == 0)) {
    lVar3 = local_20;
    (*DAT_028cb530)(local_20,local_28);
    _objc_retainAutoreleasedReturnValue();
    local_40 = 1;
    local_18 = lVar3;
  }
  else {
    local_48 = 0;
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_mediaItem_026a5248);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = local_48;
    local_48 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar3);
    if (local_48 == 0) {
      lVar3 = local_20;
      (*DAT_028cb530)(local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_40 = 1;
      local_18 = lVar3;
    }
    else {
      lVar3 = local_20;
      (*DAT_028cb530)(local_20,local_28);
      _objc_retainAutoreleasedReturnValue();
      local_58[0] = lVar3;
      (*(code *)PTR__objc_retain_02578638)();
      local_40 = 1;
      local_18 = lVar3;
      _objc_storeStrong(local_58,0);
    }
    _objc_storeStrong(&local_48,0);
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

