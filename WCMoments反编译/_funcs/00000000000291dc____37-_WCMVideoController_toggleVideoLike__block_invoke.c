// ___37-[WCMVideoController_toggleVideoLike]_block_invoke @0x291dc

void ___37__WCMVideoController_toggleVideoLike__block_invoke(long param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_c8;
  uint local_a0;
  undefined8 local_98;
  undefined8 local_88;
  undefined8 local_78;
  undefined8 local_68;
  undefined8 local_58;
  long local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  lVar9 = _objc_loadWeakRetained(param_1 + 0x28);
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  bVar5 = false;
  bVar4 = false;
  bVar3 = false;
  bVar2 = false;
  bVar1 = false;
  local_a0 = 1;
  if (lVar9 != 0) {
    local_28 = _objc_loadWeakRetained(param_1 + 0x28);
    bVar8 = true;
    _objc_msgSend_view(local_28,local_c8);
    local_38 = _objc_retainAutoreleasedReturnValue();
    bVar7 = true;
    _objc_msgSend_window(local_38,local_c8);
    local_48 = _objc_retainAutoreleasedReturnValue();
    bVar6 = true;
    local_a0 = 1;
    if (local_48 != 0) {
      local_58 = _objc_loadWeakRetained(param_1 + 0x28);
      bVar5 = true;
      _objc_msgSend_videos(local_58,local_c8);
      local_68 = _objc_retainAutoreleasedReturnValue();
      bVar4 = true;
      local_78 = _objc_loadWeakRetained(param_1 + 0x28);
      bVar3 = true;
      uVar10 = _objc_msgSend_index(local_78,local_c8);
      _objc_msgSend_objectAtIndexedSubscript_(local_68,local_c8,uVar10);
      local_88 = _objc_retainAutoreleasedReturnValue();
      bVar2 = true;
      _objc_msgSend_objectForKeyedSubscript_(local_88,local_c8,&cf_id);
      local_98 = _objc_retainAutoreleasedReturnValue();
      bVar1 = true;
      local_a0 = _objc_msgSend_isEqual_(local_98,local_c8,*(undefined8 *)(param_1 + 0x20));
      local_a0 = local_a0 ^ 1;
    }
  }
  if (bVar1) {
    (*(code *)PTR__objc_release_00110458)(local_98);
  }
  if (bVar2) {
    (*(code *)PTR__objc_release_00110458)(local_88);
  }
  if (bVar3) {
    (*(code *)PTR__objc_release_00110458)(local_78);
  }
  if (bVar4) {
    (*(code *)PTR__objc_release_00110458)(local_68);
  }
  if (bVar5) {
    (*(code *)PTR__objc_release_00110458)(local_58);
  }
  if (bVar6) {
    (*(code *)PTR__objc_release_00110458)(local_48);
  }
  if (bVar7) {
    (*(code *)PTR__objc_release_00110458)(local_38);
  }
  if (bVar8) {
    (*(code *)PTR__objc_release_00110458)(local_28);
  }
  (*(code *)PTR__objc_release_00110458)(lVar9);
  if ((local_a0 & 1) == 0) {
    uVar10 = _objc_loadWeakRetained(param_1 + 0x28);
    _objc_msgSend_updateVideoCounts(uVar10,local_c8);
    (*(code *)PTR__objc_release_00110458)(uVar10);
  }
  return;
}

