// FUN_000114a8 @ 000114a8

void FUN_000114a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long local_98;
  long local_58;
  long local_48;
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_2);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_20,PTR_s_objectForKeyedSubscript__0269d098,_WCRAISessionPreset);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_0001a2e4();
  _objc_retainAutoreleasedReturnValue();
  local_30 = lVar2;
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_48 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_systemPrompt_0269d0c8);
    _objc_retainAutoreleasedReturnValue();
    local_98 = local_48;
    FUN_0001a2e4();
    _objc_retainAutoreleasedReturnValue();
    local_58 = local_98;
  }
  else {
    local_98 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_18 = local_98;
  if (lVar1 == 0) {
    (*(code *)PTR__objc_release_02578630)(local_58);
    (*(code *)PTR__objc_release_02578630)(local_48);
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

