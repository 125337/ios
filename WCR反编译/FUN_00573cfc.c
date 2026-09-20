// FUN_00573cfc @ 00573cfc

void FUN_00573cfc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  local_20 = param_2;
  FUN_005734fc(local_18,param_2);
  _objc_retainAutoreleasedReturnValue();
  local_28 = lVar1;
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_setHidden__026ca970,1);
    (*(code *)PTR__objc_msgSend_02578628)(0,local_28,PTR_s_setAlpha__026ca860);
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_18,0);
  return;
}

