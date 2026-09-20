// clearOfficialMetaForId: @ 01f1afe8

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoStore::clearOfficialMetaForId_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  ID IVar2;
  ID local_38;
  uint local_2c;
  long local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  lVar1 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_length_0269cca0);
  if (lVar1 != 0) {
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_mutableOfficialMeta_026c82f0);
    _objc_retainAutoreleasedReturnValue();
    local_38 = IVar2;
    (*(code *)PTR__objc_msgSend_02578628)(IVar2,PTR_s_removeObjectForKey__0269d700,local_28);
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_saveOfficialMeta__026c8300,local_38);
    _objc_storeStrong(&local_38,0);
  }
  local_2c = (uint)(lVar1 == 0);
  _objc_storeStrong(&local_28,0);
  return;
}

