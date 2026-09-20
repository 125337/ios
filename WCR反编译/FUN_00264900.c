// FUN_00264900 @ 00264900

void FUN_00264900(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong local_18;
  
  local_18 = 0;
  _objc_storeStrong(&local_18,param_1);
  if (local_18 != 0) {
    uVar1 = local_18;
    _object_getClass();
    _class_getInstanceVariable(uVar1,"_bIgnoreLongPressGestureEvent");
    uVar2 = local_18;
    if (uVar1 != 0) {
      _ivar_getOffset();
      *(undefined1 *)(uVar2 + uVar1) = 0;
    }
    uVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_18,PTR_s_respondsToSelector__026ca818,
               PTR_s_setBIgnoreLongPressGestureEvent__026a12c8);
    if ((uVar2 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_18,PTR_s_setBIgnoreLongPressGestureEvent__026a12c8,0);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

