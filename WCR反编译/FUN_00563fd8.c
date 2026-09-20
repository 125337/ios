// FUN_00563fd8 @ 00563fd8

void FUN_00563fd8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long local_58;
  uint local_50;
  undefined *local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_30 = 0;
  local_28 = param_3;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  puVar3 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_40 = puVar3;
  if ((puVar3 == (undefined *)0x0) ||
     ((*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_momentsCommentImageEnlarge_026a5238),
     ((ulong)puVar3 & 1) == 0)) {
    (*DAT_028cb528)(local_18,local_20,local_28,local_30,local_38);
    local_50 = 1;
  }
  else {
    local_58 = 0;
    lVar4 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mediaItem_026a5248);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_58;
    local_58 = lVar4;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    bVar1 = local_58 != 0;
    if (bVar1) {
      (*DAT_028cb528)(local_18,local_20,2,local_30,local_38);
    }
    else {
      (*DAT_028cb528)(local_18,local_20,local_28,local_30,local_38);
    }
    local_50 = (uint)!bVar1;
    _objc_storeStrong(&local_58,0);
  }
  _objc_storeStrong(&local_40,0);
  if (local_50 == 0) {
    local_50 = 0;
  }
  _objc_storeStrong(&local_38);
  _objc_storeStrong(&local_30,0);
  return;
}

