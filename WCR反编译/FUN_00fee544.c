// FUN_00fee544 @ 00fee544

void FUN_00fee544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *local_48;
  ulong local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_24;
  long local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_3);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_4);
  if ((local_18 == 0) || (local_20 == 0)) {
    local_24 = 1;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_locationInView__026ca798,0);
    uVar1 = local_18;
    local_38 = param_1;
    local_30 = param_2;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setPointInScreen__026ad558);
    if ((uVar1 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,local_30,local_18,PTR_s_setPointInScreen__026ad558);
    }
    uVar1 = local_18;
    FUN_00fec84c();
    _objc_retainAutoreleasedReturnValue();
    local_40 = uVar1;
    (*(code *)PTR__objc_msgSend_02578628)
              (uVar1,PTR_s_respondsToSelector__026ca818,PTR_s_onTouchMoveWithTouches__026a9c48);
    if ((uVar1 & 1) != 0) {
      puVar2 = PTR__OBJC_CLASS___NSSet_026ce150;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSSet_026ce150,PTR_s_setWithObject__026ad5c8,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_48 = puVar2;
      _objc_storeStrong(&DAT_028e30c8,puVar2);
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_onTouchMoveWithTouches__026a9c48,local_48);
      _objc_storeStrong(&local_48,0);
    }
    _objc_storeStrong(&local_40,0);
    local_24 = 0;
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

