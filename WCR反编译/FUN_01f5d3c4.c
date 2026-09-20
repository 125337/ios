// FUN_01f5d3c4 @ 01f5d3c4

void FUN_01f5d3c4(long param_1,byte param_2,undefined8 param_3)

{
  cfstringStruct *local_58;
  cfstringStruct *local_48;
  cfstringStruct *local_28;
  byte local_19;
  long local_18;
  
  local_28 = (cfstringStruct *)0x0;
  local_19 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if ((local_19 & 1) == 0) {
    if (local_28 == (cfstringStruct *)0x0) {
      local_58 = &cf_Rd1Y_;
    }
    else {
      local_58 = local_28;
    }
    local_48 = local_58;
  }
  else {
    local_48 = &cf__Rd;
  }
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineHelper_026ce000,PTR_s_showModernToast__0269ce78,local_48);
  (*(code *)PTR__objc_msgSend_02578628)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_reloadTableData_0269dca8);
  _objc_storeStrong(&local_28,0);
  return;
}

