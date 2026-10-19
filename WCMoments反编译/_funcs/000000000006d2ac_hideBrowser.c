// hideBrowser @0x6d2ac

/* Function Stack Size: 0x10 bytes */

void WCMYBIBImageCell::hideBrowser(ID param_1,SEL param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_30;
  
  _objc_msgSend_wcm_yb_cellData(param_1);
  uVar1 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setDelegate_(uVar1,local_30,0);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  _objc_msgSend_hideTailoringImageView(param_1,local_30);
  _objc_msgSend_hideAuxiliaryView(param_1,local_30);
  _objc_msgSend_wcm_yb_hideBrowser(param_1,local_30);
  lVar2 = _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  (*(code *)PTR__objc_release_00110458)(lVar2);
  *(undefined1 *)(param_1 + (long)_interacting) = 0;
  return;
}

