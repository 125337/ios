// FUN_001a43cc @ 001a43cc

void FUN_001a43cc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  uint local_84;
  long local_60;
  byte local_51;
  undefined8 local_50;
  undefined8 local_48 [3];
  long local_30;
  long local_28;
  long local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  local_28 = param_1;
  FUN_00184b18();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_30 = lVar1;
  FUN_00185074();
  _objc_retainAutoreleasedReturnValue();
  local_51 = 0;
  lVar3 = local_30;
  local_48[0] = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  lVar1 = local_30;
  uVar2 = 1;
  local_84 = 1;
  if (lVar3 != 0) {
    FUN_001998fc();
    _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    local_50 = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_isEqualToString__0269ccc8);
    local_84 = (uint)lVar1;
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_02578630)(local_50);
  }
  if ((local_84 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_48[0],PTR_s_setObject_forKeyedSubscript__0269d248,local_30,&cf_text);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_removeObjectForKey__0269d700,&cf_text);
  }
  FUN_00185270(*(undefined8 *)(param_1 + 0x20),local_48[0]);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  local_60 = param_1;
  if (param_1 != 0) {
    FUN_001a4694(param_1);
  }
  _objc_storeStrong(&local_60);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_20,0);
  return;
}

