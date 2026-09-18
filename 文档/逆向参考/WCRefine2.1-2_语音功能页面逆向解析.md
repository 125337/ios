# WCRefine 2.1-2 「语音功能」页面 逆向解析文档

> 分析对象：`插件\WCRefine2.1-2.dylib`（37 MB，arm64 Mach-O，cputype `0x100000C`，filetype `MH_DYLIB`）
> 分析日期：2026-09-18
> 分析方式：静态逆向 — 纯 Python 解析 Mach-O 元数据（ObjC classlist / 相对方法列表 / selrefs / cfstrings）+ ADRP/ADD/LDR 全量指令配对扫描（94.9 万对）+ 修复解码（奇偏移共享字符串）
> 说明：下文所有地址均为 **unslid VM 地址**（`__TEXT` 起始为 0x4000），可直接用于 IDA/Ghidra 定位

---

## 1. 功能定位

「语音功能」是 WCRefine 插件设置首页中的一个聚合页面，但与「朋友圈类」不同：**页面本身极薄**（主控制器 `WCRefineVoiceFunctionViewController` 仅 **5 个方法**），是一个纯导航壳，真正的功能在两个二级页：

1. **语音包功能**（`WCRefineVoicePackSettingsViewController`）— 语音消息伪装发送体系：导入/管理/收藏/绑定消息仓库/多入口打开
2. **语音克隆**（`WCRefineVoiceCloneSettingsViewController`）— TTS 音色体系：第三方 LLM/TTS 供应商接入、音色列表、背景音混合

页面自身承载的功能开关（reloadTableData 直接构建）：

- 启用语音转发 / 自定义语音秒数（只改显示秒数）
- 语音消息转文件 / 视频转语音文件 / 媒体文件转语音 / 启用视频转语音
- 语音输入呼吸灯（含调色板）
- 语音自动转文字（含群语音转文字 / 忽略已读语音）
- 语音自动倍速播放 / 自动背景播放（含点击浮窗关闭）
- 通话时播放语音消息（voicePlayBypass）/ 播放语音时保持键盘（voiceKeepKeyboard）
- 语音克隆入口（`voiceCloneVisibleForCurrentUser` 门控）

---

## 2. 导航链路

```
微信「我」→ 插件设置入口
  └─ WCRefineRootViewController (0x1a41348 viewDidLoad)
       └─ openVoiceFunction (0x1a437a0)
            │  ① NSClassFromString("WCRefineVoiceFunctionViewController")   ← 字符串查找，非 classref
            │  ② 找不到类时 toast「语音功能页面不可用」（防御式入口）
            │  ③ PushViewController
            ▼
       WCRefineVoiceFunctionViewController（导航壳）
            ├─ openVoicePackSettings (0x180ca94)
            │    │ 云控 isCloudFeatureAllowed:defaultInternalOnly:（失败提示「语音包不可用/请先启用语音包功能」）
            │    ▼
            │  WCRefineVoicePackSettingsViewController（语音包设置）
            │    ├─ openManager (0x1c2cfe0) → WCRefineVoicePackManagerViewController（管理页）
            │    │    ├─ → WCRefineVoicePackPickerViewController（选择页，管理页/选择页互跳）
            │    │    └─ → WCRefineVoicePackBookmarkListViewController（最近/收藏列表）
            │    ├─ selectPath (0x1c2c088) → WCRefineVoicePackPathPickerViewController（路径选择）
            │    └─ openDownloadOptions (0x1c2d3d8) → 网盘链接（§4.5）
            └─ openVoiceClone (0x180c9b0)
                 │ respondsToSelector: voiceCloneVisibleForCurrentUser 门控
                 ▼
               WCRefineVoiceCloneSettingsViewController（语音克隆设置）
                 ├─ openModelList (0x1bf5760) → WCRefineVoiceCloneListViewController（音色列表）
                 ├─ openBackgroundAudioList (0x1bf5fc0) → WCRVoiceBackgroundListViewController（背景音列表）
                 └─ openFishRegistration (0x1bf3df4) → 鱼声注册跳转
```

入口要点：

- 语音功能入口用 **`NSClassFromString` 动态查找**（与朋友圈入口的直接 classref 不同），插件对该页面做了懒加载/可选编译的容错——类缺失时仅 toast 不崩溃。
- selref 证据：`WCRefineVoiceFunctionViewController`（`__cstring` 0x203f8d1）、`WCRefineVoicePackSettingsViewController`（0x203f8f5）。
- 聚合搜索可达：`WCRefineSearchManager` 注册了页面别名（`onOpenWCRefineVoicePack` 0x2035b77 亦为搜索/快捷入口 selector）。

---

## 3. 页面骨架与 UI 体系

### 3.1 主控制器（导航壳）

| 方法 | IMP | 逻辑 |
|---|---|---|
| `viewDidLoad` | 0x180adf8 | `setTitle:@"语音功能"` → `reloadTableData` |
| `viewWillAppear:` | 0x180ae74 | `reloadTableData` |
| `reloadTableData` | 0x180aedc | 0x180aedc–0x180c9b0，构建两个分区的行 |
| `openVoiceClone` | 0x180c9b0 | `triggerHapticFeedback` → `voiceCloneVisibleForCurrentUser` 探测 → Push 语音克隆设置页 |
| `openVoicePackSettings` | 0x180ca94 | 云控探测 → Push 语音包设置页；引用解码字符串 `voice_pack`（右值显示状态「未设置/已设置/默认」） |

