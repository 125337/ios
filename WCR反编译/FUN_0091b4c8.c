// FUN_0091b4c8 @ 0091b4c8

/* WARNING: Removing unreachable block (ram,0x0091b710) */
/* WARNING: Removing unreachable block (ram,0x0091b720) */
/* WARNING: Removing unreachable block (ram,0x0091b6ec) */

void FUN_0091b4c8(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *local_50;
  uint local_44;
  long local_40;
  long local_38;
  undefined *local_30;
  undefined8 local_28;
  long local_20;
  long local_18;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  local_20 = param_1;
  local_18 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_ensureNSLogLocalFilePath_026aa420);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  local_28 = uVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(param_1 + 0x28);
  local_30 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (lVar4,PTR_s_stringByAppendingString__0269d398,&cf_newline_s_);
  _objc_retainAutoreleasedReturnValue();
  local_38 = lVar4;
  (*(code *)PTR__objc_msgSend_02578628)(lVar4,PTR_s_dataUsingEncoding__026a12e8,4);
  _objc_retainAutoreleasedReturnValue();
  local_40 = lVar4;
  if (lVar4 == 0) {
    local_44 = 1;
  }
  else {
    puVar3 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_fileExistsAtPath__026ca630,local_28);
    if (((ulong)puVar3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_40,PTR_s_writeToFile_atomically__0269f928,local_28,1);
      local_44 = 1;
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSFileHandle_026cea88;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSFileHandle_026cea88,PTR_s_fileHandleForWritingAtPath__026aa428,
                 local_28);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = puVar3 != (undefined *)0x0;
      local_50 = puVar3;
      if (bVar1) {
        (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_seekToEndOfFile_026aa430);
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_writeData__026aa438,local_40);
        local_44 = 0;
        (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_closeFile_026aa440);
      }
      else {
        (*(code *)PTR__objc_msgSend_02578628)
                  (local_40,PTR_s_writeToFile_atomically__0269f928,local_28,1);
      }
      local_44 = (uint)!bVar1;
      _objc_storeStrong(!bVar1,&local_50,0);
    }
  }
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

