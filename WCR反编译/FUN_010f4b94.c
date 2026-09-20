// FUN_010f4b94 @ 010f4b94

void FUN_010f4b94(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  
  pcVar1 = "BaseMessageCellView";
  _objc_getClass();
  if (((pcVar1 != (char *)0x0) && (param_1 != 0)) &&
     (pcVar2 = pcVar1, _class_getInstanceMethod(pcVar1,param_1), pcVar2 == (char *)0x0)) {
    _class_addMethod(pcVar1,param_1,FUN_0110ca2c,"v@:@");
  }
  return;
}

