// clear @0x89620

/* Function Stack Size: 0x10 bytes */

int __thiscall WCMYBIBScreenRotationHandler::clear(WCMYBIBScreenRotationHandler *this)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 local_30;
  
  _objc_msgSend_defaultCenter(&_OBJC_CLASS___NSNotificationCenter);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_removeObserver_(uVar2,local_30,this);
  iVar1 = (*(code *)PTR__objc_release_00110458)(uVar2);
  return iVar1;
}

