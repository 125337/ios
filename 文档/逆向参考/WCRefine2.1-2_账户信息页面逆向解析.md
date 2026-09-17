# WCRefine 2.1-2 「账户信息」页面 逆向解析文档

> 分析对象：`插件\WCRefine2.1-2.dylib`（37 MB，arm64 Mach-O，cputype `0x100000C`，filetype `MH_DYLIB`）
> 分析日期：2026-09-18
> 分析方式：静态逆向 — 纯 Python 解析 Mach-O 元数据（ObjC classlist / 相对方法列表 / selrefs / cfstrings）+ ADRP/ADD/LDR 指令模式扫描 + capstone 局部反汇编
> 说明：下文所有地址均为 **unslid VM 地址**（`__TEXT` 起始为 0x4000），可直接用于 IDA/Ghidra 定位

---

## 1. 功能定位

「账户信息」是 WCRefine 插件设置首页（`WCRefineRootViewController`）中的一个功能入口，打开后是一个**分组表格页**，集中展示：

1. 当前登录微信账号信息（微信名 / 微信号 / WXID / 账号状态）
2. 宿主应用信息（应用名称 / 微信版本 / 包名 / 系统版本 / 设备标识）
3. 当前 IPA 的**签名证书信息**（读取 `embedded.mobileprovision` 解析：证书类型、签名团队、注册/过期时间、允许设备数、Entitlements 权限清单）
4. **证书到期提醒规则**（可配置提前 N 天提醒，默认 `30@18@7@3`）
5. **应用组（多开）切换**（与"常用功能"共用应用组，切换后需杀进程）

实现类只有一个：`AccountDetailViewController`（非 WCR 前缀，惰性类，位于 `__objc_data` 0x22968e8，class_ro 0x2233c40）。

---

## 2. 导航链路

```
微信「我」→ 插件设置入口
  └─ WCRefineRootViewController (0x1a41348 viewDidLoad)
       └─ reloadTableData (0x1a42024)          ← 数据驱动构建行
            │  遍历功能条目字典（含 title / selector / controller 三个 key）
            │  visibleFeatureEntriesFromConfig:（配置可见性）→ defaultFeatureEntries（默认表）
            │  respondsToSelector: 校验 → normalCellForSel:target:title:rightValue:canRightValueCopy:
            ▼
       openAccountDetail (0x1a42e40)
            │  ① triggerHapticFeedback（触感反馈）
            │  ② [[AccountDetailViewController alloc] init]
            │     （classref 槽位 __objc_classrefs:0x228e860 → AccountDetailViewController）
            │  ③ [self.navigationController PushViewController:animated:]
            ▼
       AccountDetailViewController (页面)
```

要点：

- 首页行绑定是**字符串驱动**的。`__cstring` 中存在裸串 `openAccountDetail`（0x2051369）与 `AccountDetailViewController`（0x203f7a2），作为默认功能条目字典的 `selector` / `controller` 值；行点击时经 `NSSelectorFromString` + `performSelector:` 派发到 `openAccountDetail`（该方法自身 `__objc_methname` 位于 0x1fce777）。
- 首页还会对 `openFeed` 做 `isBetaVersionAccessRestricted` 内测拦截（`showBetaVersionAccessDeniedForMenuAction`，0x1a42de4），账户信息行无此限制。
- `WCRefineSearchManager getViewControllerFriendlyName:` 中注册了 `"账户信息"` 别名（引用 CFString 0x21c2fc0），供聚合搜索直达本页。

---

## 3. 页面骨架与 UI 体系

### 3.1 生命周期

| 方法 | IMP | 逻辑 |
|---|---|---|
| `viewDidLoad` | 0x1460ed8 | ① `setTitle:@"账户信息"`；② `tableManageWithViewFrame:`（用 `viewFrame` 创建表格管理器）→ `setManager:`；③ `addTableViewToSuperView:`；④ 设 `tableView` 背景色；⑤ `reloadTableData` |
| `viewWillAppear:` | 0x1461190 | 每次出现都 `reloadTableData`（保证切应用组后回来自刷新） |
| `reloadTableData` | 0x14611f8 | **核心**，约 0x3070 字节的大函数，构建全部分区/行 |

### 3.2 UI 组件协议（与宿主设置页共用的表格套件）

`reloadTableData` 的调用模式暴露了一套内部 UI 套件（`manager` 属性持有，类型未具名，可视为 `WCTableManage`）：

