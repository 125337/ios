// ___25-[WCMYBImageBrowser_hide]_block_invoke @0x64748

void ___25__WCMYBImageBrowser_hide__block_invoke(long param_1)

{
  undefined8 local_28;
  
  _objc_msgSend_rebuild(*(undefined8 *)(param_1 + 0x20));
  _objc_msgSend_removeFromSuperview(*(undefined8 *)(param_1 + 0x20),local_28);
  _objc_msgSend_setTransitioning_isShow_(*(undefined8 *)(param_1 + 0x20),local_28,0,0);
  return;
}

