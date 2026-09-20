// FUN_0028d398 @ 0028d398

void FUN_0028d398(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_70;
  cfstringStruct *local_28;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    pcVar2 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_localizedDescription_0269ced0);
    _objc_retainAutoreleasedReturnValue();
    local_70 = pcVar2;
    if (pcVar2 == (cfstringStruct *)0x0) {
      local_70 = &cf_N_1Y_;
    }
    FUN_00276c80(0,local_70,0);
    (*(code *)PTR__objc_release_02578630)(pcVar2);
  }
  else {
    FUN_00276dc8(local_20,&PTR___NSConcreteGlobalBlock_0257b518);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

