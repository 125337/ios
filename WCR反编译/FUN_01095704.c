// FUN_01095704 @ 01095704

byte FUN_01095704(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte local_3c;
  ulong local_28;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  uVar1 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_pathExtension_0269e090);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  _objc_retainAutoreleasedReturnValue();
  local_28 = uVar2;
  (*(code *)PTR__objc_release_02578630)(uVar1);
  uVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_txt);
  if ((uVar1 & 1) == 0) {
    uVar1 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_text);
    if ((uVar1 & 1) == 0) {
      uVar1 = local_28;
      (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_isEqualToString__0269ccc8,&cf_csv);
      if ((uVar1 & 1) == 0) {
        local_11 = 0;
        goto LAB_01095868;
      }
    }
  }
  uVar1 = local_20;
  FUN_01095898();
  local_3c = 1;
  if ((uVar1 & 1) == 0) {
    uVar1 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_containsString__0269d0b0,&cf_h_);
    local_3c = (byte)uVar1;
  }
  local_11 = local_3c & 1;
LAB_01095868:
  _objc_storeStrong(&local_28);
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

