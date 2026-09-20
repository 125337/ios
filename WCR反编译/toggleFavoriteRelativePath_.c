// toggleFavoriteRelativePath: @ 015b56ec

/* Function Stack Size: 0x18 bytes */

bool WCRefineVoicePackStore::toggleFavoriteRelativePath_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  IVar2 = local_20;
  (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_isFavoriteRelativePath__026b0cb8,local_30);
  bVar1 = (IVar2 & 1) == 0;
  if (bVar1) {
    (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_addFavoriteRelativePath__026b0cc8,local_30)
    ;
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)
              (local_20,PTR_s_removeFavoriteRelativePath__026b0cc0,local_30);
  }
  local_11 = bVar1;
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

