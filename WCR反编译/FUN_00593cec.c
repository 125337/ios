// FUN_00593cec @ 00593cec

void FUN_00593cec(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_58;
  ulong local_50;
  byte local_41;
  ulong local_40;
  ulong local_38;
  ulong local_30;
  undefined4 local_28;
  ulong local_18;
  ulong *puVar2;
  
  puVar2 = &local_18;
  local_18 = 0;
  _objc_storeStrong(puVar2,param_1);
  uVar1 = (uint)puVar2;
  if ((local_18 == 0) || (FUN_00588bf0(), (uVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cb62a);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar5 = local_18;
    if (uVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,&DAT_028cb62a,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar5 = local_18;
      FUN_00594210();
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar5;
      if ((uVar5 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78),
         (uVar5 & 1) == 0)) {
        _objc_setAssociatedObject(local_18,&DAT_028cb62a,0,1);
        local_28 = 1;
      }
      else {
        local_38 = 0;
        uVar5 = local_30;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_30,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionCount_026a0b70);
        if ((uVar5 & 1) != 0) {
          uVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getSectionCount_026a0b70);
          local_38 = uVar5;
        }
        if (local_38 == 0) {
          _objc_setAssociatedObject(local_18,&DAT_028cb62a,0,1);
          local_28 = 1;
        }
        else {
          uVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getSectionAt__026a0a78,0);
          _objc_retainAutoreleasedReturnValue();
          local_40 = uVar5;
          if (uVar5 == 0) {
            _objc_setAssociatedObject(local_18,&DAT_028cb62a,0,1);
            local_28 = 1;
          }
          else {
            local_41 = 0;
            FUN_00594388(uVar5,&cf__eS);
            if ((uVar5 & 1) == 0) {
              uVar5 = local_18;
              FUN_005949f0();
              _objc_retainAutoreleasedReturnValue();
              local_50 = uVar5;
              if ((uVar5 != 0) &&
                 (uVar5 = local_40,
                 (*(code *)PTR__objc_msgSend_02578628)
                           (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_addCell__0269e3f8),
                 (uVar5 & 1) != 0)) {
                (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_50);
                local_41 = 1;
              }
              _objc_storeStrong(&local_50,0);
            }
            if (((local_41 & 1) != 0) && ((DAT_028cb629 & 1) == 0)) {
              uVar5 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tableView_0269e378);
              _objc_retainAutoreleasedReturnValue();
              local_58 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400);
              if ((uVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_58,PTR_s_reloadData_0269e400);
              }
              _objc_storeStrong(&local_58,0);
            }
            _objc_setAssociatedObject(local_18,&DAT_028cb62a,0,1);
            local_28 = 0;
          }
          _objc_storeStrong(&local_40,0);
        }
      }
      _objc_storeStrong(&local_30,0);
    }
    else {
      local_28 = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

