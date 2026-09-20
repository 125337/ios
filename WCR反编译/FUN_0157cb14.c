// FUN_0157cb14 @ 0157cb14

byte FUN_0157cb14(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *local_50;
  byte local_41;
  long local_40;
  ulong local_38;
  ulong local_30;
  byte local_25;
  undefined4 local_24;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
    local_24 = 1;
  }
  else {
    local_25 = 0;
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_allowAtAll_026b07a0);
    if ((uVar1 & 1) != 0) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_allowAtAll_026b07a0);
      local_25 = (byte)uVar1;
    }
    if (((local_25 & 1) == 0) &&
       (uVar1 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)
                 (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_supportAtAll_026b07a8),
       (uVar1 & 1) != 0)) {
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_supportAtAll_026b07a8);
      local_25 = (byte)uVar1;
    }
    if ((local_25 & 1) == 0) {
      local_11 = 0;
      local_24 = 1;
    }
    else {
      local_30 = 0;
      uVar1 = local_20;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_m_tableView_026a23c0);
      if ((uVar1 & 1) != 0) {
        uVar2 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_m_tableView_026a23c0);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_30;
        local_30 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if (local_30 == 0) {
        uVar2 = local_20;
        FUN_01566074(local_20,&cf_m_tableView);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = local_30;
        local_30 = uVar2;
        (*(code *)PTR__objc_release_02578630)(uVar1);
      }
      if (((local_30 == 0) ||
          (uVar1 = local_20,
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_20,PTR_s_respondsToSelector__026ca818,
                     PTR_s_numberOfSectionsInTableView__026a2388), (uVar1 & 1) == 0)) ||
         (uVar1 = local_20,
         (*(code *)PTR__objc_msgSend_02578628)
                   (local_20,PTR_s_respondsToSelector__026ca818,
                    PTR_s_tableView_didSelectRowAtIndexPat_0269e8c0), (uVar1 & 1) == 0)) {
        local_11 = 0;
        local_24 = 1;
      }
      else {
        uVar1 = local_20;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_20,PTR_s_numberOfSectionsInTableView__026a2388,local_30);
        local_38 = uVar1;
        if ((long)uVar1 < 1) {
          local_11 = 0;
          local_24 = 1;
        }
        else {
          for (local_40 = 0; local_40 < (long)local_38; local_40 = local_40 + 1) {
            local_41 = 0;
            uVar1 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_isAtAllSection__026b07b0);
            if ((uVar1 & 1) == 0) {
              uVar1 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_respondsToSelector__026ca818,
                         PTR_s_isSupportAtAllSection__026b07b8);
              if ((uVar1 & 1) != 0) {
                uVar1 = local_20;
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_20,PTR_s_isSupportAtAllSection__026b07b8,local_40);
                local_41 = (byte)uVar1;
              }
            }
            else {
              uVar1 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_isAtAllSection__026b07b0,local_40);
              local_41 = (byte)uVar1;
            }
            if ((local_41 & 1) != 0) {
              puVar3 = PTR__OBJC_CLASS___NSIndexPath_026ce288;
              (*(code *)PTR__objc_msgSend_02578628)
                        (PTR__OBJC_CLASS___NSIndexPath_026ce288,
                         PTR_s_indexPathForRow_inSection__0269e9a0,0,local_40);
              _objc_retainAutoreleasedReturnValue();
              uVar1 = local_30;
              local_50 = puVar3;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_30,PTR_s_respondsToSelector__026ca818,
                         PTR_s_selectRowAtIndexPath_animated_sc_026af6a0);
              if ((uVar1 & 1) != 0) {
                (*(code *)PTR__objc_msgSend_02578628)
                          (local_30,PTR_s_selectRowAtIndexPath_animated_sc_026af6a0,local_50,0,0);
              }
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_tableView_didSelectRowAtIndexPat_0269e8c0,local_30,local_50)
              ;
              local_11 = 1;
              local_24 = 1;
              _objc_storeStrong(&local_50,0);
              goto LAB_0157cf54;
            }
          }
          local_11 = 0;
          local_24 = 1;
        }
      }
LAB_0157cf54:
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

