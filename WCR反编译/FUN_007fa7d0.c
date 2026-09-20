// FUN_007fa7d0 @ 007fa7d0

byte FUN_007fa7d0(undefined8 param_1,ulong *param_2)

{
  ulong *puVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_c8;
  uint local_9c;
  ulong local_50;
  ulong local_48;
  char *local_40;
  char *local_38;
  undefined4 local_2c;
  ulong *local_28;
  ulong local_20;
  byte local_11;
  
  puVar1 = &local_20;
  local_20 = 0;
  _objc_storeStrong(puVar1,param_1);
  local_28 = param_2;
  if ((local_20 == 0) || (FUN_007f4368(), ((ulong)puVar1 & 1) == 0)) {
    local_11 = 0;
    local_2c = 1;
  }
  else {
    pcVar2 = "MainFrameTableView";
    _objc_getClass();
    local_38 = pcVar2;
    if ((pcVar2 == (char *)0x0) ||
       (uVar3 = local_20,
       (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar2),
       (uVar3 & 1) == 0)) {
      local_11 = 0;
      local_2c = 1;
    }
    else {
      pcVar2 = "NewMainFrameViewController";
      _objc_getClass();
      local_40 = pcVar2;
      if (pcVar2 == (char *)0x0) {
        local_11 = 0;
        local_2c = 1;
      }
      else {
        uVar3 = local_20;
        FUN_008028b8();
        _objc_retainAutoreleasedReturnValue();
        local_48 = uVar3;
        (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,local_40);
        if ((uVar3 & 1) == 0) {
          local_11 = 0;
        }
        else {
          local_50 = 0;
          uVar3 = local_48;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_48,PTR_s_respondsToSelector__026ca818,
                     PTR_s_WCRefineToDo_numberOfSectionsInT_026a89f0);
          if ((uVar3 & 1) == 0) {
            uVar3 = local_20;
            (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dataSource_0269e800);
            _objc_retainAutoreleasedReturnValue();
            local_9c = 0;
            if (uVar3 != 0) {
              uVar4 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dataSource_0269e800);
              _objc_retainAutoreleasedReturnValue();
              uVar5 = uVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              local_9c = (uint)uVar5;
              (*(code *)PTR__objc_release_02578630)(uVar4);
            }
            (*(code *)PTR__objc_release_02578630)(uVar3);
            if ((local_9c & 1) != 0) {
              uVar3 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dataSource_0269e800);
              _objc_retainAutoreleasedReturnValue();
              local_c8 = uVar3;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(uVar3);
              local_c8 = local_c8 - 1;
              if ((long)local_c8 < 1) {
                local_c8 = 0;
              }
              local_50 = local_c8;
            }
          }
          else {
            local_50 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_48,PTR_s_WCRefineToDo_numberOfSectionsInT_026a89f0,local_20);
          }
          FUN_007f51ac();
          if (local_28 != (ulong *)0x0) {
            *local_28 = local_50;
          }
          local_11 = 1;
        }
        local_2c = 1;
        _objc_storeStrong(&local_48,0);
      }
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

