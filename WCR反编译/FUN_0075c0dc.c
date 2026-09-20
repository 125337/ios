// FUN_0075c0dc @ 0075c0dc

void FUN_0075c0dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  if ((param_1 != 0) &&
     (lVar1 = param_1, _class_getInstanceMethod(param_1,PTR_s_layoutSubviews_0269de80), lVar1 != 0))
  {
    _MSHookMessageEx(param_1,PTR_s_layoutSubviews_0269de80,param_2,param_3);
  }
  return;
}

