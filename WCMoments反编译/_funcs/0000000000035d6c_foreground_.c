// foreground: @0x35d6c

/* Function Stack Size: 0x18 bytes */

void WCMFeedController::foreground_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 local_80;
  undefined8 local_28;
  SEL local_20;
  ID local_18;
  
  local_28 = 0;
  local_20 = param_2;
  local_18 = param_1;
  _objc_storeStrong(&local_28,param_3);
  _objc_msgSend_view(local_18,local_80);
  uVar2 = _objc_retainAutoreleasedReturnValue();
  _objc_msgSend_window(uVar2,local_80);
  lVar3 = _objc_retainAutoreleasedReturnValue();
  bVar1 = false;
  if (lVar3 != 0) {
    _objc_msgSend_host(local_18,local_80);
    uVar4 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_navigationController(uVar4,local_80);
    uVar5 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_topViewController(uVar5,local_80);
    lVar6 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_host(local_18,local_80);
    lVar7 = _objc_retainAutoreleasedReturnValue();
    bVar1 = lVar6 == lVar7;
    (*(code *)PTR__objc_release_00110458)(lVar7);
    (*(code *)PTR__objc_release_00110458)(lVar6);
    (*(code *)PTR__objc_release_00110458)(uVar5);
    (*(code *)PTR__objc_release_00110458)(uVar4);
  }
  (*(code *)PTR__objc_release_00110458)(lVar3);
  (*(code *)PTR__objc_release_00110458)(uVar2);
  if (bVar1) {
    _objc_msgSend_start(local_18,local_80);
  }
  _objc_storeStrong(&local_28,0);
  return;
}

