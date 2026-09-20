// isWeChatMediaItem: @ 0095e368

/* Function Stack Size: 0x18 bytes */

bool WCRClipboardHistoryStore::isWeChatMediaItem_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar2 = local_30;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_026ce090;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSDictionary_026ce090,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_30;
    FUN_0095e0ec();
    local_11 = (byte)uVar2 & 1;
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

