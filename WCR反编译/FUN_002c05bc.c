// FUN_002c05bc @ 002c05bc

undefined * FUN_002c05bc(double param_1)

{
  undefined *puVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  cfstringStruct *local_120;
  cfstringStruct *local_48 [3];
  undefined *local_30;
  cfstringStruct *local_28;
  
  pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_30 = (undefined *)0x11;
  local_28 = pcVar2;
  (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_floatingTabBarBackgroundStyleInd_026a1a48);
  local_30 = (undefined *)((long)&pcVar2[0x10].field1_0x8 + 7);
  pcVar3 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarBackgroundMediaLay_026a1ab0);
  local_30 = (undefined *)((long)&pcVar3[6].field3_0x18 + (long)&pcVar2[0x10].field1_0x8 * 0x1f + 1)
  ;
  lVar4 = (long)local_30 * 0x1f;
  FUN_002c7638();
  local_30 = (undefined *)((long)pcVar3 + lVar4);
  lVar4 = (long)local_30 * 0x1f;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarExtraButtonEnabled_0269e4c0);
  local_30 = (undefined *)(lVar4 + (ulong)(((ulong)pcVar2 & 1) != 0));
  lVar4 = (long)local_30 * 0x1f;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarHideTitles_026a1ab8);
  local_30 = (undefined *)(lVar4 + (ulong)(((ulong)pcVar2 & 1) != 0));
  lVar4 = (long)local_30 * 0x1f;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarSelectedBackground_026a18f0);
  local_30 = (undefined *)(lVar4 + (ulong)(((ulong)pcVar2 & 1) != 0));
  lVar4 = (long)local_30 * 0x1f;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarBackgroundOpacity_026a1ac0);
  param_1 = param_1 * 10.0;
  local_30 = (undefined *)(lVar4 + (long)param_1);
  lVar4 = (long)local_30 * 0x1f;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarBackgroundGlassInt_026a1ac8);
  param_1 = param_1 * 10.0;
  local_30 = (undefined *)(lVar4 + (long)param_1);
  lVar4 = (long)local_30 * 0x1f;
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarExtraButtonPositio_0269e4c8);
  local_30 = (undefined *)((long)pcVar2 + lVar4);
  lVar4 = (long)local_30 * 0x1f;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarExtraButtonOffsetX_026a1a20);
  param_1 = param_1 * 10.0;
  local_30 = (undefined *)(lVar4 + (long)param_1);
  lVar4 = (long)local_30 * 0x1f;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarExtraButtonOffsetY_026a1a28);
  param_1 = param_1 * 10.0;
  local_30 = (undefined *)(lVar4 + (long)param_1);
  lVar4 = (long)local_30 * 0x1f;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarExtraButtonSizeAdj_026a1a30);
  local_30 = (undefined *)(lVar4 + (long)(param_1 * 10.0));
  pcVar2 = local_28;
  (*(code *)PTR__objc_msgSend_02578628)(local_28,PTR_s_floatingTabBarBackgroundMediaFol_026a1a50);
  _objc_retainAutoreleasedReturnValue();
  local_120 = pcVar2;
  if (pcVar2 == (cfstringStruct *)0x0) {
    local_120 = &cf___;
  }
  (*(code *)PTR__objc_retain_02578638)();
  local_48[0] = local_120;
  (*(code *)PTR__objc_release_02578630)(pcVar2);
  lVar4 = (long)local_30 * 0x1f;
  pcVar2 = local_48[0];
  (*(code *)PTR__objc_msgSend_02578628)(local_48[0],PTR_s_hash_0269ec90);
  puVar1 = (undefined *)((long)&pcVar2->field0_0x0 + lVar4);
  local_30 = puVar1;
  _objc_storeStrong(local_48);
  _objc_storeStrong(&local_28,0);
  return puVar1;
}

