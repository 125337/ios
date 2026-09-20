// onQuickChatOpenUsername @ 021a0518

/* Function Stack Size: 0x10 bytes */

ID WCRSuperFloatBallWindow::onQuickChatOpenUsername(ID param_1,SEL param_2)

{
  ID IVar1;
  void *local_80;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_44;
  code *local_40;
  undefined *local_38;
  ID local_30;
  SEL local_28;
  
  IVar1 = param_1;
  (*(code *)PTR__objc_retain_02578638)();
  __s8WCRefine23WCRSuperFloatBallWindowC23onQuickChatOpenUsernameySo8NSStringCcSgvg();
  (*(code *)PTR__objc_release_02578630)(param_1);
  if (IVar1 == 0) {
    local_80 = (void *)0x0;
  }
  else {
    local_50 = PTR___NSConcreteStackBlock_02578660;
    local_48 = 0x42000000;
    local_44 = 0;
    local_40 = FUN_021a028c;
    local_38 = &DAT_0258d5c8;
    local_30 = IVar1;
    local_28 = param_2;
    local_80 = __Block_copy(&local_50);
    _swift_release(local_28);
  }
  _objc_autoreleaseReturnValue();
  return (ID)local_80;
}

