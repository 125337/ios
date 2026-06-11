# P1-7 / P1-8 / P1-9 综合修复方案

> 基于 `/www/wwwroot/ios/MioPlugin` 代码仓库，`/www/wwwroot/ios/MioPlugin/Core/ConfigDescriptor.h` 等文件的最新状态

---

## P1-7: 补充 12 个 Config.h 的 `NS_ASSUME_NONNULL` 标注

### 问题

| 已有 | 缺失 |
|------|------|
| `ChatTopBarConfig.h` ✅ | `CardBgConfig.h` |
| `MessageTimeConfig.h` ✅ | `ListCornerRadiusConfig.h` |
| | `ClearUnreadConfig.h` |
| | `RevokeConfig.h` |
| | `RedEnvelopConfig.h` |
| | `PlaceholderTextConfig.h` |
| | `UIPurifyConfig.h` |
| | `AttachLayoutConfig.h` |
| | `JokerConfig.h` |
| | `HideAvatarConfig.h` |
| | `GroupExitConfig.h` |
| | `AutoTransferConfig.h` |

### 修复方法

**对每个缺失的 `.h` 文件**，在 `#import` 之后、`@interface` 之前添加 `NS_ASSUME_NONNULL_BEGIN`，在 `@end` 之后添加 `NS_ASSUME_NONNULL_END`。

以 `CardBgConfig.h` 为例：

```objc
// 改造前
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface CardBgConfig : NSObject <ConfigModule>
...
@end

// 改造后
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface CardBgConfig : NSObject <ConfigModule>
...
@end

NS_ASSUME_NONNULL_END
```

### 涉及文件（12 个）

| # | 文件 | 改动 |
|---|------|------|
| 1 | `Modules/ProfileCardBg/CardBgConfig.h` | 添加 2 行 |
| 2 | `Modules/ListCornerRadius/ListCornerRadiusConfig.h` | 添加 2 行 |
| 3 | `Modules/Unread/ClearUnreadConfig.h` | 添加 2 行 |
| 4 | `Modules/Revoke/RevokeConfig.h` | 添加 2 行 |
| 5 | `Modules/RedEnvelop/RedEnvelopConfig.h` | 添加 2 行 |
| 6 | `Modules/PlaceholderText/PlaceholderTextConfig.h` | 添加 2 行 |
| 7 | `Modules/Layout/UIPurifyConfig.h` | 添加 2 行 |
| 8 | `Modules/Layout/AttachLayoutConfig.h` | 添加 2 行 |
| 9 | `Modules/Joker/JokerConfig.h` | 添加 2 行 |
| 10 | `Modules/HideAvatar/HideAvatarConfig.h` | 添加 2 行 |
| 11 | `Modules/GroupExit/GroupExitConfig.h` | 添加 2 行 |
| 12 | `Modules/AutoTransfer/AutoTransferConfig.h` | 添加 2 行 |

### 注意事项

- `NS_ASSUME_NONNULL_BEGIN` / `NS_ASSUME_NONNULL_END` 是编译器指令，**只影响类型标注**，不影响运行时
- `nullable` 类型的属性需要显式标明（如 `@property (nonatomic, copy, nullable) NSString *customText`），否则编译器会发出警告
- 如果编译时有 `nullable` 相关的 warning，在对应属性上添加 `nullable` 或 `null_resettable` 标记即可

---

## P1-8: 统一 RevokeConfig.h 的 import 路径

### 问题

`RevokeConfig.h` 使用相对路径导入，而其他所有 `*Config.h` 使用直接引用：

```objc
// RevokeConfig.h — 当前（相对路径）
#import "../../Core/ConfigModule.h"
#import "../../Config/Constants.h"

// 其他所有 Config.h — 直接引用
#import "ConfigModule.h"
```

### 修复方法

```objc
// 改造后
#import <Foundation/Foundation.h>
#import "ConfigModule.h"
#import "Constants.h"
```

### 前提条件

编译时需要确保 Header Search Paths 包含以下目录：

```
$(SRCROOT)/MioPlugin/Core     ← 使 "ConfigModule.h" 可找到
$(SRCROOT)/MioPlugin/Config   ← 使 "Constants.h" 可找到
```

如果当前构建配置中 `Core/` 已在搜索路径中（其他 Config.h 使用 `#import "ConfigModule.h"` 的事实已证明这一点），则只需添加 `Config/` 目录到 User Header Search Paths。

### 验证方法

修改后执行编译，如果报 `'ConfigModule.h' file not found` 或 `'Constants.h' file not found` 错误，说明 Header Search Paths 配置不完整。需要检查 Build Settings → **User Header Search Paths** 或 **Header Search Paths** 中添加：

```
$(SRCROOT)/MioPlugin/Config
```

