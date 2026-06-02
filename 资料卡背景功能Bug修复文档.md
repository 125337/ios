# MioPlugin 资料卡背景功能 Bug 修复文档

> **更新日期**: 2026-06-02 (v7 — 日志诊断版)
> **当前状态**: 隐藏信息卡片 ✅ 已修复 | 背景图不显示 ❌ 待定位
> **关键发现**: 日志中完全缺少 `[CardBg]` 诊断输出

---

## 1️⃣ 日志分析结果

### 1.1 日志内容

日志共 81 行，全部是**插件安装阶段**的输出：

```
✅ MMTableViewCell::layoutSubviews hook 已注册（第76行）
✅ MMUIButton::layoutSubviews hook 已注册（第80行）
❌ 完全没有 [CardBg] 诊断日志
```

### 1.2 关键发现：`[CardBg]` 日志未出现

我在代码第 555-556 行添加了诊断日志：
```objc
WPLog(@"ListCornerRadius", @"[CardBg] branch entered! subviews.count=%lu, bounds=%@",
      (unsigned long)cellViewCard.subviews.count, NSStringFromCGRect(cellViewCard.bounds));
```

**这条日志完全没有出现。** 有两种可能：

| 可能性 | 概率 | 说明 |
|--------|:----:|------|
| A. 用户在进入"我"页面之前就抓取了日志 | 🟡 中 | 日志只包含启动阶段 |
| B. cardBg 分支的条件判断失败，分支从未进入 | 🔴 高 | 条件之一返回 NO |

### 1.3 如果是情况 B：哪个条件失败了？

cardBg 分支入口条件（[ListCornerRadiusHook.m 第394行](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m#L394)）：

```objc
if (isMoreVCCard && [ListCornerRadiusHook wp_isProfileCard:cellViewCard] && config.cardBgEnabled)
```

三个条件必须**全部为 YES** 才能进入：

| # | 条件 | 代码位置 | 失败可能原因 |
|---|------|---------|-------------|
| 1 | `isMoreVCCard` | 第391行 | VC 类名不是 `"MoreViewController"`（新版微信改名？） |
| 2 | `wp_isProfileCard:` | 第394行 | Cell 中找不到 `MMHeadImageView`（类名变了？） |
| 3 | `config.cardBgEnabled` | 第394行 | 配置没有正确保存/加载 |

---

## 2️⃣ 排查步骤

请按以下顺序操作来精确定位问题：

### Step 1：确认是否进入了"我"页面

安装新版本后，**必须先退出微信再重新打开**，然后点击底部 **"我"** Tab，让资料卡 Cell 的 `layoutSubviews` 被触发。

然后重新抓取日志，确认是否有 `[CardBg]` 开头的行。

### Step 2：如果仍然没有 `[CardBg]` 日志

说明分支条件失败。需要逐个排查三个条件。请在代码中**在每个条件前加日志**：

**文件**: [ListCornerRadiusHook.m](file:///www/wwwroot/ios/MioPlugin/Modules/ListCornerRadius/ListCornerRadiusHook.m) 第 389-394 行

将：
```objc
    UIViewController *vcCardEarly = findParentViewController((UIView *)self);
    NSString *classNameCardEarly = vcCardEarly ? NSStringFromClass([vcCardEarly class]) : @"";
    BOOL isMoreVCCard = [classNameCardEarly isEqualToString:@"MoreViewController"];
    UIView *cellViewCard = (UIView *)self;

    if (isMoreVCCard && [ListCornerRadiusHook wp_isProfileCard:cellViewCard] && config.cardBgEnabled) {
```

替换为：
```objc
    UIViewController *vcCardEarly = findParentViewController((UIView *)self);
    NSString *classNameCardEarly = vcCardEarly ? NSStringFromClass([vcCardEarly class]) : @"(nil)";
    BOOL isMoreVCCard = [classNameCardEarly isEqualToString:@"MoreViewController"];
    UIView *cellViewCard = (UIView *)self;
    BOOL isProfile = [ListCornerRadiusHook wp_isProfileCard:cellViewCard];

    // ★★★ 逐条件诊断日志 ★★★
    WPLog(@"ListCornerRadius", @"[CardBg-Diag] vc=%@, isMoreVC=%d, isProfile=%d, cardBgEnabled=%d",
          classNameCardEarly, isMoreVCCard, isProfile, config.cardBgEnabled);

    if (isMoreVCCard && isProfile && config.cardBgEnabled) {
        WPLog(@"ListCornerRadius", @"[CardBg-Diag] ★ ALL CONDITIONS PASSED! Entering branch.");
```

### Step 3：根据诊断日志判断根因

| 日志输出 | 根因 | 修复方向 |
|---------|------|---------|
| `isMoreVC=0` | VC 类名不是 MoreViewController | 新版微信可能改了类名，需打印实际类名并更新 |
| `isProfile=0` | 找不到 MMHeadImageView | 新版微信可能改了类名或视图层级 |
| `cardBgEnabled=0` | 配置没保存成功 | 检查 SettingCardBackgroundController 的 save 逻辑 |
| 全部为 1 但无后续日志 | 不可能（逻辑矛盾） | 检查代码编译是否正确 |

---

## 3️⃣ 最可能的根因推测

基于所有尝试都无效的事实，我高度怀疑是 **条件 #1 或 #2 失败**：

### 推测 1：`MoreViewController` 类名变化

微信在新版本中可能将 "我" 页面的 ViewController 从 `MoreViewController` 改名为其他名称（如 `WCMeViewController`、`MeViewController` 等）。这会导致 `isMoreVCCard = NO`，整个 cardBg 分支被跳过。

**验证方法**：上面的 Step 2 诊断日志会直接打印实际的 `classNameCardEarly`。

### 推测 2：`MMHeadImageView` 类名变化

同样地，微信可能在资料卡中将头像视图从 `MMHeadImageView` 改名为其他类名（如 `MMContactHeadImageView` 等）。这会导致 `wp_isProfileCard:` 返回 NO。

**验证方法**：上面的 Step 2 诊断日志会显示 `isProfile` 的值。

### 推测 3：config 加载问题

`cardBgEnabled` 可能没有正确保存到 NSUserDefaults。但 HideCard 功能已正常工作（用户确认），而 HideCard 和背景图共用同一个开关 `cardBgEnabled`，所以这个可能性较低。

---

## 4️⃣ 为什么 HideCard 能工作但背景图不行（最终解释）

如果上述条件在 HideCard 时能通过但在非 HideCard 时不能通过——这是不可能的，因为它们走的是**同一个入口条件**（第 394 行）。

所以只有两种情况：

**情况 A：HideCard 也不工作，只是你以为它工作了**
- HideCard 时你看到的效果可能是其他因素造成的（比如图片确实隐藏了，但不是我们的代码做的）

**情况 B：两者都能进入分支，但背景图的视觉效果被某些东西遮挡**
- 这是我们之前一直在排查的方向（contentView / backgroundView / m_bgImageView）
- 但我们已经试了 contentView 透明、backgroundView 隐藏、bringSubviewToFront、红色诊断色...
- **如果红色都没显示，那只能是分支没进入**

---

## 5️⃣ 下一步行动

1. **应用 Step 2 的诊断代码**（逐条件日志）
2. **重新编译部署**
3. **打开微信 → 点"我" → 抓日志**
4. **把新的日志发给我**

有了 `[CardBg-Diag]` 开头的日志，就能 100% 确定根因在哪。
