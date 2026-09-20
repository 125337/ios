// _WCRFrostedBubbleDecorateQuoteView @ 00f803ac

void _WCRFrostedBubbleDecorateQuoteView(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___UIView_026cdfd8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UIView_026cdfd8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) != 0) && (uVar2 = local_18, FUN_00f80480(), (uVar2 & 1) != 0)) {
    _WCRFrostedBubbleEnabled();
    if ((uVar2 & 1) == 0) {
      FUN_00f80600(local_18);
    }
    else {
      FUN_00f80810(local_18);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

