// URLSession:dataTask:didReceiveResponse:completionHandler: @ 00f005d0

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x30 bytes */

void WCRCloudHTTPRun::URLSession_dataTask_didReceiveResponse_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,
               undefined4 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  long local_40;
  ulong local_38 [3];
  SEL local_20;
  ID local_18;
  
  local_38[2] = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_38 + 2,param_3);
  local_38[1] = 0;
  _objc_storeStrong(local_38 + 1,param_4);
  local_38[0] = 0;
  _objc_storeStrong(local_38,param_5);
  local_40 = 0;
  _objc_storeStrong(&local_40,param_6);
  uVar2 = local_38[0];
  puVar1 = PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460;
  (*(code *)PTR__objc_msgSend_02578628)
            (PTR__OBJC_CLASS___NSHTTPURLResponse_026ce460,PTR_s_class_0269cd60);
  (*(code *)PTR__objc_msgSend_02578628)(uVar2,PTR_s_isKindOfClass__0269cd68,puVar1);
  if ((uVar2 & 1) != 0) {
    (*(code *)PTR__objc_msgSend_02578628)(local_18,PTR_s_setHttpResponse__026aba10,local_38[0]);
  }
  (**(code **)(local_40 + 0x10))(local_40,1);
  _objc_storeStrong(&local_40);
  _objc_storeStrong(local_38,0);
  _objc_storeStrong(local_38 + 1,0);
  _objc_storeStrong(local_38 + 2,0);
  return;
}

