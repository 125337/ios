// FUN_017b0ff0 @ 017b0ff0

void FUN_017b0ff0(undefined8 param_1)

{
  ulong uVar1;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar1 = local_18;
  (*(code *)PTR__objc_msgSend_02578628)
            (local_18,PTR_s_respondsToSelector__026ca818,PTR_s_setText__026caa88);
  if ((uVar1 & 1) == 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setValue_forKey__0269d300,&cf___,&cf_text);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setText__026caa88,&cf___);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

