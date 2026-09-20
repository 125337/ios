// isOwnedOfficialController: @ 0112eba0

/* Function Stack Size: 0x18 bytes */

bool WCRefineQuickRemarkEditor::isOwnedOfficialController_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  long lVar2;
  byte local_40;
  long local_38;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  local_40 = 0;
  bVar1 = local_30 != 0;
  if (bVar1) {
    local_38 = local_30;
    _objc_getAssociatedObject(local_30,&DAT_028e357a);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_40 = (byte)lVar2;
  }
  local_11 = local_40 & 1;
  if (bVar1) {
    (*(code *)PTR__objc_release_02578630)(local_38);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

