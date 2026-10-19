// initCopy @0x82b88

/* Function Stack Size: 0x10 bytes */

void WCMYBIBCopywriter::initCopy(ID param_1,SEL param_2)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 local_30;
  
  lVar3 = _objc_msgSend_type(param_1);
  bVar2 = lVar3 != 1;
  pcVar1 = &cf_Videoisinvalid;
  if (bVar2) {
    pcVar1 = &cf_eHe;
  }
  _objc_msgSend_setVideoIsInvalid_(param_1,local_30,pcVar1);
  pcVar1 = &cf_Videoerror;
  if (bVar2) {
    pcVar1 = &cf_format_s_;
  }
  _objc_msgSend_setVideoError_(param_1,local_30,pcVar1);
  pcVar1 = &cf_Unabletosave;
  if (bVar2) {
    pcVar1 = &cf_elOX_;
  }
  _objc_msgSend_setUnableToSave_(param_1,local_30,pcVar1);
  pcVar1 = &cf_Imageisinvalid;
  if (bVar2) {
    pcVar1 = &cf_VGreHe;
  }
  _objc_msgSend_setImageIsInvalid_(param_1,local_30,pcVar1);
  pcVar1 = &cf_Downloadfailed;
  if (bVar2) {
    pcVar1 = &cf_R_VGr1Y_;
  }
  _objc_msgSend_setDownloadFailed_(param_1,local_30,pcVar1);
  pcVar1 = &cf_Failedtogetalbumauthorization;
  if (bVar2) {
    pcVar1 = &cf_SvQCgP1Y_;
  }
  _objc_msgSend_setGetPhotoAlbumAuthorizationFailed_(param_1,local_30,pcVar1);
  pcVar1 = &cf_Savesuccessful;
  if (bVar2) {
    pcVar1 = &cf__OX_0R__vQ;
  }
  _objc_msgSend_setSaveToPhotoAlbumSuccess_(param_1,local_30,pcVar1);
  pcVar1 = &cf_Savefailed;
  if (bVar2) {
    pcVar1 = &cf_OX_1Y_;
  }
  _objc_msgSend_setSaveToPhotoAlbumFailed_(param_1,local_30,pcVar1);
  pcVar1 = &cf_Save;
  if (bVar2) {
    pcVar1 = &cf_OX_0RvQ;
  }
  _objc_msgSend_setSaveToPhotoAlbum_(param_1,local_30,pcVar1);
  pcVar1 = &cf_Cancel;
  if (bVar2) {
    pcVar1 = &cf_Sm;
  }
  _objc_msgSend_setCancel_(param_1,local_30,pcVar1);
  return;
}

