// ___31-[WCMFeedController_reloadFeed]_block_invoke @0x42f84

void ___31__WCMFeedController_reloadFeed__block_invoke(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_60;
  undefined8 local_20;
  long local_18;
  
  local_20 = 0;
  local_18 = param_1;
  _objc_storeStrong();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = 0;
  uVar5 = 0x4058000000000000;
  uVar4 = 0x4058000000000000;
  uVar2 = _CGRectMake(0);
  _objc_msgSend_drawInRect_(uVar2,uVar3,uVar4,uVar5,uVar1,local_60);
  _objc_storeStrong(&local_20,0);
  return;
}

