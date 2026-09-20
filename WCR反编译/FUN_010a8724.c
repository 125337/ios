// FUN_010a8724 @ 010a8724

void FUN_010a8724(undefined8 param_1)

{
  undefined8 uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *local_48;
  cfstringStruct *local_30;
  undefined8 local_28;
  undefined8 local_20;
  long *local_18;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_18 = &DAT_028e3320;
  local_20 = 0;
  _objc_storeStrong(&local_20,&PTR___NSConcreteGlobalBlock_02585048);
  if (*local_18 + 1 != 0) {
    _dispatch_once(*local_18 + 1,local_18,local_20);
  }
  _objc_storeStrong(&local_20,0);
  pcVar2 = DAT_028e3318;
  uVar1 = local_28;
  FUN_010a6348();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_objectForKeyedSubscript__0269d098);
  _objc_retainAutoreleasedReturnValue();
  local_30 = pcVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  pcVar2 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_48 = &cf_vQN;
  }
  else {
    local_48 = local_30;
  }
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  _objc_autoreleaseReturnValue(local_48);
  return;
}

