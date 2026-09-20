// initWithWXID: @ 017605e4

/* Function Stack Size: 0x18 bytes */

ID ThemeProRedeemViewController::initWithWXID_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  IVar1 = local_18;
  local_18 = 0;
  (*(code *)PTR__objc_msgSend_02578628)(IVar1,PTR_s_initWithWechatUsername__026b35c0,local_28);
  local_18 = IVar1;
  (*(code *)PTR__objc_retain_02578638)();
  _objc_storeStrong(&local_28,0);
  _objc_storeStrong(&local_18,0);
  return IVar1;
}

