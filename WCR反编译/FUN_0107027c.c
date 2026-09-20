// FUN_0107027c @ 0107027c

undefined8 FUN_0107027c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long local_30;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  puVar2 = PTR_WCRefineLinkParser_026ce168;
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_url_026a5a28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_cleanMediaScoreForURL__026add48);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  puVar3 = PTR_WCRefineLinkParser_026ce168;
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_url_026a5a28);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_cleanMediaScoreForURL__026add48);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (puVar2 == puVar3) {
    lVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_height_026a12d8);
    lVar4 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_height_026a12d8);
    local_18 = 0xffffffffffffffff;
    if (lVar1 < lVar4) {
      local_18 = 1;
    }
  }
  else {
    local_18 = 0xffffffffffffffff;
    if ((long)puVar2 < (long)puVar3) {
      local_18 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