### 3.2 reloadTableData 分区结构（据修复解码字符串序列还原）

**分区一「语音包功能」**（footer：*"多入口，多方式导入，内部测试中"*）

| 行 | 类型 | 逻辑 |
|---|---|---|
| 语音包功能 | 箭头行 | `openVoicePackSettings`（解码键 `voice_pack_...` 显示路径状态） |

**分区二「语音功能」**（header 同名，首个 footer：*"转语音支持视频文件音乐卡片等类型"*）

| 行 | 类型 | 控制方法 | 配置键（WCRefineConfig） |
|---|---|---|---|
| 启用语音转发 | 开关 | `toggleVoiceForward:` | `voiceForwardEnabled` |
| 自定义语音秒数（右值 `%ld秒`/`未启用`） | 输入行 | `setVoiceCustomDurationSeconds` | `voiceCustomDurationSeconds` |
| 语音消息转文件 | 开关+展开 | `toggleVoiceToFile:` | `voiceToFileEnabled` |
| ↳ 设置文件名称 | 输入行 | `setVoiceToFileNameTemplate`（状态 `voiceToFileNameTemplateStatusText`） | `voiceToFileNameTemplate` |
| ↳ 选择发送方式（聊天页/自选页分段） | 分段 | `voiceToFileSendModeChanged:` | `voiceToFileSendMode` |
| 视频转语音文件 | 开关+展开 | `toggleVideoToVoiceFile:` | `videoToVoiceFileEnabled` |
| ↳ 设置文件名称 / ↳ 选择发送方式 | 同构 | `setVideoToVoiceFileNameTemplate` / `videoToFileSendModeChanged:` | `videoToVoiceFileNameTemplate` / `videoToFileSendMode` |
| 媒体文件转语音 | 开关 | `toggleMediaFileToVoice:` | `mediaFileToVoiceEnabled` |
| 启用视频转语音 | 开关 | `toggleVideoToVoice:` | `videoToVoiceEnabled` |
| 语音输入呼吸灯 | 开关+颜色 | `toggleVoiceInputBreathingLight:` / `editVoiceInputBreathingLightPalette` | `voiceInputBreathingLightEnabled` / `voiceInputBreathingLightPalette` |
| 语音自动转文字 | 开关+展开 | `toggleVoiceAutoTranslate:` | `voiceAutoTranslateEnabled` |
| ↳ 群语音转文字 | 开关 | `toggleGroupVoiceAutoTranslate:` | `voiceAutoTranslateGroupChatEnabled` |
| ↳ 忽略已读语音 | 开关 | `toggleVoiceAutoTranslateIgnoreRead:` | `voiceAutoTranslateIgnoreReadEnabled` |
| 语音自动倍速播放 | 开关 | `toggleVoiceAutoSpeed:` | `voiceAutoSpeedEnabled` |
| 语音自动背景播放 | 开关+展开 | `toggleVoiceAutoBackgroundPlay:` | `voiceAutoBackgroundPlayEnabled` |
| ↳ 点击浮窗关闭 | 开关 | `toggleVoiceFloatTapClose:` | `voiceFloatTapCloseEnabled` |
| 通话时播放语音消息 | 开关 | `toggleVoicePlayBypass:` | `voicePlayBypassEnabled` |
| 播放语音时保持键盘 | 开关 | `toggleVoiceKeepKeyboard:` | `voiceKeepKeyboardEnabled` |
| 语音克隆（门控） | 箭头行 | `openVoiceClone` | `voiceClone` |

右值格式证据：`%ld秒`（已设置时）/ `未启用`（`initWithItems:` 构建分段选项 `聊天页/自选页`）。

### 3.3 UI 模式差异（pageSheet + 悬浮栏体系）

语音包设置页引入了与其它页面不同的 **pageSheet 宿主模式**：

```
viewDidLoad (0x1c27ec4)：pageSheetMode 判定 → setHidesBackButton:
  → 自建 UITableView（非 tableManage 套件）→ 底部约束 tableBottomToFloatConstraint
viewWillAppear (0x1c287b0)：isCloudFeatureAllowed: 校验
  → navigationController topViewController 判断是否被 Picker 覆盖
  → beginUIAccess（UIAccessibility 导航权限，配合 endUIAccess 0x1c28ab8 viewWillDisappear）
  → pageSheetMode 时 setNavigationBarHidden:animated:
  → syncPageSheetChromeForNavigationController:hostSheet:
  → wcr_refreshPageSheetFloatBar
wcr_refreshPageSheetFloatBar (0x1c28b24)：构建毛玻璃悬浮栏（UIBlurEffect）
  — 解码图标名 'icon_outlined_nav_back_ward_theme_icon'（左箭头返回）
  — wcr_floatBarBack (0x1c2a970)：pop + 同步宿主 chrome
```

