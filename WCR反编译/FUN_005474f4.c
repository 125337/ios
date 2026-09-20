// FUN_005474f4 @ 005474f4

void FUN_005474f4(void)

{
  char *pcVar1;
  size_t sVar2;
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar1 = "MicroMessengerAppDelegate";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_application_didFinishLaunchingWi_0269cd38,FUN_00547918,&DAT_028cb3a0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_applicationDidBecomeActive__026a4e40,FUN_00547acc,&DAT_028cb3a8);
  pcVar1 = "WCTimeLineViewController";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00547b70,&DAT_028cb3b0);
  pcVar1 = "WCCommentDetailViewControllerFB";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setDataItem__026a18b0,FUN_00547d30,&DAT_028cb3b8);
  _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00547dd0,&DAT_028cb3c0);
  auStack_428[0] = 0x76;
  auStack_428[1] = 0x40;
  auStack_428[2] = 0x3a;
  sVar2 = _strlen("@");
  _memcpy(auStack_428 + 3,"@",sVar2);
  sVar2 = _strlen("@");
  auStack_428[(int)sVar2 + 3] = 0;
  _class_addMethod(pcVar1,PTR_s_WCRefine_commentDetailLongPress__026a4e48,FUN_00548284);
  _class_addMethod(pcVar1,PTR_s_WCRefine_commentDetailCancelFake_026a4e50,FUN_005489e0);
  _class_addMethod(pcVar1,PTR_s_WCRefine_commentDetailConfirmFak_026a4e58,FUN_00548a68);
  pcVar1 = "WCTimelineMgr";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_modifyDataItem_notify__026a4e60,FUN_00549550,&DAT_028cb3c8);
  _MSHookMessageEx(pcVar1,PTR_s_onPrePageUpdated_datas_adDatas_c_026a4e68,FUN_005495fc,&DAT_028cb3d0
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onNextPageUpdated_datas_adDatas__026a4a48,FUN_00549714,&DAT_028cb3d8
                  );
  _MSHookMessageEx(pcVar1,PTR_s_onFirstPageUpdated_dataChanged_d_026a4a40,FUN_0054982c,&DAT_028cb3e0
                  );
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 != 0) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
  }
  return;
}

