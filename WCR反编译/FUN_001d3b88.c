// FUN_001d3b88 @ 001d3b88

undefined8
FUN_001d3b88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  long lVar1;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_38 = 0;
  _objc_storeStrong(&local_38,param_5);
  lVar1 = local_38;
  if (local_38 == 0) {
    uStack_28 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 8);
    local_30 = *(undefined8 *)PTR__CGRectNull_025782e8;
    uStack_18 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x18);
    local_20 = *(undefined8 *)(PTR__CGRectNull_025782e8 + 0x10);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_38,PTR_s_bounds_026ca548);
    (*(code *)PTR__objc_msgSend_02578628)(lVar1,PTR_s_convertRect_toView__0269ded8,0);
    local_30 = param_1;
    uStack_28 = param_2;
    local_20 = param_3;
    uStack_18 = param_4;
  }
  _objc_storeStrong(&local_38,0);
  return local_30;
}

