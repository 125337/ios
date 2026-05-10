# 微信助手 3.9-5 vs WeChatPlugin 消息时间功能对比

---

## 一、核心差异总览

| 维度 | 微信助手 3.9-5 | WeChatPlugin |
|------|---------------|--------------|
| 配置项总数 | **9项** | **11项** |
| 位置选项 | **4种** | **8种** |
| 颜色配置 | 统一1色 | 1项文字颜色，深色自动适配 |
| 深色模式 | WCThemeMgr 自动适配 | WCThemeMgr 自动适配 |
| 时间格式 | NSDateFormatter 自定义 | **13种自定义占位符** |
| 数据获取 | cellView → messageWrap（推测） | 三重 fallback |
| 实际 Hook 类数 | 1-2个 | 3-4个 |
| 自定义字体 | ✅ **有** | ❌ 没有 |

---

## 二、功能对照

| 功能 | 微信助手 | WeChatPlugin | 谁强 |
|------|---------|-------------|------|
| 消息时间显示开关 | ✅ | ✅ | 相当 |
| 隐藏时间分隔线 | ✅ | ✅ 有Hook代码，无设置UI | 微信助手 |
| 字体大小 | ✅ | ✅ | 相当 |
| 粗体字体 | ✅ | ✅ | 相当 |
| 时间格式 | ✅ NSDateFormatter 自定义 | ✅ 13种占位符 → NSDateFormatter | **WeChatPlugin** |
| 文字颜色 | ✅ 统一1色，深色自动适配 | ✅ 1色，深色自动适配 | 相当 |
| 深色模式 | ✅ WCThemeMgr 自动适配 | ✅ WCThemeMgr 自动适配 | 相当 |
| 显示位置 | ✅ 4种 | ✅ 8种 | **WeChatPlugin** |
| X/Y轴偏移 | ❌ | ✅ | **WeChatPlugin** |
| 气泡扩展宽度 | ❌ | ✅ | **WeChatPlugin** |
| 好友添加时间后缀 | ❌ | ⚠️ 有Hook代码，无设置UI | 未完全实现 |
| 自定义字体 | ✅ | ❌ | **微信助手** |
| 伪已读标记 | ❌ | ✅ `{伪已读}` 占位符 | **WeChatPlugin** |

---

## 三、深色模式对比

| 对比项 | 微信助手 | WeChatPlugin |
|-------|---------|-------------|
| 判断方式 | `WCThemeMgr` | `WCThemeMgr` |
| 跟随微信设置 | ✅ | ✅ |
| 用户配置颜色数 | 1个 | 1个 |
| 深色颜色来源 | 自动计算 | 自动计算（`autoDarkColor`） |
| 适配方法 | `colorInLightMode:DarkMode:` | `colorInLightMode()` |

**两者深色模式实现完全一致：** 都只用微信 `WCThemeMgr` 判断，用户只配1个浅色颜色，深色自动计算。不使用 iOS 系统 `traitCollection`，避免微信独立设置深浅色时误判。

---

## 四、Hook 类对比

### 微信助手（1-2个）

| Hook 类 | 用途 | 确认度 |
|---------|------|--------|
| ChatTableViewCell | 消息时间标签 | 推测（strings无直接证据） |
| ChatTimeCellView | 隐藏时间分隔线 | 推测 |

### WeChatPlugin（3-4个，运行时）

| Hook 类 | 用途 | 条件 |
|---------|------|------|
| ChatTableViewCell | 消息时间标签 | 优先，找到就只Hook这一个 |
| 8个 MessageCellView | 消息时间标签 fallback | 仅 ChatTableViewCell 找不到时 |
| ChatTimeCellView | 隐藏时间分隔线 | 始终 |
| ChatTimeViewModel | 隐藏时间分隔线（返回高度0） | 始终 |
| CContact | 好友添加时间后缀 | 始终 |

**关键差异：** WeChatPlugin 的8个 MessageCellView 是 fallback，不会和 ChatTableViewCell 同时 Hook。实际运行时两者 Hook 类数接近。

---

## 五、数据获取路径对比

### 微信助手（推测）

```
cell → valueForKey:@"cellView" → valueForKey:@"messageWrap" → m_uiCreateTime
```

**依据：** strings 里有 `cellView` 和 `messageWrap`，但没有 `m_viewModel`、`viewModel`、`parentModel`、`_viewModel`

### WeChatPlugin（三重 fallback）

```
路径1: cell → m_cellView → m_viewModel → messageWrap（主路径）
路径2: cell → _viewModel → parentModel → m_messageWrap（旧版兼容）
路径3: cellView → getCurrentMessageWrap / messageWrap（兜底）
```

