// FUN_00fce330 @ 00fce330

void FUN_00fce330(undefined8 param_1)

{
  char *pcVar1;
  ulong uVar2;
  ulong local_20;
  undefined8 local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong(&local_20);
  pcVar1 = "MainFrameTableView";
  _objc_getClass();
  if (DAT_028e3038 != (code *)0x0) {
    (*DAT_028e3038)(local_20,PTR_s_layoutSubviews_0269de80);
  }
  if (pcVar1 != (char *)0x0) {
    uVar2 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isKindOfClass__0269cd68,pcVar1);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR_WCRefineHomeHeaderUnstick_026ce568,PTR_s_unstickIfNeededOnTableView__026ad148,
                 local_20);
    }
  }
  _objc_storeStrong(&local_20,0);
  return;
}

