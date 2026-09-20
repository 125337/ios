// FUN_00fc5634 @ 00fc5634

void FUN_00fc5634(void)

{
  char *pcVar1;
  
  _os_unfair_lock_lock(&DAT_028e2ef0);
  if (((DAT_028e2fcf & 1) == 0) && ((DAT_028e2ef4 & 1) == 0)) {
    pcVar1 = "NewMainFrameViewController";
    _objc_getClass();
    if (pcVar1 == (char *)0x0) {
      _os_unfair_lock_unlock(&DAT_028e2ef0);
    }
    else {
      DAT_028e2fcf = 1;
      _os_unfair_lock_unlock(&DAT_028e2ef0);
      _MSHookMessageEx(pcVar1,PTR_s_viewWillAppear__0269cd48,FUN_00fc57e0,&DAT_028e2fd0);
      _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00fc5a44,&DAT_028e2fd8);
    }
  }
  else {
    _os_unfair_lock_unlock(&DAT_028e2ef0);
  }
  return;
}

