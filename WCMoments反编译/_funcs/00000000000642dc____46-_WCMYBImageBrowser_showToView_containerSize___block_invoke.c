// ___46-[WCMYBImageBrowser_showToView:containerSize:]_block_invoke @0x642dc

void ___46__WCMYBImageBrowser_showToView_containerSize___block_invoke(long param_1)

{
  undefined8 local_28;
  
  _objc_msgSend_hideStatusBar(*(undefined8 *)(param_1 + 0x20));
  _objc_msgSend_build(*(undefined8 *)(param_1 + 0x20),local_28);
  _objc_msgSend_setTransitioning_isShow_(*(undefined8 *)(param_1 + 0x20),local_28,0,1);
  return;
}

