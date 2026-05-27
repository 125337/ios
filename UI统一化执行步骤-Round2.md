# UI 统一化执行步骤 - Round 2

> 目标：卡片容器、Section Header、可编辑行统一  
> 日期：2026-05-28  
> 状态：**已完成** — 2026-05-28 复查

---

## 复查结果

| # | 检查项 | 结果 |
|---|--------|------|
| 1 | §2.2 卡片容器 — `addTableGroupAtY:` → `WPMakeCard` | ✅ L159-163 |
| 2 | §2.3 Section Header — `addSectionHeader:` → `WPMakeSectionHeader` | ✅ L172-183 |
| 3 | §2.4 导航行 — 不改动 | 按计划 |
| 4 | §2.5 可编辑行 — `addInputRowInGroup:` → `WPAddEditableRowWithArrow` | ✅ |
| 5 | `WPUISimplifyVC.m` `onEditRowTap:` 增加 PluginConfig 分支 | ✅ L70-80 |
| 6 | `autoSaveTextField:` 删除 | ✅ |
| 7 | `textFieldChanged:` 删除 | ✅ |
| 8 | `inputFields` property 清理（.h/.m/dealloc） | ✅ |
| 9 | `textFieldDone:` 死代码删除 | ✅ |

---

## 实际变更汇总

| 文件 | 变更 |
|------|------|
| [SettingCategoryController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m) | `addTableGroupAtY:` → 调用 `WPMakeCard`（L159-163） |
| [SettingCategoryController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m) | `addSectionHeader:` → 调用 `WPMakeSectionHeader` + 适配 frame（L172-183） |
| [SettingCategoryController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m) | `addInputRowInGroup:` → `WPAddEditableRowWithArrow` + `editConfigKey`/`editConfigHint` |
| [SettingCategoryController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m) | 删除 `autoSaveTextField:`、`textFieldChanged:`、`textFieldDone:`、`inputFields` 属性 |
| [WPUISimplifyVC.m](file:///www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPUISimplifyVC.m) | `onEditRowTap:` 增加 PluginConfig KVC 保存分支（L70-80） |

**净效果**：统一 3 个组件（卡片 + Section Header + 可编辑行），净减约 70 行。