```
[manager clearAllSection]                       — 清空分区
[manager sectionManage] → [sm setHeaderTitle:]  — 取当前分区管理器并设头标题
[manager addSection:]                           — 注册分区
[normalCellWithSel:target:title:rightValue:canRightValueCopy:]
    → [sm addCell:]                             — 值可复制的普通行
[switchCellWithSel:target:title:switchOn:]      — 开关行
[cellWithSel:target:title:rightValue:accessoryType:]  — 箭头行（disclosureRowWithTitle:rightValue:action: 的封装）
[manager reloadData]
```

> 与本项目 MioPlugin 设置页的 `WPAddSwitchRow` 手工构建模式同源，均为"分区管理器 + 行描述符"风格；差异在于 WCRefine 把行动作全部通过 `performSelector:` 派发到 self。

### 3.3 依赖的微信私有 API（账号数据）

```
[MMServiceCenter getService:]  → getSelfContact        — 取当前登录账号 CContact
CContact 属性：
  - getContactDisplayName   显示名（备注 > 昵称）
  - m_nsAliasName           微信号
  - m_nsUsrName             WXID（wxid_xxx）
```

服务获取模式：`[WCRefineHelper shared]` 持有配置 → `objectForKeyedSubscript:`（`WCRefineConfig` 支持字典下标）→ `performSelector:withObject:` 派发（详见 §5.1）。

---

## 4. 页面分区与行明细

`reloadTableData`（0x14611f8）构建的分区结构（据引用字符串与调用序列还原）：

### 分区一「用户信息」

| 行 | 数据来源 | 交互 |
|---|---|---|
| 微信名 | `getSelfContact` → `getContactDisplayName` | 点击 → `copyNickname:`；右值可复制；支持 `WCRefine_onLongPressRepeat:` 长按连击 |
| 微信号 | `m_nsAliasName`（空则跳过，判 `length`） | 点击 → `copyAlias:` |
| WXID | `m_nsUsrName` | 点击 → `copyWXID:` |
| 账号状态 | —（无本地数据） | 右值"腾讯卫士查看状态" → `openTencentGuardian:` |

三个复制方法实现完全同构（以 `copyNickname:` 0x1464434 为例）：

```objc
- (void)copyNickname:(id)sender {
    id mgr  = [WCRefineHelper shared];                        // defaultCenter → getService:
    id contact = [mgr performSelector:getSelfContact ...];    // 拿 CContact
    NSString *name = [contact getContactDisplayName];
    if ([name length] > 0) {
        [UIPasteboard generalPasteboard].string = name;
        [self showModernToast:[NSString stringWithFormat:@"已复制微信名: %@", name]];
    }
}
// copyAlias:  → "已复制微信号: %@"（源 m_nsAliasName）0x14646d8
// copyWXID:   → "已复制WXID: %@"  （源 m_nsUsrName）  0x146497c
```

### 分区二「应用信息」

| 行 | 数据来源 |
|---|---|
| 应用名称 | `[mainBundle objectForInfoDictionaryKey:@"CFBundleDisplayName"]`，空则回退 `CFBundleName`，再空显示"未知" |
| 微信版本 | `CFBundleShortVersionString` + `CFBundleVersion`，格式 `"%@ (%@)"` |
| 微信包名 | `[mainBundle bundleIdentifier]` |
| 系统版本 | `[UIDevice currentDevice].systemVersion` |
| 设备标识 | `getDeviceModelIdentifier`（见 §5.3） |

### 分区三「证书信息」（数据源 `readProvisioningProfile`，见 §5.2）

| 行 | 数据来源 |
|---|---|
| 证书类型 | `ProvisionsAllDevices`=true → **企业证书**；否则 `Name` 含 `Development` → **开发证书**；含 `Distribution`+`Ad Hoc` → **发布证书**；否则 **App Store** |
| 签名团队 | profile 字典 `TeamName`，读不到显示"未读取到证书信息" |
| 团队ID | profile 字典 `TeamIdentifier` |
| 注册时间 | `CreationDate`，`NSDateFormatter` 格式 `yyyy-MM-dd HH:mm:ss` |
| 过期时间 | `ExpirationDate`，同上格式 |
| 允许设备 | `ProvisionsAllDevices`=true → **"不限制"**；否则 `ProvisionedDevices.count` → `"%lu 台设备"` |
| 证书权限 | 从 Entitlements 提取（见下表） |

