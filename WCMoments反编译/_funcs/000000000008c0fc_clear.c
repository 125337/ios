// clear @0x8c0fc

/* Function Stack Size: 0x10 bytes */

int __thiscall WCMYBIBDataMediator::clear(WCMYBIBDataMediator *this)

{
  int iVar1;
  
  iVar1 = _objc_msgSend_removeAllObjects(*(undefined8 *)(this + 0x10));
  return iVar1;
}

