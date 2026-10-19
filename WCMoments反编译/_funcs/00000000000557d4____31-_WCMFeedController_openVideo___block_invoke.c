// ___31-[WCMFeedController_openVideo:]_block_invoke @0x557d4

void ___31__WCMFeedController_openVideo___block_invoke(long param_1,byte param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 local_98;
  uint local_84;
  undefined8 local_80;
  undefined4 local_78;
  byte local_71;
  undefined8 local_70;
  byte local_61;
  undefined8 local_60;
  byte local_51;
  undefined8 local_50;
  byte local_41;
  undefined8 local_40;
  long local_38;
  long local_30;
  byte local_21;
  long local_20;
  undefined8 local_18;
  
  local_30 = param_1;
  local_21 = param_2;
  local_20 = param_1;
  local_38 = _objc_loadWeakRetained(param_1 + 0x20);
  local_41 = 0;
  local_51 = 0;
  local_61 = 0;
  local_71 = 0;
  local_84 = 1;
  if (local_38 != 0) {
    _objc_msgSend_account(local_38,local_98);
    uVar1 = _objc_retainAutoreleasedReturnValue();
    local_41 = 1;
    local_40 = uVar1;
    _Context();
    local_50 = _objc_retainAutoreleasedReturnValue();
    local_51 = 1;
    _Call(local_50,&cf_userName,PTR____NSArray0__struct_00110718);
    local_60 = _objc_retainAutoreleasedReturnValue();
    local_61 = 1;
    _Text();
    local_70 = _objc_retainAutoreleasedReturnValue();
    local_71 = 1;
    local_84 = _objc_msgSend_isEqual_(uVar1,local_98);
    local_84 = local_84 ^ 1;
  }
  if ((local_71 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_70);
  }
  if ((local_61 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_60);
  }
  if ((local_51 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_50);
  }
  if ((local_41 & 1) != 0) {
    (*(code *)PTR__objc_release_00110458)(local_40);
  }
  if ((local_84 & 1) == 0) {
    _objc_msgSend_videoQueueRows(local_38,local_98);
    local_80 = _objc_retainAutoreleasedReturnValue();
    uVar2 = _objc_msgSend_tailRetryRequired(local_38,local_98);
    if (((uVar2 & 1) == 0) || ((local_21 & 1) != 0)) {
      _objc_msgSend_requestTimelineMore(local_38,local_98);
    }
    local_18 = (*(code *)PTR__objc_retain_00110460)(local_80);
    local_78 = 1;
    _objc_storeStrong(&local_80,0);
  }
  else {
    local_18 = (*(code *)PTR__objc_retain_00110460)(PTR____NSArray0__struct_00110718);
    local_78 = 1;
  }
  _objc_storeStrong(&local_38,0);
  _objc_autoreleaseReturnValue(local_18);
  return;
}