**Entitlements → 展示名映射**（`permissionStatusTextGranted:hasSource:` 0x1464250 返回 `权限正常` / `无权限` / `未检测到权限信息`）：

| Entitlement Key | 展示名 |
|---|---|
| `aps-environment` | 推送权限 |
| `com.apple.developer.kernel.increased-memory-limit` | 内存限制 |
| `com.apple.security.application-groups` | 应用组权限（值是数组，拼 `"%lu个 · %@"` / `"%lu个"`） |
| `com.apple.developer.kernel.extended-virtual-addressing` | 扩展虚拟地址 |
| `com.apple.developer.avfoundation.multitasking-camera-access` | 多任务摄像头 |
| `com.apple.developer.usernotifications.communication` | Communication 权限 |

### 分区四「提示规则」

| 行 | 类型 | 逻辑 |
|---|---|---|
| 到期提示 | 开关 | `toggleCertExpireAlert:` (0x1464c78)：读 `isOn` → `[[WCRefineConfig shared] setCertExpireAlertEnabled:]`；开启时若 `certExpireAlertDays` 为空则写入默认 `30@18@7@3`；随后 `reloadTableData` |
| 证书到期提示 | 箭头行 | `showAlertDaysInput:` (0x1464e50)：弹出带输入框的 Alert（`initWithTitle:message:` + `showTextFieldWithMaxLen:` + `setTextFieldDefaultText:`），默认文案：*"请输入到期前需要提示的日期\n多个日期提示中用 @ 隔开\n如默认为30@18@7@3\n到期前 30、18、7、3天的时候分别提示"*；确认走 `alertConfirmDays:` (0x14650a8)：`getTextField.text` → 去首尾空白 → 非空则 `setCertExpireAlertDays:` 保存并刷新表格；`alertCancel` 仅 `setCurrentAlert:nil` |

### 分区五「应用组（多开）」

| 行 | 逻辑 |
|---|---|
| 应用组切换（右值显示当前 `appGroupID`） | `showAppGroupsPicker:` (0x1465390)：`triggerHapticFeedback` → 取 `classref → WCRefineHelper` → 以栈上构造的回调 block（block 结构引用代码 0x1465498 与 CFString 0x2167e48）调起 WCRefineHelper 的选择面板（辅助函数 0x1312968）；选中后弹系统 Alert：标题 `WCRefineTimeout`（字节序修正后），正文 **"已切换应用组，与常用功能共用。需杀进程后重开微信。"**，按钮 **"知道了"** |

配置持久化键（`WCRefineConfig`，`__cstring` 0x202d250 / 0x202d362）：

```
appGroupID            — 当前应用组
appGroupID-fallback   — 回退应用组
```

另：`WCRefineConfig` 还有 `sideloadShareFixAppGroupId`（0x1ce0af8）与 `showSideloadShareFixAppGroupPicker`（0x17e2a24，属于 WCRefineHelper），对应 cstring `WCRefine.sideload-share-fix.log`，说明插件存在"侧载分享修复"独立应用组机制，账户页的应用组切换与之联动。

---

## 5. 关键实现细节

### 5.1 配置读写模式（WCRefineConfig）

`WCRefineConfig`（classes.txt 行 16229 起）是全局单例配置中心：

- 属性直读：`certExpireAlertEnabled` (0x1cad514) / `setCertExpireAlertEnabled:` (0x1cad6e4) / `certExpireAlertDays` (0x1cad814) / `setCertExpireAlertDays:` (0x1cad9c4)
- 字典下标：`objectForKeyedSubscript:` — 页面代码大量出现（reloadTableData 中 x22 次调用点），即 `[WCRefineConfig shared][@"key"]` 风格取值
- 页面通过 `performSelector:` 动态调用（`respondsToSelector:` 探测后执行），降低了与宿主符号的耦合

### 5.2 证书解析（readProvisioningProfile）

页面自身两个小方法只是壳，实际工作在 C 辅助函数 **0x130c0ec**（BL 直调）：

```
readProvisioningProfile (0x14643a8, 0x24 字节)
  └─ bl 0x130c0ec   ← 真正实现
```

0x130c0ec 的反汇编引用链还原出完整流程：