该模式贯穿设置页/管理页/选择页/收藏列表四层（四个类都有 `pageSheetMode` / `hostSheet` / `floatBar` / `tableBottomToFloatConstraint` 四件套属性），实现"半屏弹窗内多层导航 + 底部悬浮操作栏"的交互。

---

## 4. 语音包功能（VoicePack 体系）

### 4.1 语音包设置页（27 方法）

`reloadTableData`（0x1c2ab84）分区结构（解码字符串序）：

**分区「语音包功能」**（footer：*"内部自用功能，暂不对外开放。"*）

| 行 | 类型 | 控制方法 IMP | 配置键 |
|---|---|---|---|
| 启用语音包功能 | 开关 | `toggleEnabled:` 0x1c2b814（云控；开启时 `ensureRootDirectoryExists:`） | `voicePackEnabled` |
| 启用连续发送方式 | 开关 | `toggleContinuousSend:` 0x1c2ba54 | `voicePackContinuousSendEnabled` |
| 聊天工具附件入口 | 开关 | `toggleAttachment:` 0x1c2bb28（提示：附件面板末尾增加「语音包」入口） | `voicePackAttachmentEnabled` |
| 长按右下加号入口 | 开关 | `togglePlusLongPress:` 0x1c2bc58（提示：长按「+」直接打开选择页） | `voicePackPlusLongPressEnabled` |
| 聊天栏快捷管理按钮 | 开关 | `toggleQuickBar:` 0x1c2bd88（提示：「键盘/语音」切换按钮右侧快捷入口） | `voicePackQuickBarEnabled` |
| 选择语音包的路径（右值 resolvedRelativePath/默认） | 箭头行 | `selectPath` 0x1c2c088 | `voicePackRelativePath` |
| 聊天页面打开方式（半屏/推入分段） | 分段 | `presentModeChanged:` 0x1c2beb8 | `voicePackPresentMode` |
| 绑定消息仓库（语音前/语音后分段） | 分段 | `bindOrderChanged:` 0x1c2bfa0（footer：*"语音前=先语音再仓库；语音后=先仓库再语音。"*) | `voicePackBindSendOrder` |
| 语音包管理（右值「管理」） | 箭头行 | `openManager` 0x1c2cfe0 | — |
| 语音包下载 | 箭头行 | `openDownloadOptions` 0x1c2d3d8 | — |

管理入口 footer 提示（解码）：*"长按聊天语音「纳入」可重命名并选路径；\n左滑可置顶/收藏，「聊天纳入」默认置顶。"*

`openManager`（0x1c2cfe0）流程：`ensureRootDirectoryExists:` + `ensureChatIncludeDirectoryExists:`（WCRefineVoicePackStore 类方法）→ `initWithDirectory:title:@"微信语音包"` → pageSheet 模式下隐藏导航栏 + Push。

### 4.2 路径选择（selectPath 0x1c2c088）

ActionSheet 三选项：

```
语音包路径
  ├─ 恢复默认路径 → setVoicePackRelativePath: defaultRelativePath
  │     → ensureRootDirectoryExists: → toast「已恢复默认路径」
  ├─ 从文件管理选择 → WCRefineVoicePackPathPickerViewController initWithStartDirectory:
  │     → pushViewController（Picker 内 pickCurrent/handleFolderTap: 遍历目录，
  │        footerTitle「请选择具体子目录」，onPick block 回调）
  │     → 归一化（hasPrefix:'/' 时 substringFromIndex:）→ toast「路径已更新」
  └─ 取消
```

选择页 `WCRefineVoicePackPathPickerViewController`（16 方法，init 0x1c104b0）：`reloadFolders` 0x1c10afc 列子目录，`pickCurrent` 0x1c11698 确认，`onPick` block 属性回传。

### 4.3 管理页（98 方法）

`WCRefineVoicePackManagerViewController`（init 0x1bfb734 `initWithDirectory:title:`）是语音包的文件管理器：

