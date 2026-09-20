// _WCRSideloadShareFixAppendProbe @ 01506b28

void _WCRSideloadShareFixAppendProbe(undefined8 param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_60;
  undefined *local_58;
  undefined *local_50;
  undefined *local_48;
  undefined *local_40;
  undefined **local_38;
  undefined *local_30;
  undefined **local_28;
  undefined4 local_1c;
  long local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  lVar1 = local_18;
  _objc_msgSend(local_18,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_1c = 1;
  }
  else {
    ppuVar2 = &PTR___tlv_bootstrap_028c7968;
    (*(code *)PTR___tlv_bootstrap_028c7968)();
    if (((ulong)*ppuVar2 & 1) == 0) {
      ppuVar2 = &PTR___tlv_bootstrap_028c7968;
      (*(code *)PTR___tlv_bootstrap_028c7968)();
      *(undefined1 *)ppuVar2 = 1;
      FUN_01506f40();
      _objc_retainAutoreleasedReturnValue();
      local_28 = ppuVar2;
      _objc_msgSend(ppuVar2,PTR_s_path_0269d4d8);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar2;
      _objc_msgSend();
      _objc_release(ppuVar2);
      if (ppuVar3 == (undefined **)0x0) {
        ppuVar2 = &PTR___tlv_bootstrap_028c7968;
        (*(code *)PTR___tlv_bootstrap_028c7968)();
        *(undefined1 *)ppuVar2 = 0;
        local_1c = 1;
      }
      else {
        puVar4 = PTR__OBJC_CLASS___NSFileManager_026ce158;
        _objc_msgSend(PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = local_28;
        local_30 = puVar4;
        _objc_msgSend(local_28,PTR_s_URLByDeletingLastPathComponent_026af050);
        _objc_retainAutoreleasedReturnValue();
        local_38 = ppuVar2;
        _objc_msgSend(local_30,PTR_s_createDirectoryAtURL_withInterme_026aafa0,ppuVar2,1,0);
        puVar4 = local_30;
        ppuVar2 = local_28;
        _objc_msgSend(local_28,PTR_s_path_0269d4d8);
        _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(puVar4,PTR_s_attributesOfItemAtPath_error__0269db08,ppuVar2,0);
        _objc_retainAutoreleasedReturnValue();
        local_40 = puVar4;
        _objc_release(ppuVar2);
        puVar4 = local_40;
        _objc_msgSend(local_40,PTR_s_fileSize_026a1640);
        if ((undefined *)0x14000 < puVar4) {
          _objc_msgSend(local_30,PTR_s_removeItemAtURL_error__026a7188,local_28,0);
        }
        puVar4 = PTR__OBJC_CLASS___NSDate_026cdf88;
        _objc_msgSend(PTR__OBJC_CLASS___NSDate_026cdf88,PTR_s_date_0269cb48);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        _objc_msgSend();
        _objc_retainAutoreleasedReturnValue();
        local_48 = puVar5;
        _objc_release(puVar4);
        puVar5 = PTR__OBJC_CLASS___NSString_026cdfe8;
        _objc_msgSend(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,&cf_____)
        ;
        _objc_retainAutoreleasedReturnValue();
        local_50 = puVar5;
        _objc_msgSend(puVar5,PTR_s_dataUsingEncoding__026a12e8,4);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = local_30;
        ppuVar2 = local_28;
        local_58 = puVar5;
        _objc_msgSend(local_28,PTR_s_path_0269d4d8);
        _objc_retainAutoreleasedReturnValue();
        _objc_msgSend(puVar4,PTR_s_fileExistsAtPath__026ca630);
        _objc_release(ppuVar2);
        if (((ulong)puVar4 & 1) == 0) {
          _objc_msgSend(local_58,PTR_s_writeToURL_atomically__026aff20,local_28,1);
        }
        else {
          puVar4 = PTR__OBJC_CLASS___NSFileHandle_026cea88;
          _objc_msgSend(PTR__OBJC_CLASS___NSFileHandle_026cea88,
                        PTR_s_fileHandleForWritingToURL_error__026aff28,local_28,0);
          _objc_retainAutoreleasedReturnValue();
          local_60 = puVar4;
          if (puVar4 != (undefined *)0x0) {
            _objc_msgSend(puVar4,PTR_s_seekToEndOfFile_026aa430);
            _objc_msgSend(local_60,PTR_s_writeData__026aa438,local_58);
            _objc_msgSend(local_60,PTR_s_closeFile_026aa440);
          }
          _objc_storeStrong(&local_60,0);
        }
        ppuVar2 = &PTR___tlv_bootstrap_028c7968;
        (*(code *)PTR___tlv_bootstrap_028c7968)();
        *(undefined1 *)ppuVar2 = 0;
        _objc_storeStrong(&local_58);
        _objc_storeStrong(&local_50,0);
        _objc_storeStrong(&local_48,0);
        _objc_storeStrong(&local_40,0);
        _objc_storeStrong(&local_38,0);
        _objc_storeStrong(&local_30,0);
        local_1c = 0;
      }
      _objc_storeStrong(&local_28,0);
    }
    else {
      local_1c = 1;
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

