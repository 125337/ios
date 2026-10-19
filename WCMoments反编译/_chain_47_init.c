// ============ 功能链 47  根: init @0x829fc ============
// 节点 15，按调用深度排序，自上而下读

// ---- [d0] init @0x829fc ----
// CALLERS: (根)
// CALLEES: initCopy


/* Function Stack Size: 0x10 bytes */



ID WCMYBIBCopywriter::init(ID param_1,SEL param_2)



{

  undefined8 uVar1;

  long lVar2;

  ulong uVar3;

  ID IVar4;

  undefined8 local_58;

  undefined8 local_40;

  long local_38;

  ID local_30;

  class_t *local_28;

  SEL local_20;

  long local_18;

  

  local_18 = 0;

  local_28 = &objc::class_t::WCMYBIBCopywriter;

  local_30 = param_1;

  local_20 = param_2;

  local_18 = _objc_msgSendSuper2(&local_30,"init");

  _objc_storeStrong(&local_18);

  if (local_18 != 0) {

    *(undefined8 *)(local_18 + 8) = 0;

    _objc_msgSend_standardUserDefaults(&_OBJC_CLASS___NSUserDefaults,local_58);

    uVar1 = _objc_retainAutoreleasedReturnValue();

    _objc_msgSend_objectForKey_(uVar1,local_58,&cf_AppleLanguages);

    local_38 = _objc_retainAutoreleasedReturnValue();

    (*(code *)PTR__objc_release_00110458)(uVar1);

    if ((local_38 != 0) && (lVar2 = _objc_msgSend_count(local_38,local_58), lVar2 != 0)) {

      _objc_msgSend_objectAtIndexedSubscript_(lVar2,local_38,local_58,0);

      local_40 = _objc_retainAutoreleasedReturnValue();

      uVar3 = _objc_msgSend_hasPrefix_(local_40,local_58,&cf_zh_Hans);

      if ((uVar3 & 1) == 0) {

        *(undefined8 *)(local_18 + 8) = 1;

      }

      _objc_storeStrong(&local_40,0);

    }

    _objc_msgSend_initCopy(local_18,local_58);

    _objc_storeStrong(&local_38,0);

  }

  IVar4 = (*(code *)PTR__objc_retain_00110460)(local_18);

  _objc_storeStrong(&local_18,0);

  return IVar4;

}






// ---- [d1] initCopy @0x82b88 ----
// CALLERS: init, setType:, _objc_msgSend$initCopy
// CALLEES: type, setVideoIsInvalid:, setVideoError:, setUnableToSave:, setImageIsInvalid:, setDownloadFailed:, setGetPhotoAlbumAuthorizationFailed:, setSaveToPhotoAlbumSuccess:, setSaveToPhotoAlbumFailed:, setSaveToPhotoAlbum:


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






// ---- [d2] type @0x82db4 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



long_long WCMYBIBCopywriter::type(ID param_1,SEL param_2)



{

  return *(long_long *)(param_1 + 8);

}






// ---- [d2] setVideoIsInvalid: @0x82dec ----
// CALLERS: initCopy, _objc_msgSend$setVideoIsInvalid:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBCopywriter::setVideoIsInvalid_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x10);

  return;

}






// ---- [d2] setVideoError: @0x82e40 ----
// CALLERS: initCopy, _objc_msgSend$setVideoError:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBCopywriter::setVideoError_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x18);

  return;

}






// ---- [d2] setUnableToSave: @0x82e94 ----
// CALLERS: initCopy, _objc_msgSend$setUnableToSave:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBCopywriter::setUnableToSave_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x20);

  return;

}






// ---- [d2] setImageIsInvalid: @0x82ee8 ----
// CALLERS: initCopy, _objc_msgSend$setImageIsInvalid:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBCopywriter::setImageIsInvalid_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x28);

  return;

}






// ---- [d2] setDownloadFailed: @0x82f3c ----
// CALLERS: initCopy, _objc_msgSend$setDownloadFailed:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBCopywriter::setDownloadFailed_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x30);

  return;

}






// ---- [d2] setGetPhotoAlbumAuthorizationFailed: @0x82f90 ----
// CALLERS: initCopy, _objc_msgSend$setGetPhotoAlbumAuthorizationFailed:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBCopywriter::setGetPhotoAlbumAuthorizationFailed_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x38);

  return;

}






// ---- [d2] setSaveToPhotoAlbumSuccess: @0x82fe4 ----
// CALLERS: initCopy, _objc_msgSend$setSaveToPhotoAlbumSuccess:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBCopywriter::setSaveToPhotoAlbumSuccess_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x40);

  return;

}






// ---- [d2] setSaveToPhotoAlbumFailed: @0x83038 ----
// CALLERS: initCopy, _objc_msgSend$setSaveToPhotoAlbumFailed:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBCopywriter::setSaveToPhotoAlbumFailed_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x48);

  return;

}






// ---- [d2] setSaveToPhotoAlbum: @0x8308c ----
// CALLERS: initCopy, _objc_msgSend$setSaveToPhotoAlbum:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBCopywriter::setSaveToPhotoAlbum_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x50);

  return;

}






// ---- [d2] setCancel: @0x830e0 ----
// CALLERS: initCopy, _objc_msgSend$setCancel:
// CALLEES: (叶)


/* Function Stack Size: 0x18 bytes */



void WCMYBIBCopywriter::setCancel_(ID param_1,SEL param_2,ID param_3)



{

  _objc_setProperty_nonatomic_copy(param_1,param_2,param_3,0x58);

  return;

}






// ---- [d2] type @0x976f4 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageDecoder::type(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0xa0);

}






// ---- [d2] type @0x9a1f8 ----
// CALLERS: initWithData:scale:decodeDecision:, initCopy, initWithData:scale:, _objc_msgSend$type
// CALLEES: (叶)


/* Function Stack Size: 0x10 bytes */



unsigned_long_long WCMYYImageEncoder::type(ID param_1,SEL param_2)



{

  return *(unsigned_long_long *)(param_1 + 0x20);

}





