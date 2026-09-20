// prepareBrowseIndexMutation @ 010bacc4

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsMonitor::prepareBrowseIndexMutation(ID param_1,SEL param_2)

{
  undefined *puVar1;
  
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_readBrowseIndexIfNeeded_026ae680);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setSortedBrowseRecords__026ae6c0);
  puVar1 = PTR__OBJC_CLASS___NSFileManager_026ce158;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSFileManager_026ce158,PTR_s_defaultManager_026ca5f0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_browseIndexPath_026ae6b0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)(puVar1,PTR_s_removeItemAtPath_error__0269f910,param_1,0);
  (*(code *)PTR__objc_release_02578630)(param_1);
  (*(code *)PTR__objc_release_02578630)(puVar1);
  return;
}