- **列表**：`reloadItems` 0x1c08900 → `rebuildListSections` 0x1c08a80；条目详情 `detailForFolderItem:` 0x1c06090 / `detailForVoiceItem:` 0x1c06388；**异步统计** `prefetchFolderStats` 0x1c06c9c + `requestFolderStatsIfNeededForPath:` 0x1c067b8（`statsGeneration` 防竞态）；**时长预取** `prefetchVoiceDurations` 0x1c06eac（`durationGeneration`，与收藏列表同构）。
- **多选批量**：`toggleSelecting` 0x1c0b03c → `wcr_showSelectBar` 0x1c03214 / `wcr_hideSelectBarShowFloat:` 0x1c033a0 → `wcr_selectedItems` 0x1c047b8 → 批量删除 `deleteSelected` 0x1c0c694（确认文案 `wcr_deleteConfirmMessageForItems:` 0x1c0538c）/ 批量移动 `wcr_moveItems:` 0x1c04a98。
- **置顶**：`wcr_pinPrefixForItem:` 0x1c05fbc（前缀标记法）。
- **单项操作**：`showItemActions:` 0x1c0d484 → 预览 `previewItem:` 0x1c0e958（`previewPlayer`）/ 重命名 `renameItem:` 0x1c0efac / **绑定仓库** `bindRepositoryForItem:` 0x1c0f2d8 / 转发 `forwardItem:` 0x1c0f640。
- **导入导出**：`importFromFileManager` 0x1c0bb5c（Files 文件 App 导入）/ `exportToFileHelper` 0x1c0c174。
- **文件夹选择模式**：管理页兼任目录选择器（`folderPickMode` / `folderPickCompletion` / `wcr_setupFolderPickNavBar` 0x1bff378 / `wcr_finishFolderPickWithDirectory:` 0x1c09f60）。
- **悬浮胶囊栏**：`wcr_makeCapsuleBarWithTag:height:width:` 0x1c001dc / `wcr_iconTitleButton:icon:fallback:color:action:` 0x1c00d34 / `wcr_rebuildNormalFloatStack` 0x1c014e4；按钮组 `wcr_floatBarRecent` 0x1c024a4（最近）/ `wcr_floatBarFavorite` 0x1c024e0（收藏，`wcr_openBookmarkKind:` 0x1c020c4 打开收藏列表）/ `wcr_floatBarEdit` 0x1c03b54（编辑）/ `wcr_floatBarSelectAll` 0x1c03d24 / `wcr_floatBarPin` 0x1c041b8（置顶）/ `wcr_floatBarMove` 0x1c052f8（移动）/ `wcr_floatBarDoneSelecting` 0x1c03c50 / `wcr_floatBarBackFromManager` 0x1c037c0。
- 毛玻璃着色：`wcr_floatAccentColor` 0x1bff8ec / `wcr_addFrostToFloatBar:cornerRadius:` 0x1bff948。

### 4.4 选择页（111 方法）与收藏/最近列表（31 方法）

**选择页** `WCRefineVoicePackPickerViewController`（init 0x1c126ac `initWithChatName:directory:`）是聊天中真正取语音的页面：

- 目录栈导航：`popFolder` 0x1c173a4 + `gestureRecognizerShouldBegin:` 0x1c17228（侧滑返回上层目录）。
- 详情/预置顶收藏：`detailForFolderItem:pinnedPaths:favoritePaths:` 0x1c17a0c / `detailForVoiceItem:pinnedPaths:favoritePaths:` 0x1c17e94；左滑 `attachFavoriteSwipeToCell:item:pinned:favorite:` 0x1c1ec78。
- **预览播放**：`playIconTapped:` 0x1c1b064 → `stopPreviewPlayback` 0x1c1af58 → `audioPlayerDidFinishPlaying:successfully:` 0x1c1be54（`previewingPath` / `lastPreviewedItem` 状态对）。
- **发送**：`sendItem:` 0x1c1e3f4（`sending` 状态防重入）；发送后由 VoicePackSender（0 方法类，§6）组装为微信语音消息。
- **绑定仓库模式**：`presentBindOptionsForItem:` 0x1c1c3c8 / `bindFromTopBar` 0x1c1d180 / `handlePickCellTap:` 0x1c1d338（bindingPickMode 下点击即绑定）/ `clearBindingForItem:` 0x1c1c280 —— 将语音包条目绑定到某条聊天语音记录上（配合 `voicePackBindSendOrder` 语音前/语音后顺序）。
- 收藏入口：`openBookmarkKind:` 0x1c1e8bc → `floatBarRecent` 0x1c1ec00 / `floatBarFavorite` 0x1c1ec3c。
- 设置入口：`openSettings` 0x1c1f754（回跳语音包设置页，构成互跳闭环）。
- 搜索：`searchBar:textDidChange:` 0x1c26dd8（`keyword`）。

**收藏/最近列表** `WCRefineVoicePackBookmarkListViewController`（init 0x1bf73b4 `initWithKind:chatName:`）：

- `kind` 区分收藏/最近两种视图（`pageTitle` 0x1bf7508 按类取名）；`rebuildList` 0x1bf87e8 / `detailForItem:` 0x1bf8334 / `prefetchVoiceDurations` 0x1bf9270。
- 左滑 `attachSwipeToCell:item:` 0x1bf97c0（置顶/收藏）；`clearRecents` 0x1bfa9ac 清最近记录。
- 点击发送 `handleCellTap:` 0x1bfa0bc（`sending` 防重入）。
- 两个列表页都持有 `hostSheet` / `pageSheetMode` 属性——可被 Picker 或设置页以 pageSheet 方式承载。

### 4.5 语音包下载（openDownloadOptions 0x1c2d3d8）

ActionSheet 两个网盘选项（原样字符串证据）：

| 选项 | 链接 | 打开方式 |
|---|---|---|
| 夸克网盘 | `https://pan.quark.cn/s/28c18297a6c6` | 复制到剪贴板 + `openExternalLinkPreferSchemes:httpsFallback:`（scheme `quark://%@`，编码后 `quark://pan.quark.cn/s/28c18297a6c6`） |
| 百度网盘 | `https://pan.baidu.com/s/1ILx3ajnI2zmrmGd8rLGdew?pwd=amdp`（提取码 `amdp`） | scheme `baiduyun://%@` 与 `bdnetdisk://n/action.SHARE_LINK?link=%@` 双通道 |

