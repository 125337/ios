// FUN_00191a24 @ 00191a24

undefined8 FUN_00191a24(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_30;
  ulong local_28;
  long local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_1;
  _objc_storeStrong(&local_28);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_3);
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_ts);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar1 = (uint)uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_ts);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  uVar2 = (uint)uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (*(long *)(param_1 + 0x20) == 1) {
    if (uVar1 < uVar2) {
      local_18 = 0xffffffffffffffff;
      goto LAB_00191dcc;
    }
    if (uVar2 < uVar1) {
      local_18 = 1;
      goto LAB_00191dcc;
    }
  }
  else {
    if (uVar2 < uVar1) {
      local_18 = 0xffffffffffffffff;
      goto LAB_00191dcc;
    }
    if (uVar1 < uVar2) {
      local_18 = 1;
      goto LAB_00191dcc;
    }
  }
  uVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_objectForKeyedSubscript__0269d098,&cf_idx);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_objectForKeyedSubscript__0269d098,&cf_idx);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(uVar3);
  if (uVar4 < uVar5) {
    local_18 = 0xffffffffffffffff;
  }
  else if (uVar5 < uVar4) {
    local_18 = 1;
  }
  else {
    local_18 = 0;
  }
LAB_00191dcc:
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return local_18;
}

