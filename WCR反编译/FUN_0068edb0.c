// FUN_0068edb0 @ 0068edb0

void FUN_0068edb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long local_50;
  undefined4 local_48;
  long local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  local_28 = 0;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  local_38 = param_1;
  local_30 = param_4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectForKeyedSubscript__0269d098,local_28);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_0068b784();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar2);
  (*(code *)PTR__objc_release_02578630)(lVar1);
  if (lVar3 == 0) {
    lVar1 = *(long *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectForKeyedSubscript__0269d098,local_20);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    FUN_0068b784();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    FUN_0067d82c();
    _objc_retainAutoreleasedReturnValue();
    local_50 = lVar3;
    (*(code *)PTR__objc_release_02578630)(lVar2);
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar2 = local_50;
    (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
    if (lVar2 != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (*(undefined8 *)(param_1 + 0x20),PTR_s_setObject_forKeyedSubscript__0269d248,
                 local_50,local_28);
    }
    _objc_storeStrong(&local_50,0);
    local_48 = 0;
  }
  else {
    local_48 = 1;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return;
}