内容分享文案（解码）：*"通过网盘分享的文件：语音包\n链接: https://pan.baidu.com/s/1ILx3ajnI2zmrmGd8rLGdew 提取码:"*

### 4.6 聊天内打开入口（多入口设计）

配置键与 selector 证据（`__cstring` 区）：

```
wcr.attach.plugin:voice_pack (0x2035032)   — 附件面板插件入口标识
toolbar:wcr.builtin.voice_pack (0x203539a) — 工具栏内置入口标识
wcr.builtin.voice_pack (0x20353f2)
tb_voice_pack (0x203ecce)                  — 聊天栏快捷按钮标识
lp_voice_pack_include / lp_voice_pack_unzip — 长按语音「纳入/解压到语音包」菜单
other_voice_pack_attachment (0x2030d73)    — 附件入口配置键
other_voice_pack_quickbar (0x2030dbe)      — 快捷栏入口配置键
```

ustring 佐证：「语音包不可用」「请先启用语音包功能」「解压到语音包」「语音包管理」。即四个入口（附件面板末尾 / 长按「+」/ 聊天栏快捷按钮 / 长按语音纳入）全部由配置键控制显隐，与 §4.1 的三个开关一一对应。

---

## 5. 语音克隆（VoiceClone 体系）

### 5.1 设置页（37 方法）

`WCRefineVoiceCloneSettingsViewController`，`reloadTableData` 0x1bf0210。关键方法组：

| 方法组 | IMP | 说明 |
|---|---|---|
| `toggleVoiceCloneProxy:` | 0x1bf23cc | 代理开关（ustring「语音克隆未开启」「启用语音克隆功能」） |
| `toggleVoiceClone:` + `confirmVoiceCloneEnable:` | 0x1bf3f84 / 0x1bf41ec | 主开关（带确认弹窗） |
| `openProviderPicker` | 0x1bf249c | 供应商选择 |
| `editBaseURL` / `editModelString` / `editApiKey` | 0x1bf29e0 / 0x1bf2e14 / 0x1bf42d0 | API 端点/模型/密钥录入 |
| `buildModel` / `buildSiliconFlowModel` | 0x1bf4868 / 0x1bf4b98 | 通用模型构建 + **硅基流动（SiliconFlow）专用构建**（`handleSiliconFlowBuildInput:` 0x1bf4dfc） |
| `syncModels` | 0x1bf3abc | 同步模型列表（ustring「新增 %ld 个音色」） |
| `toggleVoiceButtonLongPress:` + `openVoiceButtonLongPressActionPicker` | 0x1bf3140 / 0x1bf3210 | **长按语音按钮触发克隆**动作分配 |
| `addManualVoice` | 0x1bf3730 | 手动添加音色 |
| `showSampleActions` / `clearSamples` | 0x1bf459c / 0x1bf47f0 | 示例音频操作 |
| `openFishRegistration` | 0x1bf3df4 | 鱼声（Fish Audio 类服务）注册页跳转 |
| `openModelList` | 0x1bf5760 | 音色列表页 |
| `editSpeed` / `editPrefix` | 0x1bf5844 / 0x1bf5b84 | 语速 / 文本前缀 |
| `toggleBackgroundAudio:` / `openBackgroundAudioList` / `editBackgroundVolume` | 0x1bf5f08 / 0x1bf5fc0 / 0x1bf6068 | 背景音开关/列表/音量 |
| `clearVoiceCache` | 0x1bf63e4 | 清缓存 |

### 5.2 音色列表页（40 方法）

`WCRefineVoiceCloneListViewController`：

- 分组过滤：`installSegmentHeader` 0x1be5340（分段头）+ `filterChanged:` 0x1be5a68 + `syncVisibleCategory` 0x1be8218；搜索 `searchBar:textDidChange:` 0x1be5b1c。
- **排序**：`selectSort` 0x1be8bcc（`sortMode`）。
- **预览播放**：`playButtonForModelId:index:` 0x1be93e8 / `previewButtonTapped:` 0x1be9c88 / `stopPreview` 0x1be9f4c / `previewModelId:name:` 0x1beb3f8 / `audioPlayerDidFinishPlaying:successfully:` 0x1beb9f8（`previewingModelId` 单实例状态）。
- 管理：`openManageModelAtIndex:` 0x1be9ff0 → 重命名 `renameModelId:currentName:` 0x1bebb08 / 删除 `deleteModelId:` 0x1bebe8c。
- **目录同步**：`editCustomCatalogURL` 0x1be879c（自定义目录 URL）→ `handleCustomCatalogURLInput:` 0x1be893c；`presentCatalogUploadForModel:` 0x1beace4 → `performCatalogUpload:visibility:` 0x1beb08c（上传到目录，带 visibility 可见性）。
- `showResultTitle:message:` 0x1bec058 统一结果提示。

### 5.3 背景音列表页（16 方法）

`WCRVoiceBackgroundListViewController`（openBackgroundAudioList 唯一入口）：

