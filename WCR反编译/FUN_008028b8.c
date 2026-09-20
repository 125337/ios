// FUN_008028b8 @ 008028b8

void FUN_008028b8(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  char *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong local_48;
  ulong local_40;
  char *local_38;
  ulong local_30;
  undefined4 local_24;
  ulong local_20;
  ulong local_18;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_18 = 0;
    local_24 = 1;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSThread_026ce0a8;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSThread_026ce0a8,PTR_s_isMainThread_0269d1e0);
    if (((ulong)puVar1 & 1) == 0) {
      local_18 = 0;
      local_24 = 1;
    }
    else {
      uVar2 = local_20;
      _objc_getAssociatedObject(local_20,&DAT_028ccee0);
      _objc_retainAutoreleasedReturnValue();
      local_30 = uVar2;
      if (uVar2 == 0) {
        pcVar3 = "NewMainFrameViewController";
        _objc_getClass();
        local_38 = pcVar3;
        if (pcVar3 == (char *)0x0) {
          local_18 = 0;
          local_24 = 1;
        }
        else {
          uVar2 = local_20;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_dataSource_0269e800);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = local_20;
          local_40 = uVar2;
          (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_delegate_0269e808);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = local_40;
          local_48 = uVar4;
          (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isKindOfClass__0269cd68,local_38);
          uVar2 = local_40;
          if ((uVar5 & 1) == 0) {
            uVar2 = local_48;
            (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_isKindOfClass__0269cd68,local_38);
            local_18 = local_48;
            if ((uVar2 & 1) == 0) {
              local_18 = 0;
            }
            else {
              (*(code *)PTR__objc_retain_02578638)();
            }
          }
          else {
            (*(code *)PTR__objc_retain_02578638)();
            local_18 = uVar2;
          }
          local_24 = 1;
          _objc_storeStrong(&local_48);
          _objc_storeStrong(&local_40,0);
        }
      }
      else {
        (*(code *)PTR__objc_retain_02578638)();
        local_24 = 1;
        local_18 = uVar2;
      }
      _objc_storeStrong(&local_30,0);
    }
  }
  _objc_storeStrong(&local_20,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

