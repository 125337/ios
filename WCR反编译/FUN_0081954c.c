// FUN_0081954c @ 0081954c

void FUN_0081954c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_38 = 0;
  local_30 = param_4;
  local_28 = param_3;
  local_20 = param_1;
  uStack_18 = param_2;
  _objc_storeStrong(&local_38,param_5);
  (*DAT_028cd188)(local_20,uStack_18,local_28,local_30,local_38);
  _WCRFrostedBubbleDecorateQuoteView(local_28);
  _objc_storeStrong(&local_38,0);
  return;
}

