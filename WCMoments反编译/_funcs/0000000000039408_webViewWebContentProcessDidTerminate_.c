// webViewWebContentProcessDidTerminate: @0x39408

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::webViewWebContentProcessDidTerminate_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 uVar1;
  ID IVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 local_50;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _Trace(&cf_web_terminated,PTR____NSDictionary0__struct_00110720);
  _objc_msgSend_setReady_(local_18,local_50,0);
  _objc_msgSend_setLastJSON_(local_18,local_50,0);
  _objc_msgSend_setBridgeRows_(local_18,local_50,0);
  IVar2 = local_18;
  lVar3 = _objc_msgSend_bridgeGeneration(local_18,local_50);
  _objc_msgSend_setBridgeGeneration_(IVar2,local_50,lVar3 + 1);
  _objc_msgSend_setBridgeBusy_(local_18,local_50,0);
  _objc_msgSend_setPendingFeedSnapshot_(local_18,local_50,0);
  uVar1 = local_28;
  uVar4 = _objc_alloc(&_OBJC_CLASS___NSString);
  uVar4 = _objc_msgSend_initWithBytes_length_encoding_(uVar4,local_50,&_WCMHTML,0x992e,4);
  _objc_msgSend_loadHTMLString_baseURL_(uVar1,local_50,uVar4,0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  (*(code *)PTR__objc_release_00110458)(uVar4);
  _objc_storeStrong(&local_28,0);
  return;
}

