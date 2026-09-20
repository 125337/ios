// FUN_002a3d58 @ 002a3d58

void FUN_002a3d58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long local_28;
  undefined8 local_20;
  undefined8 local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  puVar1 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  (*(code *)PTR__objc_msgSend_02578628)();
  (*(code *)PTR__objc_release_02578630)(puVar1);
  if (((ulong)puVar2 & 1) == 0) {
    (*DAT_028c9620)(local_18,local_20,local_28);
  }
  else {
    lVar3 = local_28;
    (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_state_026cab20);
    if (((lVar3 == 1) || (lVar3 == 2)) || (lVar3 == 0)) {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_MiniTaskPan_handle_before_state_ld);
      _objc_retainAutoreleasedReturnValue();
      FUN_002b5ec8();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    (*DAT_028c9620)(local_18,local_20,local_28);
    if ((lVar3 == 1) || (lVar3 == 2)) {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_MiniTaskPan_handle_after_state_ld);
      _objc_retainAutoreleasedReturnValue();
      FUN_002b5ec8();
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
    else if (((lVar3 == 3) || (lVar3 == 4)) || (lVar3 == 5)) {
      puVar1 = PTR__OBJC_CLASS___NSString_026cdfe8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___NSString_026cdfe8,PTR_s_stringWithFormat__0269cca8,
                 &cf_pan_state_ld);
      _objc_retainAutoreleasedReturnValue();
      FUN_002ba42c(DAT_02323c78);
      (*(code *)PTR__objc_release_02578630)(puVar1);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

