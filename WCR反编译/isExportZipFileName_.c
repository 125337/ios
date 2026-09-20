// isExportZipFileName: @ 0108addc

/* Function Stack Size: 0x18 bytes */

bool WCRefineLocalEmoticonStore::isExportZipFileName_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_11 = 0;
    local_34 = 1;
  }
  else {
    lVar1 = local_30;
    (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_lastPathComponent_026ca780);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    _objc_retainAutoreleasedReturnValue();
    local_40 = lVar2;
    (*(code *)PTR__objc_release_02578630)(lVar1);
    lVar1 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_hasPrefix__0269d320,&::cf_W);
    local_11 = (byte)lVar1 & 1;
    local_34 = 1;
    _objc_storeStrong(&local_40,0);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

