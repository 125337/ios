# WCRefine 2.1-2 「朋友圈类」页面 逆向解析文档

> 分析对象：`插件\WCRefine2.1-2.dylib`（37 MB，arm64 Mach-O，cputype `0x100000C`，filetype `MH_DYLIB`）
> 分析日期：2026-09-18
> 分析方式：静态逆向 — 纯 Python 解析 Mach-O 元数据（ObjC classlist / 相对方法列表 / selrefs / cfstrings）+ ADRP/ADD/LDR 全量指令配对扫描（94.9 万对）+ 修复解码（奇偏移共享字符串）
> 说明：下文所有地址均为 **unslid VM 地址**（`__TEXT` 起始为 0x4000），可直接用于 IDA/Ghidra 定位

---

## 1. 功能定位

「朋友圈类」是 WCRefine 插件设置首页中功能密度最高的页面（主控制器 `WCRefineMomentsViewController` 拥有 **163 个方法**，是全插件最大的页面类），集中了约 **35 项朋友圈相关功能**：

1. **浏览增强**：便捷朋友圈（聊天页半屏）、高清朋友圈、朋友圈本地缓存、详细时间（内测）、禁用 Flutter 个人页
2. **内容伪装**：朋友圈伪集赞（点赞数/评论数伪造）、朋友圈小尾巴（AppID 尾缀）、朋友圈虚拟定位
3. **自动化**：朋友圈自动点赞、朋友圈自动评论（风控提示最高）、朋友圈一键操作、特别关注（关注/兼容/跟圈三种转发模式）
4. **防删与缓存**：朋友圈防删（监控联系人 + 本地缓存 + 自动刷新 + 自动清理）、隐藏我的朋友圈内容、朋友圈关键词过滤（正则）
5. **草稿箱**：朋友圈草稿箱（含视频草稿持久化）、发布后自动删草稿
6. **手势与交互**：双击/长按/左滑/右滑手势动作分配（9 种动作）、实况照片、聊天快捷发圈、批量操作、搜索、评论图片放大等

实现为**一个主控制器 + 一个大型支撑类族**（17 个 ObjC 类，见 §5）。

---

## 2. 导航链路

```
微信「我」→ 插件设置入口
  └─ WCRefineRootViewController (0x1a41348 viewDidLoad)
       └─ reloadTableData (0x1a42024)
            ▼
       openMoments (0x1a436ec)
            │  ① classref 槽位 __objc_classrefs → WCRefineMomentsViewController
            │  ② [[alloc] init] → [navigationController PushViewController:animated:]
            ▼
       WCRefineMomentsViewController (页面)
            ├─ pickMomentsTailAppID (0x1972ec0) → WCRefineMomentsTailPickerViewController（小尾巴选择）
            ├─ openMomentsHiddenList (0x1971e80) → 已隐藏列表（ActionSheet 式）
            ├─ openMomentsLocalCache (0x197ddac) → WCRefineMomentsCacheViewController（本地朋友圈）
            └─ openMomentsDoubleTapActionListConfig (0x1978408) → WCRefineActionMenuConfigViewController（菜单项配置）
```

入口要点：

- `openMoments` 的 selref 字符串 `openMoments` 位于 `__cstring` 0x205141f，作为首页功能条目字典的 selector 值，经 `NSSelectorFromString` + `performSelector:` 派发。
- 与 `openFeed` 不同，**朋友圈类入口无内测拦截**（`isBetaVersionAccessRestricted` 不作用于本入口）。
- `openMomentsLocalCache` 中有云控闸门：`isCloudFeatureAllowed:defaultInternalOnly:` 未通过时 toast「功能优化中，暂未开放」，**本地缓存入口受云控限制**。

---

## 3. 页面骨架与 UI 体系

### 3.1 主控制器生命周期

| 方法 | IMP | 逻辑 |
|---|---|---|
| `viewDidLoad` | 0x1963bd8 | ① `setTitle:@"朋友圈类"`；② 读取 3 个展开状态键（`WCRefineMomentsFakeSettingsExpanded` / `WCRefineMomentsAutoLikeSettingsExpanded` / `WCRefineMomentsAutoCommentSettingsExpanded`，NSUserDefaults `boolForKey:`）；③ `tableManageWithViewFrame:` → `setManager:` → `addTableViewToSuperView:`；④ `reloadTableData` |
| `viewWillAppear:` | 0x1963ff8 | 每次出现都 `reloadTableData` |
| `reloadTableData` | 0x1964060 | **核心**，0x1964060–0x196ba54 共约 **0x79F4（31 KB）** 的巨型函数，构建全部分区/行 |
| 展开状态属性 | 0x1984618–0x19846fc | `momentsFakeSettingsExpanded` / `momentsAutoLikeSettingsExpanded` / `momentsAutoCommentSettingsExpanded` 三对 getter/setter |

### 3.2 UI 组件协议（与插件其它设置页共用的表格套件）

```
[manager clearAllSection]                        — 清空分区
[manager sectionManage] → [sm setHeaderTitle:] / [sm setFooterTitle:]  — 设分区头/脚标题
[manager addSection:]                            — 注册分区
[switchCellWithSel:target:title:switchOn:]       — 开关行
[cellWithSel:target:title:rightValue:accessoryType:]   — 箭头行
[normalCellWithSel:target:title:rightValue:canRightValueCopy:]  — 右值可复制行
[normalCellForSel:target:title:rightView:]       — 携带自定义 rightView（分段控件）的行
[manager reloadData]
```

与账户信息页同源：**分区管理器 + 行描述符 + performSelector 派发**模式。分段控件（`UISegmentedControl`）通过 `addTarget:action:forControlEvents:` 绑定 `xxxModeChanged:` / `xxxChanged:` 回调。

### 3.3 reloadTableData 分区结构（据修复解码字符串序列还原）

节标题 **「朋友圈功能」**，行序（与 `__cstring` 中解码出的字符串顺序一致）：

