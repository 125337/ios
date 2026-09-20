// FUN_0026d578 @ 0026d578

void FUN_0026d578(ulong param_1,undefined8 param_2)

{
  bool bVar1;
  undefined *puVar2;
  cfstringStruct *pcVar3;
  ulong uVar4;
  cfstringStruct *pcVar5;
  ulong uVar6;
  ulong local_d0;
  ulong local_90;
  ulong local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  undefined4 local_60;
  bool local_59;
  ulong local_58;
  ulong local_40;
  ulong local_38;
  undefined8 local_30;
  ulong local_28;
  
  local_30 = param_2;
  local_28 = param_1;
  (*DAT_028c9550)(param_1,param_2);
  FUN_0026e0d8();
  if ((param_1 & 1) != 0) {
    local_90 = local_28;
    FUN_0026f338(local_28,&cf_taskWrap);
    _objc_retainAutoreleasedReturnValue();
    local_59 = false;
    bVar1 = local_90 == 0;
    local_38 = local_90;
    if (bVar1) {
      local_90 = 0;
    }
    else {
      FUN_0026fbfc(local_90,PTR_s_task_026a1510);
      _objc_retainAutoreleasedReturnValue();
      local_58 = local_90;
    }
    local_59 = !bVar1;
    (*(code *)PTR__objc_retain_02578638)();
    local_40 = local_90;
    if ((local_59 & 1U) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    if (local_40 == 0) {
      local_60 = 1;
    }
    else {
      pcVar3 = &cf_AppFileMessageStateInput;
      _NSClassFromString();
      local_68 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        local_60 = 1;
      }
      else {
        _objc_alloc_init();
        uVar4 = local_40;
        local_70 = pcVar3;
        FUN_0026fbfc(local_40,PTR_s_fileExt_026a1518);
        _objc_retainAutoreleasedReturnValue();
        pcVar3 = local_70;
        local_78 = uVar4;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setFileExt__026a1520);
        if (((ulong)pcVar3 & 1) != 0) {
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setFileExt__026a1520,local_78);
        }
        pcVar3 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setTransferType__026a1528);
        if (((ulong)pcVar3 & 1) != 0) {
          uVar4 = local_40;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_40,PTR_s_respondsToSelector__026ca818,PTR_s_type_0269e6f8);
          if ((uVar4 & 1) == 0) {
            local_d0 = 0;
          }
          else {
            local_d0 = local_40;
            (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_type_0269e6f8);
          }
          (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_setTransferType__026a1528,local_d0);
        }
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setIsFail__026a1530);
        pcVar3 = local_70;
        puVar2 = PTR_s_setIsFail__026a1530;
        if (((ulong)pcVar5 & 1) != 0) {
          uVar4 = local_40;
          FUN_0026ee10(local_40,PTR_s_isFail_026a14d0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,uVar4 & 0xffffffff);
        }
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setIsPaused__026a1538);
        pcVar3 = local_70;
        puVar2 = PTR_s_setIsPaused__026a1538;
        if (((ulong)pcVar5 & 1) != 0) {
          uVar4 = local_40;
          FUN_0026ee10(local_40,PTR_s_isPaused_026a14d8);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,uVar4 & 0xffffffff);
        }
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setIsInProcess__026a1540);
        pcVar3 = local_70;
        puVar2 = PTR_s_setIsInProcess__026a1540;
        if (((ulong)pcVar5 & 1) != 0) {
          uVar4 = local_40;
          FUN_0026ee10(local_40,PTR_s_isInProcess_026a14c8);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,uVar4 & 0xffffffff);
        }
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setIsFileExist__026a1548);
        pcVar3 = local_70;
        puVar2 = PTR_s_setIsFileExist__026a1548;
        if (((ulong)pcVar5 & 1) != 0) {
          uVar4 = local_40;
          FUN_0026ee10(local_40,PTR_s_isFileExist_026a14b0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,uVar4 & 0xffffffff);
        }
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setIsFileExpired__026a1550);
        pcVar3 = local_70;
        puVar2 = PTR_s_setIsFileExpired__026a1550;
        if (((ulong)pcVar5 & 1) != 0) {
          uVar4 = local_40;
          FUN_0026ee10(local_40,PTR_s_isFileExpired_026a14e0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,uVar4 & 0xffffffff);
        }
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setEnableStatusUI__026a1558);
        pcVar3 = local_70;
        puVar2 = PTR_s_setEnableStatusUI__026a1558;
        if (((ulong)pcVar5 & 1) != 0) {
          uVar4 = local_28;
          FUN_0026ee10(local_28,PTR_s_enableStatusUI_026a14c0);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,uVar4 & 0xffffffff);
        }
        pcVar5 = local_70;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_70,PTR_s_respondsToSelector__026ca818,PTR_s_setIsSendingMsg__026a1560);
        pcVar3 = local_70;
        puVar2 = PTR_s_setIsSendingMsg__026a1560;
        if (((ulong)pcVar5 & 1) != 0) {
          uVar4 = local_28;
          FUN_0026ee10(local_28,PTR_s_isSendingMsg_026a1568);
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,puVar2,uVar4 & 0xffffffff);
        }
        uVar4 = local_28;
        pcVar3 = local_70;
        uVar6 = local_40;
        FUN_0026fbfc(local_40,PTR_s_messageWrap_0269d070);
        _objc_retainAutoreleasedReturnValue();
        FUN_0026e174(uVar4,pcVar3);
        (*(code *)PTR__objc_release_02578630)(uVar6);
        _objc_storeStrong(&local_78);
        _objc_storeStrong(&local_70,0);
        local_60 = 0;
      }
    }
    _objc_storeStrong(&local_40);
    _objc_storeStrong(&local_38,0);
  }
  return;
}

