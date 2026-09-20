// FUN_016ba5bc @ 016ba5bc

undefined8
FUN_016ba5bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  long local_50;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  long lVar2;
  
  local_48 = 0;
  _objc_storeStrong(&local_48,param_5);
  local_50 = 0;
  _objc_storeStrong(&local_50,param_6);
  if ((local_48 != 0) && (local_50 != 0)) {
    lVar2 = local_48;
    (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
    uVar1 = (uint)lVar2;
    _CGRectIsEmpty();
    if ((uVar1 & 1) == 0) {
      lVar2 = local_48;
      (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
      uVar1 = (uint)lVar2;
      _CGRectIsNull();
      lVar2 = local_48;
      if ((uVar1 & 1) == 0) {
        (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_bounds_026ca548);
        (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_convertRect_toView__0269ded8,local_50);
        local_40 = param_1;
        uStack_38 = param_2;
        local_30 = param_3;
        uStack_28 = param_4;
        goto LAB_016ba860;
      }
    }
  }
  uStack_38 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 8);
  local_40 = *(undefined8 *)PTR__CGRectZero_025782f0;
  uStack_28 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x18);
  local_30 = *(undefined8 *)(PTR__CGRectZero_025782f0 + 0x10);
LAB_016ba860:
  _objc_storeStrong(&local_50);
  _objc_storeStrong(&local_48,0);
  return local_40;
}

