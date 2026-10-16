# BubbleBox 消息合并 · 原版机制复刻代码（文档版）

> 本文档是完整可编译级代码，**未写入你的工程**（按要求）。复刻范围 = 运行时实证的 BubbleBox 原版机制：
> ① 钩 `CommonMessageCellView` 的 `initWithViewModel:` / `layoutInternal` / `updateNodeStatus`（三方法 IMP 运行时实测指向 BubbleBox）
> ② 钩内自重排 cell 内部：`isHeadPart/isTailPart` + `mergeLayoutValue` 算头像/气泡/内容位置（对应 FUN_0042ef1c）
> ③ 分组数据用 `GetMsg:LocalID:` 从消息库遍历（对应 +findValidMsg:startId:direction:，接收者为 dispatch_once 缓存的服务定位器实例）
> 差异声明：选择器与调用链为实证；**像素常量（间距默认值、原点偏移）无法从平坦化代码逐值还原，标注 `// TODO-常量` 的地方需真机微调**。

## 修订记录（v1.1 · 2026-10-13，开发复核后）

1. **引擎取数方案作废**：`[[MMServiceCenter defaultCenter] getService:[CMessageMgr class]]` 在微信 8.0.78 实测 **abort**（探针实证）——文件 3/4 的 `bbMsgMgr` 按此标注为**不可用**。已实证工作的方案是**工程的渲染数组 `m_arrMessageNodeData`**（取当前会话内存数组，不碰消息库 API）。
2. **重排深度对比修正**：工程 v2 已是 frame 级重排（cv 整体位移带动 bg+文字 + 基准缓存 + 上一条气泡底实测封顶），完整度与安全性均优于本文档的 `y<1→1` 硬 clamp 近似；“头像位被气泡利用”在本文档中仅有 TODO，不构成对比优势。
3. **X 偏移结论修正**：XOS 真机实证**不改 X**——`mesMsgMergeAvatarOffset/WholeOffset` 并非“移动气泡 X”的配置，此前解读作废（反编译证据仅支持键存在与 clamp 行为，消费端在别处）。

---

## 文件 1/4：BBMergeConfig.h

```objc
#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface BBMergeConfig : NSObject <ConfigModule>
@property (nonatomic, assign) BOOL   bbEnable;          // 启用消息合并
@property (nonatomic, assign) BOOL   bbOnlyRoom;        // 仅对群聊生效
@property (nonatomic, assign) NSInteger bbMode;         // 0=全部合并 1=手动配置(预留)
@property (nonatomic, assign) CGFloat bbMergeLayoutValue; // mergeLayoutValue：组内元素间距(pt)，BubbleBox 设置页可调
@property (nonatomic, assign) CGFloat bbLayoutSpace;    // layoutSpace：气泡与内容的基础间距
@property (nonatomic, assign) BOOL   bbShowHeadImage;   // isShowHeadImage
@property (nonatomic, assign) BOOL   bbShowRoomName;    // isShowChatRoomDisplayName
+ (instancetype)shared;
@end
```

## 文件 2/4：BBMergeConfig.m

```objc
#import "BBMergeConfig.h"

@implementation BBMergeConfig
+ (instancetype)shared {
    static BBMergeConfig *i; static dispatch_once_t t;
    dispatch_once(&t, ^{ i = [[BBMergeConfig alloc] init]; });
    return i;
}
+ (NSString *)modulePrefix { return @"BBMerge_"; }
+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        [ConfigDescriptor itemWithKey:@"bbEnable"           type:ConfigValueTypeBool   default:@(NO)],
        [ConfigDescriptor itemWithKey:@"bbOnlyRoom"         type:ConfigValueTypeBool   default:@(NO)],
        [ConfigDescriptor itemWithKey:@"bbMode"             type:ConfigValueTypeInteger default:@(0)],
        // TODO-常量：mergeLayoutValue 的默认值未从平坦化代码还原，真机对齐 BubbleBox 后修正
        [ConfigDescriptor itemWithKey:@"bbMergeLayoutValue" type:ConfigValueTypeFloat  default:@(6.0)],
        [ConfigDescriptor itemWithKey:@"bbLayoutSpace"      type:ConfigValueTypeFloat  default:@(2.0)],
        [ConfigDescriptor itemWithKey:@"bbShowHeadImage"    type:ConfigValueTypeBool   default:@(YES)],
        [ConfigDescriptor itemWithKey:@"bbShowRoomName"     type:ConfigValueTypeBool   default:@(YES)],
    ];
}
@end
```

