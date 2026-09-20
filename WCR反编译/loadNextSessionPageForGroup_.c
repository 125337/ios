// loadNextSessionPageForGroup: @ 015fe65c

/* Function Stack Size: 0x14 bytes */

void WCRQuickChatRuntime::loadNextSessionPageForGroup_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  ID IVar2;
  ID local_90;
  ID local_80;
  uint local_5c;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  IVar2 = IVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  local_5c = 1;
  if ((IVar2 & 1) != 0) {
    IVar2 = param_1;
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadingNextSessionPage_026b1750);
    local_5c = (uint)IVar2;
  }
  (*(code *)PTR__objc_release_02578630)(IVar1);
  if ((local_5c & 1) == 0) {
    IVar1 = param_1;
    if ((param_3 & 1) == 0) {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_privateHasMore_026b1720);
    }
    else {
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groupHasMore_026b1728);
    }
    if ((IVar1 & 1) != 0) {
      if ((param_3 & 1) == 0) {
        local_90 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_privatePageLimit_026b16e8);
        if ((long)local_90 < 0x1f) {
          local_90 = 0x1e;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,PTR_s_setPrivatePageLimit__026b1738,local_90 + 0x1e);
      }
      else {
        local_80 = param_1;
        (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_groupPageLimit_026b16e0);
        if ((long)local_80 < 0x1f) {
          local_80 = 0x1e;
        }
        (*(code *)PTR__objc_msgSend_02578628)
                  (param_1,PTR_s_setGroupPageLimit__026b1740,local_80 + 0x1e);
      }
      (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_loadNextSessionPage_026b1560);
    }
  }
  return;
}

