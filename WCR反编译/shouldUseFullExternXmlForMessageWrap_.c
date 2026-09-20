// shouldUseFullExternXmlForMessageWrap: @ 00f3a4b8

/* Function Stack Size: 0x18 bytes */

bool WCRefineEmoticonToolsHelper::shouldUseFullExternXmlForMessageWrap_
               (ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  long lVar2;
  long local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  if (local_30 == 0) {
    local_11 = 0;
  }
  else {
    lVar1 = local_30;
    _objc_getAssociatedObject(local_30,DAT_0280e088);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    (*(code *)PTR__objc_msgSend_02578628)();
    local_11 = (byte)lVar2 & 1;
    (*(code *)PTR__objc_release_02578630)(lVar1);
  }
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

