// FUN_00849bc4 @ 00849bc4

byte FUN_00849bc4(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  byte local_74;
  ulong local_48 [3];
  int local_2c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar2 = local_20;
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = uVar2;
  do {
    uVar2 = local_28;
    if (local_28 == 0) {
      local_2c = 2;
LAB_00849d90:
      _objc_storeStrong(&local_28,0);
      iVar4 = local_2c + -2;
      if (iVar4 == 0) {
        iVar4 = 1;
        local_11 = 0;
        local_2c = 1;
      }
      _objc_storeStrong(iVar4,&local_20,0);
      return local_11 & 1;
    }
    puVar1 = PTR__OBJC_CLASS___UIScrollView_026ce1a0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___UIScrollView_026ce1a0,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
    uVar3 = local_28;
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_48[0] = uVar3;
      (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isDragging_0269ddf8);
      local_74 = 1;
      if ((uVar3 & 1) == 0) {
        uVar2 = local_48[0];
        (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_isDecelerating_0269e888);
        local_74 = (byte)uVar2;
      }
      local_11 = local_74 & 1;
      local_2c = 1;
      _objc_storeStrong(local_48,0);
      goto LAB_00849d90;
    }
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_superview_026cab50);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = local_28;
    local_28 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  } while( true );
}

