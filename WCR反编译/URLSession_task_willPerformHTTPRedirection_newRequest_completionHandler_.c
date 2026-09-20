// URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler: @ 010794d4

/* WARNING: Type propagation algorithm not settling */
/* Function Stack Size: 0x38 bytes */

void WCRLinkNoRedirectDelegate::
     URLSession_task_willPerformHTTPRedirection_newRequest_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  long local_48 [6];
  ID local_18;
  
  local_48[4] = 0;
  local_48[5] = param_2;
  local_18 = param_1;
  _objc_storeStrong(local_48 + 4,param_3);
  local_48[3] = 0;
  _objc_storeStrong(local_48 + 3,param_4);
  local_48[2] = 0;
  _objc_storeStrong(local_48 + 2,param_5);
  local_48[1] = 0;
  _objc_storeStrong(local_48 + 1,param_6);
  local_48[0] = 0;
  _objc_storeStrong(local_48,param_7);
  (**(code **)(local_48[0] + 0x10))(local_48[0],0);
  _objc_storeStrong(local_48,0);
  _objc_storeStrong(local_48 + 1,0);
  _objc_storeStrong(local_48 + 2,0);
  _objc_storeStrong(local_48 + 3,0);
  _objc_storeStrong(local_48 + 4,0);
  return;
}