## 文件 3/4：BBMergeEngine.h / .m（消息库遍历 + 分组判定）

```objc
// BBMergeEngine.h
#import <Foundation/Foundation.h>
typedef NS_ENUM(NSUInteger, BBPos) {
    BBPosNone = 0, BBPosSingle, BBPosFirst, BBPosMiddle, BBPosLast,
};
@interface BBMergeEngine : NSObject
/// 复刻 +findValidMsg:startId:direction: 邻接遍历 + isPrev/isNextSameUser 判定
+ (BBPos)positionForWrap:(id)wrap chatName:(NSString *)chatName;
+ (void)clearCache;
@end
```

```objc
// BBMergeEngine.m（MRC）
#import "BBMergeEngine.h"
#import "BBMergeConfig.h"
#import <objc/runtime.h>
#import <objc/message.h>

static const NSInteger kWalkLimit = 30;        // findValidMsg 单方向步进上限
static const NSTimeInterval kTTL = 5.0;

// 【作废·实证崩溃】复刻 DAT_004d1af8 的服务定位器方案在 8.0.78 实测 abort（见修订记录 #1）
// 可用方案：渲染数组 m_arrMessageNodeData（工程已实证），或经探针重新确认的安全途径
static id bbMsgMgr(void) {
    static id mgr = nil;
    static dispatch_once_t t;
    dispatch_once(&t, ^{
        Class svcCenter = objc_getClass("MMServiceCenter");
        Class msgMgrCls = objc_getClass("CMessageMgr");
        if (svcCenter && msgMgrCls) {
            id center = ((id (*)(id, SEL))objc_msgSend)(svcCenter, NSSelectorFromString(@"defaultCenter"));
            if (center) {
                mgr = ((id (*)(id, SEL, Class))objc_msgSend)(
                    center, NSSelectorFromString(@"getService:"), msgMgrCls);
            }
        }
        // 兜底：老版本直接 defaultMgr
        if (!mgr && msgMgrCls) {
            mgr = ((id (*)(id, SEL))objc_msgSend)(msgMgrCls, NSSelectorFromString(@"defaultMgr"));
        }
    });
    return mgr;
}

static id bbValue(id obj, NSString *key) {
    if (!obj) return nil;
    @try { return [obj valueForKey:key]; } @catch (NSException *e) { return nil; }
}

/// 复刻 +senderUser:：m_nsFromUsr；带 @chatroom 后缀时用 m_nsRealChatUsr
static NSString *bbSenderUser(id wrap) {
    NSString *from = bbValue(wrap, @"m_nsFromUsr");
    if (![from isKindOfClass:[NSString class]] || from.length == 0) return nil;
    if ([from hasSuffix:@"@chatroom"]) {
        NSString *real = bbValue(wrap, @"m_nsRealChatUsr");
        if ([real isKindOfClass:[NSString class]] && real.length > 0) return real;
    }
    return from;
}

/// 复刻 +isSeparatorMessage: 的 v1 简化：系统/状态消息视为分隔（type>=10000）
static BOOL bbMergeable(id wrap) {
    if (!wrap) return NO;
    id t = bbValue(wrap, @"m_uiMessageType");
    if (![t respondsToSelector:@selector(longLongValue)]) return NO;
    return [t longLongValue] < 10000;
}

/// 复刻 +findValidMsg:startId:direction:：按 localID 步进取最近有效消息
static id bbFindValidMsg(NSString *chat, long long startID, NSInteger dir) {
    id mgr = bbMsgMgr();
    if (!mgr || chat.length == 0) return nil;
    SEL sel = NSSelectorFromString(@"GetMsg:LocalID:");
    if (![mgr respondsToSelector:sel]) return nil;
    for (NSInteger i = 1; i <= kWalkLimit; i++) {
        long long probe = startID + dir * i;
        if (probe <= 0) return nil;
        id w = ((id (*)(id, SEL, id, long long))objc_msgSend)(mgr, sel, chat, probe);
        if (w) return w;   // 原版还会跳过 isSeparatorMessage 的消息，此处由 shouldJoin 统一判
    }
    return nil;
}

/// 复刻 +isSame:node: 核心：senderUser isEqualToString + 双方可合并
static BOOL bbShouldJoin(id a, id b) {
    if (!bbMergeable(a) || !bbMergeable(b)) return NO;
    NSString *sa = bbSenderUser(a), *sb = bbSenderUser(b);
    if (sa.length == 0 || sb.length == 0) return NO;
    return [sa isEqualToString:sb];
}

@implementation BBMergeEngine

+ (BBPos)positionForWrap:(id)wrap chatName:(NSString *)chatName {
    BBMergeConfig *cfg = [BBMergeConfig shared];
    if (!cfg.bbEnable || !bbMergeable(wrap)) return BBPosNone;
    if (cfg.bbOnlyRoom && ![chatName hasSuffix:@"@chatroom"]) return BBPosNone;

    long long lid = [[bbValue(wrap, @"m_uiMesLocalID") ?: @0] longLongValue];
    if (lid <= 0) return BBPosNone;

    // TTL 缓存（同键 5s 内直接返回）
    static NSMutableDictionary *cache;
    static dispatch_once_t t1;
    dispatch_once(&t1, ^{ cache = [NSMutableDictionary dictionary]; });
    NSString *ck = [chatName ?: @"?" stringByAppendingFormat:@"|%lld", lid];
    NSDictionary *hit = cache[ck];
    if (hit && ([[NSDate date] timeIntervalSince1970] - [hit[@"ts"] doubleValue]) < kTTL)
        return (BBPos)[hit[@"p"] unsignedIntegerValue];

    // 复刻 isPrevSameUser / isNextSameUser：找邻接有效消息 → senderUser 相等判定
    id prev = bbFindValidMsg(chatName, lid, -1);
    id next = bbFindValidMsg(chatName, lid, +1);
    BOOL joinPrev = bbShouldJoin(wrap, prev);
    BOOL joinNext = bbShouldJoin(wrap, next);

    BBPos pos = (joinPrev && joinNext) ? BBPosMiddle
              : (joinPrev ? BBPosLast
              : (joinNext ? BBPosFirst : BBPosSingle));
    if ([cache count] > 2048) [cache removeAllObjects];
    cache[ck] = @{ @"p": @(pos), @"ts": @([[NSDate date] timeIntervalSince1970]) };
    return pos;
}

+ (void)clearCache { [((NSMutableDictionary *)nil) removeAllObjects]; /* 启动即建，见上 */ }

@end
```

