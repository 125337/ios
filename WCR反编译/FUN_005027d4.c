// FUN_005027d4 @ 005027d4

void FUN_005027d4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  cfstringStruct *local_50;
  cfstringStruct *local_28;
  long local_20;
  cfstringStruct *local_18;
  
  local_18 = (cfstringStruct *)0x0;
  _objc_storeStrong(&local_18,param_1);
  local_20 = 0;
  _objc_storeStrong(&local_20,param_2);
  if (local_18 == (cfstringStruct *)0x0) {
    local_50 = &cf___;
  }
  else {
    local_50 = local_18;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_28 = local_50;
  (*(code *)PTR__objc_msgSend_02578628)(local_50,PTR_s_length_0269cca0);
  if ((local_50 != (cfstringStruct *)0x0) &&
     (lVar1 = local_20, (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0),
     lVar1 != 0)) {
    FUN_00502a6c(local_28);
    DAT_028caf12 = 1;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_sendMsg_toContactUsrName__0269d3f0,local_28,
               local_20);
    DAT_028caf12 = 0;
  }
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  _objc_storeStrong(&local_18,0);
  return;
}

