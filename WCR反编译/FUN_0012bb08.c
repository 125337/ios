// FUN_0012bb08 @ 0012bb08

void FUN_0012bb08(undefined8 param_1)

{
  bool bVar1;
  char *pcVar2;
  
  _objc_autoreleasePoolPush();
  pcVar2 = "CommonMessageCellView";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_initWithViewModel__0269f008,FUN_0012bc94,&DAT_028c8640);
  _MSHookMessageEx(pcVar2,PTR_s_updateNodeStatus_0269f010,FUN_0012c424,&DAT_028c8648);
  _MSHookMessageEx(pcVar2,PTR_s_layoutSubviews_0269de80,FUN_0012df00,&DAT_028c8650);
  _MSHookMessageEx(pcVar2,PTR_s_prepareForReuse_0269e760,FUN_0012df50,&DAT_028c8658);
  pcVar2 = "BaseMsgContentViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar2,PTR_s_viewDidAppear__0269cd50,FUN_0012e09c,&DAT_028c8660);
  pcVar2 = "CommonMessageCellView";
  _objc_getClass();
  bVar1 = false;
  if (pcVar2 != (char *)0x0) {
    _class_getInstanceMethod(pcVar2,PTR_s_layoutInternal_0269f018);
    bVar1 = pcVar2 != (char *)0x0;
  }
  DAT_028c8668 = bVar1;
  if ((bool)DAT_028c8668 != false) {
    pcVar2 = "CommonMessageCellView";
    _objc_getClass();
    _MSHookMessageEx(pcVar2,PTR_s_layoutInternal_0269f018,FUN_0012e2b8,&DAT_028c8670);
  }
  _objc_autoreleasePoolPop(param_1);
  return;
}

