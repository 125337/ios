# 铃铛页 Cell 根治方案 · 切换 UIListContentConfiguration 现代管线

> 目标：与 WCMoments 走**同一条渲染路径**——同一微信、同一 iOS 上它有白卡我们就有白卡，排版由系统自动对齐，不再逐项手工调。
> 原理：新 iOS 上 InsetGrouped 的分组卡底由**现代内容配置管线**自动绘制；经典 textLabel 管线在"表背景色被显式赋值"的组合下不渲染卡底（本次两图差异的机制）。
> CI SDK 无 UIListContentConfiguration 头文件 → **自声明 shim**（运行时接口 iOS14+ 必在，WCMoments 本体就在用）。

---

## 一、改动文件

| 文件 | 动作 |
|---|---|
| `MioPlugin\Core\MioListContentShim.h` | **新增**：40 行接口声明（无实现，纯声明） |
| `MioPlugin\Modules\Moments\MioDualInboxVC.m` | cellForRow 重写（60 行 → 约 30 行）；**删除** circleAvatar: 整个方法 |

数据链路（loadItems / Call: 代理 / AvatarLoader / sections 结构 / 时间 label）**全部保留不动**。

## 二、新增 Shim：`MioListContentShim.h`

```objc
// MioListContentShim.h —— UIListContentConfiguration 运行时声明（iOS14+ 运行时必有）
// 老编译 SDK 缺头文件，用 __has_include 自动让位：未来换新 SDK 本文件自动失效。
#import <UIKit/UIKit.h>

#if !__has_include(<UIKit/UIListContentConfiguration.h>)

@interface UIListContentConfiguration : NSObject
// 类方法：必须发给本类，发给 UITableViewCell 即 unrecognized selector（闪退根因实证）
+ (instancetype)subtitleCellConfiguration;
@property (nonatomic, copy, nullable) NSString *text;
@property (nonatomic, copy, nullable) NSAttributedString *attributedText;
@property (nonatomic, copy, nullable) NSString *secondaryText;
@property (nonatomic, copy, nullable) NSAttributedString *secondaryAttributedText;
@property (nonatomic, strong, nullable) UIImage *image;
@property (nonatomic, readonly) UITextContentConfiguration *textProperties;
@property (nonatomic, readonly) UITextContentConfiguration *secondaryTextProperties;
@property (nonatomic, readonly) UIImageConfiguration *imageProperties;
@property (nonatomic, assign) CGFloat imageToTextPadding;
@property (nonatomic, assign) CGFloat textToSecondaryTextVerticalPadding;
@end

@interface UITextContentConfiguration : NSObject
@property (nonatomic, strong, null_resettable) UIFont *font;
@property (nonatomic, strong, null_resettable) UIColor *textColor;
@property (nonatomic, assign) NSInteger numberOfLines;
@end

// ⚠️ UIImageConfiguration 是只读值对象：运行时无 setMaximumSize:/setCornerRadius:，
// 声明成可写属性 = cellForRow 必崩（unrecognized selector）。圆头像走预渲染位图（circleAvatar:）。

@interface UITableViewCell ()
@property (nonatomic, copy, nullable) UIListContentConfiguration *contentConfiguration;
@end

#endif
```

## 三、cellForRow 重写（整体替换）

