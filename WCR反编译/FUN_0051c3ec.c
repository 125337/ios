// FUN_0051c3ec @ 0051c3ec

void FUN_0051c3ec(void)

{
  char *pcVar1;
  
  pcVar1 = "TLProfileExpandableHeaderView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0051c468,&DAT_028cb0c8);
  pcVar1 = "TLProfileMediaContainerView";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_0051c4a4,&DAT_028cb0d0);
  return;
}