- 导入：`importBackgroundAudio` 0x1beda08 → `documentPicker:didPickDocumentsAtURLs:` 0x1bedb74（UIDocumentPickerViewController）。
- 管理：`manageBackgroundAtIndex:` 0x1bee3f8 → 重命名 `renameBackgroundAtPath:` 0x1bef0c8 / 置顶 `togglePinnedBackgroundName:` 0x1befa50（`pinnedNames` 持久化 `savePinnedNames:` 0x1bec99c）/ 删除 `deleteBackgroundAtPath:` 0x1befb94。
- 存储目录：ustring「本地背景音」+ `Library/Preferences/WCRef...` 前缀（与 `Library/Preferences/WCRefine/ZDYAVatar` 0x201d630、`Library/Preferences/WCRefine/localemotions` 0x203c5ba 同命名空间，即背景音存于 **Documents/WCRefine 系目录**而非 Library，字符串 `WCRefineVoiceTools` 0x20315cc 归属该体系）。
- ustring 佐证：「背景音格式不受支持」「背景音混合失败」——混合逻辑在 0 方法 helper 中（§6）。

---

## 6. 支撑类架构总览

| 类 | 方法数 | 关键 IMP | 职责 |
|---|---|---|---|
| `WCRefineVoiceFunctionViewController` | 5 | viewDidLoad 0x180adf8 | 主导航壳 |
| `WCRefineVoicePackSettingsViewController` | 27 | reloadTableData 0x1c2ab84 | 语音包设置页（pageSheet 宿主） |
| `WCRefineVoicePackPickerViewController` | 111 | init 0x1c126ac | 聊天内语音包选择页（最大类） |
| `WCRefineVoicePackManagerViewController` | 98 | initWithDirectory:title: 0x1bfb734 | 文件管理页（兼目录选择器） |
| `WCRefineVoicePackBookmarkListViewController` | 31 | initWithKind:chatName: 0x1bf73b4 | 最近/收藏列表 |
| `WCRefineVoicePackPathPickerViewController` | 16 | initWithStartDirectory: 0x1c104b0 | 路径选择 |
| `WCRefineVoicePackItem` | 17 | 0x1392890 起 | 数据模型：name/absolutePath/relativePath/isDirectory/modificationDate/fileSize/repositoryCode/sendOrder |
| `WCRefineVoiceCloneSettingsViewController` | 37 | reloadTableData 0x1bf0210 | 语音克隆设置页 |
| `WCRefineVoiceCloneListViewController` | 40 | viewDidLoad 0x1be4fa8 | 音色列表页 |
| `WCRVoiceBackgroundListViewController` | 16 | viewDidLoad 0x1bec6fc | 背景音列表页 |
| `WCRefineVoicePackStore` | 0 | — | Store 门面：ensureRootDirectoryExists/ensureChatIncludeDirectoryExists/listItemsInDirectory:sortMode:ascending:keyword（类方法在调用方以 selref 出现，实现非 ObjC 方法表） |
| `WCRefineVoicePackSender` | 0 | — | 语音包发送组装 |
| `WCRefineTextToVoiceHelper` | 0 | — | 文本/视频/媒体转语音核心 |
| `WCRefineVoiceCloneHelper` | 0 | — | TTS 请求与克隆核心 |
| `WCRefineSpeechBroadcast` | 0 | — | 语音播报 |
| `WCRefineVoiceAutoSpeed` | 0 | — | 自动倍速 |
| `WCRefineVoiceKeepKeyboard` | 0 | — | 保持键盘 |
| `WCRefineVoicePlayBypass` | 0 | — | 通话中播放语音 |
| `WCRefineVoiceSwipeGestureDelegate` | 3 | gestureRecognizerShouldBegin: 0x6dc620 | 语音条滑动手势代理 |
| `WCRVoiceForwardConfirmDelegate` | 7 | OnForwardMessageSend: 0x7e7270 | 语音转发确认代理（shouldShowSendSuccessView:/wcr_closeFavoritePage） |
| `WCRVPSettingsSheetAction` | — | （actionWithTitle:handler: 构建） | 设置页 ActionSheet 项封装（title/handler/style） |
| `WCRMomentsVoipActionDelegateProxy` | 36 | — | （属朋友圈族，此处仅语音包转发涉及） |

### 0 方法类与 Swift 证据

`SpeechBroadcast / TextToVoiceHelper / VoiceCloneHelper / VoicePackSender / VoicePackStore / VoiceAutoSpeed / VoiceKeepKeyboard / VoicePlayBypass` 八个类在 ObjC 元数据中 **0 方法**，属以下两种情况之一：实现为 C 函数/纯数据、或为 **Swift**。已确证的 Swift 文件证据：`WCRefine/WCRefineVoiceInputBreathingLightOverlay.swift`（`__cstring` 0x2081910）——即"语音输入呼吸灯"的悬浮 UI 是 Swift 实现（其开关与调色板配置仍在 ObjC 页面中，§3.2）。

### 通话混音钩子（voicePlayBypass 的底层）

`WCRefineVoicePackSettingsViewController` 的 `.cxx_destruct` 元数据旁出现一组音频混音 selector（report 0x1c2db50 条目）：