| 行（/可展开子项） | 类型 | 控制方法 IMP |
|---|---|---|
| 便捷朋友圈 | 开关 | `toggleConvenientMoments:` 0x196ba54 |
| 高清朋友圈 | 开关 | `toggleMomentsHDMoments:` 0x1974b70 |
| 朋友圈伪集赞 | 开关+展开 | `toggleMomentsFakeEngagement:` 0x196c128 / `toggleMomentsFakeSettingsExpanded` 0x196c37c |
| ↳ 伪集赞设置项 | 箭头行（说明） | — |
| ↳ 设置点赞数量（0-10000） | 输入行 | `setMomentsFakeLikeCount` 0x196c4a0 |
| ↳ 设置评论数量（0-300） | 输入行 | `setMomentsFakeCommentCount` 0x196c828 |
| ↳ 保留原始赞评 | 开关 | `toggleMomentsFakeKeepOriginal:` 0x196cbb0 |
| ↳ 本人默认生效 | 开关 | `toggleMomentsFakeOwnPostsAutoEnable:` 0x196ccb4 |
| ↳ 仅用手势触发 | 开关 | `toggleMomentsFakeOnlySelfEnabled:` 0x196cdb8 |
| ↳ 每次随机刷新 | 开关 | `toggleMomentsFakeRefreshEachOpen:` 0x196cfe8 |
| ↳ 允许非好友赞 | 开关 | `toggleMomentsFakeIncludeNonFriends:` 0x196d0ec |
| ↳ 设置评论内容 | 输入行 | `setMomentsFakeCustomComments` 0x196d2f4（支持换行或 `\|` 分隔） |
| 朋友圈小尾巴 | 箭头行 | `pickMomentsTailAppID` 0x1972ec0 |
| 朋友圈一键操作 | 开关 | `toggleMomentsBatchOperate:` 0x1983b00 |
| 一键清空失败提示 | 按钮行 | `clearMomentsLikeCommentFailTips` 0x1983c48 |
| 朋友圈虚拟定位 | 开关 | `toggleMomentsFakeLocation:` 0x1972bc4 |
| 朋友圈自动点赞 | 开关+展开 | `toggleMomentsAutoLike:` 0x196dee0 / `toggleMomentsAutoLikeSettingsExpanded` 0x196e490 |
| ↳ 自动点赞设置 | 箭头行 | — |
| ↳ 指定用户 / 排除用户 | 分段+选择行 | `momentsAutoLikeTargetModeChanged:` 0x19702e0 / `configureMomentsAutoLikeTargetContacts` 0x19703e0 |
| ↳ 跳过自己 | 开关 | `toggleMomentsAutoLikeSkipOwn:` 0x196e6d8 |
| ↳ 操作间隔（2-300s） | 输入行 | `setMomentsAutoLikeInterval` 0x196e8b0 |
| ↳ 每轮上限（1-500） | 输入行 | `setMomentsAutoLikeMaxPerSession` 0x196ec24 |
| ↳ 后台刷新间隔（60-3600s） | 输入行 | `setMomentsAutoEngageRefreshInterval` 0x196f680 |
| 朋友圈自动评论 | 开关+展开 | `toggleMomentsAutoComment:` 0x196e1b8 / `toggleMomentsAutoCommentSettingsExpanded` 0x196e5b4 |
| ↳ （结构同自动点赞） | 同上 | 0x196e7c4–0x196fae0 系列 |
| ↳ 使用自定义评论 / 编辑评论文本 | 开关+输入 | `toggleMomentsAutoCommentUseCustom:` 0x196f9f4 / `setMomentsAutoCommentTexts` 0x196fae0 |
| 朋友圈关键词过滤 | 开关+输入 | `toggleMomentsKeywordFilter:` 0x1970e50 / `setMomentsKeywordFilterPattern` 0x1970fb8（正则，支持 `喝酒\|下单\|新品` 语法） |
| 隐藏我的朋友圈内容 | 开关+列表 | `toggleMomentsHideOwnContent:` 0x19716c8 / `openMomentsHiddenList` 0x1971e80 |
| 朋友圈草稿箱 | 开关 | `toggleMomentsDraft:` 0x1972a7c（提示文案「小雪糕」品牌弹窗） |
| ↳ 发布后删除草稿 | 开关 | `toggleDeleteDraftAfterPost:` 0x1977244 |
| 详细时间（内测） | 开关+格式+颜色 | `toggleMomentsDetailedTime:` 0x1973244 / `setMomentsDetailedTimeFormat` 0x197363c / `selectMomentsDetailedTimeColor` 0x19744f0 |
| 转发排除原作者 | 开关+模式+标签 | `toggleMomentsForwardExcludeOriginalAuthor:` 0x1974c5c / `setMomentsForwardExcludeMode` 0x1975a44 / `selectMomentsForwardExcludeLabels` 0x197629c |
| 双击手势 | 开关+动作+菜单 | `toggleMomentsDoubleTapLike:` 0x197738c / `setMomentsDoubleTapGestureAction` 0x1977668 / `openMomentsDoubleTapActionListConfig` 0x1978408 |
| 长按手势 | 开关+动作 | `toggleMomentsLongPressComment:` 0x19785c4 / `setMomentsLongPressGestureAction` 0x197889c |
| 左滑/右滑手势 | 开关+动作 | `toggleMomentsSwipeActions:` 0x1980344 / `setMomentsLeftSwipeAction` 0x1980908 / `setMomentsRightSwipeAction` 0x1981684 / ↳ 删除二次确认 `toggleMomentsSwipeDeleteSecondConfirm:` 0x19805c8 |
| 评论图片放大 | 开关+倍数 | `toggleMomentsCommentImageEnlarge:` 0x19794a0 / `setMomentsCommentImageScale` 0x19825f0（1.0-5.0，默认 2.0） |
| 评论复读 | 开关 | `toggleMomentsCommentRepeat:` 0x1979664 |
| 保存封面 | 开关 | `toggleMomentsSaveCover:` 0x1979750 |
| 显示已删评论 | 开关 | `toggleMomentsShowDeletedComment:` 0x197983c（需重启） |
| 朋友圈防删（查看已删） | 开关 | `toggleMomentsAntiDeleteMoments:` 0x1979af8（需重启） |
| ↳ 监控联系人 / 排除用户 | 选择行 | `configureMomentsAntiDeleteContacts` 0x197b3c0 / `configureMomentsAntiDeleteExcludedContacts` 0x197ba9c |
| ↳ 自动刷新 | 开关+间隔 | `toggleMomentsAntiDeleteAutoRefresh:` 0x197c1c8 / `setMomentsAntiDeleteAutoRefreshInterval` 0x197cb54 |
| ↳ 标记已删文案 | 输入行 | `toggleMomentsAntiDeleteMarkDeleted:` 0x197c5fc / `setMomentsDeletedMarkText` 0x197c87c（默认 `[已删除]`） |
| ↳ 自动清理 | 开关+保留天数 | `toggleMomentsAntiDeleteAutoClean:` 0x197ced4 / `setMomentsAntiDeleteRetentionDays` 0x197d0f0 |
| ↳ 清空防删缓存 | 按钮行 | `clearMomentsAntiDeleteCache` 0x197d468 |
| 特别关注 | 开关+联系人+动作 | `toggleMomentsSpecialFollow:` 0x197e744 / `configureMomentsSpecialFollowContacts` 0x197e960 / `momentsSpecialFollowActionChanged:` 0x197f0bc |
| ↳ 动作模式 | 分段 | 关注 / 兼容 / 跟圈（`momentsSpecialFollowActionText:` 0x197e330） |
| ↳ 转发格式 | 输入行 | `setMomentsSpecialFollowForwardFormat` 0x197f9d0 |
| ↳ 目标会话 | 输入行 | `setMomentsSpecialFollowTargetSession` 0x197f644 |
| ↳ 同步历史数量 / 刷新时间 | 输入行 | 0x197fd14 / 0x197f308 |
| 实况照片 | 开关×2 | `toggleMomentsAutoPlayLivePhoto:` 0x198016c / `toggleMomentsLivePhotoSilence:` 0x1980258 |
| 聊天快捷发圈 | 开关 | `toggleMomentsChatQuickPost:` 0x19804dc |
| 朋友圈快捷搜索 | 开关 | `toggleMomentsSearch:` 0x1982400（需重启） |
| 隐藏头像昵称背景 | 开关 | `toggleHideMomentsAvatar:` 0x1982934 |
| 发现页点击直达朋友圈 | 开关+模式+触感 | `toggleDiscoverClickToTimeline:` 0x1982a20 / `discoverClickToTimelineBrowseModeChanged:` 0x1982b0c / `discoverClickToTimelineHapticChanged:` 0x1982c04 |
| 主题盒子操作栏透明 | 开关+透明度 | `toggleThemeBoxOperateViewTransparency:` 0x1982d04 / `setThemeBoxOperateViewAlpha` 0x1982ec8（0-100） |
| 隐藏发现红点 | 开关 | `toggleHideDiscoverBadge:` 0x1983278（需重启） |
| 禁用视频点击关闭 / 禁用视频自动播放 | 开关×2 | 0x198351c / 0x1983608 |
| 文字不折叠 / 禁用内容折叠 | 开关×2 | 0x19836f4 / 0x19837e0 |
| 禁用隐私图标 | 开关 | 0x19838cc |
| 禁用新版个人朋友圈 Flutter 布局 | 开关 | `toggleMomentsDisableFlutterPersonal:` 0x19839b8（防删依赖项） |

