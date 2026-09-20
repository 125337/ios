// isWrapFullyDownloaded:kind: @ 00eafe94

/* Function Stack Size: 0x20 bytes */

bool WCRefineAutoDownloadQuotaHelper::isWrapFullyDownloaded_kind_
               (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  char *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ID IVar6;
  ID IVar7;
  char *local_70;
  undefined *local_68;
  char *local_60;
  uint local_54;
  unsigned_long_long local_50;
  ulong local_48;
  SEL local_40;
  ID local_38;
  byte local_29;
  cfstringStruct *local_28;
  cfstringStruct *local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  local_48 = 0;
  local_40 = param_2;
  local_38 = param_1;
  _objc_storeStrong(&local_48,param_3);
  local_50 = param_4;
  if (local_48 == 0) {
    local_29 = 0;
    local_54 = 1;
  }
  else if ((param_4 & 1) == 0) {
    if (((uint)param_4 >> 1 & 1) == 0) {
      if (((uint)param_4 >> 2 & 1) == 0) {
        local_29 = 0;
        local_54 = 1;
      }
      else {
        uVar5 = local_48;
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_48,PTR_s_respondsToSelector__026ca818,PTR_s_IsFileUploadingMsg_0269daa8);
        if (((uVar5 & 1) == 0) ||
           (uVar5 = local_48,
           (*(code *)PTR__objc_msgSend_02578628)(local_48,PTR_s_IsFileUploadingMsg_0269daa8),
           (uVar5 & 1) == 0)) {
          IVar6 = local_38;
          (*(code *)PTR__objc_msgSend_02578628)
                    (local_38,PTR_s_localFileBytesForWrap_kind__0269da00,local_48,local_50);
          if (IVar6 == 0) {
            local_29 = 0;
            local_54 = 1;
          }
          else {
            IVar7 = local_38;
            (*(code *)PTR__objc_msgSend_02578628)
                      (local_38,PTR_s_metadataBytesForWrap_kind__0269da08,local_48,local_50);
            if (IVar7 < 0x100001) {
              local_29 = 0x1ff < IVar6;
              local_54 = 1;
            }
            else {
              local_29 = IVar7 <= IVar6 + 0x400;
              local_54 = 1;
            }
          }
        }
        else {
          local_29 = 0;
          local_54 = 1;
        }
      }
    }
    else {
      uVar3 = local_48;
      FUN_00eb0358();
      uVar5 = local_48;
      if ((uVar3 & 1) == 0) {
        local_28 = &cf_getFormatVideoPath;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_28,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_00eb04d4();
        local_29 = (byte)uVar5 & 1;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_54 = 1;
      }
      else {
        local_20 = &cf_getRawFormatPath;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_20,1);
        _objc_retainAutoreleasedReturnValue();
        FUN_00eb04d4();
        local_29 = (byte)uVar5 & 1;
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_54 = 1;
      }
    }
  }
  else {
    pcVar1 = "CMessageWrap";
    _objc_getClass();
    local_68 = PTR_s_getJpgPathOfMsgHDImg__026ab1b8;
    local_60 = pcVar1;
    if ((pcVar1 != (char *)0x0) &&
       ((*(code *)PTR__objc_msgSend_02578628)
                  (pcVar1,PTR_s_respondsToSelector__026ca818,PTR_s_getJpgPathOfMsgHDImg__026ab1b8),
       ((ulong)pcVar1 & 1) != 0)) {
      pcVar1 = local_60;
      (*(code *)PTR__objc_msgSend_02578628)(local_60,local_68,local_48);
      _objc_retainAutoreleasedReturnValue();
      pcVar2 = pcVar1;
      FUN_00eae708();
      _objc_retainAutoreleasedReturnValue();
      local_70 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar1);
      pcVar1 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_length_0269cca0);
      if (pcVar1 != (char *)0x0) {
        pcVar2 = local_70;
        FUN_00eaf1bc(pcVar1);
        local_29 = pcVar2 != (char *)0x0;
      }
      local_54 = (uint)(pcVar1 != (char *)0x0);
      _objc_storeStrong(&local_70,0);
      if (local_54 != 0) goto LAB_00eb0308;
    }
    local_29 = 0;
    local_54 = 1;
  }
LAB_00eb0308:
  _objc_storeStrong(&local_48,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return local_29 & 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