**微信助手的路径 ≈ WeChatPlugin 路径3**，都是直接从 cellView 取 messageWrap。

---

## 六、位置选项对比

### 微信助手（4种，UIPickerView 滚轮选择）

| 值 | 位置 |
|----|------|
| 0 | 头像上方 |
| 1 | 头像下方 |
| 2 | 消息上方 |
| 3 | 消息下方 |

### WeChatPlugin（8种，ActionSheet 点击选择）

| 值 | 位置 |
|----|------|
| 0 | 头像上方 |
| 1 | 头像下方 |
| 2 | 消息旁边(远离头像) |
| 3 | 消息下方(远离头像) |
| 4 | 消息下方(靠近头像) |
| 5 | 消息上方(远离头像) |
| 6 | 消息上方(靠近头像) |
| 7 | 消息内部(仅文本) |

**关键差异：** WeChatPlugin 区分"靠近头像"和"远离头像"方向，微信助手不区分。

---

## 七、时间格式对比

| 对比项 | 微信助手 | WeChatPlugin |
|-------|---------|-------------|
| 格式方式 | NSDateFormatter 自定义格式 | 自定义占位符 → NSDateFormatter |
| 用户写法 | `HH:mm:ss` | `{HH}:{mm}:{ss}` |
| 占位符数量 | 0（直接写） | 13种 `{yyyy}` `{MM}` `{dd}` `{HH}` `{mm}` `{ss}` 等 |
| 特殊标记 | ❌ | ✅ `{b}` noon/midnight, `{伪已读}` |
| Locale | 未明确 | ✅ en_US_POSIX |

---

## 八、技术实现对比

| 对比项 | 微信助手 | WeChatPlugin |
|-------|---------|-------------|
| Hook 方式 | Runtime API | Runtime API |
| 实际 Hook 类数 | 1-2个 | 3-4个 |
| 数据获取路径 | 单一（cellView→messageWrap） | 三重 fallback |
| 异常处理 | 基础 | 完善（@try/@catch + 日志） |
| 标签管理 | 直接 addSubview | 关联对象（自动释放） |
| Formatter | 未明确 | dispatch_once 单例 |
| 日志系统 | ❌ | ✅ 文件日志 |
| 时间标签样式 | 文字贴在气泡上 | 文字贴在气泡上（透明背景） |

---

## 九、微信助手独有功能

### 自定义字体

```objc
mIsCustomFont      // BOOL 开关
mCustomFontName    // NSString 字体名称
mCustomFontSize    // NSInteger 字体大小
```

---

## 十、配置键完整对照

| 功能 | 微信助手 | WeChatPlugin | WeChatPlugin实现状态 |
|------|---------|-------------|---------------------|
| 总开关 | `mIsMessageTime` | `WPShowMessageTime` | ✅ |
| 隐藏时间分隔线 | `mIsHiddenMessageTime` | `WPHideChatTime` | ⚠️ 无设置UI |
| 字体大小 | `mMsgDateFontSize` | `WPMessageTimeFontSize` | ✅ |
| 粗体 | `mMsgDateBoldFont` | `WPMessageTimeBoldFont` | ✅ |
| 时间格式 | `mMsgDateFormat` | `WPMessageTimeFormat` | ✅ |
| 文字颜色 | `mMsgDateColor` | `WPMessageTimeTextColor` | ✅ 深色自动适配 |
| 显示位置 | `mMsgDateShowPosition` | `WPMessageTimePosition` | ✅ |
| 自定义字体 | `mCustomFontName` + `mCustomFontSize` + `mIsCustomFont` | ❌ | ❌ |
| X/Y偏移 | ❌ | `WPMessageTimeOffsetX/Y` | ✅ |
| 气泡扩展 | ❌ | `WPMessageTimeBubbleExtWidth` | ✅ |
| 好友时间后缀 | ❌ | `WPShowAddTimeSuffix` + `WPAddTimeSuffixFormat` | ⚠️ 无设置UI |

---

## 十一、结论

**WeChatPlugin 胜出维度：** 功能完整度、可定制性、代码质量、兼容性

**微信助手胜出维度：** 代码简洁性、性能开销、自定义字体

**深色模式：** 两者实现完全一致，都用 `WCThemeMgr`

**Hook 类数：** 实际运行时接近（1-2个 vs 3-4个），WeChatPlugin 多的是隐藏时间分隔线和好友时间后缀的功能

**WeChatPlugin 剩余待完善：**

| 优先级 | 功能 | 工作量 |
|--------|------|--------|
| 中 | 隐藏时间分隔线：添加设置UI开关 | 小 |
| 中 | 好友添加时间后缀：添加设置UI | 小 |
| 低 | 自定义字体：全新功能 | 大 |
