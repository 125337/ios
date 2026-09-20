// FUN_002df258 @ 002df258

/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_002df258(void)

{
  dispatch_queue_t pdVar1;
  undefined *puVar2;
  dispatch_queue_t pdVar3;
  undefined *puVar4;
  cfstringStruct *pcVar5;
  undefined *local_18;
  
  puVar2 = PTR_WCRefineConfig_026cdf58;
  (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
  _objc_retainAutoreleasedReturnValue();
  local_18 = puVar2;
  (*(code *)PTR__objc_msgSend_02578628)(puVar2,PTR_s_fontBeautifyEnabled_026a1cb8);
  if (((ulong)puVar2 & 1) != 0) {
    pdVar3 = _dispatch_queue_create
                       ("com.qimiao.wcrefine.fontbeautify.config",(dispatch_queue_attr_t)0x0);
    pdVar1 = DAT_028c9870;
    DAT_028c9870 = pdVar3;
    (*(code *)PTR__objc_release_02578630)(pdVar1);
    puVar4 = PTR__OBJC_CLASS___NSCache_026ce1d8;
    _objc_alloc_init();
    puVar2 = DAT_028c9878;
    DAT_028c9878 = puVar4;
    (*(code *)PTR__objc_release_02578630)(puVar2);
    puVar2 = DAT_028c9878;
    (*(code *)PTR__objc_msgSend_02578628)(DAT_028c9878,PTR_s_setCountLimit__0269e0d0,0x40);
    FUN_002df960();
    FUN_002e06c4();
    if (((ulong)puVar2 & 1) != 0) {
      _CFNotificationCenterGetDarwinNotifyCenter();
      _CFNotificationCenterAddObserver
                (puVar2,0,FUN_002e07ec,&cf_com_qimiao_wcrefine_settings_changed,0,4);
      FUN_002e081c(PTR_s_systemFontOfSize__0269cc50,FUN_002e08fc,&DAT_028c9880);
      FUN_002e081c(PTR_s_boldSystemFontOfSize__0269cf28,FUN_002e0a7c,&DAT_028c9888);
      FUN_002e081c(PTR_s_italicSystemFontOfSize__026a1cc0,FUN_002e0bfc,&DAT_028c9890);
      FUN_002e081c(PTR_s_systemFontOfSize_weight__026cab60,FUN_002e0d7c,&DAT_028c9898);
      FUN_002e081c(PTR_s_systemFontOfSize_weight_design__026a1cc8,FUN_002e0f0c,&DAT_028c98a0);
      pcVar5 = &cf_systemFontOfSize_traits_;
      _NSSelectorFromString();
      FUN_002e081c(pcVar5,FUN_002e10dc,&DAT_028c98a8);
      pcVar5 = &cf_userFontOfSize_;
      _NSSelectorFromString();
      FUN_002e081c(pcVar5,FUN_002e1274,&DAT_028c98b0);
      pcVar5 = &cf_mediumSystemFontOfSize_;
      _NSSelectorFromString();
      FUN_002e081c(pcVar5,FUN_002e13fc,&DAT_028c98b8);
      FUN_002e081c(PTR_s_fontWithName_size__026a1cd0,FUN_002e16bc,&DAT_028c98c0);
      FUN_002e081c(PTR_s_fontWithName_size_traits__026a1cd8,FUN_002e1a10,&DAT_028c98c8);
      pcVar5 = &cf__systemFontsOfSize_traits_;
      _NSSelectorFromString();
      FUN_002e081c(pcVar5,FUN_002e1ca4,&DAT_028c98d0);
      pcVar5 = &cf__opticalSystemFontOfSize_;
      _NSSelectorFromString();
      FUN_002e081c(pcVar5,FUN_002e1e50,&DAT_028c98d8);
      pcVar5 = &cf__opticalBoldSystemFontOfSize_;
      _NSSelectorFromString();
      FUN_002e081c(pcVar5,FUN_002e1fd0,&DAT_028c98e0);
      pcVar5 = &cf__lightSystemFontOfSize_;
      _NSSelectorFromString();
      FUN_002e081c(pcVar5,FUN_002e2150,&DAT_028c98e8);
      pcVar5 = &cf__thinSystemFontOfSize_;
      _NSSelectorFromString();
      FUN_002e081c(pcVar5,FUN_002e22d0,&DAT_028c98f0);
      pcVar5 = &cf__ultraLightSystemFontOfSize_;
      _NSSelectorFromString();
      FUN_002e081c(pcVar5,FUN_002e2450,&DAT_028c98f8);
      puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      FUN_002e25d0(puVar2,PTR_s_setFont__026ca958,FUN_002e2694,&DAT_028c9900);
      puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      FUN_002e25d0(puVar2,PTR_s_setAttributedText__026a0000,FUN_002e28b0,&DAT_028c9908);
      puVar2 = PTR__OBJC_CLASS___UILabel_026cdfb8;
      (*(code *)PTR__objc_msgSend_02578628)(PTR__OBJC_CLASS___UILabel_026cdfb8,PTR_s_class_0269cd60)
      ;
      FUN_002e25d0(puVar2,PTR_s_didMoveToWindow_0269ddb8,FUN_002e2c40,&DAT_028c9910);
      puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
      FUN_002e25d0(puVar2,PTR_s_initWithFrame_configuration__026a1ce0,FUN_002e3210,&DAT_028c9918);
      puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
      FUN_002e25d0(puVar2,PTR_s_loadRequest__026a1ce8,FUN_002e337c,&DAT_028c9920);
      puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
      FUN_002e25d0(puVar2,PTR_s_loadHTMLString_baseURL__026a1cf0,FUN_002e353c,&DAT_028c9928);
      puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
      FUN_002e25d0(puVar2,PTR_s_loadFileURL_allowingReadAccessTo_026a1cf8,FUN_002e36c0,&DAT_028c9930
                  );
      puVar2 = PTR__OBJC_CLASS___WKWebView_026ce4e8;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___WKWebView_026ce4e8,PTR_s_class_0269cd60);
      FUN_002e25d0(puVar2,PTR_s_didMoveToWindow_0269ddb8,FUN_002e3844,&DAT_028c9938);
      puVar2 = PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0,PTR_s_class_0269cd60);
      FUN_002e25d0(puVar2,PTR_s_init_026ca6a8,FUN_002e3928,&DAT_028c9940);
      puVar2 = PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0;
      (*(code *)PTR__objc_msgSend_02578628)
                (PTR__OBJC_CLASS___WKWebViewConfiguration_026ce4f0,PTR_s_class_0269cd60);
      FUN_002e25d0(puVar2,PTR_s_initWithCoder__026ca6c0,FUN_002e3a1c,&DAT_028c9948);
    }
  }
  _objc_storeStrong(&local_18,0);
  return;
}

