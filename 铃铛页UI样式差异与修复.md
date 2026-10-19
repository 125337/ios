# 铃铛消息页 UI 样式差异 · 对照与修复

> 问题：MioDualInboxVC 与 WCMoments 铃铛页功能相同但观感差异大（截图对比：通宽灰行+贴边黑头像 vs 圆角卡片+分组底）。
> 结论：不是理解偏差，是 **5 处代码字面差异**——规格书（见《WCMoments铃铛消息页UI分析.md》）已抽实，代码未按规格落。
> 文件：`MioPlugin\Modules\Moments\MioDualInboxVC.m` + `MomentsDualPanel.m`（present 处）

---

## 一、差异对照表（规格 vs 现状）

| # | 规格书（WCM，反编译实证） | MioDualInboxVC.m 现状 | 观感后果 |
|---|---|---|---|
| 1 | 分组样式表格（圆角卡片、自带内衬） | `style:UITableViewStylePlain` | 通宽行 + 发丝线分隔 + 内容顶到屏幕边 |
| 2 | 背景 `systemGroupedBackgroundColor` | 手写 `colorWithRed:0.969 green:0.969 blue:0.969` | 底色接近但卡片/底色对比关系缺失 |
| 3 | 导航栏「< 发现 ｜ 消息」 | 直接 present 裸 VC，无导航包装 | 无标题无返回，首行顶进状态栏 |
| 4 | `setRowHeight_` 自定义行高 | 未设置（默认 44） | 头像挤压变形、两行文字放不下 |
| 5 | 分段控件固定在列表上方 | seg 用 NSLayoutConstraint 钉在 view，table 用 frame+autoresizing，两套布局并存 | seg 被顶出屏幕不可见 |

## 二、修复补丁（四段，照抄即用）

### 补丁 ①：表格样式 + 背景（观感 80%）

```objc
// viewDidLoad 里替换两行：
self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];
self.table = [[UITableView alloc] initWithFrame:self.view.bounds
                                           style:UITableViewStyleInsetGrouped];
// 删除：self.table.separatorInset = UIEdgeInsetsMake(0, 68, 0, 0);
self.table.rowHeight = 72;          // 对齐 WCM setRowHeight_
```

### 补丁 ②：分段控件搬进 tableHeaderView

```objc
// 删除 seg 的 4 条 NSLayoutConstraint、[self.view addSubview:self.seg]、
// 以及 table.topAnchor 对齐 seg.bottomAnchor 那条约束。
// 换成：
UIView *hdr = [[UIView alloc] initWithFrame:CGRectMake(0, 0, self.view.bounds.size.width, 56)];
hdr.backgroundColor = [UIColor systemGroupedBackgroundColor];
self.seg.frame = CGRectMake(16, 12, self.view.bounds.size.width - 32, 32);
self.seg.autoresizingMask = UIViewAutoresizingFlexibleWidth;
[hdr addSubview:self.seg];
self.table.tableHeaderView = hdr;
// table 顶约束改为：
// [self.table.topAnchor constraintEqualToAnchor:self.view.safeAreaLayoutGuide.topAnchor]
```

### 补丁 ③：呈现时包导航栏（MomentsDualPanel.m）

```objc
// 找到 alloc MioDualInboxVC 的位置（约 715 行），改为：
MioDualInboxVC *vc = [[MioDualInboxVC alloc] initWithItems:[self inboxItems]];
vc.title = @"消息";
UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
nav.modalPresentationStyle = UIModalPresentationPageSheet;
// 原来 present vc 的地方改 present nav
```

### 补丁 ④（可选）：cell 微调

```objc
// cellForRowAtIndexPath 里，头像已由 circleAvatar: 画成 42pt 圆形，
// InsetGrouped 下自动缩进对齐；若想内容再收紧：
cell.separatorInset = UIEdgeInsetsMake(0, 68, 0, 0);   // 分隔线从文字起（原意保留）
```

## 三、验证清单（改完逐条打勾）

- [ ] 背景为系统分组灰紫底
- [ ] 每条消息是独立圆角白卡片，四周 16pt 内衬
- [ ] 顶部「全部 / 收到的赞 / 评论」分段固定可见
- [ ] 导航栏显示「消息」标题
- [ ] 头像 42pt 圆形、无拉伸，行高 72 两行文字舒展
- [ ] 空分类显示"无消息"占位背景

## 四、样式之外的两处数据 bug（另案，已有结论）

| 症状 | 根因 | 修法 |
|---|---|---|
| 日期全显「1 月 1 日 08:00」 | `valueForKey:@"createTime"` 在 Call: 代理对象上不响应 → 0 → 1970 | 字段读取改走 `Call:` 动态接口（详见《WCMoments铃铛消息页UI分析.md》第八节） |
| 头像全为黑色占位 | `MMContext activeUserContext` 定位链在 8.0.78 不成立 | 换已验证的 `WXGetService(objc_getClass("MMHeadImageMgr"))`（AvatarLoader.m 同款） |
| 昵称空白 | 同第一行：KVC 在代理对象上不命中 | 同上，`Call:` 或 `getDataItemByID:` 取真 WCDataItem |

## 五、经验沉淀

1. **原生页的"UI 抽取" = 反编译构建代码**，没有资源文件可拿；规格书的每一项都要有反编译选择器背书
2. **Plain vs InsetGrouped** 是这类"看起来廉价 vs 精致"的头号原因——微信系 UI 全部是分组卡片风
3. **布局只留一套**：约束和 frame+autoresizing 混用，present 后必打架（本次 seg 消失的根因）
4. `WXGetService` 是全插件统一的服务定位入口，新代码禁止再发明 `MMContext activeUserContext` 这类旁路
