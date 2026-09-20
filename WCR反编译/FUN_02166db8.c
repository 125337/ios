// FUN_02166db8 @ 02166db8

void FUN_02166db8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long local_48;
  long local_40;
  long local_38;
  undefined8 local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_20;
  local_38 = param_1;
  local_30 = param_4;
  FUN_01fd868c();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = local_28;
  local_40 = lVar1;
  FUN_01fe53e4();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = local_40;
  local_48 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0);
  if ((lVar1 != 0) && (local_48 != 0)) {
    (*(code *)PTR__objc_msgSend_02578628)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,local_48,
               local_40);
  }
  _objc_storeStrong(&local_48);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_20,0);
  return;
}

