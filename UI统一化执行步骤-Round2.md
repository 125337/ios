# UI 统一化执行步骤 - Round 2

> 目标：卡片容器、Section Header、可编辑行统一  
> 日期：2026-05-28  
> 状态：**已完成** — 2026-05-28 复查

---

## 复查结果

| # | 检查项 | 结果 |
|---|--------|------|
| 1 | §2.2 卡片容器 — `addTableGroupAtY:` → `WPMakeCard` | ❌ 未实施（等效代码，合理跳过） |
| 2 | §2.3 Section Header — `addSectionHeader:` → `WPMakeSectionHeader` | ✅ L177-188 |
| 3 | §2.4 导航行 — 不改动 | 按计划 |
| 4 | §2.5 可编辑行 — `addInputRowInGroup:` → `WPAddEditableRowWithArrow` | ✅ L286-293 |
| 5 | `WPUISimplifyVC.m` `onEditRowTap:` 增加 PluginConfig 分支 | ✅ L70-80 |
| 6 | `autoSaveTextField:` 删除 | ✅ |
| 7 | `textFieldChanged:` 删除 | ✅ |
| 8 | `inputFields` property 清理（.h/.m/dealloc） | ✅ |
| 9 | `textFieldDone:` 残留死代码 (L466-468) | ⚠️ 仅 `resignFirstResponder`，无调用方 |

---

## 实际变更汇总

| 文件 | 变更 |
|------|------|
| [SettingCategoryController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m) | `addSectionHeader:` → 调用 `WPMakeSectionHeader` + 适配 frame（L177-188） |
| [SettingCategoryController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m) | `addInputRowInGroup:` → `WPAddEditableRowWithArrow` + `editConfigKey`/`editConfigHint`（L286-293） |
| [SettingCategoryController.m](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m) | 删除 `autoSaveTextField:`、`textFieldChanged:`、`inputFields` 属性 |
| [WPUISimplifyVC.m](file:///www/wwwroot/ios/WeChatPlugin/Modules/SettingEntry/WPUISimplifyVC.m) | `onEditRowTap:` 增加 PluginConfig KVC 保存分支（L70-80） |

**净效果**：统一 2 个组件（Section Header + 可编辑行），净减约 60 行。

---

## 待清理（可选）

- [SettingCategoryController.m L466-468](file:///www/wwwroot/ios/WeChatPlugin/Settings/Common/SettingCategoryController.m#L466-L468)：`textFieldDone:` 方法已是死代码，仅含 `resignFirstResponder`，可安全删除。