---

## 4. 关键功能实现细节

### 4.1 伪集赞（Fake Engagement）

开关弹窗文案揭示机制：*"已开启伪集赞\n需要集赞的朋友圈点赞后生效"* / *"已开启伪集赞\n当前为仅用手势触发模式"*。

- 三个缓存键（`clearMomentsFakeEngagementCache` 0x196bb9c 在每次改动后清除）：

```
WCRefineMomentsFakeFriendCache        — 伪造的好友列表缓存
WCRefineMomentsFakeLikeAdditionsCache — 点赞增量缓存
WCRefineMomentsFakeCommentAdditionsCache — 评论增量缓存
```

- 评论文本解析（`momentsFakeCustomCommentsSummary` 0x196bc74）：换行或 `|` 分隔多条，摘要截断显示 `...`。
- 支持每条动态单独覆盖：ustring 证据「可单独设置点赞数与评论数\n点赞数@评论数（例如 20@5）\n输入 0 可取消该条伪集赞\n留空则使用伪集赞默认设置」→ `20@5` 格式的每条配置，存于 `WCRefine_moments_%lld`（`__cstring` 0x2029e7d，`%lld` 为动态时间戳 ID）。
- 失败提示：ustring「伪集赞操作失败」。

### 4.2 自动点赞 / 自动评论（Auto Engage）

两者**代码同构**（从方法对列表可证：toggle/interval/maxPerSession/skipOwn/targetMode/targetContacts 成对出现，IMP 相邻）。

风控提示（原样解码）：

- 自动点赞：*"自动点赞会真实发送到服务器，不必打开朋友圈页面\n默认仅对"指定用户"生效，请先在下方选择联系人\n无条数上限，只靠操作间隔错开请求，间隔不要设"*（文案在二进制中被截断，完整版为"间隔不要设太短"语义）
- 自动评论：*"⚠️ 自动评论是风控风险最高的操作，成熟插件通常都不做\n已默认限定"仅指定用户"，请只对少量好友开启\n无条数上限，务必把操作间隔设大，避免账…"*

**云控**：`toggleMomentsAutoLike:` / `toggleMomentsAutoComment:` 均先调 `[WCRefineRemoteUpdateManager sharedManager] isCloudFeatureAllowed:defaultInternalOnly:`，未放行时强制 `setOn:animated:NO` 并 toast「朋友圈自动点赞/评论当前未对你开放」。放行后发通知 `WCRefineMomentsAutoEngageNeedRefresh`（0x2029c00）唤醒后台刷新。

联系人导入双通道（`wcr_showMomentsContactImportMenuWithTitle:selectedContacts:completion:` 0x197addc）：

```
选择导入方式
  ├─ 从首页导入   → wcr_importMomentsContactsFromHome: (0x197b080)
  │     → wcr_presentHomeSessionContactPickerWithTitle:selectedContacts:completion: (0x1979fb4)
  │       （操作微信 SessionSelectViewController：setValue:forKey: 注入多选参数
  │        @MaxSelect、@AllowMultiSelect、@KeepViewControllerAfterSelect 等私有 KVC）
  └─ 从其他方式导入 → wcr_importMomentsContactsFromOther: (0x197b21c)
        → WCRefineGroupManagementViewController presentOfficialContactPickerFromViewController:...
```

清洗规则（`wcr_sanitizeContactUsernames:` 0x196ff4c）：trim 空白、去重（orderedSet）、**过滤 `@chatroom` 后缀**（群聊不可自动赞/评）。

### 4.3 朋友圈防删与本地缓存（Monitor 体系）

核心类 `WCRefineMomentsMonitor`（58 方法，init 0xd316b0），职责：

