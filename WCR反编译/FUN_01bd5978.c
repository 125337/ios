// FUN_01bd5978 @ 01bd5978

undefined8 FUN_01bd5978(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_objectForKeyedSubscript__0269d098,local_28);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar1);
  lVar3 = *(long *)(param_1 + 0x20);
  (*(code *)PTR__objc_msgSend_02578628)(lVar3,PTR_s_objectForKeyedSubscript__0269d098,local_30);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(lVar3);
  if (lVar2 == lVar1) {
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_objectForKeyedSubscript__0269d098,local_28);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    FUN_01bc7c2c();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    (*(code *)PTR__objc_msgSend_02578628)(uVar6,PTR_s_objectForKeyedSubscript__0269d098,local_30);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    FUN_01bc7c2c();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    (*(code *)PTR__objc_msgSend_02578628)(uVar5,PTR_s_localizedCaseInsensitiveCompare__026b05e0);
    local_18 = uVar8;
    (*(code *)PTR__objc_release_02578630)(uVar7);
    (*(code *)PTR__objc_release_02578630)(uVar6);
    (*(code *)PTR__objc_release_02578630)(uVar5);
    (*(code *)PTR__objc_release_02578630)(uVar4);
  }
  else {
    local_18 = 0xffffffffffffffff;
    if (lVar2 < lVar1) {
      local_18 = 1;
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

