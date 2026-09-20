// FUN_000f929c @ 000f929c

byte FUN_000f929c(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong local_20;
  byte local_11;
  
  local_20 = 0;
  _objc_storeStrong(&local_20,param_1);
  if (local_20 == 0) {
    local_11 = 0;
  }
  else {
    uVar2 = local_20;
    FUN_000f9c48(local_20,"m_bIsLocating");
    if ((uVar2 & 1) == 0) {
      uVar2 = local_20;
      FUN_000f9c48(local_20,"m_scrollingToFirstUnRead");
      if ((uVar2 & 1) == 0) {
        uVar2 = local_20;
        FUN_000f9c48(local_20,"m_scrollingTableToBottom");
        if ((uVar2 & 1) == 0) {
          uVar2 = local_20;
          FUN_000f9ad4(local_20,"m_newArrMessageNodeData");
          _objc_retainAutoreleasedReturnValue();
          (*(code *)PTR__objc_release_02578630)();
          if (uVar2 == 0) {
            uVar2 = local_20;
            FUN_000f9ad4(local_20,"_locateMsg");
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_release_02578630)();
            if (uVar2 == 0) {
              uVar2 = local_20;
              (*(code *)PTR__objc_msgSend_02578628)
                        (local_20,PTR_s_respondsToSelector__026ca818,PTR_s_locateMsg_0269ebb0);
              bVar1 = false;
              if ((uVar2 & 1) != 0) {
                uVar2 = local_20;
                (*(code *)PTR__objc_msgSend_02578628)(local_20,PTR_s_locateMsg_0269ebb0);
                _objc_retainAutoreleasedReturnValue();
                bVar1 = uVar2 != 0;
                (*(code *)PTR__objc_release_02578630)(uVar2);
              }
              if (bVar1) {
                local_11 = 1;
              }
              else {
                local_11 = 0;
              }
            }
            else {
              local_11 = 1;
            }
          }
          else {
            local_11 = 1;
          }
        }
        else {
          local_11 = 1;
        }
      }
      else {
        local_11 = 1;
      }
    }
    else {
      local_11 = 1;
    }
  }
  _objc_storeStrong(&local_20,0);
  return local_11 & 1;
}