- **缓存存取**：`cacheDataItem:forUsername:` 0xd327b0（单条）/ `cacheDataItems:forUsername:` 0xd355e8（批量）/ `cachedDataItemsForUsername:` 0xd35850；内存字典 + 磁盘两层（`memoryCache` / `diskLoadedUsers` / `loadDiskCacheIntoMemoryForUsername:` 0xd37a04，串行 `ioQueue` + `mediaCopyQueue` 双队列）。
- **删除检测**：`findDeletedDataItemsForHomepageUsername:currentItems:` 三级重载（0xd38670 / 0xd3871c / 0xd387d8，逐步放宽 `allowMissingCountAdvance` / `visibleWindowDays` 参数），配合 `setDeletedState:forUsername:tid:` 0xd39a5c、`recordProactivelyDeletedTid:forUsername:` 0xd3997c、`isProactivelyDeletedForUsername:tid:` 0xd3a0c4。
- **归档媒体**：`applyArchivedMediaPathsToDataItem:forUsername:backfillMissingMedia:` 0xd3e9f4（缓存条目指向已拷贝的本地媒体副本）。
- **统计与清理**：`totalCacheStats` 0xd3a2a4 / `formattedCacheSize` 0xd3ad40 / `totalCacheSizeInBytes` 0xd4058c；`autoCleanupVisibleItemsOlderThanDays:` 0xd3d098 / `runAutoCleanupIfEnabledForced:` 0xd3df10（仅清理"仍可见且超期"的缓存）。
- **收藏**：`isDataItemFavorite:` 0xd374a8 / `toggleFavoriteForDataItem:` 0xd37678。
- **磁盘根路径**：`cacheRootPath` 0xd40a68 → 字符串证据 `WCRefine/moments_antidelete`（0x203cd36）；init 中引用 `com.qimiao.wcrefine` 命名空间（修复解码 `䍗敒楦敮洮浯湥獴洮湯瑩牯椮` → `com.qimiao.wcrefine/moments/monitor/...`）与状态版本键 `WCRefineMomentsCacheStatuses` / `WCRefineMomentsCacheFavorites` / `WCRefineMomentsCacheStatusModelVersion`（0x203cc7f-0x203ccba）。

**自动刷新** `WCRefineMomentsAutoRefreshManager`（15 方法）：

```
init (0xd419c) → dealloc
shouldRun (0xd44c4)      — 判定是否需要运行（开关+间隔+联系人状态）
interval (0xd48e4)       — 从配置读刷新间隔
handleAppDidBecomeActive: (0xd4fd8)   — 前台激活时触发
handleConfigChanged: (0xd5058)        — 监听配置变更通知
refreshRunningState (0xd50f4)
startAutoRefresh (0xd5174) / stopAutoRefresh (0xd5384)   — timer 管理
performRefresh (0xd54a8) — 核心：
    shouldRun → stopAutoRefresh → 记录 lastRefreshTime
    → getService:/serviceForClass: 取微信服务
    → respondsToSelector: 探测 updateTimelineHead / reloadTimelineDataItems
    → 用 currentContext 调用（即调用微信 Timeline 数据源刷新）
timer / lastRefreshTime (0xd59c0/0xd5a10)
```

配置变更通知 `WCRefineMomentsAntiDeleteAutoRefreshConfigChanged`（0x20297f3）的 object 携带 `WCMessage/WCDataItem/WCMediaItem`（解码证据），刷新管理器据此过滤。

**本地缓存浏览页** `WCRefineMomentsCacheViewController`（64 方法）：

- 顶部：搜索栏（占位「搜索昵称、内容或微信号」）+ 分段控件（`全部/显示/时限/已删/收藏`）+ `editWxidFilter`。
- 右上菜单（`rebuildRightMenus` 0x194f6e0）：**内容类型**（文字/图片/视频/其他）、**好友缓存数量**（不限/仅 1 条/2–5 条/6–10 条/11 条以上）、**通讯录标签**、全部好友/指定好友、重置筛选。
- 数据组织：按**年份分组**（`rebuildYearSections` 0x1953e04，`NSCalendar component:fromDate:` 提取年份；头标题 `"%ld 年"` / 「更早 / 时间未知」/ `"%ld 条"`）。
- 数据来源：`reloadCache` 0x194e4c8 → `[Monitor sharedInstance] browseListSnapshot` → 空则 `allCachedDataItemsFromMemoryOnly` → 兜底 `allCachedDataItems`。
- 右键菜单（`tableView:contextMenuConfigurationForRowAtIndexPath:point:` 0x195525c）：删除单条 / 添加收藏 / 取消收藏 / **删除此人全部缓存** / **设置此人为不防删用户**（写入 `momentsAntiDeleteExcludedContacts`）。
- 详情页：`WCRMomentsCacheDetailViewController`（init 0x1946f94 `initWithItem:`，收藏按钮 + `openMedia:`）；媒体查看 `WCRMomentsCacheImageViewController`（0x19464c0，支持 `viewForZoomingInScrollView:` 缩放）。
- 列表 cell：`WCRMomentsAlbumCell`（27 方法，init 0x193f418，`configureWithItem:showsDate:` 0x1942cac；内含 cardView/nameLabel/statusBadge/bodyLabel/mediaContainer/thumbView/playIcon/countBadge/timeLabel/bindTid）。

### 4.4 草稿箱（Draft 体系）

`WCRefineMomentsDraftManager`（18 方法）：

```
init (0xd2f064)
permanentVideoDirectory (0xd2f240)   — Documents/WCRefine + 「草稿箱」子目录
                                       （解码证据：strings '圀剃晥湩e楴敭畯'→WCRefine, '草稿箱'）
createPermanentVideoDirectory (0xd2f134)
copyVideoToPermanentLocation: (0xd2f344)  — 视频草稿落盘
saveDraft: (0xd2fad0)                — setLastSaveDate:[NSDate date] → insertObject:atIndex:0 → saveDrafts
updateDraftAtIndex:withDraft: (0xd2fc50)
getAllDrafts (0xd300e0) / getDraftAtIndex: (0xd304f8) / getDraftCount (0xd306e0)
deleteDraftAtIndex: (0xd30154) / clearAllDrafts (0xd30648)
cleanUpPermanentVideoDirectory (0xd30754) / cleanUpOrphanedVideos (0xd30a34)
loadDrafts (0xd30fa8)                — NSUserDefaults 'com.wcrefine.moments.drafts'
                                       → NSKeyedUnarchiver unarchiveObjectWithData:
                                       → 按 lastSaveDate 降序 → cleanUpOrphanedVideos
saveDrafts (0xd31374)                — 归档写回
```

