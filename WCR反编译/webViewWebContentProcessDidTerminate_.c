// webViewWebContentProcessDidTerminate: @ 01e8fe84

/* Function Stack Size: 0x18 bytes */

void WCRefineToDoCardView::webViewWebContentProcessDidTerminate_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ID local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  if (local_28 == DAT_028e47d0) {
    _objc_storeStrong(0,&DAT_028e47d8);
    _objc_storeStrong(&DAT_028e47e0,0);
    _objc_storeStrong(&DAT_028e47f8,0);
    _objc_storeStrong(&DAT_028e47e8,0);
    _objc_storeStrong(&DAT_028e47f0,0);
    IVar2 = local_18;
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_webView_026a12c0);
    _objc_retainAutoreleasedReturnValue();
    bVar1 = false;
    if (IVar2 == local_28) {
      puVar3 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      (*(code *)PTR__objc_msgSend_02578628)();
      bVar1 = puVar4 == (undefined1 *)((long)&MACH_HEADER.magic + 2);
      (*(code *)PTR__objc_release_02578630)(puVar3);
    }
    (*(code *)PTR__objc_release_02578630)(IVar2);
    if (bVar1) {
      (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_renderWebView_026c7010);
    }
  }
  _objc_storeStrong(&local_28,0);
  return;
}

