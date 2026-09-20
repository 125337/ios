// metadataBytesForWrap:kind: @ 00eaf320

/* Function Stack Size: 0x20 bytes */

unsigned_long_long
WCRefineAutoDownloadQuotaHelper::metadataBytesForWrap_kind_
          (ID param_1,SEL param_2,ID param_3,unsigned_long_long param_4)

{
  unsigned_long_long uVar1;
  unsigned_long_long uVar2;
  unsigned_long_long uVar3;
  undefined *puVar4;
  unsigned_long_long local_a0;
  SEL local_98;
  ID local_90;
  unsigned_long_long local_88;
  cfstringStruct *local_80;
  cfstringStruct *local_78;
  cfstringStruct *local_70;
  cfstringStruct *local_68;
  cfstringStruct *local_60;
  cfstringStruct *local_58;
  cfstringStruct *local_50;
  cfstringStruct *local_48;
  cfstringStruct *local_40;
  cfstringStruct *local_38;
  cfstringStruct *local_30;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  local_a0 = 0;
  local_98 = param_2;
  local_90 = param_1;
  _objc_storeStrong(&local_a0,param_3);
  if (local_a0 == 0) {
    local_88 = 0;
  }
  else {
    uVar1 = local_a0;
    (*(code *)PTR__objc_msgSend_02578628)(local_a0,PTR_s_valueForKey__0269d128,&cf_m_nsContent);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_00eae708();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    FUN_00eaf7c4();
    (*(code *)PTR__objc_release_02578630)(uVar2);
    (*(code *)PTR__objc_release_02578630)(uVar1);
    uVar1 = local_a0;
    if ((param_4 & 1) == 0) {
      if (((uint)param_4 >> 1 & 1) == 0) {
        if (((uint)param_4 >> 2 & 1) == 0) {
          local_88 = uVar3;
          if (uVar3 == 0) {
            local_88 = 0;
          }
        }
        else {
          local_80 = &cf_m_uiAppDataLen;
          local_78 = &cf_m_uiAppMsgLen;
          local_70 = &cf_m_uiAttachSize;
          puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
          (*(code *)PTR__objc_msgSend_02578628)
                    (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                     &local_80,3);
          _objc_retainAutoreleasedReturnValue();
          FUN_00eafa58();
          (*(code *)PTR__objc_release_02578630)(puVar4);
          local_88 = uVar1;
          if ((uVar1 == 0) && (local_88 = uVar3, uVar3 == 0)) {
            local_88 = 0x100000;
          }
        }
      }
      else {
        local_68 = &cf_m_uiRawFileLength;
        local_60 = &cf_m_uiVideoLen;
        local_58 = &cf_m_uiVideoTotalLen;
        local_50 = &cf_m_uiRawVideoLen;
        puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
        (*(code *)PTR__objc_msgSend_02578628)
                  (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,
                   &local_68,4);
        _objc_retainAutoreleasedReturnValue();
        FUN_00eafa58();
        (*(code *)PTR__objc_release_02578630)(puVar4);
        local_88 = uVar1;
        if ((uVar1 == 0) && (local_88 = uVar3, uVar3 == 0)) {
          local_88 = 0x500000;
        }
      }
    }
    else {
      local_48 = &cf_m_uiHDImgSize;
      local_40 = &cf_m_uiImgTotalLen;
      local_38 = &cf_m_uiImgLen;
      local_30 = &cf_m_uiRawImgLen;
      puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_48
                 ,4);
      _objc_retainAutoreleasedReturnValue();
      FUN_00eafa58();
      (*(code *)PTR__objc_release_02578630)(puVar4);
      local_88 = uVar1;
      if ((uVar1 == 0) && (local_88 = uVar3, uVar3 == 0)) {
        local_88 = 0x4b000;
      }
    }
  }
  _objc_storeStrong(&local_a0,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return local_88;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