```objc
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:@"msg"];
    if (!cell) cell = [[UITableViewCell alloc] initWithStyle:UITableViewCellStyleSubtitle
                                            reuseIdentifier:@"msg"];

    NSDictionary *d = self.rows[indexPath.section];
    BOOL like = [d[@"kind"] isEqualToString:@"like"];
    NSString *sec = (text_len(d[@"text"]) > 0) ? d[@"text"]
                  : (like ? @"赞了你的朋友圈" : @"评论了你的朋友圈");

    // ---- 现代内容配置（WCM 同款管线）----
    // subtitleCellConfiguration 是 UIListContentConfiguration 的类方法，必须发给本类
    UIListContentConfiguration *cfg = [UIListContentConfiguration subtitleCellConfiguration];
    cfg.text = d[@"name"];
    cfg.secondaryText = sec;
    cfg.image = [self circleAvatar:[self avatarImage:d[@"actor"]]];   // 预渲染圆头像（imageProperties 实际类型是 UIListContentImageProperties，预渲染更可控）
    cfg.secondaryTextProperties.font = [UIFont systemFontOfSize:13];
    cfg.textToSecondaryTextVerticalPadding = 2;
    cell.contentConfiguration = cfg;                     // ← 系统接管排版 + 分组卡底

    // ---- 右侧时间（保留原有手工 label）----
    [[cell.contentView viewWithTag:1001] removeFromSuperview];
    UILabel *time = [[UILabel alloc] initWithFrame:CGRectMake(0, 0, 110, 20)];
    time.tag = 1001;
    time.font = [UIFont systemFontOfSize:12];
    time.textColor = [UIColor tertiaryLabelColor];
    time.textAlignment = NSTextAlignmentRight;
    NSDate *dt = [NSDate dateWithTimeIntervalSince1970:[d[@"t"] doubleValue]];
    NSDateFormatter *f = [[NSDateFormatter alloc] init];
    f.dateFormat = @"M月d日 HH:mm";
    time.text = [f stringFromDate:dt];
    time.translatesAutoresizingMaskIntoConstraints = NO;
    [cell.contentView addSubview:time];
    [NSLayoutConstraint activateConstraints:@[
        [time.trailingAnchor constraintEqualToAnchor:cell.contentView.layoutMarginsGuide.trailingAnchor],
        [time.centerYAnchor constraintEqualToAnchor:cell.contentView.centerYAnchor]]];

    return cell;
}
```

`text_len` 即 `text.length > 0` 的宏或直接内联，避免和 text 属性名冲突。

## 四、删除清单

| 删除项 | 原因 |
|---|---|
| `circleAvatar:` 整个方法（~15 行） | ~~改为 imageProperties.cornerRadius~~ **保留**：UIImageConfiguration 只读无 setter，声明 setter 必崩（ unrecognized selector） |
| `cell.textLabel.text/font`、`cell.detailTextLabel.*` 全部 | 由 contentConfiguration 接管 |
| `secondaryLabelColor`/字号手工赋值 | 系统默认即 secondaryLabel，如需 13pt 保留上面那行 font |

**注意**：上一轮给的 `willDisplayCell 显式白底` 补丁**不要加**——现代管线下 cell.backgroundColor 显式赋值会覆盖系统卡底，反而弄脏。

## 五、保留不动

- `loadItems`（Call: 代理 + getDataItemByID 兜底链）——数据已通
- 每消息一 section 结构、rowHeight 72、tableHeaderView 分段控件
- 时间 label（WCM 也是手工挂载，同款）
- `didSelectRow` 动作面板、AvatarLoader 全链路

## 六、验证清单

- [ ] 每条消息独立白卡、圆角、~10pt 间隙（浅色模式白卡/深色模式深卡自动切换）
- [ ] 头像 42pt 正圆（circleAvatar 预渲染位图）
- [ ] 昵称粗体、内容 secondary 灰、字号与 WCM 截图一致
- [ ] 深色模式切换后卡片颜色自适应（管线自动，无需手工）
- [ ] 点击仍弹动作面板

## 七、为什么这是根治

1. **同路径**：和 WCMoments 一字不差的系统 API——它有卡我们必有卡，系统升级自动跟随
2. **删代码**：textLabel/detailTextLabel 手工排版全套消失（circleAvatar 保留，圆头像预渲染）
3. **免费深色模式**：系统卡底 + 系统标签色，dark mode 零成本
4. **shim 自失效**：`__has_include` 守卫——将来 CI SDK 更新后声明自动让位，不留死代码