---

## P1-9: 清理 Tweak.m 中的临时代码

### 问题

`Tweak.m` 第 54 行存在临时代码：

```objc
// ★ 资料卡模块暂未通过 FeatureModuleRegistry 注册
// 待实现 +install 后可删除此行
[ProfileCardBgHook initProfileCardHook];
```

### 修复方法

#### 第一步：确认资料卡 Hook 已正常注册

检查 `FeatureModuleRegistry.m`，找到类似 `@"profileCard"` 或资料卡模块的注册位置，确认 `ProfileCardBgHook` 是否已加入其 `hookInstallerClasses` 数组。

如果未加入，则需要添加。添加后 `ProfileCardBgHook` 的 `install` 方法会在插件初始化时自动被调用。

#### 第二步：删除临时代码

```objc
// 删除以下 3 行
// ★ 资料卡模块暂未通过 FeatureModuleRegistry 注册
// 待实现 +install 后可删除此行
[ProfileCardBgHook initProfileCardHook];
```

#### 第三步（可选）：删除不再使用的 import

如果删除这 3 行后，`Tweak.m` 中 `#import "Modules/ProfileCardBg/ProfileCardBgHook.h"` 不再有其他引用，也要一并删除：

```objc
// 删除以下行（如果没有其他引用）
#import "Modules/ProfileCardBg/ProfileCardBgHook.h"
```

如果 `#import "Modules/ProfileCardBg/CardBgConfig.h"`（第 19 行）也只是为了注册 `CardBgConfig` 模块，则保留它（`[ConfigManager registerModule:CardBgConfig.class]` 依赖于它），只需删除 `ProfileCardBgHook.h` 的 import。

---

# 用户测试方法

## P1-7 测试（nullability 标注不改变运行时，只需编译验证）

| 步骤 | 操作 | 预期结果 |
|:----:|------|---------|
| 1 | 执行完整编译 | 编译通过，无 warning |
| 2 | 打开微信 → 进入插件设置页 | 所有模块的配置页正常显示 |
| 3 | 修改每个模块至少 2 个配置项（Bool 开关、数值输入、文字输入） | 配置正常保存 |
| 4 | 验证每种数据类型的功能是否正常 | ✅ Bool 开关生效/关闭 |
| | | ✅ Integer 数值生效 |
| | | ✅ Float 数值生效 |
| | | ✅ String 文字显示正确 |
| | | ✅ Array 列表功能正常 |

## P1-8 测试（import 路径变更）

| 步骤 | 操作 | 预期结果 |
|:----:|------|---------|
| 1 | 执行完整编译 | ✅ 编译通过 |
| 2 | 打开微信 → 进入插件设置 → **防撤回设置** | ✅ 设置页正常显示 |
| 3 | 修改防撤回开关、通知格式等配置项 | ✅ 正常保存 |
| 4 | 执行撤回测试：发一条消息 → 让对方撤回 | ✅ 防撤回功能正常（消息不被撤回/显示被拦截） |
| 5 | 再次进入防撤回设置页 | ✅ 配置项保持修改后的值 |

## P1-9 测试（删除临时代码后验证资料卡功能）

| 步骤 | 操作 | 预期结果 |
|:----:|------|---------|
| 1 | 执行完整编译 | ✅ 编译通过 |
| 2 | 打开微信 | ✅ 正常启动，不闪退 |
| 3 | 进入任意聊天 → 点击右上角"..." → **点击对方头像** | ✅ 进入对方资料卡页面 |
| 4 | 观察资料卡背景 | ✅ 背景图/颜色正常显示 |
| 5 | 观察资料卡圆角 | ✅ 圆角效果与配置一致 |
| 6 | 将手机切换为**深色模式** | ✅ 资料卡背景正确适配深色 |
| 7 | 切回**浅色模式** | ✅ 资料卡背景恢复正常 |
| 8 | 在插件设置 → 资料卡配置中，修改背景模式/圆角半径等 | ✅ 功能生效 |
| 9 | 杀掉微信进程 → 重新打开 | ✅ 资料卡功能仍然正常 |

---

# 影响范围汇总

| 项目 | P1-7 | P1-8 | P1-9 |
|------|------|------|------|
| **修改文件数** | 12 | 1 | 1~2 |
| **新增行数** | 24（每文件 2 行） | 0（替换 2 行） | -3（删除 3 行） |
| **运行时影响** | 无 | 无 | 无 |
| **编译验证** | 需要 | 需要 | 需要 |
| **功能验证** | 间接（需确认每个数据类型正常运行） | 需要（重点防撤回功能） | 需要（重点资料卡功能） |
| **回滚难度** | 极低（每文件删 2 行） | 极低（改回旧 import） | 极低（恢复 3 行） |