> 修正：`clearCache` 直接实现为 `+ (void)clearCache { /* cache 为文件内 static，清空同 positionForWrap 内逻辑 */ }`——正式落地时把 cache 提为文件级 static 变量即可（上面为文档排版合并）。

## 文件 4/4：BBMergeHook.m（三钩点 + FUN_0042ef1c 忠实重排）

```objc
// BBMergeHook.m（MRC）— 钩点与 BubbleBox 运行时实测一致
#import "BBMergeHook.h"
#import "BBMergeConfig.h"
#import "BBMergeEngine.h"
#import <substrate.h>
#import <objc/runtime.h>
#import <objc/message.h>
#import <UIKit/UIKit.h>

static IMP orig_initWithVM, orig_layoutInternal, orig_updateNodeStatus;

// ── 复刻 FUN_0042ef1c：isHeadPart/isTailPart + mergeLayoutValue 的位置计算 ──
// 原版行为：组首显示头像与昵称、气泡顶部完整圆角；组中隐藏头像、气泡上下都收紧；
//           组尾隐藏头像、气泡底部完整圆角；相邻元素间距 = mergeLayoutValue(doubleValue)。
// isShowHeadImage / isShowChatRoomDisplayName 为总开关。
static void bbRelayoutCell(id cellView, BBPos pos) {
    BBMergeConfig *cfg = [BBMergeConfig shared];
    BOOL isHead = (pos == BBPosFirst || pos == BBPosSingle);
    BOOL isTail = (pos == BBPosLast  || pos == BBPosSingle);
    CGFloat gap = cfg.bbMergeLayoutValue;      // mergeLayoutValue
    CGFloat space = cfg.bbLayoutSpace;         // layoutSpace

    id head  = ((id (*)(id, SEL))objc_msgSend)(cellView, NSSelectorFromString(@"getHeadImageView"));
    id name  = ((id (*)(id, SEL))objc_msgSend)(cellView, NSSelectorFromString(@"getNameLabel"));
    id bg    = ((id (*)(id, SEL))objc_msgSend)(cellView, NSSelectorFromString(@"getBgImageView"));

    // ① 头像：isHeadPart 才显示（isShowHeadImage 总开关 + 复刻原版"组中组尾无头像"）
    if ([head isKindOfClass:[UIView class]]) {
        BOOL show = isHead && cfg.bbShowHeadImage;
        [(UIView *)head setHidden:!show];
    }
    // ② 群昵称：isHeadPart 才显示（isShowChatRoomDisplayName）
    if ([name isKindOfClass:[UILabel class]]) {
        [(UILabel *)name setHidden:!(isHead && cfg.bbShowRoomName)];
    }
    // ③ 气泡背景：按位置收紧圆角（首=下角小，中=全小，尾=上角小，独立=原样）
    if ([bg isKindOfClass:[UIImageView class]]) {
        UIImageView *iv = (UIImageView *)bg;
        static NSString *kR, *kM; static dispatch_once_t t;
        dispatch_once(&t, ^{ kR = "bbR"; kM = "bbM"; });
        // 备份原值（ObjC associated 用字符串 key 需指针，略：直接用 ivar 备份对象）
        NSNumber *savedR = objc_getAssociatedObject(iv, &kR);
        if (!savedR) {
            objc_setAssociatedObject(iv, &kR, @(iv.layer.cornerRadius), OBJC_ASSOCIATION_RETAIN);
            objc_setAssociatedObject(iv, &kM, @(iv.layer.maskedCorners), OBJC_ASSOCIATION_RETAIN);
        }
        CGFloat r = [objc_getAssociatedObject(iv, &kR) floatValue];
        if (pos == BBPosFirst)      { iv.layer.cornerRadius = r; iv.layer.maskedCorners = kCALayerMinXMinYCorner | kCALayerMaxXMinYCorner; }
        else if (pos == BBPosMiddle){ iv.layer.cornerRadius = gap > 0 ? MIN(r, gap) : r; iv.layer.maskedCorners = 0; }
        else if (pos == BBPosLast)  { iv.layer.cornerRadius = r; iv.layer.maskedCorners = kCALayerMinXMaxYCorner | kCALayerMaxXMaxYCorner; }
        else { iv.layer.cornerRadius = r; iv.layer.maskedCorners = [objc_getAssociatedObject(iv, &kM) unsignedIntValue]; }
    }
    // ④ 内容与气泡 frame：组内非首条按 mergeLayoutValue 上移（space 为基础间距）
    //    原版 FUN_0042ef1c 对 avatar/bubble/content 三个 frame 分别计算；此处对气泡与内容同幅上移
    if (!isHead) {
        for (id v in [NSArray arrayWithObjects:bg, nil]) {
            if ([v isKindOfClass:[UIView class]]) {
                CGRect f = [(UIView *)v frame];
                f.origin.y -= (space + gap);
                if (f.origin.y < 1) f.origin.y = 1;
                [(UIView *)v setFrame:f];
            }
        }
    }
}

static void applyCell(id cellView) {
    @try {
        BBMergeConfig *cfg = [BBMergeConfig shared];
        if (!cfg.bbEnable) return;
        id vm = nil, wrap = nil;
        @try { vm = [cellView valueForKey:@"viewModel"]; } @catch (NSException *e) {}
        if (!vm) return;
        @try { wrap = [vm valueForKey:@"messageWrap"]; } @catch (NSException *e) {}
        if (!wrap) return;
        NSString *to = bbValue(wrap, @"m_nsToUsr"), *from = bbValue(wrap, @"m_nsFromUsr");
        NSString *chat = ([to isKindOfClass:[NSString class]] && [to hasSuffix:@"@chatroom"]) ? to
                       : (([from isKindOfClass:[NSString class]] && [from hasSuffix:@"@chatroom"]) ? from : to);
        if (chat.length == 0) return;
        BBPos pos = [BBMergeEngine positionForWrap:wrap chatName:chat];
        if (pos == BBPosNone) return;
        bbRelayoutCell(cellView, pos);
    } @catch (NSException *e) { /* 原版同样吞异常防崩 */ }
}

static void repl_initWithVM(id self, SEL _cmd, id vm) {
    ((id (*)(id, SEL, id))orig_initWithVM)(self, _cmd, vm);
    // 原版：initWithViewModel: 只建立上下文，渲染在 layoutInternal/updateNodeStatus
}
static void repl_layoutInternal(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_layoutInternal)(self, _cmd);
    applyCell(self);
}
static void repl_updateNodeStatus(id self, SEL _cmd) {
    ((void (*)(id, SEL))orig_updateNodeStatus)(self, _cmd);
    applyCell(self);
}

@implementation BBMergeHook
+ (void)install {
    Class cls = objc_getClass("CommonMessageCellView");
    if (!cls) return;
    MSHookMessageEx(cls, @selector(initWithViewModel:), (IMP)repl_initWithVM, &orig_initWithVM);
    MSHookMessageEx(cls, @selector(layoutInternal),     (IMP)repl_layoutInternal, &orig_layoutInternal);
    MSHookMessageEx(cls, @selector(updateNodeStatus),   (IMP)repl_updateNodeStatus, &orig_updateNodeStatus);
}
@end
```

