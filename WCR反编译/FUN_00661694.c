// FUN_00661694 @ 00661694

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00661694(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong local_78 [4];
  ulong local_58;
  long local_50;
  long local_48;
  undefined4 local_3c;
  ulong local_38;
  long local_30 [4];
  
  local_30[3] = *(long *)PTR____stack_chk_guard_02578670;
  local_38 = 0;
  _objc_storeStrong(&local_38,param_1);
  if (local_38 == 0) {
    local_3c = 1;
  }
  else {
    local_30[1] = _UNK_02324248;
    local_30[0] = _DAT_02324240;
    for (local_48 = 0; local_48 < 2; local_48 = local_48 + 1) {
      lVar1 = local_30[local_48];
      FUN_006549cc();
      uVar2 = local_38;
      local_50 = lVar1;
      _objc_getAssociatedObject(local_38,lVar1);
      _objc_retainAutoreleasedReturnValue();
      local_58 = uVar2;
      if (uVar2 == 0) {
        local_3c = 4;
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (uVar2,PTR_s_respondsToSelector__026ca818,PTR_s_setDelegate__026ca910);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_setDelegate__026ca910,0);
        }
        uVar2 = local_58;
        puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
        (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
        if ((uVar2 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_removeFromSuperview_026ca800);
        }
        _objc_setAssociatedObject(local_38,local_50,0,1);
        local_3c = 0;
      }
      _objc_storeStrong(&local_58,0);
    }
    uVar2 = local_38;
    _objc_getAssociatedObject(local_48 + -2,local_38,&DAT_028cbc08);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___UIView_026cdfd8;
    local_78[0] = uVar2;
    (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
    (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar3);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_78[0],PTR_s_removeFromSuperview_026ca800);
      _objc_setAssociatedObject(local_38,&DAT_028cbc08,0,1);
    }
    _objc_storeStrong(local_78,0);
    local_3c = 0;
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_30[3] != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_30[3]);
  }
  return;
}

