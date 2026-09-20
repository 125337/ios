// FUN_005b4b68 @ 005b4b68

void FUN_005b4b68(long param_1,undefined8 param_2)

{
  long lVar1;
  
  (*DAT_028cb6e8)(param_1,param_2);
  lVar1 = param_1;
  (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_window_026cabf0);
  _objc_retainAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_02578630)();
  if (lVar1 != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(param_1,PTR_s_WCRefine_setupAlbumListSwipeGest_026a5848);
  }
  return;
}

