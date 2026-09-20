// FUN_0012ff08 @ 0012ff08

/* WARNING: Restarted to delay deadcode elimination for space: ram */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0012ff08(undefined8 param_1)

{
  bool bVar1;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint local_404;
  uint local_3d8;
  uint local_2d4;
  uint local_2b8;
  cfstringStruct *local_f0;
  cfstringStruct *local_e8;
  cfstringStruct *local_e0;
  byte local_d1;
  cfstringStruct *local_d0;
  byte local_c1;
  cfstringStruct *local_c0;
  byte local_b1;
  long local_b0;
  undefined *local_a8;
  undefined1 local_99;
  cfstringStruct *local_90;
  cfstringStruct *local_88;
  cfstringStruct *local_80;
  undefined1 local_72;
  undefined1 local_71;
  undefined *local_70;
  byte local_61;
  cfstringStruct *local_58;
  cfstringStruct *local_50 [3];
  undefined4 local_34;
  long local_30;
  cfstringStruct *local_28;
  
  local_30 = 0;
  _objc_storeStrong(&local_30,param_1);
  if (local_30 == 0) {
    (*(code *)PTR__objc_retain_02578638)();
    local_28 = &cf___;
    local_34 = 1;
  }
  else {
    FUN_00132bd0();
    if ((DAT_028c8630 == (cfstringStruct *)0x0) || (DAT_028c8638 == (cfstringStruct *)0x0)) {
      pcVar2 = &cf_MMServiceCenter;
      _NSClassFromString();
      (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_defaultCenter_026ca5e0);
      _objc_retainAutoreleasedReturnValue();
      pcVar3 = DAT_028c8630;
      DAT_028c8630 = pcVar2;
      (*(code *)PTR__objc_release_02578630)(pcVar3);
      pcVar2 = DAT_028c8630;
      if (DAT_028c8630 != (cfstringStruct *)0x0) {
        pcVar3 = &cf_CContactMgr;
        _NSClassFromString();
        (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
        _objc_retainAutoreleasedReturnValue();
        local_50[0] = pcVar2;
        if (pcVar2 != (cfstringStruct *)0x0) {
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getSelfContact_0269da60);
          _objc_retainAutoreleasedReturnValue();
          local_58 = pcVar2;
          if (pcVar2 != (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_msgSend_02578628)
                      (pcVar2,PTR_s_valueForKey__0269d128,&cf_m_nsUsrName);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = DAT_028c8638;
            DAT_028c8638 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
          }
          _objc_storeStrong(&local_58,0);
        }
        _objc_storeStrong(local_50,0);
      }
    }
    if (DAT_028c8638 == (cfstringStruct *)0x0) {
      (*(code *)PTR__objc_retain_02578638)();
      local_28 = &cf___;
      local_34 = 1;
    }
    else {
      lVar4 = local_30;
      (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsFromUsr_0269d088);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      (*(code *)PTR__objc_msgSend_02578628)();
      (*(code *)PTR__objc_release_02578630)(lVar4);
      local_61 = (byte)lVar5;
      puVar6 = PTR_WCRefineConfig_026cdf58;
      (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      (*(code *)PTR__objc_msgSend_02578628)();
      _objc_retainAutoreleasedReturnValue();
      local_70 = puVar7;
      (*(code *)PTR__objc_release_02578630)();
      if (local_70 == (undefined *)0x0) {
        FUN_00132c3c();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = local_70;
        local_70 = puVar6;
        (*(code *)PTR__objc_release_02578630)(puVar7);
      }
      puVar6 = local_70;
      (*(code *)PTR__objc_msgSend_02578628)(local_70,PTR_s_containsString__0269d0b0,&cf__O_);
      pcVar2 = DAT_028c8630;
      local_71 = SUB81(puVar6,0);
      if (((ulong)puVar6 & 1) == 0) {
        if ((local_61 & 1) == 0) {
          (*(code *)PTR__objc_retain_02578638)();
          local_28 = &cf__;
          local_34 = 1;
        }
        else {
          pcVar3 = &cf_CMessageMgr;
          _NSClassFromString();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_getService__0269d170,pcVar3);
          _objc_retainAutoreleasedReturnValue();
          local_e8 = pcVar2;
          if (pcVar2 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = &cf__;
            local_34 = 1;
          }
          else {
            local_f0 = (cfstringStruct *)0x0;
            lVar4 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsToUsr_0269d090);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar2,PTR_s_GetLastMsgFromUsr__0269f0c8);
            _objc_retainAutoreleasedReturnValue();
            pcVar3 = local_f0;
            local_f0 = pcVar2;
            (*(code *)PTR__objc_release_02578630)(pcVar3);
            (*(code *)PTR__objc_release_02578630)(lVar4);
            if (local_f0 == (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = &cf__;
            }
            else {
              lVar4 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsToUsr_0269d090);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              (*(code *)PTR__objc_msgSend_02578628)();
              (*(code *)PTR__objc_release_02578630)(lVar4);
              if (lVar5 == 0x7fffffffffffffff) {
                lVar4 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiCreateTime_0269d208);
                pcVar2 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_m_uiCreateTime_0269d208);
                local_404 = 0;
                if ((uint)lVar4 <= (uint)pcVar2) {
                  pcVar2 = local_f0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_m_nsFromUsr_0269d088);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_404 = (uint)pcVar3 ^ 1;
                  (*(code *)PTR__objc_release_02578630)(pcVar2);
                }
                if ((local_404 & 1) == 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = &cf__;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = &cf__;
                }
              }
              else {
                lVar4 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiCreateTime_0269d208);
                pcVar2 = local_f0;
                (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_m_uiCreateTime_0269d208);
                local_3d8 = 0;
                if ((uint)lVar4 <= (uint)pcVar2) {
                  pcVar2 = local_f0;
                  (*(code *)PTR__objc_msgSend_02578628)(local_f0,PTR_s_m_nsFromUsr_0269d088);
                  _objc_retainAutoreleasedReturnValue();
                  pcVar3 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_3d8 = (uint)pcVar3 ^ 1;
                  (*(code *)PTR__objc_release_02578630)(pcVar2);
                }
                if ((local_3d8 & 1) == 0) {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = &cf__;
                }
                else {
                  (*(code *)PTR__objc_retain_02578638)();
                  local_28 = &cf__;
                }
              }
            }
            local_34 = 1;
            _objc_storeStrong(&local_f0,0);
          }
          _objc_storeStrong(&local_e8,0);
        }
      }
      else {
        puVar6 = PTR_WCRefineConfig_026cdf58;
        (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        (*(code *)PTR__objc_msgSend_02578628)();
        (*(code *)PTR__objc_release_02578630)(puVar6);
        local_72 = SUB81(puVar7,0);
        if ((local_61 & 1) == 0) {
          pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          local_34 = 1;
        }
        else if (((ulong)puVar7 & 1) == 0) {
          pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_80 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          pcVar3 = DAT_028c8630;
          pcVar2 = &cf_CMessageMgr;
          _NSClassFromString();
          (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_getService__0269d170,pcVar2);
          _objc_retainAutoreleasedReturnValue();
          pcVar2 = local_80;
          local_88 = pcVar3;
          if (pcVar3 == (cfstringStruct *)0x0) {
            (*(code *)PTR__objc_retain_02578638)();
            local_28 = pcVar2;
            local_34 = 1;
          }
          else {
            local_90 = (cfstringStruct *)0x0;
            lVar4 = local_30;
            (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsToUsr_0269d090);
            _objc_retainAutoreleasedReturnValue();
            (*(code *)PTR__objc_msgSend_02578628)(pcVar3,PTR_s_GetLastMsgFromUsr__0269f0c8);
            _objc_retainAutoreleasedReturnValue();
            pcVar2 = local_90;
            local_90 = pcVar3;
            (*(code *)PTR__objc_release_02578630)(pcVar2);
            (*(code *)PTR__objc_release_02578630)(lVar4);
            pcVar2 = local_80;
            if (local_90 == (cfstringStruct *)0x0) {
              (*(code *)PTR__objc_retain_02578638)();
              local_28 = pcVar2;
              local_34 = 1;
            }
            else {
              lVar4 = local_30;
              (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_nsToUsr_0269d090);
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              puVar6 = PTR_s_rangeOfString__0269d838;
              (*(code *)PTR__objc_msgSend_02578628)();
              bVar1 = lVar5 != 0x7fffffffffffffff;
              local_b0 = lVar5;
              local_a8 = puVar6;
              (*(code *)PTR__objc_release_02578630)(lVar4);
              local_b1 = 0;
              local_99 = bVar1;
              if (bVar1) {
                local_c1 = 0;
                lVar4 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiCreateTime_0269d208);
                pcVar2 = local_90;
                (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_uiCreateTime_0269d208);
                local_2b8 = 0;
                if ((uint)lVar4 <= (uint)pcVar2) {
                  pcVar2 = local_90;
                  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_nsFromUsr_0269d088);
                  _objc_retainAutoreleasedReturnValue();
                  local_c1 = 1;
                  local_c0 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_2b8 = (uint)pcVar2 ^ 1;
                }
                if ((local_c1 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_c0);
                }
                if ((local_2b8 & 1) != 0) {
                  local_b1 = 1;
                }
              }
              else {
                local_d1 = 0;
                lVar4 = local_30;
                (*(code *)PTR__objc_msgSend_02578628)(local_30,PTR_s_m_uiCreateTime_0269d208);
                pcVar2 = local_90;
                (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_uiCreateTime_0269d208);
                local_2d4 = 0;
                if ((uint)lVar4 <= (uint)pcVar2) {
                  pcVar2 = local_90;
                  (*(code *)PTR__objc_msgSend_02578628)(local_90,PTR_s_m_nsFromUsr_0269d088);
                  _objc_retainAutoreleasedReturnValue();
                  local_d1 = 1;
                  local_d0 = pcVar2;
                  (*(code *)PTR__objc_msgSend_02578628)();
                  local_2d4 = (uint)pcVar2 ^ 1;
                }
                if ((local_d1 & 1) != 0) {
                  (*(code *)PTR__objc_release_02578630)(local_d0);
                }
                if ((local_2d4 & 1) != 0) {
                  local_b1 = 1;
                }
              }
              pcVar2 = local_80;
              if ((local_b1 & 1) == 0) {
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = pcVar2;
                local_34 = 1;
              }
              else {
                pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
                (*(code *)PTR__objc_msgSend_02578628)
                          (PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
                _objc_retainAutoreleasedReturnValue();
                pcVar3 = pcVar2;
                (*(code *)PTR__objc_msgSend_02578628)();
                _objc_retainAutoreleasedReturnValue();
                local_e0 = pcVar3;
                (*(code *)PTR__objc_release_02578630)(pcVar2);
                pcVar2 = local_e0;
                (*(code *)PTR__objc_retain_02578638)();
                local_28 = pcVar2;
                local_34 = 1;
                _objc_storeStrong(&local_e0,0);
              }
            }
            _objc_storeStrong(&local_90,0);
          }
          _objc_storeStrong(&local_88);
          _objc_storeStrong(&local_80,0);
        }
        else {
          pcVar2 = (cfstringStruct *)PTR_WCRefineConfig_026cdf58;
          (*(code *)PTR__objc_msgSend_02578628)(PTR_WCRefineConfig_026cdf58,PTR_s_shared_0269cad0);
          _objc_retainAutoreleasedReturnValue();
          pcVar3 = pcVar2;
          (*(code *)PTR__objc_msgSend_02578628)();
          _objc_retainAutoreleasedReturnValue();
          local_28 = pcVar3;
          (*(code *)PTR__objc_release_02578630)(pcVar2);
          local_34 = 1;
        }
      }
      _objc_storeStrong(&local_70,0);
    }
  }
  _objc_storeStrong(&local_30,0);
  _objc_autoreleaseReturnValue(local_28);
  return;
}

