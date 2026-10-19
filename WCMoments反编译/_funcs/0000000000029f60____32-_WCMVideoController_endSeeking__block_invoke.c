// ___32-[WCMVideoController_endSeeking]_block_invoke @0x29f60

void ___32__WCMVideoController_endSeeking__block_invoke(long param_1,byte param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_c8;
  undefined8 local_a0;
  long local_90;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 local_60;
  long local_50;
  undefined8 local_40;
  undefined8 local_30;
  
  bVar8 = false;
  bVar7 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  bVar9 = false;
  bVar6 = false;
  if ((param_2 & 1) != 0) {
    local_30 = _objc_loadWeakRetained(param_1 + 0x28);
    bVar8 = true;
    _objc_msgSend_player(local_30,local_c8);
    local_40 = _objc_retainAutoreleasedReturnValue();
    bVar7 = true;
    _objc_msgSend_currentItem(local_40,local_c8);
    local_50 = _objc_retainAutoreleasedReturnValue();
    bVar6 = true;
    bVar9 = false;
    if (local_50 == *(long *)(param_1 + 0x20)) {
      local_60 = _objc_loadWeakRetained(param_1 + 0x28);
      bVar5 = true;
      uVar10 = _objc_msgSend_userPaused(local_60,local_c8);
      bVar9 = false;
      if ((uVar10 & 1) == 0) {
        local_70 = _objc_loadWeakRetained(param_1 + 0x28);
        bVar4 = true;
        _objc_msgSend_view(local_70,local_c8);
        local_80 = _objc_retainAutoreleasedReturnValue();
        bVar3 = true;
        _objc_msgSend_window(local_80,local_c8);
        local_90 = _objc_retainAutoreleasedReturnValue();
        bVar2 = true;
        bVar9 = false;
        if (local_90 != 0) {
          _objc_msgSend_sharedApplication(&_OBJC_CLASS___UIApplication,local_c8);
          local_a0 = _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
          lVar11 = _objc_msgSend_applicationState(local_a0,local_c8);
          bVar9 = lVar11 == 0;
          bVar6 = true;
        }
      }
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_a0);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_00110458)(local_90);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_00110458)(local_80);
  }
  if (bVar4) {
    (*(code *)PTR__objc_release_00110458)(local_70);
  }
  if (bVar5) {
    (*(code *)PTR__objc_release_00110458)(local_60);
  }
  if (bVar6) {
    (*(code *)PTR__objc_release_00110458)(local_50);
  }
  if (bVar7) {
    (*(code *)PTR__objc_release_00110458)(local_40);
  }
  if (bVar8) {
    (*(code *)PTR__objc_release_00110458)(local_30);
  }
  if (bVar9) {
    uVar12 = _objc_loadWeakRetained(param_1 + 0x28);
    _objc_msgSend_player(uVar12,local_c8);
    uVar13 = _objc_retainAutoreleasedReturnValue();
    _objc_msgSend_play(uVar13,local_c8);
    (*(code *)PTR__objc_release_00110458)(uVar13);
    (*(code *)PTR__objc_release_00110458)(uVar12);
  }
  return;
}

