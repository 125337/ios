// FUN_00fafe18 @ 00fafe18

void FUN_00fafe18(long param_1)

{
  undefined *puVar1;
  long lVar2;
  cfstringStruct *pcVar3;
  cfstringStruct *pcVar4;
  cfstringStruct *local_188;
  cfstringStruct *local_168;
  undefined8 local_108;
  cfstringStruct *local_d8;
  cfstringStruct *local_d0;
  cfstringStruct *local_c8;
  byte local_b9;
  cfstringStruct *local_b8;
  cfstringStruct *local_b0;
  byte local_a1;
  cfstringStruct *local_a0;
  cfstringStruct *local_98;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  byte local_59;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined *local_38;
  long local_30;
  long local_28;
  
  puVar1 = PTR__OBJC_CLASS___NSData_026ce1d0;
  local_30 = param_1;
  local_28 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSData_026ce1d0,PTR_s_dataWithContentsOfFile__0269e0b8,
             *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  local_38 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_length_0269cca0);
  if (puVar1 == (undefined *)0x0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
    local_48 = 1;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x28);
    local_59 = 0;
    (*(code *)PTR__objc_msgSend_02578628)(lVar2,PTR_s_length_0269cca0);
    if (lVar2 == 0) {
      local_108 = *(undefined8 *)(param_1 + 0x20);
      (*(code *)PTR__objc_msgSend_02578628)(local_108,PTR_s_lastPathComponent_026ca780);
      _objc_retainAutoreleasedReturnValue();
      local_59 = 1;
      local_58 = local_108;
    }
    else {
      local_108 = *(undefined8 *)(param_1 + 0x28);
    }
    (*(code *)PTR__objc_retain_02578638)();
    local_50 = local_108;
    if ((local_59 & 1) != 0) {
      (*(code *)PTR__objc_release_02578630)(local_58);
    }
    pcVar3 = &cf_CMessageWrap;
    _NSClassFromString();
    pcVar4 = &cf_genFileAppMsgWithFileName_filePath_fileData_;
    local_68 = pcVar3;
    _NSSelectorFromString();
    local_70 = pcVar4;
    if ((local_68 == (cfstringStruct *)0x0) ||
       (pcVar3 = local_68,
       (*(code *)PTR__objc_msgSend_02578628)(local_68,PTR_s_respondsToSelector__026ca818,pcVar4),
       ((ulong)pcVar3 & 1) == 0)) {
      *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
      local_48 = 1;
    }
    else {
      pcVar3 = local_68;
      (*(code *)PTR__objc_msgSend_02578628)
                (local_68,local_70,local_50,*(undefined8 *)(param_1 + 0x20),local_38);
      _objc_retainAutoreleasedReturnValue();
      local_78 = pcVar3;
      if (pcVar3 == (cfstringStruct *)0x0) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
        local_48 = 1;
      }
      else {
        pcVar3 = &cf_MMServiceCenter;
        _NSClassFromString();
        pcVar4 = &cf_CContactMgr;
        local_80 = pcVar3;
        _NSClassFromString();
        local_88 = pcVar4;
        if ((local_80 == (cfstringStruct *)0x0) || (pcVar4 == (cfstringStruct *)0x0)) {
          *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
          local_48 = 1;
        }
        else {
          pcVar3 = local_80;
          (*(code *)PTR__objc_msgSend_02578628)(local_80,PTR_s_defaultCenter_026ca5e0);
          _objc_retainAutoreleasedReturnValue();
          local_a1 = 0;
          local_90 = pcVar3;
          if ((pcVar3 == (cfstringStruct *)0x0) ||
             ((*(code *)PTR__objc_msgSend_02578628)
                        (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_getService__0269d170),
             ((ulong)pcVar3 & 1) == 0)) {
            local_168 = (cfstringStruct *)0x0;
          }
          else {
            local_168 = local_90;
            (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_getService__0269d170,local_88);
            _objc_retainAutoreleasedReturnValue();
            local_a1 = 1;
            local_a0 = local_168;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_98 = local_168;
          if ((local_a1 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_a0);
          }
          local_b9 = 0;
          if ((local_98 == (cfstringStruct *)0x0) ||
             (pcVar3 = local_98,
             (*(code *)PTR__objc_msgSend_02578628)
                       (local_98,PTR_s_respondsToSelector__026ca818,PTR_s_getContactByName__0269d178
                       ), ((ulong)pcVar3 & 1) == 0)) {
            local_188 = (cfstringStruct *)0x0;
          }
          else {
            local_188 = local_98;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_98,PTR_s_getContactByName__0269d178,&cf_filehelper);
            _objc_retainAutoreleasedReturnValue();
            local_b9 = 1;
            local_b8 = local_188;
          }
          (*(code *)PTR__objc_retain_02578638)();
          local_b0 = local_188;
          if ((local_b9 & 1) != 0) {
            (*(code *)PTR__objc_release_02578630)(local_b8);
          }
          if (local_b0 == (cfstringStruct *)0x0) {
            *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
            local_48 = 1;
          }
          else {
            pcVar3 = &cf_ForwardMessageLogicController;
            _NSClassFromString();
            pcVar4 = &cf_ForwardMsg_ToContact_;
            local_c8 = pcVar3;
            _NSSelectorFromString();
            local_d0 = pcVar4;
            if (local_c8 == (cfstringStruct *)0x0) {
              *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
              local_48 = 1;
            }
            else {
              pcVar3 = local_c8;
              _objc_alloc_init();
              local_d8 = pcVar3;
              if ((pcVar3 == (cfstringStruct *)0x0) ||
                 ((*(code *)PTR__objc_msgSend_02578628)
                            (pcVar3,PTR_s_respondsToSelector__026ca818,local_d0),
                 ((ulong)pcVar3 & 1) == 0)) {
                *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0;
                local_48 = 1;
              }
              else {
                FUN_00fb0540(0x4014000000000000,local_d8);
                (*(code *)PTR__objc_msgSend_02578628)(local_d8,local_d0,local_78,local_b0);
                *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 1;
                local_48 = 0;
              }
              _objc_storeStrong(&local_d8,0);
            }
          }
          _objc_storeStrong(&local_b0);
          _objc_storeStrong(&local_98,0);
          _objc_storeStrong(&local_90,0);
        }
      }
      _objc_storeStrong(&local_78,0);
    }
    _objc_storeStrong(&local_50,0);
  }
  _objc_storeStrong(&local_38,0);
  return;
}

