// FUN_0056ea68 @ 0056ea68

void FUN_0056ea68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  int iVar5;
  uint local_fc;
  ulong local_f0;
  ulong local_90;
  undefined1 local_83;
  byte local_82;
  byte local_81;
  ulong local_80;
  ulong local_78;
  byte local_69;
  ulong local_68;
  cfstringStruct *local_60;
  ulong local_58;
  int local_50;
  long local_40;
  undefined8 local_38;
  ulong local_30;
  ulong local_28;
  
  local_28 = 0;
  _objc_storeStrong(&local_28,param_1);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_2);
  local_38 = 0;
  _objc_storeStrong(&local_38,param_3);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_4);
  if (((local_28 == 0) || (local_30 == 0)) ||
     (lVar1 = local_40, (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_length_0269cca0),
     lVar1 == 0)) {
    local_50 = 1;
  }
  else {
    uVar2 = local_30;
    FUN_0056f06c(local_30,local_38);
    _objc_retainAutoreleasedReturnValue();
    pcVar3 = &cf_sendComment_hasAtFreind_;
    local_58 = uVar2;
    _NSSelectorFromString();
    uVar2 = local_28;
    local_60 = pcVar3;
    (*(code *)PTR__objc_retain_02578638)();
    local_68 = uVar2;
    while (local_68 != 0) {
      uVar2 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,local_60);
      if ((uVar2 & 1) != 0) {
        uVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_setInputDataItem__026a51f8);
        local_69 = (byte)uVar2;
        local_81 = 0;
        uVar2 = local_68;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_dataItem_026a13c8);
        if ((uVar2 & 1) == 0) {
          local_f0 = 0;
        }
        else {
          local_f0 = local_68;
          (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_dataItem_026a13c8);
          _objc_retainAutoreleasedReturnValue();
          local_81 = 1;
          local_80 = local_f0;
        }
        (*(code *)PTR__objc_retain_02578638)();
        local_78 = local_f0;
        if ((local_81 & 1) != 0) {
          (*(code *)PTR__objc_release_02578630)(local_80);
        }
        local_fc = 1;
        if (local_78 != local_30) {
          uVar2 = local_78;
          (*(code *)PTR__objc_msgSend_02578628)(local_78,PTR_s_isEqual__0269e9a8,local_30);
          local_fc = (uint)uVar2;
        }
        local_82 = (byte)local_fc & 1;
        if (((local_69 & 1) == 0) && ((local_fc & 1) == 0)) {
          local_50 = 6;
        }
        else {
          if ((local_69 & 1) != 0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_68,PTR_s_setInputDataItem__026a51f8,local_30);
          }
          uVar2 = local_68;
          FUN_0056fafc(local_68,local_58);
          local_83 = (undefined1)uVar2;
          if ((uVar2 & 1) == 0) {
            local_50 = 6;
          }
          else {
            (*(code *)PTR__objc_msgSend_02578628)(local_68,local_60,local_40,0);
            uVar2 = local_68;
            FUN_0056fed8();
            _objc_retainAutoreleasedReturnValue();
            local_90 = uVar2;
            if (uVar2 != 0) {
              FUN_00570094(uVar2);
            }
            local_50 = 1;
            _objc_storeStrong(&local_90,0);
          }
        }
        _objc_storeStrong(&local_78,0);
        iVar5 = local_50 + -6;
        if (iVar5 != 0) goto LAB_0056ef2c;
      }
      uVar4 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_nextResponder_0269d0d8);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = local_68;
      local_68 = uVar4;
      (*(code *)PTR__objc_release_02578630)(uVar2);
    }
    iVar5 = 4;
    local_50 = 4;
LAB_0056ef2c:
    _objc_storeStrong(iVar5,&local_68,0);
    iVar5 = local_50 + -4;
    if (iVar5 == 0) {
      local_50 = 0;
    }
    _objc_storeStrong(iVar5,&local_58,0);
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

