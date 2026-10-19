// currentDataShouldHideSaveButton @0x85df0

/* Function Stack Size: 0x10 bytes */

bool WCMYBIBToolViewHandler::currentDataShouldHideSaveButton(ID param_1,SEL param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  uint local_44;
  undefined8 local_40;
  uint local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _objc_msgSend_wcm_yb_currentData(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  local_28 = _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(lVar2);
  uVar3 = _objc_opt_respondsToSelector(local_28,"wcm_yb_allowSaveToPhotoAlbum");
  local_30 = 0;
  if ((uVar3 & 1) != 0) {
    local_30 = _objc_msgSend_wcm_yb_allowSaveToPhotoAlbum(local_28,local_40);
  }
  bVar1 = _objc_opt_respondsToSelector(local_28,"wcm_yb_saveToPhotoAlbum");
  local_44 = 0;
  if ((local_30 & 1) != 0) {
    local_44 = (uint)(bVar1 & 1);
  }
  _objc_storeStrong(&local_28,0);
  return local_44 ^ 1;
}