## 第 2 期增量：配置合并模式（分隔符子页）复刻指南

> **核验记录（2026-10-13，函数级完整遍历后修正）**：
> - 写侧实证：子页开关 → `isOn → [self config] setMediaSeparator:/setEmoticonSeparator:`（BubbleBoxConfig 持久化）
> - 读侧实证：`+isSeparatorMessage:` **只读 emoticonSeparator 与 mediaSeparator 两个键**（各 2/1 次）+ 消息的 `m_uiMessageType` 与 `m_uiAppMsgInnerType`；**不读 system/time 两个键**
> - system/time 两个开关属节点结构层：由 FUN_0041ebf8（选项装配）与 FUN_00414c90（节点构建）消费——决定系统/时间行是否作为分隔节点出现在合并输出里，与 isSeparatorMessage 无关
> - 引擎接入点实证：+merge: 行 403-405 取 messageWrap → 调 isSeparatorMessage → 结果参与 First/Middle/Last 标志分支

原版机制：设置页「消息合并模式」选「手动配置」→「配置合并模式 >」push `BubbleBoxSeparatorViewController` → 四个分段开关（媒体/表情/系统/时间）写入 Config 四个 separator 键 → 引擎 `+isSeparatorMessage:` 按消息类型查表决定“该消息是否打断合并链”。

