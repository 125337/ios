// automaticallyNotifiesObserversForKey: @0xa09a0

/* Function Stack Size: 0x18 bytes */

bool WCMYYAnimatedImageView::automaticallyNotifiesObserversForKey_
               (ID param_1,SEL param_2,ID param_3)

{
  ulong uVar1;
  undefined8 local_50;
  ID local_48;
  class_t *local_40;
  undefined4 local_34;
  undefined8 local_30;
  SEL local_28;
  ID local_20;
  byte local_11;
  
  local_30 = 0;
  local_28 = param_2;
  local_20 = param_1;
  _objc_storeStrong(&local_30,param_3);
  uVar1 = _objc_msgSend_isEqualToString_(local_30,local_50,&cf_currentAnimatedImageIndex);
  if ((uVar1 & 1) == 0) {
    local_48 = local_20;
    local_40 = &objc::class_t::WCMYYAnimatedImageView;
    local_11 = _objc_msgSendSuper2(&local_48,"automaticallyNotifiesObserversForKey:",local_30);
    local_11 = local_11 & 1;
  }
  else {
    local_11 = 0;
  }
  local_34 = 1;
  _objc_storeStrong(&local_30,0);
  return local_11 & 1;
}

