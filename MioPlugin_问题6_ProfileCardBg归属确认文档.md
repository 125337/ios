# 问题6 确认文档：ProfileCardBgHook 与 ListCornerRadiusHook 模块归属

> **关联文档**: [MioPlugin_架构深度分析报告.md](file:///www/wwwroot/ios/MioPlugin_架构深度分析报告.md)  
> **状态**: **无需改造，已在问题 2（MioModuleRegistry 统一注册中心）中间接修复**  
> **说明**: 本文档确认问题已解决，分析残留耦合，并提供用户角度测试方法。

---

## 一、问题回顾

### 1.1 原问题描述

在旧的 `FeatureModuleRegistry`（已删除）中，`ProfileCardBgHook` 被归入 "listcorner" 模块组：

```objc
// 旧 FeatureModuleRegistry.m（已删除）
[FeatureModuleDescriptor moduleWithIdentifier:@"listcorner"
                                        title:@"列表圆角"
                                     subtitle:@"Cell圆角、边距、边框样式"
                                  controllerClass:[SettingListCornerRadiusController class]
                             hookInstallerClasses:@[[ListCornerRadiusHook class],
                                                     [ProfileCardBgHook class]]],
```

这导致：
- ProfileCardBgHook（资料卡背景、边框、箭码隐藏，~20 个配置项）**被归类为"列表圆角"的附属**
- 但实际设置页面中，两者是**完全独立的**：
  - `SettingCornerRadiusController` 作为导航页，分别跳转到：
    - `SettingListCornerRadiusController`（列表圆角设置）
    - `SettingCardBackgroundController`（资料卡背景设置）

### 1.2 为什么不需要改造

在问题 2 的改造中，`FeatureModuleRegistry` 被替换为 `MioModuleRegistry`，两者的注册已经在架构层面分开：

| 维度 | 旧 FeatureModuleRegistry | 新 MioModuleRegistry |
|------|:----------------------:|:-------------------:|
| 列表圆角 | `listcorner` 组包含 ListCornerRadiusHook + ProfileCardBgHook | **独立** `listcorner` 描述器，仅含 ListCornerRadiusHook |
| 资料卡背景 | 无独立组 | **独立** `cardbg` 描述器，仅含 ProfileCardBgHook、CardBgConfig、SettingCardBackgroundController |

---

## 二、现状验证

### 2.1 当前 MioModuleRegistry 中的注册

```objc
// MioModuleRegistry.m 第 194~209 行

// ──── 列表圆角（仅自己的 Hook） ────
[MioModuleDescriptor descriptorWithIdentifier:@"listcorner"
                                        title:@"列表圆角"
                                   configClass:[ListCornerRadiusConfig class]
                                   hookClasses:@[[ListCornerRadiusHook class]]    // ← 只含自己的 Hook
                               controllerClass:[SettingListCornerRadiusController class]
                                      subtitle:@"Cell圆角、边距、边框样式"
                                 sectionTitle:@"通用"],

// ──── 资料卡背景（完全独立） ────
[MioModuleDescriptor descriptorWithIdentifier:@"cardbg"
                                        title:@"资料卡背景"
                                   configClass:[CardBgConfig class]
                                   hookClasses:@[[ProfileCardBgHook class]]       // ← 独立描述器
                               controllerClass:[SettingCardBackgroundController class]
                                      subtitle:@"资料卡片背景自定义"
                                 sectionTitle:@"通用"],
```

**关键点**:
- `listcorner` 描述器的 `hookClasses` **只含** `[ListCornerRadiusHook class]`
- `cardbg` 描述器的 `hookClasses` **只含** `[ProfileCardBgHook class]`
- 每个描述器有自己的 `configClass`、`controllerClass`、`sectionTitle`

### 2.2 功能归属对比

| 模块 | 关联 Config | 关联 Controller | 描述器 Identifier |
|------|:----------:|:---------------:|:----------------:|
| 列表圆角 | ListCornerRadiusConfig（~10 属性） | SettingListCornerRadiusController | `listcorner` |
| 资料卡背景 | CardBgConfig（~20 属性） | SettingCardBackgroundController | `cardbg` |

**结论**: 架构层面已是两个独立模块，归属清晰。

---

## 三、残留的代码级耦合

虽然架构上已分离，但在代码层面仍存在一些**双向 import 引用**：

### 3.1 ProfileCardBgHook 引用 ListCornerRadiusConfig

```objc
// ProfileCardBgHook.m 第 3 行
#import "../ListCornerRadius/ListCornerRadiusConfig.h"

// 第 53 行: 读取"使用全局圆角"配置
ListCornerRadiusConfig *listConfig = [ListCornerRadiusConfig shared];

// 第 541 行: 同样读取
ListCornerRadiusConfig *listConfig = [ListCornerRadiusConfig shared];
```

**原因**: 资料卡背景的圆角有"使用全局圆角"选项（`cardBgCornerUseGlobal`），需要读取 `ListCornerRadiusConfig` 的全局圆角值。

### 3.2 ListCornerRadiusHook 引用 ProfileCardBgHook

```objc
// ListCornerRadiusHook.m 第 6 行
#import "../ProfileCardBg/ProfileCardBgHook.h"

// 第 500 行: 仅为注释引用
// ★ 已移交给 ProfileCardBgHook.install 自行管理，消除跨模块耦合
```

### 3.3 耦合评估

| 方向 | 程度 | 是否可以消除 |
|------|:---:|------------|
| ProfileCardBgHook → ListCornerRadiusConfig | **必要耦合**（功能依赖，读取全局圆角值） | 可以消除，但需要将全局圆角值抽取到 ConfigManager 的公共 key 中 |
| ListCornerRadiusHook → ProfileCardBgHook | **零耦合**（仅余注释） | 可以删除 import，但需要确保无运行时依赖 |

**评估**: 当前的耦合是**功能性的**（资料卡圆角需要参考列表圆角的全局设置），不是架构性的。在不改变功能的前提下，这个 import 是合理的，不需要额外解耦。

---

## 四、文件清单核对

改造后 **ProfileCardBg 模块**的当前文件结构：

```
Modules/ProfileCardBg/
├── ProfileCardBgHook.h      ← Hook 声明
├── ProfileCardBgHook.m      ← Hook 实现（imports ListCornerRadiusConfig.h）
├── CardBgConfig.h           ← Config 声明（含 20+ 属性）
├── CardBgConfig.m           ← Config 实现（含 descriptors、单例）
└── (无其他辅助类)
```

与同一层的 ListCornerRadius 模块对比：

```
Modules/ListCornerRadius/
├── ListCornerRadiusHook.h
├── ListCornerRadiusHook.m
├── ListCornerRadiusConfig.h
├── ListCornerRadiusConfig.m
└── CornerResponsibility/    ← 被 ListCornerRadius 作为工具类使用（未注册）
```

**两个模块文件数相等，结构对称，归属清晰。**

---

## 五、用户角度测试方案

由于问题已解决，测试目的是**确认功能正常，验证分离没有引入副作用**。

### 5.1 测试矩阵

| 测试 | 操作 | 预期 | 如果失败可能原因 |
|------|------|------|----------------|
| **列表圆角生效** | 开启"列表圆角"→ 回到微信发现页/会话列表 | Cell 有圆角效果 | ListCornerRadiusHook 未安装 |
| **圆角开关不影响资料卡** | 关闭"列表圆角"→ 进入他人资料卡 | 资料卡背景正常，不出现圆角缺失 | 正常（两者已独立） |
| **资料卡背景生效** | 开启"资料卡背景"并设置背景图 → 进入他人资料卡 | 显示自定义背景图/边框 | ProfileCardBgHook 未安装 |
| **资料卡圆角** | 开启"资料卡背景圆角"→ 进入他人资料卡 | 资料卡有圆角效果 | CardBgConfig 的 cardBgCornerUseGlobal 读取异常 |
| **资料卡全局圆角联动** | 开启"资料卡使用全局圆角"→ 修改列表圆角值 → 进入资料卡 | 资料卡圆角跟随列表圆角变化 | ProfileCardBgHook 读取 ListCornerRadiusConfig 失败 |
| **设置页导航** | 进入 Mio助手 → 点击"列表圆角" | 进入 SettingListCornerRadiusController | MioModuleRegistry controllerClass 正确 |
| **设置页导航** | 进入 Mio助手 → 点击"资料卡背景" | 进入 SettingCardBackgroundController | MioModuleRegistry controllerClass 正确 |

### 5.2 测试流程

```mermaid
flowchart TD
    A[安装插件到设备] --> B[进入 Mio助手 → 通用功能]
    B --> C[点击"列表圆角"]
    C --> D[进入列表圆角设置页]
    D --> E[开启列表圆角并设置值]
    E --> F[返回 → 回到微信]
    F --> G[确认发现页 Cell 有圆角]  ← ListCornerRadiusHook 工作
    G --> H[回到 Mio助手 → 通用功能]
    H --> I[点击"资料卡背景"]
    I --> J[进入资料卡背景设置页]
    J --> K[开启背景并设置值]
    K --> L[返回 → 进入他人资料卡]
    L --> M[确认资料卡有背景效果]  ← ProfileCardBgHook 工作
    M --> N[确认列表圆角依旧存在]  ← 两个 Hook 互不干扰
```

### 5.3 日志验证

安装后查看日志（Xcode 控制台 / idevicesyslog）：

```
# 启动时确认两个 Hook 都安装
[MioModuleRegistry] registerAll complete: 16 configs, 14 hooks
# 应包含:
#   "hook installed: ListCornerRadiusHook"
#   "hook installed: ProfileCardBgHook"

# 进入资料卡时确认 ProfileCardBgHook 工作
# 查看 MioPlugin.log 含 ProfileCardBg 相关日志
```

### 5.4 关键检测点

```bash
# SSH 到设备，检查日志文件
cat /var/mobile/Documents/MioPlugin_Logs/MioPlugin.log | grep "ProfileCardBg"
# 应有相关调试日志

cat /var/mobile/Documents/MioPlugin_Logs/MioPlugin.log | grep "ListCornerRadius"
# 应有相关调试日志
```

### 5.5 边界场景

```
1. 仅开启列表圆角 → 关闭资料卡背景 → 进入资料卡
   预期: 列表有圆角，资料卡无背景效果 → 两个模块独立控制 ✅

2. 仅开启资料卡背景 → 关闭列表圆角 → 进入资料卡
   预期: 资料卡有背景，列表无圆角 → 两个模块独立控制 ✅

3. 开启"资料卡圆角使用全局" → 修改列表圆角值 → 杀微信重开
   预期: 资料卡圆角保持与列表同步 → 跨模块读取正常 ✅

4. 同时开启两个模块并修改所有配置 → 杀微信重开
   预期: 所有配置持久化保存 → ConfigManager 加载正常 ✅
```

---

## 六、总结

| 项目 | 内容 |
|------|------|
| **问题** | ProfileCardBgHook 在旧 FeatureModuleRegistry 中被错误归入"列表圆角"组 |
| **解决方案** | 由问题 2 的 MioModuleRegistry 统一注册中心**自动修复** |
| **当前状态** | 两个模块拥有独立的描述器、自己的 Config、自己的 Controller |
| **残留代码耦合** | ProfileCardBgHook → ListCornerRadiusConfig 的一处 import（功能性依赖，无需消除） |
| **测试结论** | 两个模块功能独立、互不干扰、配置分别持久化 |

**一句话总结**: 问题 6 在问题 2 改造时已经连带解决了，不需要额外操作。只需按 5.2 的测试流程跑一遍确认功能正常即可。

---

*文档结束*