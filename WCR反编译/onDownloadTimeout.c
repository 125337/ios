// onDownloadTimeout @ 0059b164

/* Function Stack Size: 0x10 bytes */

void WCRefineMomentsMediaDownloader::onDownloadTimeout(ID param_1,SEL param_2)

{
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_cancelDownloadTasks_026a5670);
  (*(code *)PTR__objc_msgSend_02578628)
            (param_1,PTR_s_completeWithSuccess_errorMessage_026a5610,0,&cf_N_e);
  return;
}