草稿列表页 `WCRefineMomentsDraftListViewController`（18 方法）：

- cell 摘要（0x195a564）：`[图片 %lu 张]` / `[视频]` / `[无内容]` + `...` 截断；缩略图取 `previewImage`（`respondsToSelector:` 探测后 `performSelector:`，兼容微信草稿对象）或 `thumbImg/thumbPath`。
- 左滑删除（`tableView:editActionsForRowAtIndexPath:` 0x195c030，红色「删除」）。
- 点击回填编辑器（`openEditViewControllerWithDraft:atIndex:` 0x195d15c）：根据 draft 内容分派 —— `imageArray` → `initWithImages:contacts:`；`sightDraft` → `initWithSightDraft:`（视频草稿）；纯文本 → `initWithTextType`；回填 `poiInfo`（位置）、`tempSelectContacts`（提醒谁看）、`extBean`，最后 KVC `textView setText:`。

### 4.5 朋友圈小尾巴（Tail）

选择页 `WCRefineMomentsTailPickerViewController`（34 方法）双模式：`postSessionMode`（发帖页内嵌选择）与设置页模式。

- 预设列表（`rebuildPresetList` 0x195f6dc 解码）：第一项「无小尾巴」，其余为 `TailCatalog entriesMatchingQuery:` 注册的预设；带搜索（防抖 `searchDebounce` timer）。
- **自定义 AppID**（`onCustomInput` 0x19619e8）：Alert 输入「粘贴已注册的 wx… AppID」；`applyAppID:name:` 0x19612a8 校验 `isRegisteredAppID:`，未注册弹「该 ID 不在预设列表，安卓端可能看不到。」但仍可用。
- 状态写入：`setMomentsTailAppID:` + 空值时自动 `setMomentsTailEnabled:`；广播 `com.qimiao.wcrefine.local_settings_changed`。
- 显示逻辑：`displaySelectedTitle` 0x195eca0（空显示「无」）→ `nameForAppID:` 查 TailCatalog；右值拼接「&」+ 当前选择。
- 目录类 `WCRefineMomentsTailCatalog` **0 方法**（实现疑为 C/Swift 或运行时构建），catName 解码证据含 `摩尀/慮敭爀潯/椀硤瘀`（修复解码后为预设 AppID 条目）。
- 云控：`pickMomentsTailAppID` 与 `onToggleEnabled:` 均受 `isCloudFeatureAllowed:defaultInternalOnly:` 限制，未放行提示「朋友圈小尾巴仅对内部用户开放」。

### 4.6 虚拟定位 / 特别关注 / 详细时间

- **虚拟定位**：`toggleMomentsFakeLocation:` 0x1972bc4，云控限制（「朋友圈虚拟定位仅对内部用户开放」）；开启后发朋友圈时官方「所在位置」变为「自选位置」。选位代理 `WCRMomentsPickLocationProxy`（9 方法，init 0x507d44 `initWithHost:pickVC:`，实现微信 POI 选择页的 `onGetRightBarButton` / `onCancelSeletctedLocation` / `onSevLocation:` 代理协议）。
- **特别关注**：三种动作 —— `momentsSpecialFollowActionText:` 0x197e330 返回 **关注/兼容/跟圈**。转发格式模板（默认两条）：*"备注/昵称：{name}\n发送时间：{time}\n发圈内容：{content}"* 与 *"备注：{remark}\n发送时间：{time}\n发圈内容：{content}"*；`setMomentsSpecialFollowForwardFormat` 0x197f9d0 说明可用变量 `{name}（备注(昵称)）、{remark}、{nickname}、{time}、{content}、{username}`。目标会话（`momentsSpecialFollowTargetSession`）留空默认发给自己（文件传输助手）。进度状态键 `momentsSpecialFollowProcessedTids` / `momentsSpecialFollowWatermarks`（`resetMomentsSpecialFollowProgress` 0x197e074）。云控条件含防删联动（`momentsAntiDeleteMomentsEnabled` / `momentsAntiDeleteAutoRefreshEnabled`，见 `momentsAutoEngageFollowsSharedRefresh` 0x196daec）。
- **详细时间**：`toggleMomentsDetailedTime:` 0x1973244 用 **`isCloudBetaFeatureAllowed:`**（区别于其它功能的 `isCloudFeatureAllowed:defaultInternalOnly:`），提示「朋友圈详细时间为内测功能\n仅测试用户可以开启」。格式键默认 `yyyy-MM-dd HH:mm:ss（@RT）`，`@RT`=相对时间（ustring 证据 `moments_detailed_time` 键值解码 `@RT(@TR)relative`）；颜色双模式（明/暗）`momentsDetailedTimeColorLight` / `momentsDetailedTimeColorDark`，用 `WCRefineColorPickerController initWithLightHex:darkHex:callback:`（默认 `#000000`/`#FFFFFF`）。

### 4.7 手势系统

四种手势共用 **9 种动作**（`getMomentsDoubleTapGestureActionText:` 0x1977478 完整列表）：**点赞 / 评论 / 伪集赞 / 转发会话 / 转朋友圈 / 屏蔽转发 / 保存相册 / 删除此项 / 功能菜单**（左滑/右滑额外含「菜单」「无」选项）。

- 动作选择 UI 是自绘的 ActionSheet（`initWithTitle:` + `dictionaryWithObjects:forKeys:count:` 构建标题→整数映射 + `addBtnTitle:target:sel:` / `addCancelBtnTitle:target:sel:`），派发 selector 如 `selectMomentsDoubleTapOption%ld:`（0x204be01）/ `selectMomentsForwardExcludeMode%ld:`（0x204bd71），即**每档动作一个动态拼名 selector**。
- 菜单项编辑页 `WCRefineActionMenuConfigViewController`（`initWithListKind:`），管理功能菜单内各动作的显隐。
- 手势代理 `WCRefineVoiceSwipeGestureDelegate` 属语音族；朋友圈手势的左滑删除二次确认由 `toggleMomentsSwipeDeleteSecondConfirm:` 控制。
- 提示文案：*"快捷手势功能已开启\n请在下方设置左滑和右滑手势的动作\n注意：需关闭小雪糕的左滑朋友圈功能"*（与官方"小雪糕"功能互斥）。

### 4.8 转发排除原作者