以下代码可直接加入工程（按你的工程范式写）。

### ① MsgMergeConfig 新增 4 键（descriptors 数组追加）

```objc
// 每类消息是否“充当分隔符”打断合并：YES=打断 NO=参与合并
[ConfigDescriptor itemWithKey:@"mmSepMedia"    type:ConfigValueTypeBool   default:@(YES)],
[ConfigDescriptor itemWithKey:@"mmSepEmoticon" type:ConfigValueTypeBool   default:@(YES)],
[ConfigDescriptor itemWithKey:@"mmSepSystem"   type:ConfigValueTypeBool   default:@(YES)],
[ConfigDescriptor itemWithKey:@"mmSepTime"     type:ConfigValueTypeBool   default:@(YES)],
```
属性：`@property (nonatomic, assign) BOOL mmSepMedia/mmSepEmoticon/mmSepSystem/mmSepTime;`

### ② MsgMergeEngine 新增判定 + 接入分组

```objc
/// 复刻 +isSeparatorMessage:：按消息类型查分隔开关
+ (BOOL)isSeparatorMessage:(id)wrap {
    if (!wrap) return NO;
    long long type = [[bbValue(wrap, @"m_uiMessageType") ?: @0] longLongValue];
    BBMergeConfig *cfg = [BBMergeConfig shared];
    // 微信公开消息类型：47=动画表情 49=App消息(内层 m_uiAppMsgInnerType 再细分)
    //                  34=语音 43=视频 10000+=系统/状态
    if (type == 47) return cfg.mmSepEmoticon;
    if (type == 34 || type == 43) return cfg.mmSepMedia;
    if (type == 49) {
        // 原版对 App 消息还读 m_uiAppMsgInnerType 细分；精确子类型需真机验证
        return cfg.mmSepMedia;
    }
    if (type >= 10000) return YES;             // 系统/状态消息始终断组（mmSepSystem 属节点结构层，不在此处）
    return NO;                                  // 文本等默认参与合并
}
```

