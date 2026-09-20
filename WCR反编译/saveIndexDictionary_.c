// saveIndexDictionary: @ 015b35f0

/* Function Stack Size: 0x18 bytes */

void WCRefineVoicePackStore::saveIndexDictionary_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  undefined *puVar3;
  ulong uVar4;
  ID IVar5;
  ulong local_68;
  ulong local_40;
  ID local_38;
  ID local_30;
  ulong local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_ensureRootDirectoryExists__026a3c70,0);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_rootAbsolutePath_026ae1f8);
  _objc_retainAutoreleasedReturnValue();
  local_30 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (IVar2,PTR_s_stringByAppendingPathComponent__026cab30,&cf__wcr_voicepack_index_plist);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = local_28;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  local_38 = IVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar4,PTR_s_isKindOfClass__0269cd68,puVar3);
  if ((uVar4 & 1) == 0) {
    local_68 = *(ulong *)PTR____NSDictionary0___02578288;
  }
  else {
    local_68 = local_28;
  }
  (*(code *)PTR__objc_retain_02578638)();
  IVar2 = local_18;
  local_40 = local_68;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_sync_enter(IVar2);
  uVar4 = local_40;
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_copy_0269d150);
  uVar1 = DAT_028e3b10;
  DAT_028e3b10 = uVar4;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  IVar5 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_copy_0269d150);
  uVar1 = DAT_028e3b18;
  DAT_028e3b18 = IVar5;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  _objc_sync_exit(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_writeToFile_atomically__0269f928,local_38,1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(&local_38,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return;
}

