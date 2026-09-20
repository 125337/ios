// FUN_00057ce8 @ 00057ce8

void FUN_00057ce8(undefined8 param_1)

{
  ulong uVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *local_68;
  undefined *local_60;
  cfstringStruct *local_58;
  byte local_49;
  ulong local_48;
  undefined4 local_3c;
  ulong local_38;
  ulong local_20;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  FUN_00057b64(local_18,&cf_m_dataItem);
  _objc_retainAutoreleasedReturnValue();
  local_20 = uVar1;
  FUN_000585f8();
  local_38 = uVar1;
  if (((uVar1 == 0) || (FUN_0004bf04(), (uVar1 & 1) == 0)) ||
     (uVar1 = local_38, FUN_00053958(), (uVar1 & 1) == 0)) {
    local_3c = 1;
  }
  else {
    uVar1 = local_18;
    FUN_000586e8(local_18,local_20,local_38);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_18;
      FUN_00058fc4(local_18,local_20);
      _objc_retainAutoreleasedReturnValue();
      local_48 = uVar1;
      FUN_00059540();
      if ((uVar1 & 1) == 0) {
        local_3c = 1;
      }
      else {
        local_49 = 0;
        uVar1 = local_18;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_StartDownload_0269daf0);
        if ((uVar1 & 1) != 0) {
          uVar1 = local_18;
          (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_StartDownload_0269daf0);
          local_49 = (byte)uVar1;
        }
        if (((local_49 & 1) == 0) && (((uint)local_38 >> 2 & 1) != 0)) {
          pcVar2 = &cf_RecordFileDetailLogicController;
          _NSClassFromString();
          local_60 = PTR_s_initWithRecordDataWrap__0269daf8;
          local_58 = pcVar2;
          if ((pcVar2 != (cfstringStruct *)0x0) &&
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar2,PTR_s_instancesRespondToSelector__0269da90,
                         PTR_s_initWithRecordDataWrap__0269daf8), ((ulong)pcVar2 & 1) != 0)) {
            pcVar2 = local_58;
            _objc_alloc();
            pcVar3 = pcVar2;
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,local_60,local_18);
            _objc_retainAutoreleasedReturnValue();
            local_68 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            if ((local_68 != (cfstringStruct *)0x0) &&
               (pcVar2 = local_68,
               (*(code *)PTR__objc_msgSend_02578628)
                         (local_68,PTR_s_respondsToSelector__026ca818,PTR_s_startDownload_0269dac0),
               ((ulong)pcVar2 & 1) != 0)) {
              FUN_00056658(local_68);
              (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_startDownload_0269dac0);
              local_49 = 1;
            }
            _objc_storeStrong(&local_68,0);
          }
        }
        local_3c = 0;
      }
      _objc_storeStrong(&local_48,0);
    }
    else {
      local_3c = 1;
    }
  }
  _objc_storeStrong(&local_20);
  _objc_storeStrong(&local_18,0);
  return;
}

