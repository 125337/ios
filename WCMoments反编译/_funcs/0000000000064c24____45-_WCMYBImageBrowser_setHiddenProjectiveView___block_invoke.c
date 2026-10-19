// ___45-[WCMYBImageBrowser_setHiddenProjectiveView:]_block_invoke @0x64c24

void ___45__WCMYBImageBrowser_setHiddenProjectiveView___block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_38;
  
  uVar1 = _objc_loadWeakRetained
                    (*(long *)(param_1 + 0x20) + (long)WCMYBImageBrowser::_hiddenProjectiveView);
  _objc_msgSend_numberWithDouble_(*(undefined8 *)(param_1 + 0x28),&_OBJC_CLASS___NSNumber,local_38);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_setValue_forKey_(uVar1,local_38,uVar2,&cf_alpha);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  (*(code *)PTR__objc_release_00110458)(uVar1);
  return;
}

