// finishProgressToastSuccess:text: @ 00ffa5d4

/* Function Stack Size: 0x1c bytes */

void WCRefineLinkMediaSender::finishProgressToastSuccess_text_
               (ID param_1,SEL param_2,bool param_3,ID param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_40;
  byte local_38;
  undefined8 local_30;
  byte local_21;
  SEL local_20;
  ID local_18;
  
  local_21 = (byte)param_3;
  local_30 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_30,param_4);
  puVar2 = PTR___dispatch_main_q_02578680;
  _objc_retainAutoreleaseReturnValue();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = local_30;
  (*(code *)PTR__objc_retain_02578638)();
  local_40 = uVar1;
  local_38 = local_21 & 1;
  _dispatch_async(puVar2);
  (*(code *)PTR__objc_release_02578630)(puVar2);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  return;
}