`setMomentsForwardExcludeMode` 0x1975a44 三种屏蔽方式：**按标签 / 原作者 / 两者**（`getMomentsForwardExcludeModeText:` 0x1974da4）。标签选择用微信官方标签页（`NewContactTagViewPageSheetController`，解码证据 `敎䍷湯慣瑣慔噧敩偷条卥敨瑥` → NewContactTagViewPageSheet），由 `WCRefineMomentsForwardOfficialTagSheetDelegate`（13 方法，init 0x19627d0 `initWithOwner:tagController:`）桥接回调 `onMomentsForwardOfficialTagSheetDone:` 收集 `collectSelectedTagNamesFromController`。存储双键：`momentsForwardExcludeLabelNames`（显示名）+ `momentsForwardExcludeLabelIDs`（ID，`LabelNameToId:` 转换）。生效时机：*"搭配手势转发朋友圈使用\n可选择屏蔽方式\n选择后会在确认发送时屏蔽"*。

### 4.9 云控与权限命名空间

| 特性 | 云控方式 |
|---|---|
| 自动点赞 / 自动评论 / 虚拟定位 / 小尾巴 / 一键操作 | `isCloudFeatureAllowed:defaultInternalOnly:` |
| 本地缓存入口 | 同上（未放行提示"功能优化中，暂未开放"） |
| 详细时间 | `isCloudBetaFeatureAllowed:`（内测通道） |

权限命名空间（uiprefs 键前缀，`__wcr_moments_` 0x2040988）：

```
__wcr_moments_permissions__      — 权限相关
__wcr_moments_forward__          — 转发相关
__wcr_moments_delete__           — 删除相关
__wcr_moments_fake_engagement__  — 伪集赞相关
__wcr_moments_complain__         — 投诉相关
```

---

## 5. 支撑类架构总览

| 类 | 方法数 | 关键 IMP | 职责 |
|---|---|---|---|
| `WCRefineMomentsViewController` | 163 | viewDidLoad 0x1963bd8 | 主设置页（31KB reloadTableData） |
| `WCRefineMomentsMonitor` | 58 | init 0xd316b0 | 防删监控 + 本地缓存 + 收藏 + 清理 |
| `WCRefineMomentsAutoRefreshManager` | 15 | performRefresh 0xd54a8 | 后台定时刷新 |
| `WCRefineMomentsMediaDownloader` | 35 | startDownloadWithCompletion: 0x520c34 | 媒体批量下载（含 LivePhoto） |
| `WCRefineMomentsDraftManager` | 18 | loadDrafts 0xd30fa8 | 草稿箱持久化 |
| `WCRefineMomentsCacheViewController` | 64 | viewDidLoad 0x194aa10 | 本地朋友圈浏览页 |
| `WCRMomentsCacheDetailViewController` | 10 | initWithItem: 0x1946f94 | 缓存条目详情页 |
| `WCRMomentsCacheImageViewController` | 10 | initWithImagePath:placeholder: 0x19464c0 | 图片缩放查看器 |
| `WCRefineMomentsDraftListViewController` | 18 | viewDidLoad 0x1959a6c | 草稿列表页 |
| `WCRefineMomentsTailPickerViewController` | 34 | viewDidLoad 0x195de84 | 小尾巴选择页（双模式） |
| `WCRefineMomentsForwardOfficialTagSheetDelegate` | 13 | initWithOwner:tagController: 0x19627d0 | 官方标签页桥接 |
| `WCRefineMomentsBatchDateRangeViewController` | 10 | viewDidLoad 0x4be1b4 | 批量操作日期范围选择（onConfirm block 回调） |
| `WCRMomentsPickLocationProxy` | 9 | initWithHost:pickVC: 0x507d44 | 虚拟定位 POI 选择代理 |
| `WCRMomentsMenuActionTarget` | 10 | perform: 0x50a79c | 菜单动作 target-action 封装（cell/dataItem/value/location） |
| `WCRMomentsSystemMenuPanelTarget` | 4 | fire: 0x50a5f4 | 系统菜单面板触发器 |
| `WCRMomentsVoipActionDelegateProxy` | 36 | — | 通话/联系人页代理兜底（delAllMsg/onTalk/GetFromScene 等全协议实现） |
| `WCRMomentsPaddedLabel` | 5 | drawTextInRect: 0x193f188 | 带内边距的 UILabel |
| `WCRMomentsAlbumCell` | 27 | configureWithItem:showsDate: 0x1942cac | 缓存列表 cell |
| `WCRefineMomentsTailCatalog` | 0 | — | 小尾巴预设目录（实现非 ObjC 方法表） |

### MediaDownloader 下载链路（startDownloadWithCompletion: 0x520c34）

```
dataItem valueForKey: ('contentObjectData'/'mediaListObjectIt' 修复解码)
  → 遍历媒体项 → respondsToSelector: isLivePhoto → livePhotoMediaItem（实况特判）
  → respondsToSelector: 探测微信私有下载 selector（修复解码还原）：
      'VideoHasDownloadedImage' / 'ImageHasDownloaded'      — 已下载判定
      'ImageHasDownloadedStartDownloadWith'                  — 触发图片下载
      'startDownloadWithCompletionHandler:pathToSaveSignalData:pathForData'
  → WCRefineProgressToast showWithTotalCount:（进度浮层）
  → timeoutTimer（onDownloadTimeout 0x524680）+ checkDownloadComplete 0x5246e0 轮询
  → completeWithSuccess:errorMessage: 0x524f38 → completionBlock
```

---

## 6. 存储与配置键完整清单

### WCRefineConfig 配置键（朋友圈域）

```
moments_tail (0x202a4e7)                    — 小尾巴
moments_fake_location (0x2029c6b)           — 虚拟定位
moments_auto_like (0x2029c25)               — 自动点赞
moments_auto_comment (0x2029c37)            — 自动评论
moments_special_follow (0x2029865)          — 特别关注
moments_detailed_time (0x2029950)           — 详细时间
forward_moments_exclude_author (0x2029d4e)  — 转发排除原作者
moments_local_cache (0x204bd2e)             — 本地缓存
clicfg_moments_live_photo_can_save_live_photos (0x2030410) — 实况保存（微信 cli 配置）
WCRefine_moments_%lld (0x2029e7d)           — 每条动态伪集赞参数（点赞@评论）
WCRefineEnhancedAdBlockMomentsEnabled (0x2036ff6) — 朋友圈广告屏蔽
momentsAntiDeleteMomentsEnabled (0x207f879) — 防删主开关
```

