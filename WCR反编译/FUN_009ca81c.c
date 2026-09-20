// FUN_009ca81c @ 009ca81c

void FUN_009ca81c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),local_20,local_28);
    }
    else {
      lVar2 = *(long *)(param_1 + 0x20);
      puVar1 = PTR_WCRefineAIStore_026ce048;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineAIStore_026ce048,PTR_s_plainTextByStrippingMarkdown__0269d258,local_20)
      ;
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar2 + 0x10))(lVar2,puVar1,local_28);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

