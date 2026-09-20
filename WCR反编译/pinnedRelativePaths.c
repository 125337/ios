// pinnedRelativePaths @ 015b57c4

/* Function Stack Size: 0x10 bytes */

ID WCRefineVoicePackStore::pinnedRelativePaths(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadBookmarksMutable_026b0c98);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_normalizedPathList__026b0ca0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)(IVar2);
  (*(code *)PTR__objc_release_02578630)(IVar1);
  _objc_autoreleaseReturnValue();
  return param_1;
}

