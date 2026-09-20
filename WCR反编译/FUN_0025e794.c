// FUN_0025e794 @ 0025e794

void FUN_0025e794(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_40;
  long local_38 [3];
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028c9420)(param_1,param_2);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    lVar3 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_viewWithTag__026cabe0,0x24f6e6);
    _objc_retainAutoreleasedReturnValue();
    local_38[0] = lVar3;
    if (lVar3 == 0) {
      local_40 = 0;
      lVar4 = local_18;
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_valueForKey__0269d128,&cf_sendBtn);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_40;
      local_40 = lVar4;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      lVar4 = local_40;
      (*(code *)PTR__objc_msgSend_02578628)(local_40,PTR_s_superview_026cab50);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = local_38[0];
      local_38[0] = lVar5;
      (*(code *)PTR__objc_release_02578630)(lVar3);
      (*(code *)PTR__objc_release_02578630)(lVar4);
      _objc_storeStrong(&local_40,0);
    }
    if (local_38[0] != 0) {
      (*(code *)PTR__objc_msgSend_02578628)(local_38[0],PTR_s_setHidden__026ca970,1);
    }
    _objc_storeStrong(local_38,0);
  }
  else {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_WCRefine_ensureSaveToAlbumButton_026a1128);
  }
  return;
}

