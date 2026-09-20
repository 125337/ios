// saveBookmarks: @ 015b45a4

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackStore::saveBookmarks_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  ulong uVar3;
  ID IVar4;
  ulong local_58;
  ulong local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureRootDirectoryExists__026a3c70,0);
  uVar3 = local_28;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_isKindOfClass__0269cd68,puVar2);
  if ((uVar3 & 1) == 0) {
    local_58 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  else {
    local_58 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  IVar4 = local_18;
  local_30 = local_58;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(IVar4);
  uVar3 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_mutableCopy_0269d8a0);
  uVar1 = DAT_028e3b20;
  DAT_028e3b20 = uVar3;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_sync_exit(IVar4);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  uVar3 = local_30;
  IVar4 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_bookmarksFilePath_026b0c90);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(uVar3,PTR_s_writeToFile_atomically__0269f928,IVar4,1);
  (*(code *)PTR__objc_release_02578630)(IVar4);
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

