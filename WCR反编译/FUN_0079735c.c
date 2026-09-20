// FUN_0079735c @ 0079735c

void FUN_0079735c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_28;
  undefined8 local_20;
  long local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  (*DAT_028ccae8)(param_1,param_2);
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_28 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_homepageCornerEnabled_0269fc40);
  if ((((ulong)puVar2 & 1) != 0) &&
     (puVar2 = local_28,
     (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_mainFrameCornerEnabled_026a1ff0),
     ((ulong)puVar2 & 1) != 0)) {
    lVar3 = local_18;
    FUN_007a3c90();
    _objc_retainAutoreleasedReturnValue();
    (*(code *)PTR__objc_release_02578630)();
    lVar1 = local_18;
    if (lVar3 == 0) {
      puVar2 = PTR__OBJC_CLASS___UIColor_026cdf78;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___UIColor_026cdf78,PTR_s_clearColor_026ca568);
      _objc_retainAutoreleasedReturnValue();
      FUN_007993a0(lVar1);
      (*(code *)PTR__objc_release_02578630)(puVar2);
    }
    else {
      FUN_007a406c(local_18);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

