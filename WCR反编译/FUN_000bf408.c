// FUN_000bf408 @ 000bf408

void FUN_000bf408(void)

{
  char *pcVar1;
  
  pcVar1 = "WCTableViewCellManager";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_configureCell__0269e5e8,FUN_000bf530,&DAT_028c80c8);
  pcVar1 = "MMTableViewCell";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_initWithStyle_reuseIdentifier__0269e5f0,FUN_000bf6cc,&DAT_028c80d0);
  _MSHookMessageEx(pcVar1,PTR_s_layoutSubviews_0269de80,FUN_000bf8dc,&DAT_028c80d8);
  pcVar1 = "UITableViewCell";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setSelectionStyle__0269e5f8,FUN_000bf9d4,&DAT_028c80e0);
  _MSHookMessageEx(pcVar1,PTR_s_setSelectedBackgroundView__0269e600,FUN_000bfa44,&DAT_028c80e8);
  _MSHookMessageEx(pcVar1,PTR_s_setHighlighted_animated__0269e608,FUN_000bfae8,&DAT_028c80f0);
  _MSHookMessageEx(pcVar1,PTR_s_setSelected_animated__0269e610,FUN_000bfb84,&DAT_028c80f8);
  return;
}