```objc
NSString *path = [[NSBundle mainBundle].bundlePath
                   stringByAppendingPathComponent:@"embedded.mobileprovision"];   // CFSTR @0x130c14c
if (![[NSFileManager defaultManager] fileExistsAtPath:path]) return nil;
NSData *raw = [NSData dataWithContentsOfFile:path];
// mobileprovision 是 CMS(DER) 包裹的 XML plist，插件不验签，直接按字节搜边界：
NSRange start = [raw rangeOfData:[@"<plist" dataUsingEncoding:] options:... range:...];
NSRange end   = [raw rangeOfData:[@"</plist>" dataUsingEncoding:] ...];
// 截取 <plist ... </plist> 片段 → [NSDictionary propertyListFromData / XML 解析]
```

`readEntitlementsFromProfile:` (0x14643cc) 尾调用 stub `b 0x1e7e6d0`（objc_msgSend），即从 profile 字典取 `Entitlements` 子字典返回。

> 证据：cstring 区 `embedded.mobileprovision\0Entitlements\0rb\0`（0x2040161 连续排布），与 "<plist" / "</plist>" CFString（0x130c358/0x130c38c）共同印证。

### 5.3 设备标识（getDeviceModelIdentifier）

0x1460d74，流程：

1. BL stub → C 函数取机器码（栈缓冲 `sp+0x68`，即 `sysctl hw.machine` 类实现）
2. `[NSString stringWithCString:buf encoding:4 /*NSUTF8StringEncoding*/]`
3. BL 0x146566c — 构建机型映射字典（字面量池紧随类方法区之后：`iPhone1,1→iPhone`、`iPhone1,2→iPhone 3G`、`iPhone2,1→iPhone 3GS`、`iPhone3,1→iPhone 4`、`iPhone4,1→iPhone 4S`、`iPhone5,1→iPhone 5 (GSM)` … 直至最新机型，另含 `i386/x86_64/arm64` 模拟器分支）
4. `[dict objectForKeyedSubscript:]` 查友好名，未命中回退原始 machine 值

### 5.4 腾讯卫士跳转（openTencentGuardian:）

0x1464c20。引用唯一字符串：

```
#小程序://腾讯卫士/NgEPUfJ9RorXGKd
```

即微信"小程序链接"跳转协议，由微信打开该链接直达"腾讯卫士"小程序（微信团队官方的账号状态/安全检测工具）。插件不做任何网络请求，**账号状态检测完全借宿主小程序完成**，规避了风控。

### 5.5 证书到期提醒的触发

- 配置项：`certExpireAlertEnabled`（BOOL）+ `certExpireAlertDays`（形如 `30@18@7@3` 的字符串，`@` 分隔）
- 消费方：全二进制 selref 扫描显示这两个 getter 的引用**仅存在于本页面**（reloadTableData 判空/判等、toggle/showAlert 三处），且无同名 CFString/cstring 配置键 —— 提醒判定与到期日期差值计算发生在页面自身数据构建流程内（解析 `ExpirationDate` 后比对提前天数列表命中则提示），不依赖后台轮询
- 使用方须知：仅在打开「账户信息」页时生效，非常驻提醒

---

## 6. 与宿主/系统 API 完整清单

**微信私有 API**
| API | 用途 |
|---|---|
| `MMServiceCenter getService:` | 获取核心服务单例 |
| `getSelfContact` | 当前账号 CContact |
| `CContact getContactDisplayName / m_nsAliasName / m_nsUsrName` | 显示名/微信号/WXID |

**系统 API**
| API | 用途 |
|---|---|
| `NSBundle mainBundle` + Info.plist 键 | 应用信息 |
| `NSFileManager / NSData` | 读 embedded.mobileprovision |
| `rangeOfData:options:range:` | CMS 内定位 XML plist 边界 |
| `NSDateFormatter` | 证书日期格式化 |
| `UIPasteboard` | 三键复制 |
| `UIDevice systemVersion` | 系统版本 |
| sysctl（hw.machine 推断） | 设备标识 |
| UIAlertController（含输入框样式） | 天数录入、应用组确认 |

**无 Hook**：本页面是纯增量功能页，未对任何微信类做 method swizzle；所有能力来自私有服务 + 系统文件读取。

---

## 7. 方法地址速查表（AccountDetailViewController）

