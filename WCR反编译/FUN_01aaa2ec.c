// FUN_01aaa2ec @ 01aaa2ec

void FUN_01aaa2ec(undefined8 param_1)

{
  long lVar1;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_textLabel_0269fd00);
    _objc_retainAutoreleasedReturnValue();
    FUN_01acccc4(0x4031000000000000);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_detailTextLabel_0269fd08);
    _objc_retainAutoreleasedReturnValue();
    FUN_01acccc4(0x402e000000000000);
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

