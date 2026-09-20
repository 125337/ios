// FUN_002f6f80 @ 002f6f80

void FUN_002f6f80(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (((param_1 != 0) && (param_3 != 0)) &&
     (lVar1 = param_1, _class_getInstanceMethod(param_1,PTR_s_layoutSubviews_0269de80), lVar1 != 0))
  {
    _MSHookMessageEx(param_1,PTR_s_layoutSubviews_0269de80,param_2,param_3);
  }
  return;
}