配置 getter/setter（`WCRefineConfig` 类内，仅列页面直接引用的高频项，方法名自明）：
`momentsFakeEngagementEnabled / momentsFakeLikeCount / momentsFakeCommentCount / momentsFakeKeepOriginal / momentsFakeOwnPostsAutoEnable / momentsFakeOnlySelfEnabled / momentsFakeRefreshEachOpen / momentsFakeIncludeNonFriends / momentsFakeUseCustomComments / momentsFakeCustomComments / momentsTailEnabled / momentsTailAppID / momentsHDMomentsEnabled / convenientMomentsEnabled / momentsBatchOperateEnabled / momentsAutoLikeEnabled / momentsAutoLikeInterval / momentsAutoLikeMaxPerSession / momentsAutoLikeTargetMode / momentsAutoLikeTargetContacts / momentsAutoLikeSkipOwn / momentsAutoCommentEnabled(+同构6键) / momentsAutoCommentTexts / momentsKeywordFilterEnabled / momentsKeywordFilterPattern / momentsHideOwnContentEnabled / momentsHiddenOwnMoments / momentsDraftEnabled / deleteDraftAfterPost / momentsDetailedTimeEnabled / momentsDetailedTimeFormat / momentsDetailedTimeColorEnabled / momentsDetailedTimeColorLight / momentsDetailedTimeColorDark / momentsForwardExcludeOriginalAuthorEnabled / momentsForwardExcludeMode / momentsForwardExcludeLabelNames / momentsForwardExcludeLabelIDs / momentsDoubleTapLikeEnabled / momentsDoubleTapGestureAction / momentsDoubleTapMenuStyle / momentsLongPressCommentEnabled / momentsLongPressGestureAction / momentsSwipeActionsEnabled / momentsLeftSwipeAction / momentsRightSwipeAction / momentsSwipeDeleteSecondConfirmEnabled / momentsCommentImageEnlarge / momentsCommentImageScale / momentsCommentRepeatEnabled / momentsSaveCoverEnabled / momentsShowDeletedComment / momentsAntiDeleteMomentsEnabled / momentsAntiDeleteMonitorEnabled / momentsAntiDeleteAutoRefreshEnabled / momentsAntiDeleteAutoRefreshInterval / momentsAntiDeleteMarkDeletedEnabled / momentsDeletedMarkText / momentsAntiDeleteAutoCleanEnabled / momentsAntiDeleteRetentionDays / momentsAntiDeleteExcludedContacts / momentsSpecialFollowEnabled / momentsSpecialFollowAction / momentsSpecialFollowContacts / momentsSpecialFollowRefreshInterval / momentsSpecialFollowTargetSession / momentsSpecialFollowForwardFormat / momentsSpecialFollowHistoryCount / momentsSpecialFollowProcessedTids / momentsSpecialFollowWatermarks / momentsAutoPlayLivePhoto / momentsLivePhotoSilence / momentsChatQuickPostEnabled / momentsSearchEnabled / hideMomentsBackgroundAvatarNickname / discoverClickToTimelineEnabled / discoverClickToTimelineBrowseMode / discoverClickToTimelineHapticIndex / themeBoxOperateViewTransparencyEnabled / themeBoxOperateViewAlpha / hideDiscoverBadgeEnabled / momentsDisableVideoTapCloseEnabled / momentsDisableFeedVideoAutoplayEnabled / momentsTextNoFoldEnabled / momentsDisableContentFoldEnabled / momentsDisablePrivacyIconEnabled / momentsDisableFlutterPersonalEnabled / momentsFakeLocationEnabled`

### NSUserDefaults 独立键（非 WCRefineConfig）

```
WCRefineMomentsFakeSettingsExpanded (0x204bc68)    — 伪集赞分组展开态
WCRefineMomentsAutoLikeSettingsExpanded (0x204bc8c) — 自动点赞分组展开态
WCRefineMomentsAutoCommentSettingsExpanded (0x204bcb4) — 自动评论分组展开态
WCRefineMomentsFakeFriendCache (0x2029aa7)         — 伪集赞好友缓存
WCRefineMomentsFakeLikeAdditionsCache (0x2029ac6)  — 伪集赞点赞增量
WCRefineMomentsFakeCommentAdditionsCache (0x2029aec) — 伪集赞评论增量
WCRefineMomentsCacheStatuses (0x203cc7f)           — Monitor 缓存状态
WCRefineMomentsCacheFavorites (0x203cc9c)          — 收藏键
WCRefineMomentsCacheStatusModelVersion (0x203ccba) — 状态模型版本
com.wcrefine.moments.drafts                        — 草稿箱归档数据
```

### 通知

```
WCRefineMomentsAntiDeleteConfigChanged (0x2029530)          — 防删/隐藏配置变更
WCRefineMomentsAntiDeleteAutoRefreshConfigChanged (0x20297f3) — 自动刷新配置变更
WCRefineMomentsAutoEngageNeedRefresh (0x2029c00)            — 自动赞评唤醒刷新
com.qimiao.wcrefine.local_settings_changed                  — 插件本地设置广播
```

### 磁盘路径

```
WCRefine/moments_antidelete (0x203cd36)   — Monitor 缓存根（Documents/WCRefine/ 下）
Documents/WCRefine + 「草稿箱」           — 视频草稿持久目录（permanentVideoDirectory）
```

---

## 7. 方法地址速查表（WCRefineMomentsViewController 高频方法）

