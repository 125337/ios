// FUN_00267b98 @ 00267b98

void FUN_00267b98(void)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  uint uVar6;
  undefined1 auStack_c28 [1024];
  undefined1 auStack_828 [1024];
  undefined1 auStack_428 [1024];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_02578670;
  if ((DAT_028c9500 & 1) == 0) {
    pcVar1 = "MyFavoritesListViewController";
    _objc_getClass();
    pcVar2 = "MyFavoritesViewController";
    _objc_getClass();
    pcVar3 = "FavoritesDownloadMgr";
    _objc_getClass();
    pcVar4 = "FavoritesMgr";
    _objc_getClass();
    if ((((pcVar1 == (char *)0x0) || (pcVar2 == (char *)0x0)) || (pcVar3 == (char *)0x0)) ||
       (pcVar4 == (char *)0x0)) {
      FUN_0026803c();
    }
    else {
      _MSHookMessageEx(pcVar2,PTR_s_navigationController_0269d458,FUN_002680ec,&DAT_028c9508);
      _MSHookMessageEx(pcVar1,PTR_s_viewDidAppear__0269cd50,FUN_00268274,&DAT_028c9510);
      sVar5 = _strlen("B");
      _memcpy(auStack_428,"B",sVar5);
      sVar5 = _strlen("B");
      auStack_428[sVar5 & 0xffffffff] = 0x40;
      auStack_428[(int)sVar5 + 1] = 0x3a;
      uVar6 = (int)sVar5 + 2;
      sVar5 = _strlen("@");
      _memcpy(auStack_428 + uVar6,"@",sVar5);
      sVar5 = _strlen("@");
      uVar6 = uVar6 + (int)sVar5;
      sVar5 = _strlen("@");
      _memcpy(auStack_428 + uVar6,"@",sVar5);
      sVar5 = _strlen("@");
      auStack_428[uVar6 + (int)sVar5] = 0;
      _class_addMethod(pcVar1,PTR_s_gestureRecognizer_shouldRecogniz_0269e2d0,FUN_002686f4);
      auStack_828[0] = 0x76;
      auStack_828[1] = 0x40;
      auStack_828[2] = 0x3a;
      sVar5 = _strlen("@");
      _memcpy(auStack_828 + 3,"@",sVar5);
      sVar5 = _strlen("@");
      auStack_828[(int)sVar5 + 3] = 0;
      _class_addMethod(pcVar1,PTR_s_WCRefineFavoritesLP_finishLongPr_026a1380,FUN_0026876c);
      auStack_c28[0] = 0x76;
      auStack_c28[1] = 0x40;
      auStack_c28[2] = 0x3a;
      sVar5 = _strlen("@");
      _memcpy(auStack_c28 + 3,"@",sVar5);
      sVar5 = _strlen("@");
      auStack_c28[(int)sVar5 + 3] = 0;
      _class_addMethod(pcVar1,PTR_s_WCRefineFavoritesLP_onLongPress__026a1388,FUN_00268810);
      _MSHookMessageEx(pcVar3,PTR_s_onDownloadFavItem_RetCode__026a1390,FUN_002694f8,&DAT_028c9518);
      _MSHookMessageEx(pcVar4,PTR_s_onDownloadFavoritesItemFinished__026a1398,FUN_00269598,
                       &DAT_028c9520);
      DAT_028c9500 = 1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_02578670 - local_28 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_28);
}

