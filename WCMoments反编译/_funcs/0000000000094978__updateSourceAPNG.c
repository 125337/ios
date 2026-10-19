// _updateSourceAPNG @0x94978

/* Function Stack Size: 0x10 bytes */

void WCMYYImageDecoder::_updateSourceAPNG(ID param_1,SEL param_2)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 local_68;
  undefined8 local_50;
  uint local_44;
  uint local_40;
  byte local_39;
  undefined8 local_38;
  uint local_30;
  uint local_2c;
  uint *local_28;
  SEL local_20;
  ID local_18;
  
  local_20 = param_2;
  local_18 = param_1;
  _wcm_yy_png_info_release(*(undefined8 *)(param_1 + 0x58));
  *(undefined8 *)(local_18 + 0x58) = 0;
  _objc_msgSend__updateSourceImageIO(local_18,local_68);
  if ((*(long *)(local_18 + 0xb0) != 0) && ((*(byte *)(local_18 + 0x90) & 1) != 0)) {
    uVar5 = _objc_msgSend_bytes(*(undefined8 *)(local_18 + 0x98),local_68);
    uVar6 = _objc_msgSend_length(*(undefined8 *)(local_18 + 0x98),local_68);
    local_28 = (uint *)_wcm_yy_png_info_create(uVar5,uVar6);
    if (local_28 != (uint *)0x0) {
      if ((local_28[10] == 0) || ((local_28[10] == 1 && ((local_28[0x11] & 1) != 0)))) {
        _wcm_yy_png_info_release(local_28);
      }
      else {
        if (*(long *)(local_18 + 0x50) != 0) {
          _CFRelease(*(undefined8 *)(local_18 + 0x50));
          *(undefined8 *)(local_18 + 0x50) = 0;
        }
        local_2c = *local_28;
        local_30 = local_28[1];
        local_38 = _objc_opt_new(&_OBJC_CLASS___NSMutableArray);
        local_39 = 0;
        local_40 = 0;
        for (local_44 = 0; local_44 < local_28[10]; local_44 = local_44 + 1) {
          local_50 = _objc_opt_new(&objc::class_t::_YYImageDecoderFrame);
          _objc_msgSend_addObject_(local_38,local_68,local_50);
          lVar9 = *(long *)(local_28 + 8) + (ulong)local_44 * 0x28;
          _objc_msgSend_setIndex_(local_50,local_68,local_44);
          _wcm_yy_png_delay_wcm_to_seconds
                    (*(undefined2 *)(lVar9 + 0x20),*(undefined2 *)(lVar9 + 0x22));
          _objc_msgSend_setDuration_(local_50,local_68);
          _objc_msgSend_setHasAlpha_(local_50,local_68,1);
          _objc_msgSend_setWidth_(local_50,local_68,*(undefined4 *)(lVar9 + 0x10));
          _objc_msgSend_setHeight_(local_50,local_68,*(undefined4 *)(lVar9 + 0x14));
          _objc_msgSend_setOffsetX_(local_50,local_68,*(undefined4 *)(lVar9 + 0x18));
          _objc_msgSend_setOffsetY_
                    (local_50,local_68,(local_30 - *(int *)(lVar9 + 0x1c)) - *(int *)(lVar9 + 0x14))
          ;
          uVar7 = _objc_msgSend_width(local_50,local_68);
          bVar3 = false;
          if (uVar7 == local_2c) {
            uVar7 = _objc_msgSend_height(local_50,local_68);
            bVar3 = uVar7 == local_30;
          }
          bVar4 = false;
          if (*(int *)(lVar9 + 0x18) == 0) {
            bVar4 = *(int *)(lVar9 + 0x1c) == 0;
          }
          bVar2 = false;
          if (bVar3) {
            bVar2 = bVar4;
          }
          _objc_msgSend_setIsFullSize_(local_50,local_68,bVar2);
          if (*(byte *)(lVar9 + 0x24) == 1) {
            _objc_msgSend_setDispose_(0,local_50,local_68,1);
          }
          else {
            iVar1 = *(byte *)(lVar9 + 0x24) - 2;
            if (iVar1 == 0) {
              _objc_msgSend_setDispose_(0,local_50,local_68,2);
            }
            else {
              _objc_msgSend_setDispose_(iVar1,local_50,local_68,0);
            }
          }
          iVar1 = *(byte *)(lVar9 + 0x25) - 1;
          if (iVar1 == 0) {
            _objc_msgSend_setBlend_(0,local_50,local_68,1);
          }
          else {
            _objc_msgSend_setBlend_(iVar1,local_50,local_68,0);
          }
          lVar9 = _objc_msgSend_blend(local_50,local_68);
          if ((lVar9 == 0) &&
             (uVar7 = _objc_msgSend_isFullSize(local_50,local_68), (uVar7 & 1) != 0)) {
            _objc_msgSend_setBlendFromIndex_(local_50,local_68,local_44);
            lVar9 = _objc_msgSend_dispose(local_50,local_68);
            if (lVar9 != 2) {
              local_40 = local_44;
            }
          }
          else {
            lVar9 = _objc_msgSend_dispose(local_50,local_68);
            if ((lVar9 == 1) &&
               (uVar7 = _objc_msgSend_isFullSize(0,local_50,local_68), (uVar7 & 1) != 0)) {
              _objc_msgSend_setBlendFromIndex_(local_50,local_68,local_40);
              local_40 = local_44 + 1;
            }
            else {
              _objc_msgSend_setBlendFromIndex_(local_50,local_68,local_40);
            }
          }
          lVar9 = _objc_msgSend_index(local_50,local_68);
          lVar8 = _objc_msgSend_blendFromIndex(local_50,local_68);
          if (lVar9 != lVar8) {
            local_39 = 1;
          }
          _objc_storeStrong(lVar9 != lVar8,&local_50,0);
        }
        *(ulong *)(local_18 + 0xc0) = (ulong)local_2c;
        *(ulong *)(local_18 + 200) = (ulong)local_30;
        uVar5 = _objc_msgSend_count(local_38,local_68);
        *(undefined8 *)(local_18 + 0xb0) = uVar5;
        *(ulong *)(local_18 + 0xb8) = (ulong)local_28[0xb];
        *(byte *)(local_18 + 0x78) = local_39 & 1;
        *(uint **)(local_18 + 0x58) = local_28;
        _dispatch_semaphore_wait(*(dispatch_semaphore_t *)(local_18 + 0x68),0xffffffffffffffff);
        _objc_storeStrong(local_18 + 0x70,local_38);
        _dispatch_semaphore_signal(*(dispatch_semaphore_t *)(local_18 + 0x68));
        _objc_storeStrong(&local_38,0);
      }
    }
  }
  return;
}