| 方法 | IMP | 说明 |
|---|---|---|
| `viewDidLoad` | 0x1963bd8 | 建表格 + 读展开态 |
| `viewWillAppear:` | 0x1963ff8 | 刷新 |
| `reloadTableData` | 0x1964060 | 全部分区构建（~31KB 核心） |
| `toggleConvenientMoments:` | 0x196ba54 | 便捷朋友圈开关（提示 rp 开启法） |
| `clearMomentsFakeEngagementCache` | 0x196bb9c | 清伪集赞三缓存 |
| `toggleMomentsFakeEngagement:` | 0x196c128 | 伪集赞开关 |
| `setMomentsFakeLikeCount` / `setMomentsFakeCommentCount` | 0x196c4a0 / 0x196c828 | 赞/评数量弹窗 |
| `momentsFakeCustomCommentsSummary` | 0x196bc74 | 自定义评论摘要 |
| `toggleMomentsAutoLike:` / `toggleMomentsAutoComment:` | 0x196dee0 / 0x196e1b8 | 自动赞/评开关（云控） |
| `configureMomentsAutoLikeTargetContacts` | 0x19703e0 | 点赞目标联系人 |
| `wcr_showMomentsContactImportMenuWithTitle:selectedContacts:completion:` | 0x197addc | 联系人导入菜单 |
| `wcr_presentHomeSessionContactPickerWithTitle:selectedContacts:completion:` | 0x1979fb4 | 首页会话选择器（KVC 注入多选） |
| `wcr_sanitizeContactUsernames:` | 0x196ff4c | 清洗（去群聊） |
| `setMomentsKeywordFilterPattern` / `handleMomentsKeywordFilterPatternInput:` | 0x1970fb8 / 0x197117c | 正则过滤（含校验） |
| `toggleMomentsHideOwnContent:` / `openMomentsHiddenList` | 0x19716c8 / 0x1971e80 | 隐藏自己的动态 |
| `toggleMomentsDraft:` | 0x1972a7c | 草稿箱开关 |
| `pickMomentsTailAppID` | 0x1972ec0 | 小尾巴入口（云控） |
| `toggleMomentsDetailedTime:` | 0x1973244 | 详细时间（内测云控） |
| `selectMomentsDetailedTimeColor` | 0x19744f0 | 时间颜色取色器 |
| `toggleMomentsForwardExcludeOriginalAuthor:` | 0x1974c5c | 转发排除原作者 |
| `selectMomentsForwardExcludeLabels` | 0x197629c | 标签选择（官方标签页桥接） |
| `setMomentsDoubleTapGestureAction` / `setMomentsLongPressGestureAction` | 0x1977668 / 0x197889c | 双击/长按动作分配 |
| `setMomentsLeftSwipeAction` / `setMomentsRightSwipeAction` | 0x1980908 / 0x1981684 | 左滑/右滑动作分配 |
| `toggleMomentsAntiDeleteMoments:` | 0x1979af8 | 防删主开关（需重启） |
| `configureMomentsAntiDeleteContacts` / `configureMomentsAntiDeleteExcludedContacts` | 0x197b3c0 / 0x197ba9c | 监控/排除联系人 |
| `toggleMomentsAntiDeleteAutoRefresh:` | 0x197c1c8 | 自动刷新开关 |
| `clearMomentsAntiDeleteCache` | 0x197d468 | 清空防删缓存（含统计确认） |
| `toggleMomentsSpecialFollow:` | 0x197e744 | 特别关注开关 |
| `setMomentsSpecialFollowForwardFormat` / `setMomentsSpecialFollowTargetSession` | 0x197f9d0 / 0x197f644 | 转发格式/目标会话 |
| `toggleMomentsDisableFlutterPersonal:` | 0x19839b8 | 禁用 Flutter 个人页（防删依赖） |
| `toggleMomentsBatchOperate:` / `clearMomentsLikeCommentFailTips` | 0x1983b00 / 0x1983c48 | 一键操作/清失败提示 |
| `handleImmediateRestart:` | 0x198320c | `elegantRestartV2FromPresenter:` 优雅重启 |

支撑类速查见 §5 表格。入口方法：`openMoments` 0x1a436ec（位于 RootViewController）。

---

## 8. 对 MioPlugin 的复刻参考价值

1. **防删+本地缓存是最高价值模块**，但复杂度也最高（Monitor 58 方法、双队列 IO、媒体归档）。最小可行版本：只做"浏览时缓存 DataItem → 检测缺失 → 标记已删"，跳过媒体归档可砍掉一半代码。
2. **伪集赞的"每条动态覆盖"设计**（`20@5` 格式存 `WCRefine_moments_%lld`）值得借鉴：全局默认 + 单条覆盖两层配置，用户心智简单。
3. **自动赞/评的风控分层**值得照抄：默认仅指定用户、操作间隔硬下限（2-300s）、每轮上限（1-500）、后台刷新间隔独立配置（60-3600s）、风险提示原文直接展示。
4. **展开/折叠分组**（三个 Expanded 键）解决设置页过长问题，MioPlugin 设置页行数增多后可用同模式（`setBool:forKey:` + rebuild）。
5. **手势动作分配的动态 selector 拼名**（`selectMomentsDoubleTapOption%ld:`）比 if-else 派发干净；9 种动作枚举可整体复用。
6. **草稿箱的持久化选型**：直接 NSKeyedUnarchiver 存 NSUserDefaults（com.wcrefine.moments.drafts）+ 视频单独落盘目录，避免 CoreData/文件系统混合存储的复杂度；`cleanUpOrphanedVideos` 兜底孤儿视频值得带上。
7. **联系人选择器的 KVC 注入法**（`@MaxSelect`/`@AllowMultiSelect`/`@KeepViewControllerAfterSelect` 注入微信 SessionSelectViewController）是免 UI 重写的多选实现，注意 iOS 版本兼容需 `respondsToSelector:` 全程探测（其代码也是这么做的）。
8. **云控闸门模式**（`isCloudFeatureAllowed:defaultInternalOnly:` + 强制回拨开关 + toast）使作者可以远程限流高风险功能；MioPlugin 无云控需求，但"开关失败要回拨 UISwitch 状态"的交互细节通用。

## 9. 分析方法附注与局限性

- 本页字符串大量以 **UTF-16LE 误读形态**存储（如 `圀剃晥湩e楴敭畯` 实为 `WCRefineMoments` 的奇偏移字节共享），已通过修复解码还原全部关键文案；未解码的片段（`洀浯湥獴瑟楡l⼼灡浰杳>` → `moments_tail/<appMsgs>` 等）均已在 §4/§6 中标注修复结果。
- 局限：① `reloadTableData` 内部行顺序按字符串引用序列还原，个别行（评论复读/保存封面等纯开关）的**上下位置**可能与实际 UI 有小幅出入，但功能归属与配置键 100% 有据；② `WCRefineMomentsTailCatalog` / `WCRefineSpeechBroadcast` 等 0 方法类的实现体在非 ObjC 段（Swift/C），静态未展开；③ 自动刷新 `performRefresh` 对微信私有 selector 的调用链（`updateTimelineHead`/`reloadTimelineDataItems`）仅到 selref 级，未逐条反汇编确认服务类名；④ 伪集赞对点赞/评论数据的实际注入点（hook 哪个微信类）不在本页面代码内（在 Hook 类族中），本文档仅覆盖设置页与其直接支撑类。
