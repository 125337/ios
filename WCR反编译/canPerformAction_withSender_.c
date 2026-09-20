// canPerformAction:withSender: @ 0094f134

/* Function Stack Size: 0x20 bytes */

bool WCRClipboardHistoryPanelController::canPerformAction_withSender_
               (ID param_1,SEL param_2,SEL param_3,ID param_4)

{
  byte bVar1;
  ID local_50;
  undefined *local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined *local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  bVar1 = 0;
  local_38 = 0;
  local_30 = (undefined *)param_3;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_38,param_4);
  if ((((local_30 == PTR_s_wcr_clipFavorite__026aaa48) ||
       (local_30 == PTR_s_wcr_clipCancelFavorite__026aaa40)) ||
      (local_30 == PTR_s_wcr_clipRemark__026aaa50)) || (local_30 == PTR_s_wcr_clipDelete__026aaa58))
  {
    local_11 = 1;
  }
  else {
    local_50 = local_20;
    local_48 = PTR_WCRClipboardHistoryPanelController_026cf938;
    _objc_msgSendSuper2(&local_50,PTR_s_canPerformAction_withSender__026a50d8,local_30,local_38);
    local_11 = bVar1 & 1;
  }
  local_3c = 1;
  _objc_storeStrong(&local_38,0);
  return local_11 & 1;
}

