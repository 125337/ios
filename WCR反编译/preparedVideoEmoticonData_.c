// preparedVideoEmoticonData: @ 00f44008

/* Function Stack Size: 0x18 bytes */

ID WCRefineEmoticonToolsHelper::preparedVideoEmoticonData_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  ID IVar4;
  byte local_54;
  undefined *local_50;
  byte local_41;
  char *local_40;
  undefined4 local_34;
  long local_30;
  SEL local_28;
  ID local_20;
  ID local_18;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  lVar1 = local_30;
  (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_length_0269cca0);
  if (lVar1 == 0) {
    local_18 = 0;
    local_34 = 1;
    goto LAB_00f4418c;
  }
  pcVar2 = "EmoticonUtil";
  _objc_getClass();
  local_40 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar2,PTR_s_respondsToSelector__026ca818,PTR_s_isWxAMData__026ac018);
  local_54 = 0;
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = local_40;
    (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_isWxAMData__026ac018,local_30);
    local_54 = (byte)pcVar2;
  }
  local_41 = local_54 & 1;
  puVar3 = PTR_WCRefineLocalEmoticonStore_026ce440;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR_WCRefineLocalEmoticonStore_026ce440,PTR_s_sendableDataFromData__026a3db8,local_30);
  _objc_retainAutoreleasedReturnValue();
  local_50 = puVar3;
  (*(code *)PTR__objc_msgSend_02578628)(puVar3,PTR_s_length_0269cca0);
  if (puVar3 == (undefined *)0x0) {
    if ((local_41 & 1) == 0) {
      _objc_storeStrong(&local_50,local_30);
      goto LAB_00f44148;
    }
    local_18 = 0;
  }
  else {
LAB_00f44148:
    IVar4 = local_20;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_prepareImageDataForEmoticon__026ac1b8,local_50);
    _objc_retainAutoreleasedReturnValue();
    local_18 = IVar4;
  }
  local_34 = 1;
  _objc_storeStrong(&local_50,0);
LAB_00f4418c:
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue();
  return local_18;
}

