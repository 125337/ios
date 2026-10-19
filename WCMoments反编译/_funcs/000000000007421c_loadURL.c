// loadURL @0x7421c

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageData::loadURL(ID param_1,SEL param_2)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 local_50;
  
  _objc_msgSend_imageURL(param_1);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  bVar1 = true;
  if (lVar2 != 0) {
    _objc_msgSend_imageURL(param_1,local_50);
    uVar3 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_absoluteString(uVar3,local_50);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    lVar5 = _objc_msgSend_length(uVar4,local_50);
    bVar1 = lVar5 == 0;
    (*(code *)PTR__objc_release_00110458)(uVar4);
    (*(code *)PTR__objc_release_00110458)(uVar3);
  }
  (*(code *)PTR__objc_release_00110458)(lVar2);
  if (!bVar1) {
    _objc_msgSend_loadURL_queryCache(param_1,local_50);
  }
  return;
}

