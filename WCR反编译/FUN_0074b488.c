// FUN_0074b488 @ 0074b488

undefined8 FUN_0074b488(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  double dVar3;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  lVar2 = *(long *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectForKeyedSubscript__0269d098,local_28);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  lVar2 = *(long *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  dVar3 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar1,PTR_s_objectForKeyedSubscript__0269d098,local_30);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  (*(code *)PTR__objc_release_02578630)(uVar1);
  if (dVar3 <= param_1) {
    if (param_1 <= dVar3) {
      local_18 = 0;
    }
    else {
      local_18 = 1;
    }
  }
  else {
    local_18 = 0xffffffffffffffff;
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