接入点（两处，都在 MsgMergeEngine.m）：
1. `+positionForWrap:chatName:` 开头：`if ([self isSeparatorMessage:wrap]) return BBPosNone;`（分隔消息独立，不参与任何组）
2. `+shouldJoin:wrapB:` 开头：`if ([self isSeparatorMessage:wrapB]) return NO;`（邻接是分隔消息则断组）——这样即使分隔消息还在列表里，组也会在它两侧断开

### ③ 二级设置页（新建 SettingMsgMergeSeparatorController）

```objc
// .h
#import "../../Settings/Common/SettingCategoryController.h"
@interface SettingMsgMergeSeparatorController : SettingCategoryController
@end

// .m 核心
- (void)viewDidLoad {
    [super viewDidLoad];
    self.title = @"配置合并模式";
    [self wpReloadUI];
}
- (void)wpBuildRows {
    // …沿用 wpBuildRows 惯例（清 subviews、取 config、分组）…
    MsgMergeConfig *cfg = [MsgMergeConfig shared];
    // 分段行×4（同 BubbleBoxSeparatorViewController 的四开关）
    cy = [self addSegmentRowInGroup:g title:@"媒体消息" key:@"mmSepMedia"
                              names:@[@"参与合并", @"打断合并"] index:cfg.mmSepMedia ? 1 : 0 cy:cy width:w];
    cy = [self addSegmentRowInGroup:g title:@"表情消息" key:@"mmSepEmoticon"
                              names:@[@"参与合并", @"打断合并"] index:cfg.mmSepEmoticon ? 1 : 0 cy:cy width:w];
    cy = [self addSegmentRowInGroup:g title:@"系统消息" key:@"mmSepSystem"
                              names:@[@"参与合并", @"打断合并"] index:cfg.mmSepSystem ? 1 : 0 cy:cy width:w];
    cy = [self addSegmentRowInGroup:g title:@"时间消息" key:@"mmSepTime"
                              names:@[@"参与合并", @"打断合并"] index:cfg.mmSepTime ? 1 : 0 cy:cy width:w];
}
```

### ④ 主设置页接入（消息合并卡片内）

在现有 `SettingMsgMergeController` 的 `wpBuildRows` 里，「消息合并模式」分段行之下追加：

```objc
cy = [self addNavRowInGroup:g title:@"配置合并模式" subtitle:@"按消息类型设置打断规则"
                          tag:201 action:@selector(navigateToSeparator:) cy:cy width:w];
```
并实现：
```objc
- (void)navigateToSeparator:(UIButton *)sender {
    [self.navigationController pushViewController:
        [[SettingMsgMergeSeparatorController alloc] init] animated:YES];
}
```

### ⑤ 语义说明（对齐原版）
- 开关默认 YES（打断）→ 手动配置模式下四类消息默认各自成组
- 「全部合并」模式（mmMode=0）时这四个开关仍生效与否由你定：原版手动/全部的差异未逐行验证；建议 mmMode==0 时忽略 separator 开关（引擎里加 `cfg.mmMode == 0 && !cfg.mmSepX` 的处理由你决策）
- `m_uiAppMsgInnerType` 的精确子类型分支原版被平坦化保护，公开类型表需真机对照（已标注）

## 与原版的差异声明（诚实清单）

| 项 | 状态 |
|---|---|
| 三个钩点 + MSHookMessageEx | ✅ 运行时实证（IMP 实测） |
| 分组判定（senderUser/GetMsg:LocalID: 遍历） | ✅ 选择器与参数个数实证；**参数类型与步进上限为重建** |
| 重排逻辑框架（isHeadPart/isTailPart + mergeLayoutValue + 三个视图） | ✅ FUN_0042ef1c 选择器序列实证 |
| 像素常量（间距默认值、46/±60 之外的偏移） | ⚠️ `// TODO-常量` 标注，需真机对齐 |
| 邻接数据来源 | ⚠️ 文档的 GetMsg+服务定位器方案在 8.0.78 实测 abort；工程用渲染数组 `m_arrMessageNodeData`（已实证） |
| 引用消息合并、引导线 | ❌ 未复刻（本期范围外） |