| 方法 | IMP | 说明 |
|---|---|---|
| `getDeviceModelIdentifier` | 0x1460d74 | 机型友好名 |
| `viewDidLoad` | 0x1460ed8 | 建表格 |
| `viewWillAppear:` | 0x1461190 | 刷新 |
| `reloadTableData` | 0x14611f8 | 全部分区/行构建（核心，~12KB） |
| `permissionStatusTextGranted:hasSource:` | 0x1464250 | 权限状态文案 |
| `disclosureRowWithTitle:rightValue:action:` | 0x14642e8 | 箭头行封装 |
| `readProvisioningProfile` | 0x14643a8 | 壳 → 0x130c0ec |
| `readEntitlementsFromProfile:` | 0x14643cc | 取 Entitlements 子字典 |
| `copyNickname:` | 0x1464434 | 复制显示名 |
| `copyAlias:` | 0x14646d8 | 复制微信号 |
| `copyWXID:` | 0x146497c | 复制 WXID |
| `openTencentGuardian:` | 0x1464c20 | 跳腾讯卫士小程序 |
| `toggleCertExpireAlert:` | 0x1464c78 | 到期提醒开关 |
| `showAlertDaysInput:` | 0x1464e50 | 天数录入弹窗 |
| `alertCancel` / `alertConfirmDays:` | 0x146506c / 0x14650a8 | 弹窗回调 |
| `showAppGroupsPicker:` | 0x1465390 | 应用组切换 |
| `manager` / `setManager:` | 0x1465554 / 0x1465578 | 表格管理器属性 |
| `currentAlert` / `setCurrentAlert:` | 0x14655b4 / 0x14655d8 | 弹窗强引用属性 |

辅助函数：`0x130c0ec`（mobileprovision 读取+XML 提取）、`0x1312968`（应用组面板）、`0x146566c`（机型映射字典构建）。

---

## 8. 对 MioPlugin 的复刻参考价值

1. **签名证书信息页**是 graft 后 IPA 的刚需功能（用户可自查到期时间），实现成本极低：读 `embedded.mobileprovision` → 按 `<plist`/`</plist>` 截取 → `propertyList` 解析，**无需引入 OpenSSL 验签**即可拿到全部字段（团队/日期/设备数/Entitlements）。
2. **微信名/微信号/WXID 一键复制**：`[MMServiceCenter getService:getSelfContact]` 三属性 + UIPasteboard 即可，适合并入设置页"关于/账户"分区。
3. **机型友好名**可直接用 `sysctlbyname("hw.machine")` + 静态映射表（其映射表字面量池可整体参考）。
4. **应用组多开切换**依赖 WCRefineHelper 的整套多开基础设施（`appGroupID` + fallback 双键），MioPlugin 如需多开隔离配置可参考键名设计；但注意其"切换后需杀进程"的产品约束。
5. **UI 侧**：其"分区管理器 + 行描述符 + performSelector 派发"与本项目的 `WPCommonUI` 收敛方向一致，可借鉴 `disclosureRowWithTitle:rightValue:action:` 与 `normalCellWithSel:target:title:rightValue:canRightValueCopy:` 的 API 粒度。
6. **到期提醒**用 `N@M@K` 天数列表 + 页面打开时比对，是最轻量的提醒方案（无推送/无轮询），可直接借鉴。

## 9. 分析方法附注与局限性

- 二进制为经典 `LC_DYLD_INFO`（非 chained fixups），`__DATA` 指针为裸 VM 地址，可直接静态解析。
- 方法列表为 objc4 相对格式（entsize `0x8000000C`）：条目 12 字节 `{name_off, types_off, imp_off}`，偏移相对**字段自身地址**；`name_off` 指向 `__objc_selrefs` 槽位，槽内指针再指向 `__objc_methname` 字符串（两级间接）。
- 字符串引用通过全 `__text` 的 ADRP+ADD/LDR 配对扫描建立（94.9 万对），BL 到 `__stubs`/`__objc_stubs` 的目标未逐一解析（以邻近 selref 代替语义）。
- 局限：① 证书到期提醒的弹窗触发点未逐指令确认（仅有配置存取与字符串证据）；② 应用组面板的具体分组列表由 `WCRefineHelper` 运行时生成（`visibleFeatureEntriesFromConfig:` 同源机制），静态未完全还原；③ 部分中文字符串存在 UTF-8/UTF-16 双编码存储，个别上下文片段（如 `WCRefineTimeout`）按字节序修正后解读，如需 100% 精确可载入 IDA 复核 `reloadTableData` 全函数。
