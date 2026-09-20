// cancelDownload @ 0059aaec

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsMediaDownloader::cancelDownload(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_timeoutTimer_026a5660);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setTimeoutTimer__026a5658,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setHasFinished__026a55f0,1);
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_progressToast_026a5608);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(IVar1);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_setProgressToast__026a5600,0);
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancelDownloadTasks_026a5670);
  return;
}

