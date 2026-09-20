// FUN_0179486c @ 0179486c

void FUN_0179486c(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "UIViewController";
  _objc_getClass();
  sVar2 = _strlen("@");
  _memcpy(auStack_428,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[sVar2 & 0xffffffff] = 0x40;
  auStack_428[(int)sVar2 + 1] = 0x3a;
  auStack_428[(int)sVar2 + 2] = 0;
  _class_addMethod(pcVar1,PTR_s_presentingModalViewController_026b4800,FUN_01794ac0);
  pcVar1 = "MMServiceCenter";
  _objc_getClass();
  _object_getClass();
  _class_addMethod(pcVar1,PTR_s_defaultCenter_026ca5e0,FUN_01794ae8);
  pcVar1 = "MicroMessengerAppDelegate";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_userNotificationCenter_didReceiv_026b4808,FUN_01794bd4,&DAT_028e4048
                  );
  pcVar1 = "NotificationActionsMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_userNotificationCenter_didReceiv_026b4808,FUN_01794fa8,&DAT_028e4050
                  );
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

