// FUN_005cdb0c @ 005cdb0c

void FUN_005cdb0c(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  char *local_38;
  long local_30;
  long local_28;
  undefined8 local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_02578670;
  pcVar3 = "FavoritesMgr";
  local_30 = param_1;
  local_28 = param_1;
  _objc_getClass();
  FUN_005a5ba4();
  _objc_retainAutoreleasedReturnValue();
  local_38 = pcVar3;
  (*(code *)PTR__objc_msgSend_02578628)
            (pcVar3,PTR_s_respondsToSelector__026ca818,PTR_s_delFavoritesItems__026a5b38);
  pcVar2 = local_38;
  puVar1 = PTR_s_delFavoritesItems__026a5b38;
  if (((ulong)pcVar3 & 1) == 0) {
    pcVar3 = local_38;
    (*(code *)PTR__objc_msgSend_02578628)
              (local_38,PTR_s_respondsToSelector__026ca818,PTR_s_delFavoritesItem__026a55b0);
    if (((ulong)pcVar3 & 1) != 0) {
      (*(code *)PTR__objc_msgSend_02578628)
                (local_38,PTR_s_delFavoritesItem__026a55b0,*(undefined8 *)(param_1 + 0x20));
    }
  }
  else {
    local_20 = *(undefined8 *)(param_1 + 0x20);
    puVar4 = PTR__OBJC_CLASS___NSArray_026cdfe0;
    (*(code *)PTR__objc_msgSend_02578628)
              (PTR__OBJC_CLASS___NSArray_026cdfe0,PTR_s_arrayWithObjects_count__0269cc70,&local_20,1
              );
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_msgSend_02578628)(pcVar2,puVar1);
    (*(code *)PTR__objc_release_02578630)(puVar4);
  }
  _objc_storeStrong(&local_38,0);
  if (*(long *)PTR____stack_chk_guard_02578670 - local_18 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(long *)PTR____stack_chk_guard_02578670 - local_18);
}