```
hookWCAudioModuleMgr / canSetActiveWithScene:groupName:identifier:
hookInstanceMethod:inClass: / hookClassMethod:inClass:
audioModule:canMixWithAudioList: / audioList:canMixWithAudioModule: / isAudioModuleInterrupt:
```

即「通话时播放语音消息」通过 **hook 微信音频模块管理器（WCAudioModuleMgr）的 canMix/interrupt 判定**实现——让语音消息播放不被通话音频会话打断（或反之可混音）。这是全语音域中唯一直接可见的 hook 点证据。

---

## 7. 存储与配置键完整清单

### WCRefineConfig 配置键（语音域）

页面直读直写（getter/setter 成对，方法名自明）：

```
voicePackEnabled / voicePackContinuousSendEnabled / voicePackAttachmentEnabled
voicePackPlusLongPressEnabled / voicePackQuickBarEnabled
voicePackRelativePath / voicePackPresentMode / voicePackBindSendOrder
voiceForwardEnabled / voiceCustomDurationSeconds
voiceToFileEnabled / voiceToFileNameTemplate / voiceToFileSendMode
videoToVoiceFileEnabled / videoToVoiceFileNameTemplate / videoToFileSendMode
mediaFileToVoiceEnabled / videoToVoiceEnabled
voiceInputBreathingLightEnabled / voiceInputBreathingLightPalette
voiceAutoTranslateEnabled / voiceAutoTranslateGroupChatEnabled / voiceAutoTranslateIgnoreReadEnabled
voiceAutoSpeedEnabled / voiceAutoBackgroundPlayEnabled / voiceFloatTapCloseEnabled
voicePlayBypassEnabled / voiceKeepKeyboardEnabled / voiceClone(+visible 门控)
```

### 聊天入口标识键

```
voice_pack (0x2030d51)              — 主键
other_voice_pack_attachment (0x2030d73) — 附件面板入口
other_voice_pack_quickbar (0x2030dbe)   — 聊天栏快捷入口
lp_voice_pack_include / lp_voice_pack_unzip — 长按语音纳入/解压
wcr.attach.plugin:voice_pack (0x2035032)
toolbar:wcr.builtin.voice_pack (0x203539a) / wcr.builtin.voice_pack (0x20353f2)
tb_voice_pack (0x203ecce)
```

### 磁盘路径与目录名（`__cstring` 证据）

```
Documents/WCRefine (0x203fdfb)      — 插件文档根
WCRefineVoicePack (0x2041864)       — 语音包根目录名
WCRefineVoicePack- (0x2041346 同族)  — 带后缀变体（多仓库存放）
WCRefineVoiceClone (0x2041215) / WCRefineVoiceClone- — 克隆音频目录
WCRefineVoiceFiles (0x20314cd)      — 转文件产物目录
WCRefineVoiceTools (0x20315cc)      — 工具目录（背景音等）
```

Store 类方法：`ensureRootDirectoryExists:`（建根目录）、`ensureChatIncludeDirectoryExists:`（建「聊天纳入」目录）、`listItemsInDirectory:sortMode:ascending:keyword:`（列条目，排序模式由管理页/选择页传入）。

### 语音包下载源

```
夸克网盘：https://pan.quark.cn/s/28c18297a6c6        （scheme: quark://）
百度网盘：https://pan.baidu.com/s/1ILx3ajnI2zmrmGd8rLGdew?pwd=amdp
          （提取码 amdp；scheme: baiduyun:// 与 bdnetdisk://）
```

---

## 8. 方法地址速查表

### WCRefineVoiceFunctionViewController（全部 5 方法）

| 方法 | IMP |
|---|---|
| `viewDidLoad` | 0x180adf8 |
| `viewWillAppear:` | 0x180ae74 |
| `reloadTableData` | 0x180aedc |
| `openVoiceClone` | 0x180c9b0 |
| `openVoicePackSettings` | 0x180ca94 |

### WCRefineVoicePackSettingsViewController（全部 27 方法）

| 方法 | IMP | 方法 | IMP |
|---|---|---|---|
| `viewDidLoad` | 0x1c27ec4 | `openManager` | 0x1c2cfe0 |
| `viewWillAppear:` | 0x1c287b0 | `openDownloadOptions` | 0x1c2d3d8 |
| `viewWillDisappear:` | 0x1c28ab8 | `manager` / `setManager:` | 0x1c2d964 / 0x1c2d988 |
| `wcr_refreshPageSheetFloatBar` | 0x1c28b24 | `hostSheet` / `setHostSheet:` | 0x1c2d9c4 / 0x1c2d9f8 |
| `wcr_floatBarBack` | 0x1c2a970 | `pageSheetMode` / `setPageSheetMode:` | 0x1c2da34 / 0x1c2da60 |
| `reloadTableData` | 0x1c2ab84 | `floatBar` / `setFloatBar:` | 0x1c2da90 / 0x1c2dab4 |
| `toggleEnabled:` | 0x1c2b814 | `tableBottomToFloatConstraint` / `set...` | 0x1c2daf0 / 0x1c2db14 |
| `toggleContinuousSend:` | 0x1c2ba54 | `.cxx_destruct` | 0x1c2db50 |
| `toggleAttachment:` | 0x1c2bb28 | | |
| `togglePlusLongPress:` | 0x1c2bc58 | | |
| `toggleQuickBar:` | 0x1c2bd88 | | |
| `presentModeChanged:` | 0x1c2beb8 | | |
| `bindOrderChanged:` | 0x1c2bfa0 | | |
| `selectPath` | 0x1c2c088 | | |

