// FUN_005d8d4c @ 005d8d4c

void FUN_005d8d4c(undefined8 param_1)

{
  uint uVar1;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong local_50;
  ulong local_48;
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
  if ((local_18 == 0) || (FUN_005d8714(), (uVar1 & 1) == 0)) {
    local_28 = 1;
  }
  else {
    uVar3 = local_18;
    _objc_getAssociatedObject(local_18,&DAT_028cb7d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    uVar5 = local_18;
    if (uVar3 == 0) {
      puVar4 = PTR__OBJC_CLASS___NSNumber_026ce038;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSNumber_026ce038,PTR_s_numberWithBool__0269ce60,1);
      _objc_retainAutoreleasedReturnValue();
      _objc_setAssociatedObject(uVar5,&DAT_028cb7d0,puVar4,1);
      (*(code *)PTR__objc_release_02578630)(puVar4);
      uVar5 = local_18;
      FUN_005d9250();
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar5;
      if ((uVar5 == 0) ||
         ((*(code *)PTR__objc_msgSend_02578628)
                    (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_getSectionAt__026a0a78),
         (uVar5 & 1) == 0)) {
        _objc_setAssociatedObject(local_18,&DAT_028cb7d0,0,1);
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
          _objc_setAssociatedObject(local_18,&DAT_028cb7d0,0,1);
          local_28 = 1;
        }
        else {
          uVar5 = local_30;
          (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_getSectionAt__026a0a78,0);
          _objc_retainAutoreleasedReturnValue();
          local_40 = uVar5;
          if ((uVar5 == 0) || (FUN_005d9510(), (uVar5 & 1) != 0)) {
            _objc_setAssociatedObject(local_18,&DAT_028cb7d0,0,1);
            local_28 = 1;
          }
          else {
            uVar5 = local_18;
            FUN_005d9b48();
            _objc_retainAutoreleasedReturnValue();
            local_48 = uVar5;
            if (((uVar5 != 0) &&
                (uVar5 = local_40,
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_addCell__0269e3f8),
                (uVar5 & 1) != 0)) &&
               ((*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_addCell__0269e3f8,local_48),
               (DAT_028cb7d1 & 1) == 0)) {
              uVar5 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_tableView_0269e378);
              _objc_retainAutoreleasedReturnValue();
              local_50 = uVar5;
              (*(code *)PTR__objc_msgSend_02578628)
                        (uVar5,PTR_s_respondsToSelector__026ca818,PTR_s_reloadData_0269e400);
              if ((uVar5 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_reloadData_0269e400);
              }
              _objc_storeStrong(&local_50,0);
            }
            _objc_setAssociatedObject(local_18,&DAT_028cb7d0,0,1);
            _objc_storeStrong(&local_48,0);
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

