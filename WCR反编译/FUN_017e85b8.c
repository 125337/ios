// FUN_017e85b8 @ 017e85b8

void FUN_017e85b8(undefined8 param_1)

{
  long lVar1;
  long local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  lVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR_WCRefineHelper_026ce000,PTR_s_showStickyStatusText__0269d4b0,local_20);
  }
  _objc_storeStrong(&local_20,0);
  return;
}