### 语音克隆设置页高频方法

| 方法 | IMP | 方法 | IMP |
|---|---|---|---|
| `viewDidLoad` | 0x1beffc8 | `toggleVoiceClone:` | 0x1bf3f84 |
| `reloadTableData` | 0x1bf0210 | `editApiKey` | 0x1bf42d0 |
| `toggleVoiceCloneProxy:` | 0x1bf23cc | `buildModel` | 0x1bf4868 |
| `openProviderPicker` | 0x1bf249c | `buildSiliconFlowModel` | 0x1bf4b98 |
| `editBaseURL` | 0x1bf29e0 | `syncModels` | 0x1bf3abc |
| `editModelString` | 0x1bf2e14 | `openModelList` | 0x1bf5760 |
| `toggleVoiceButtonLongPress:` | 0x1bf3140 | `openFishRegistration` | 0x1bf3df4 |
| `addManualVoice` | 0x1bf3730 | `openBackgroundAudioList` | 0x1bf5fc0 |

管理页（0x1bfb734 起）/ 选择页（0x1c126ac 起）/ 收藏列表（0x1bf73b4 起）/ 路径选择（0x1c104b0 起）全量方法清单见 §4/§6 表格及括注 IMP。

---

## 9. 对 MioPlugin 的复刻参考价值

1. **导航壳模式**：主页面只做入口分组（5 方法），重型功能下沉二级页——比单页塞 163 方法（朋友圈页）更易维护，MioPlugin 新增"语音"分节可直接套用。
2. **pageSheet + 悬浮栏**（`pageSheetMode`/`hostSheet`/`wcr_refreshPageSheetFloatBar` 四件套）是完整的"半屏多级导航"方案；若 MioPlugin 只需推入式页面，仅需借鉴其 `tableBottomToFloatConstraint` 的表底约束防遮挡思路。
3. **多入口设计**（附件面板/长按加号/聊天栏快捷按钮/长按语音纳入）全部由独立配置键控制且互不依赖，适合作为功能开关粒度的范本；入口标识字符串（`wcr.attach.plugin:xxx` / `toolbar:wcr.builtin.xxx` / `tb_xxx`）的命名规范可直接借用。
4. **文件管理页的异步细节**值得照抄：目录统计与语音时长都用"generation 计数器防竞态 + pending 队列去重"（`statsGeneration`/`durationGeneration`/`pendingFolderStatsPaths`），避免快速滚动时错帧；预取完成前 cell 显示占位。
5. **置顶用文件名前缀**（`wcr_pinPrefixForItem:`）而非额外索引文件——对文件型数据是最省事的置顶方案，代价是改名需保留前缀。
6. **语音包 Item 模型**（17 属性：relativePath + absolutePath 双存、isDirectory、repositoryCode、sendOrder）按需取用；`repositoryCode`（绑定消息仓库）+ `voicePackBindSendOrder`（语音前/语音后）组合出"发语音带仓库"的伪装玩法。
7. **克隆供应商抽象**：`buildModel` / `buildSiliconFlowModel` 双构建器说明其请求层对 baseURL/model/apiKey 做了通用化，仅 SiliconFlow 单独适配——MioPlugin 若做 TTS 集成，可按"通用 OpenAI 兼容 + 单厂适配"的最小集合实现。
8. **通话混音 hook 点**：`audioModule:canMixWithAudioList:` / `isAudioModuleInterrupt:` 是微信音频模块的官方判定面，hook 这两个判定（而非 AudioSession 底层）侵入面小；需注意 `canSetActiveWithScene:groupName:identifier:` 的场景参数。

## 10. 分析方法附注与局限性

- 语音域的字符串解码成功率与朋友圈域一致；`WCRefineVoicePackSettingsViewController` 页面文案完整可读（§4.1 表格均来自修复解码原句）。
- 局限：① 8 个 0 方法类的实现体不在 ObjC 方法表中（C/Swift），**发送链路、TTS 请求、混音 hook 的完整调用流程静态未展开**，仅有 selector 证据（§6）；② `WCRefineVoicePackPickerViewController` 111 方法中与微信消息发送对接的部分（`sendItem:` 之后的组装）依赖 VoicePackSender，未还原；③ 呼吸灯 overlay（Swift）的调色板格式仅知存在 `voiceInputBreathingLightPalette` 键与 ustring「↳ 设呼吸灯颜色」「呼吸灯颜色已保存」，具体格式（hex 串/数组）未确认；④ 语音转文字（voiceAutoTranslate）的本地/云端判定未见于页面代码，应在 0 方法 helper 中；⑤ 管理页与选择页互跳的 classref 关系来自 `WCRVoiceForwardConfirmDelegate` 的 dealloc 旁引用（report VC INSTANTIATION 节），个别跳转入口可能经 classref 间接层，方向（管理→选择 / 选择→管理）已按方法语义双向确认。
