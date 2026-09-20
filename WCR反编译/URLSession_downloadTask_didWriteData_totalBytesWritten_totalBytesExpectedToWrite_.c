// URLSession:downloadTask:didWriteData:totalBytesWritten:totalBytesExpectedToWrite: @ 01013388

/* Function Stack Size: 0x38 bytes */

void WCRLinkMediaDownloader::
     URLSession_downloadTask_didWriteData_totalBytesWritten_totalBytesExpectedToWrite_
               (ID param_1,SEL param_2,ID param_3,ID param_4,long_long param_5,long_long param_6,
               long_long param_7)

{
  double dVar1;
  ID IVar2;
  double local_b8;
  double local_58;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  dVar1 = DAT_02323ec0;
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  IVar2 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_progress_026a6d78);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (IVar2 != 0) {
    if ((long)param_7 < 1) {
      local_b8 = DAT_02323c88 + (double)(long)param_6 / 41943040.0;
      if (0.85 < local_b8) {
        local_b8 = 0.85;
      }
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_progress_026a6d78);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(IVar2 + 0x10))(local_b8);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
    else {
      local_58 = (double)(long)param_6 / (double)(long)param_7;
      if (dVar1 < local_58) {
        local_58 = dVar1;
      }
      IVar2 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_progress_026a6d78);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(IVar2 + 0x10))(local_58);
      (*(code *)PTR__objc_release_02578630)(IVar2);
    }
  }
  _objc_storeStrong(&local_30);
  _objc_storeStrong(&local_28,0);
  return;
}

