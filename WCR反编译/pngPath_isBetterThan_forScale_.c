// pngPath:isBetterThan:forScale: @ 015cb828

/* Function Stack Size: 0x28 bytes */

bool WCRefineWechatThemeStore::pngPath_isBetterThan_forScale_
               (ID param_1,SEL param_2,ID param_3,ID param_4,double param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  code *local_58;
  undefined *local_50;
  double local_48;
  undefined **local_40;
  double local_38;
  undefined8 local_30;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  local_30 = 0;
  _objc_storeStrong(&local_30,param_4);
  ppuVar1 = &local_68;
  local_68 = PTR___NSConcreteStackBlock_02578660;
  local_60 = 0xc0000000;
  local_5c = 0;
  local_58 = FUN_015cb938;
  local_50 = &DAT_02587238;
  local_48 = param_5;
  local_38 = param_5;
  _objc_retainBlock();
  local_40 = ppuVar1;
  (*(code *)ppuVar1[2])(ppuVar1,local_28);
  ppuVar2 = local_40;
  (*(code *)local_40[2])(local_40,local_30);
  _objc_storeStrong(&local_40,0);
  _objc_storeStrong(&local_30,0);
  _objc_storeStrong(&local_28,0);
  return (uint)((long)ppuVar1 < (long)ppuVar2);
}

