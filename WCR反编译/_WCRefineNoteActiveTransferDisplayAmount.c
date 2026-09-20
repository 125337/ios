// _WCRefineNoteActiveTransferDisplayAmount @ 00f1bf18

void _WCRefineNoteActiveTransferDisplayAmount(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  uVar2 = local_18;
  puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
  (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if (((uVar2 & 1) == 0) ||
     (uVar2 = local_18, (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_length_0269cca0),
     uVar2 == 0)) {
    _objc_storeStrong(&DAT_0280e078,&cf___);
  }
  else {
    uVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_copy_0269d150);
    uVar2 = DAT_0280e078;
    DAT_0280e078 = uVar3;
    (*(code *)PTR__objc_release_02578630)(uVar2);
  }
  _objc_storeStrong(&local_18,0);
  return;
}

