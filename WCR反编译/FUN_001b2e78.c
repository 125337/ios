// FUN_001b2e78 @ 001b2e78

void FUN_001b2e78(void)

{
  char *pcVar1;
  
  pcVar1 = "NewContactsItemCell";
  _objc_getClass();
  _MSHookMessageEx(pcVar1,PTR_s_setMenuItemsWithNoDeleteBtn__0269ff00,FUN_001b2f20,&DAT_028c8a98);
  _MSHookMessageEx(pcVar1,PTR_s_updateWithContact__0269ff08,FUN_001b3014,&DAT_028c8aa0);
  _MSHookMessageEx(pcVar1,PTR_s_prepareForReuse_0269e760,FUN_001b3404,&DAT_028c8aa8);
  _MSHookMessageEx(pcVar1,PTR_s_onCommitEditingWithStyle_tableVi_0269ff10,FUN_001b3444,&DAT_028c8ab0
                  );
  return;
}

