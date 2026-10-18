// FUN_001a07fc @0x1a07fc


undefined8 FUN_001a07fc(long param_1)



{

  ulong uVar1;

  undefined8 uVar2;

  

  _objc_retain();

  if (param_1 != 0) {

    uVar1 = _objc_opt_respondsToSelector(param_1,"isShowChatRoomDisplayName");

    if ((uVar1 & 1) != 0) {

      uVar2 = _objc_msgSend(param_1,"isShowChatRoomDisplayName");

      goto LAB_001a085c;

    }

  }

  uVar2 = 1;

LAB_001a085c:

  _objc_release(param_1);

  return uVar2;

}




