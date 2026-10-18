// FUN_000ba114 @0xba114


void FUN_000ba114(long param_1)



{

  long lVar1;

  ulong uVar2;

  

  _objc_retain();

  if (param_1 != 0) {

    FUN_000839f4(param_1);

    lVar1 = _objc_retainAutoreleasedReturnValue();

    if (lVar1 != 0) {

      _objc_retain(lVar1);

      uVar2 = _objc_opt_respondsToSelector(lVar1,"isShowChatRoomDisplayName");

      if ((uVar2 & 1) != 0) {

        FUN_00297ac0(lVar1);

      }

      _objc_release(lVar1);

      _objc_setAssociatedObject

                (lVar1,PTR_LOOP_003e64a8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

      _objc_setAssociatedObject

                (lVar1,PTR_LOOP_003e64e8,&PTR__OBJC_CLASS___NSConstantIntegerNumber_003bf890,1);

    }

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e6308,0,1);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e6328,0,1);

    _objc_setAssociatedObject(param_1,PTR_LOOP_003e6340,0,1);

    _objc_release(lVar1);

  }

  _objc_release(param_1);

  return;

}




