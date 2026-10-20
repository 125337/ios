// MomentsDualPanel.m —— 双列朋友圈 · 原生渲染层（v2 整体重写，替代 WKWebView+HTML 版）
// 架构：WCM coverHost 覆盖壳不变，渲染层整体替换为原生：
//   UICollectionView（自写两列取短瀑布流 layout）+ 单一卡片 Cell（图文/纯文字/视频三形态）
//   + UIVisualEffectView 毛玻璃顶栏（大标题/铃铛/加号/菜单 + 搜索框滚动收缩 + tab 分段）
//   + 独立图片加载器（本地路径直读缩放 / CDN URL 下载，替代旧 mioimg scheme handler）。
// 数据链保持原样零改动：MioDualTimelineItems 直读、onTimelineDataChanged 事件驱动
// （hook → 0.5s 防抖 → pushFeedNow）、g_dualPanel 常驻复用、MioDualLastFeedJSON 持久化快照、
// updateTimelineHead/Tail 翻页刷新。
// 视觉基线 = 已对齐 WCM 的 HTML 版 CSS 实测值逐项搬运（列宽 14/12、顶栏节奏 12/50/56/13/36/14、
// 收缩动效 scale -16%·translateX -51·背板上移 56、纯文字大标题 20/6行/最矮 214、图文 14/4行）。
// 死 UI（无数据支撑，HTML 版同款占位）：tab「我的关注」、大标题点击。
#import "MomentsDualPanel.h"
#import <objc/message.h>
#import "../../Core/LogManager.h"
#import "../../Core/ServiceHelper.h"
#import "../ChatTopBar/AvatarLoader.h"
#import "MomentsConfig.h"
#import "MioDualInboxVC.h"

#pragma mark - 图片加载器（本地路径直读 / CDN URL 下载，替代旧 mioimg scheme handler）

// 媒体缩略路径（mediaSrc 四级回落）与 CDN 缩略 URL 统一走这里：NSCache + 在途请求合并。
// 本地路径后台读盘；URL 走 NSURLSession。两路都按列宽缩放（旧 scheme handler 同款：
// 不回原图，单图内存几 MB → 几十 KB）。
// 取消策略：Cell 复用靠 seq 代际号守卫（loader 不做真取消，缩略图小、量可控）。
@interface MioDualImageLoader : NSObject
- (void)loadImage:(NSString *)pathOrURL done:(void (^)(UIImage *img))done;
- (UIImage *)cachedImage:(NSString *)pathOrURL;
+ (UIImage *)scaledImage:(UIImage *)img;
@end

@implementation MioDualImageLoader {
    NSCache<NSString *, UIImage *> *_cache;
    NSMutableDictionary<NSString *, NSMutableArray<void (^)(UIImage *)> *> *_pending;   // 主线程专用
}

+ (instancetype)shared {
    static MioDualImageLoader *l = nil;
    static dispatch_once_t once;
    dispatch_once(&once, ^{ l = [[MioDualImageLoader alloc] init]; });
    return l;
}

- (instancetype)init {
    if (self = [super init]) {
        _cache = [[NSCache alloc] init];
        _cache.countLimit = 300;
        _pending = [NSMutableDictionary dictionary];
    }
    return self;
}

- (UIImage *)cachedImage:(NSString *)pathOrURL {
    if (pathOrURL.length == 0) return nil;
    return [_cache objectForKey:pathOrURL];
}

- (void)loadImage:(NSString *)pathOrURL done:(void (^)(UIImage *img))done {
    if (pathOrURL.length == 0) { done(nil); return; }
    UIImage *hit = [_cache objectForKey:pathOrURL];
    if (hit) { done(hit); return; }
    NSMutableArray *waiters = _pending[pathOrURL];
    if (waiters) {
        [waiters addObject:done];   // 在途合并
        return;
    }
    _pending[pathOrURL] = [NSMutableArray arrayWithObject:done];

    void (^finish)(UIImage *) = ^(UIImage *img) {
        dispatch_async(dispatch_get_main_queue(), ^{
            NSMutableArray *ws = self->_pending[pathOrURL];
            [self->_pending removeObjectForKey:pathOrURL];
            if (img) [self->_cache setObject:img forKey:pathOrURL];
            for (void (^w)(UIImage *) in ws) w(img);
        });
    };

    if ([pathOrURL hasPrefix:@"http"]) {
        [[NSURLSession.sharedSession dataTaskWithURL:[NSURL URLWithString:pathOrURL]
            completionHandler:^(NSData *data, __unused NSURLResponse *resp, __unused NSError *err) {
                UIImage *img = data.length ? [UIImage imageWithData:data] : nil;
                finish(img ? [MioDualImageLoader scaledImage:img] : nil);
            }] resume];
        return;
    }
    dispatch_async(dispatch_get_global_queue(QOS_CLASS_USER_INITIATED, 0), ^{
        UIImage *img = [UIImage imageWithContentsOfFile:pathOrURL];
        finish(img ? [MioDualImageLoader scaledImage:img] : nil);
    });
}

// 按列宽缩放（旧 WKURLSchemeHandler 同款：目标边长 = max(512, (屏宽-40)*scale/2 + 64)）
+ (UIImage *)scaledImage:(UIImage *)img {
    CGFloat scale = [UIScreen mainScreen].scale;
    CGFloat target = MAX(512, ([UIScreen mainScreen].bounds.size.width - 40) * scale / 2 + 64);
    CGFloat maxSide = MAX(img.size.width, img.size.height);
    if (maxSide <= target || maxSide <= 0) return img;
    CGFloat k = target / maxSide;
    UIGraphicsBeginImageContextWithOptions(CGSizeMake(img.size.width * k, img.size.height * k), NO, scale);
    [img drawInRect:CGRectMake(0, 0, img.size.width * k, img.size.height * k)];
    UIImage *small = UIGraphicsGetImageFromCurrentImageContext();
    UIGraphicsEndImageContext();
    return small ?: img;
}

@end

#pragma mark - facade 数据访问（阶段0 探针实证的链路，原样保留）

// facade：MMContext activeUserContext getService:WCFacade.class（WCMoments _Service 同款；
// 8.0.60 的 MMContext 无 activeUserContext 时回退 currentContext）。单例稳定，缓存命中。
id MioDualFacade(void) {    static id cached = nil;
    if (cached) return cached;
    Class fCls = objc_getClass("WCFacade");
    Class ctxCls = objc_getClass("MMContext");
    if (!fCls || !ctxCls) return nil;
    id ctx = nil;
    SEL activeSel = NSSelectorFromString(@"activeUserContext");
    SEL curSel = NSSelectorFromString(@"currentContext");
    if ([ctxCls respondsToSelector:activeSel]) {
        ctx = ((id(*)(id, SEL))objc_msgSend)(ctxCls, activeSel);
    }
    if (!ctx && [ctxCls respondsToSelector:curSel]) {
        ctx = ((id(*)(id, SEL))objc_msgSend)(ctxCls, curSel);
    }
    if (!ctx || ![ctx respondsToSelector:@selector(getService:)]) return nil;
    cached = ((id(*)(id, SEL, Class))objc_msgSend)(ctx, @selector(getService:), fCls);
    return cached;
}

// WCDataItem 的 createtime/likeCount/commentCount 是标量 getter（ULL/uint），
// 禁止用 id 接裸 msgSend 返回值（WXSafeIntegerGet 同款）：x0 原始整数被当指针
// 发 respondsToSelector 必 SIGSEGV（127.log 点双列闪退实证）。
// 阶段0 探针实证的 KVC 装箱路径：valueForKey 自动装箱 NSNumber，未知 key @try 兜住。
static long long MioDualScalarGet(id obj, NSString *key, long long def) {
    if (!obj || !key.length) return def;
    @try {
        id v = [obj valueForKey:key];
        if ([v isKindOfClass:[NSNumber class]]) return [(NSNumber *)v longLongValue];
    } @catch (NSException *e) {
    }
    return def;
}

// timeline 数据直读（对齐 WCM 直读三件套；WCFacade.h:429-431 微信原生 API 实证）：
// 主路 getTimelineDataItem（返回全数组）；回落 countOfTimelineDataItem + getTimelineDataItemOfIndex:。
static NSArray *MioDualTimelineItems(id facade) {
    if (!facade) return nil;
    SEL all = NSSelectorFromString(@"getTimelineDataItem");
    if ([facade respondsToSelector:all]) {
        id v = ((id(*)(id, SEL))objc_msgSend)(facade, all);
        if ([v isKindOfClass:[NSArray class]]) return v;
    }
    SEL idx = NSSelectorFromString(@"getTimelineDataItemOfIndex:");
    if (![facade respondsToSelector:idx]) return nil;
    long long n = MioDualScalarGet(facade, @"countOfTimelineDataItem", 0);
    if (n <= 0) return nil;
    NSMutableArray *arr = [NSMutableArray arrayWithCapacity:(NSUInteger)n];
    for (long long i = 0; i < n; i++) {
        id it = ((id(*)(id, SEL, unsigned long long))objc_msgSend)(facade, idx, (unsigned long long)i);
        if (it) [arr addObject:it];
    }
    return arr;
}

#pragma mark - 两列瀑布流布局（自写取短列；对齐 HTML 版 14/12 间距、顶 2 底 20）

@protocol MioDualWaterfallLayoutDelegate <UICollectionViewDelegate>
- (CGFloat)collectionView:(UICollectionView *)collectionView
heightForItemAtIndexPath:(NSIndexPath *)indexPath
               itemWidth:(CGFloat)width;
@end

@interface MioDualWaterfallLayout : UICollectionViewLayout
@property (nonatomic, weak) id<MioDualWaterfallLayoutDelegate> mioDelegate;
- (CGFloat)columnWidth;
@end

@implementation MioDualWaterfallLayout {
    NSMutableArray<UICollectionViewLayoutAttributes *> *_attrs;
    CGFloat _contentH;
}

// 取短列贪心排布（HTML 版同款）。同一数据前缀的列归属稳定（贪心只取决于前缀），
// 翻页追加/更新不引起旧卡片换列跳动——HTML 版「列归属终身不变」在原生下的等价物。
- (void)prepareLayout {
    [super prepareLayout];
    _attrs = [NSMutableArray array];
    _contentH = 0;
    UICollectionView *cv = self.collectionView;
    NSUInteger n = [cv numberOfItemsInSection:0];
    CGFloat w = [self columnWidth];
    if (!n || w <= 0) return;
    CGFloat y0 = 2, y1 = 2;
    for (NSUInteger i = 0; i < n; i++) {
        NSIndexPath *ip = [NSIndexPath indexPathForItem:i inSection:0];
        CGFloat h = [self.mioDelegate collectionView:cv heightForItemAtIndexPath:ip itemWidth:w];
        if (h <= 0) h = 100;   // 度量异常兜底占位（正常恒 > 0）
        NSUInteger col = (y0 <= y1) ? 0 : 1;
        CGFloat x = 14 + col * (w + 12);
        CGFloat y = col ? y1 : y0;
        UICollectionViewLayoutAttributes *a =
            [UICollectionViewLayoutAttributes layoutAttributesForCellWithIndexPath:ip];
        a.frame = CGRectMake(x, y, w, h);
        [_attrs addObject:a];
        if (col) y1 += h + 12; else y0 += h + 12;
    }
    _contentH = MAX(y0, y1) - 12 + 20;
}

- (CGFloat)columnWidth {
    return (self.collectionView.bounds.size.width - 14 * 2 - 12) / 2;
}

- (CGSize)collectionViewContentSize {
    return CGSizeMake(self.collectionView.bounds.size.width, _contentH);
}

- (NSArray<UICollectionViewLayoutAttributes *> *)layoutAttributesForElementsInRect:(CGRect)rect {
    NSMutableArray *outArr = [NSMutableArray array];
    for (UICollectionViewLayoutAttributes *a in _attrs)
        if (CGRectIntersectsRect(a.frame, rect)) [outArr addObject:a];
    return outArr;
}

- (UICollectionViewLayoutAttributes *)layoutAttributesForItemAtIndexPath:(NSIndexPath *)indexPath {
    return (indexPath.item < _attrs.count) ? _attrs[indexPath.item] : nil;
}

// 仅宽度变化（旋转）才重排；滚动全程复用 prepare 缓存
- (BOOL)shouldInvalidateLayoutForBoundsChange:(CGRect)newBounds {
    return newBounds.size.width != self.collectionView.bounds.size.width;
}

@end

#pragma mark - 卡片度量（layout 取高与 Cell 内部布局共用同一函数，两列永不塌方）

// HTML CSS 实测值搬运：info 内边距 12/13、标题 margin-bottom 13(图)/24(纯文字)、
// 行 clamp 4(图)/6(纯文字)、纯文字卡 info 最小高 214、头像行 26。
typedef struct {
    CGFloat mediaH, titleH, infoH, totalH;
} MioDualCardMetrics;

static MioDualCardMetrics MioDualCardMetrics(NSDictionary *it, CGFloat w, CGFloat measuredRatio) {
    MioDualCardMetrics m = {0, 0, 0, 0};
    if (w <= 0 || !it) return m;
    NSString *img = it[@"img"];
    BOOL hasMedia = img.length > 0;
    BOOL large = !hasMedia;   // 纯文字卡 = 大标题形态（HTML .title.large 条件 !img||isLargeText，isLargeText≡无图）
    CGFloat pad = 12, bot = 13;
    if (hasMedia) {
        CGFloat r = measuredRatio > 0 ? measuredRatio : [it[@"ratio"] doubleValue];
        m.mediaH = roundf(w / (r > 0 ? r : 1));   // ratio 缺失回落 1:1（HTML 同款占位），图片实测后回调修正
    }
    UIFont *f = [UIFont systemFontOfSize:large ? 20 : 14
                                  weight:large ? UIFontWeightSemibold : UIFontWeightMedium];
    CGFloat mb = large ? 24 : 13;
    NSString *content = it[@"content"];
    if (content.length) {
        CGFloat bound = [content boundingRectWithSize:CGSizeMake(w - pad * 2, CGFLOAT_MAX)
                                              options:NSStringDrawingUsesLineFragmentOrigin
                                           attributes:@{NSFontAttributeName: f}
                                              context:nil].size.height;
        m.titleH = MIN(ceilf(bound), f.lineHeight * (large ? 6 : 4));
    }
    m.infoH = pad + m.titleH + mb + 26 + bot;
    if (large && m.infoH < 214) m.infoH = 214;   // HTML .card.text-only .card-info min-height
    m.totalH = m.mediaH + m.infoH;
    return m;
}

// 时间格式（HTML fmtTime 同款）：今天/昨天 HH:mm → M月d日 → 跨年加年份
static NSString *MioDualFmtTime(NSTimeInterval t) {
    if (t <= 0) return @"";
    static NSDateFormatter *hm, *md, *full;
    static dispatch_once_t once;
    dispatch_once(&once, ^{
        hm = [[NSDateFormatter alloc] init]; hm.dateFormat = @"HH:mm";
        md = [[NSDateFormatter alloc] init]; md.dateFormat = @"M月d日";
        full = [[NSDateFormatter alloc] init]; full.dateFormat = @"yyyy年M月d日";
    });
    NSDate *d = [NSDate dateWithTimeIntervalSince1970:t];
    NSDate *now = [NSDate date];
    NSCalendar *cal = [NSCalendar currentCalendar];
    if ([cal isDate:d inSameDayAsDate:now]) return [NSString stringWithFormat:@"今天 %@", [hm stringFromDate:d]];
    if ([cal isDate:d inSameDayAsDate:[now dateByAddingTimeInterval:-86400]])
        return [NSString stringWithFormat:@"昨天 %@", [hm stringFromDate:d]];
    return ([cal component:NSCalendarUnitYear fromDate:d] == [cal component:NSCalendarUnitYear fromDate:now])
        ? [md stringFromDate:d] : [full stringFromDate:d];
}

#pragma mark - 卡片 Cell（图文/纯文字/视频三形态共用；帧布局走同一度量函数）

@interface MioDualCardCell : UICollectionViewCell
- (void)configureWithItem:(NSDictionary *)item
            measuredRatio:(CGFloat)measuredRatio
               onMeasured:(void (^)(NSString *itemID, CGFloat ratio))onMeasured;
@end

@implementation MioDualCardCell {
    UIImageView *_mediaView;
    UIView *_tagPill;
    UIImageView *_tagIcon;
    UILabel *_tagLabel;
    UILabel *_titleLabel;
    UIImageView *_avatarView;
    UILabel *_nameLabel;
    UILabel *_timeLabel;
    UIImageView *_heartIcon;
    UILabel *_heartCount;
    UIImageView *_bubbleIcon;
    UILabel *_bubbleCount;
    NSDictionary *_item;
    CGFloat _measuredRatio;
    NSUInteger _mediaSeq;
    void (^_onMeasured)(NSString *itemID, CGFloat ratio);
}

- (instancetype)initWithFrame:(CGRect)frame {
    if (self = [super initWithFrame:frame]) {
        // 白卡（暗色 1C1C1E 与 CSS 同值）；铃铛页 surface 同款 18pt continuous
        self.backgroundColor = [UIColor clearColor];
        self.contentView.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
        self.contentView.layer.cornerRadius = 18;
        self.contentView.layer.cornerCurve = kCACornerCurveContinuous;
        self.contentView.layer.masksToBounds = YES;   // 媒体图裁进卡顶圆角

        _mediaView = [[UIImageView alloc] init];
        _mediaView.contentMode = UIViewContentModeScaleAspectFill;
        _mediaView.clipsToBounds = YES;
        _mediaView.backgroundColor = [UIColor tertiarySystemFillColor];   // CSS --control 占位
        _mediaView.userInteractionEnabled = NO;
        [self.contentView addSubview:_mediaView];

        _tagPill = [[UIView alloc] init];
        _tagPill.backgroundColor = [UIColor colorWithWhite:0 alpha:0.3];
        _tagPill.layer.cornerRadius = 4;
        _tagPill.userInteractionEnabled = NO;
        [self.contentView addSubview:_tagPill];
        _tagIcon = [[UIImageView alloc] initWithImage:
                    [[UIImage systemImageNamed:@"play.fill"]
                     imageWithConfiguration:[UIImageSymbolConfiguration configurationWithPointSize:9]]];
        _tagIcon.tintColor = [UIColor whiteColor];
        _tagIcon.contentMode = UIViewContentModeScaleAspectFit;
        [_tagPill addSubview:_tagIcon];
        _tagLabel = [[UILabel alloc] init];
        _tagLabel.font = [UIFont systemFontOfSize:10];
        _tagLabel.textColor = [UIColor whiteColor];
        [_tagPill addSubview:_tagLabel];

        _titleLabel = [[UILabel alloc] init];
        _titleLabel.textColor = [UIColor labelColor];
        _titleLabel.lineBreakMode = NSLineBreakByTruncatingTail;
        [self.contentView addSubview:_titleLabel];

        _avatarView = [[UIImageView alloc] init];
        _avatarView.contentMode = UIViewContentModeScaleAspectFill;
        _avatarView.clipsToBounds = YES;
        _avatarView.layer.cornerRadius = 13;
        _avatarView.backgroundColor = [UIColor tertiarySystemFillColor];
        _avatarView.tintColor = [UIColor tertiaryLabelColor];
        _avatarView.userInteractionEnabled = NO;
        [self.contentView addSubview:_avatarView];

        _nameLabel = [[UILabel alloc] init];
        _nameLabel.font = [UIFont systemFontOfSize:12 weight:UIFontWeightMedium];
        _nameLabel.textColor = [UIColor secondaryLabelColor];
        _nameLabel.lineBreakMode = NSLineBreakByTruncatingTail;
        _nameLabel.userInteractionEnabled = NO;
        [self.contentView addSubview:_nameLabel];

        _timeLabel = [[UILabel alloc] init];
        _timeLabel.font = [UIFont systemFontOfSize:12];
        _timeLabel.textColor = [UIColor tertiaryLabelColor];
        _timeLabel.userInteractionEnabled = NO;
        [self.contentView addSubview:_timeLabel];

        UIImageSymbolConfiguration *icfg = [UIImageSymbolConfiguration configurationWithPointSize:12];
        _heartIcon = [[UIImageView alloc] initWithImage:[[UIImage systemImageNamed:@"heart"] imageWithConfiguration:icfg]];
        _bubbleIcon = [[UIImageView alloc] initWithImage:[[UIImage systemImageNamed:@"bubble.left"] imageWithConfiguration:icfg]];
        for (UIImageView *iv in @[_heartIcon, _bubbleIcon]) {
            iv.tintColor = [UIColor secondaryLabelColor];
            iv.contentMode = UIViewContentModeScaleAspectFit;
            iv.userInteractionEnabled = NO;
            [self.contentView addSubview:iv];
        }
        _heartCount = [[UILabel alloc] init];
        _bubbleCount = [[UILabel alloc] init];
        for (UILabel *l in @[_heartCount, _bubbleCount]) {
            l.font = [UIFont systemFontOfSize:11];
            l.textColor = [UIColor secondaryLabelColor];
            l.userInteractionEnabled = NO;
            [self.contentView addSubview:l];
        }
    }
    return self;
}

- (void)configureWithItem:(NSDictionary *)item
            measuredRatio:(CGFloat)measuredRatio
               onMeasured:(void (^)(NSString *itemID, CGFloat ratio))onMeasured {
    _item = item;
    _measuredRatio = measuredRatio;
    _onMeasured = onMeasured;

    NSString *img = item[@"img"];
    BOOL hasMedia = img.length > 0;
    BOOL large = !hasMedia;
    _titleLabel.text = item[@"content"];
    _titleLabel.font = [UIFont systemFontOfSize:large ? 20 : 14
                                         weight:large ? UIFontWeightSemibold : UIFontWeightMedium];
    _titleLabel.numberOfLines = (int)(large ? 6 : 4);
    _nameLabel.text = item[@"name"];
    _timeLabel.text = MioDualFmtTime([item[@"time"] doubleValue]);
    _heartCount.text = [NSString stringWithFormat:@"%@", item[@"likes"] ?: @0];
    _bubbleCount.text = [NSString stringWithFormat:@"%@", item[@"cmt"] ?: @0];

    if (hasMedia && [item[@"isVideo"] boolValue]) {
        _tagLabel.text = @"视频"; _tagIcon.hidden = NO; _tagPill.hidden = NO;
    } else if (hasMedia && [item[@"imgCount"] integerValue] > 1) {
        _tagLabel.text = [NSString stringWithFormat:@"%ld图", (long)[item[@"imgCount"] integerValue]];
        _tagIcon.hidden = YES; _tagPill.hidden = NO;
    } else {
        _tagPill.hidden = YES;
    }

    // 媒体图：loader 带缓存与在途合并；seq 守卫丢弃复用后的迟到回调
    _mediaSeq++;
    NSUInteger seq = _mediaSeq;
    if (!hasMedia) {
        _mediaView.image = nil;
    } else {
        UIImage *c = [[MioDualImageLoader shared] cachedImage:img];
        if (c) {
            _mediaView.image = c;
            [self maybeMeasureImage:c];
        } else {
            _mediaView.image = nil;
            __weak typeof(self) ws = self;
            [[MioDualImageLoader shared] loadImage:img done:^(UIImage *result) {
                if (!ws || ws->_mediaSeq != seq) return;
                ws->_mediaView.image = result;
                [ws maybeMeasureImage:result];
            }];
        }
    }

    // 头像：AvatarLoader 全链路（本地自定义 → MMHeadImageMgr → CDN，铃铛页同款），无图回落 SF Symbol
    NSString *usr = item[@"user"];
    _avatarView.image = usr.length ? [[AvatarLoader shared] loadAvatarSyncForWxid:usr contact:nil] : nil;
    if (!_avatarView.image) _avatarView.image = [UIImage systemImageNamed:@"person.crop.circle.fill"];

    [self setNeedsLayout];
}

// 图片实测宽高 → 回调面板补 ratio（itemDict KVC 拿不到宽高时的锁高路径，HTML onload 同款）
- (void)maybeMeasureImage:(UIImage *)img {
    if (!img || _measuredRatio > 0 || !_onMeasured || !_item) return;
    if ([_item[@"ratio"] doubleValue] > 0) return;
    if (img.size.width <= 0 || img.size.height <= 0) return;
    NSString *itemID = _item[@"id"];
    if (itemID.length == 0) return;
    void (^cb)(NSString *, CGFloat) = _onMeasured;
    _onMeasured = nil;   // 一次即可
    cb(itemID, img.size.width / img.size.height);
}

- (void)layoutSubviews {
    [super layoutSubviews];
    CGFloat w = self.contentView.bounds.size.width;
    CGFloat h = self.contentView.bounds.size.height;
    if (w <= 0 || !_item) return;
    MioDualCardMetrics m = MioDualCardMetrics(_item, w, _measuredRatio);
    BOOL hasMedia = ((NSString *)_item[@"img"]).length > 0;

    // 阴影路径（浅色微阴影 0 2 12 @3.5%，暗色无——CSS --shadow 同款）
    self.layer.shadowColor = [UIColor blackColor].CGColor;
    self.layer.shadowOffset = CGSizeMake(0, 2);
    self.layer.shadowRadius = 6;
    self.layer.shadowOpacity = self.traitCollection.userInterfaceStyle == UIUserInterfaceStyleDark ? 0.0 : 0.04;
    self.layer.shadowPath = [UIBezierPath
        bezierPathWithRoundedRect:self.bounds
                     cornerRadius:18].CGPath;

    _mediaView.frame = CGRectMake(0, 0, w, m.mediaH);
    _mediaView.hidden = !hasMedia;
    if (!_tagPill.hidden) {
        CGSize ts = [_tagLabel.text sizeWithAttributes:@{NSFontAttributeName: _tagLabel.font}];
        CGFloat pw = ts.width + (_tagIcon.hidden ? 0 : 12) + 12;
        _tagPill.frame = CGRectMake(w - 8 - pw, m.mediaH - 8 - 20, pw, 20);
        _tagLabel.frame = CGRectMake(_tagIcon.hidden ? 6 : 18, 3, ts.width + 1, 14);
        _tagIcon.frame = CGRectMake(6, 5, 9, 10);
    }

    _titleLabel.frame = CGRectMake(12, m.mediaH + 12, w - 24, m.titleH);
    _titleLabel.hidden = ((NSString *)_item[@"content"]).length == 0;

    // 头像行贴底（HTML user-row margin-top:auto 同效：纯文字 min-height 富余全落在这）
    CGFloat uy = h - 13 - 26;
    _avatarView.frame = CGRectMake(12, uy, 26, 26);
    CGFloat rx = w - 12;
    CGFloat (^fit)(UILabel *, UIFont *) = ^CGFloat(UILabel *l, UIFont *f) {
        CGSize s = [l.text sizeWithAttributes:@{NSFontAttributeName: f}];
        return s.width + 1;
    };
    _bubbleCount.frame = CGRectMake(rx - fit(_bubbleCount, _bubbleCount.font), uy + 7, fit(_bubbleCount, _bubbleCount.font), 13);
    rx -= fit(_bubbleCount, _bubbleCount.font) + 4;
    _bubbleIcon.frame = CGRectMake(rx - 12, uy + 7, 12, 12);
    rx -= 16;
    _heartCount.frame = CGRectMake(rx - fit(_heartCount, _heartCount.font), uy + 7, fit(_heartCount, _heartCount.font), 13);
    rx -= fit(_heartCount, _heartCount.font) + 4;
    _heartIcon.frame = CGRectMake(rx - 12, uy + 7, 12, 12);
    rx -= 16;
    _timeLabel.frame = CGRectMake(rx - fit(_timeLabel, _timeLabel.font), uy + 6, fit(_timeLabel, _timeLabel.font), 14);
    rx -= fit(_timeLabel, _timeLabel.font);
    CGFloat nameX = 12 + 26 + 7;
    _nameLabel.frame = CGRectMake(nameX, uy, MAX(rx - nameX - 2, 20), 26);
}

// 按压高亮（HTML .card:active opacity .75 同款）
- (void)setHighlighted:(BOOL)highlighted {
    [super setHighlighted:highlighted];
    [UIView animateWithDuration:0.1 animations:^{ self.contentView.alpha = highlighted ? 0.75 : 1.0; }];
}

// 明暗切换：阴影透明度在 layoutSubviews 按 trait 重取
- (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection {
    [super traitCollectionDidChange:previousTraitCollection];
    [self setNeedsLayout];
}

@end

#pragma mark - 面板 VC（原生渲染层）

// 顶栏容器：空白区域触摸穿透给下方 collectionView（装饰子view 均 userInteractionEnabled=NO）
@interface MioDualHeader : UIView
@end
@implementation MioDualHeader
- (UIView *)hitTest:(CGPoint)p withEvent:(UIEvent *)e {
    UIView *v = [super hitTest:p withEvent:e];
    return (v && v != self) ? v : nil;
}
@end

// 玻璃描边色（CSS --glass-edge：亮 28% 白 / 暗 10% 白）
static UIColor *MioDualGlassEdge(void) {
    return [UIColor colorWithDynamicProvider:^UIColor *(UITraitCollection *t) {
        return t.userInterfaceStyle == UIUserInterfaceStyleDark
            ? [UIColor colorWithWhite:1 alpha:0.1] : [UIColor colorWithWhite:1 alpha:0.28];
    }];
}

// 顶栏纵向节奏（HTML CSS 实测）：safeTop + 12 + 50(标题行) + 56(搜索槽) + 13 + 36(tab) + 14
static CGFloat MioDualHeaderBaseHeight(void) { return 181; }

@interface MomentsDualPanel () <UICollectionViewDataSource, UICollectionViewDelegate,
                                MioDualWaterfallLayoutDelegate, UITextFieldDelegate>
@property (nonatomic, strong) UICollectionView *collectionView;
@property (nonatomic, strong) MioDualHeader *headerView;
@property (nonatomic, strong) UIVisualEffectView *backdrop;
@property (nonatomic, strong) CAGradientLayer *backdropMask;
@property (nonatomic, strong) UILabel *bigTitle;
@property (nonatomic, strong) UIView *tools;
@property (nonatomic, strong) UIButton *bellBtn;
@property (nonatomic, strong) UIButton *addBtn;
@property (nonatomic, strong) UIButton *moreBtn;
@property (nonatomic, strong) UILabel *badgeLabel;
@property (nonatomic, strong) UIView *searchSlot;
@property (nonatomic, strong) UIVisualEffectView *searchGlass;
@property (nonatomic, strong) UITextField *searchField;
@property (nonatomic, strong) UIView *tabs;
@property (nonatomic, strong) UIVisualEffectView *tabsGlass;
@property (nonatomic, strong) UIView *tabIndicator;
@property (nonatomic, strong) NSArray<UIButton *> *tabBtns;
@property (nonatomic, strong) UIView *menu;
@property (nonatomic, strong) NSArray<UIButton *> *menuItems;
@property (nonatomic, strong) UIControl *scrim;
@property (nonatomic, strong) UILabel *emptyLabel;
@property (nonatomic, strong) UILabel *refreshTip;
@property (nonatomic, copy) NSArray<NSDictionary *> *allItems;      // 全量（≤300）
@property (nonatomic, copy) NSArray<NSDictionary *> *visibleItems;  // tab + 搜索过滤后
@property (nonatomic, copy) NSString *query;
@property (nonatomic, assign) NSUInteger tabIndex;   // 0 全部动态 1 我赞过的 2 我的关注(死)
@property (nonatomic, assign) CGFloat collapse;      // 0 展开 → 1 收缩（HTML --collapse 同义）
@property (nonatomic, assign) BOOL searchPinned;
@property (nonatomic, strong) NSMutableDictionary<NSString *, NSNumber *> *measuredRatios;
@property (nonatomic, assign) NSTimeInterval lastTailAt;
@property (nonatomic, assign) BOOL refreshing;
@property (nonatomic, assign) BOOL everOpened;
@end

static char kDualPanelAssocKey;

// 常驻面板（WCM showCachedFeed 同语义，根治「打开慢一步」）：
// Close 只摘视图不释放，原生渲染态保留，重开秒显。发现页 VC 每次进入可能是
// 新实例，assoc 只当「开着」标记，常驻实例放进程级强持有；内存警告时降级置 nil。
static MomentsDualPanel *g_dualPanel = nil;
static __weak UIViewController *g_dualPanelHost = nil;

@implementation MomentsDualPanel

- (void)viewDidLoad {
    [super viewDidLoad];
    self.view.backgroundColor = [UIColor systemGroupedBackgroundColor];   // CSS --bg-color 同值
    self.measuredRatios = [NSMutableDictionary dictionary];

    [self buildCollectionView];
    [self buildHeader];
    [self buildOverlayLabels];
    [self applyCollapse:0];
}

- (void)buildCollectionView {
    MioDualWaterfallLayout *layout = [[MioDualWaterfallLayout alloc] init];
    layout.mioDelegate = self;
    self.collectionView = [[UICollectionView alloc] initWithFrame:self.view.bounds
                                             collectionViewLayout:layout];
    self.collectionView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    self.collectionView.backgroundColor = [UIColor clearColor];
    self.collectionView.dataSource = self;
    self.collectionView.delegate = self;
    self.collectionView.contentInsetAdjustmentBehavior = UIScrollViewContentInsetAdjustmentNever;
    self.collectionView.alwaysBounceVertical = YES;
    self.collectionView.keyboardDismissMode = UIScrollViewKeyboardDismissModeOnDrag;
    [self.collectionView registerClass:[MioDualCardCell class] forCellWithReuseIdentifier:@"card"];
    [self.view addSubview:self.collectionView];
}

- (UIVisualEffectView *)glassView:(CGFloat)cornerRadius {
    UIVisualEffectView *v = [[UIVisualEffectView alloc]
        initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemChromeMaterial]];
    v.layer.cornerRadius = cornerRadius;
    v.layer.cornerCurve = kCACornerCurveContinuous;
    v.layer.masksToBounds = YES;
    v.layer.borderWidth = 1;
    v.layer.borderColor = MioDualGlassEdge().CGColor;
    v.userInteractionEnabled = NO;
    return v;
}

- (void)buildHeader {
    self.headerView = [[MioDualHeader alloc] initWithFrame:self.view.bounds];
    self.headerView.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.view addSubview:self.headerView];

    // 毛玻璃背板：底边 +60px 伸出 header 且最后 86px 渐隐（CSS mask-image 同款）；
    // 收缩时底边上移 56pt（HTML translateY(-56*collapse) 同效）
    self.backdrop = [[UIVisualEffectView alloc]
        initWithEffect:[UIBlurEffect effectWithStyle:UIBlurEffectStyleSystemChromeMaterial]];
    self.backdrop.userInteractionEnabled = NO;
    [self.headerView addSubview:self.backdrop];
    self.backdropMask = [CAGradientLayer layer];
    self.backdropMask.colors = @[(id)[UIColor blackColor].CGColor,
                                 (id)[UIColor blackColor].CGColor,
                                 (id)[UIColor clearColor].CGColor];
    self.backdropMask.startPoint = CGPointMake(0.5, 0);
    self.backdropMask.endPoint = CGPointMake(0.5, 1);
    self.backdrop.layer.mask = self.backdropMask;

    self.bigTitle = [[UILabel alloc] init];
    self.bigTitle.text = @"朋友圈";
    self.bigTitle.font = [UIFont systemFontOfSize:34 weight:UIFontWeightBold];
    self.bigTitle.textColor = [UIColor labelColor];
    self.bigTitle.userInteractionEnabled = NO;
    [self.headerView addSubview:self.bigTitle];

    // 工具钮（42 圆玻璃钮 + 19pt SF Symbol）
    self.tools = [[UIView alloc] init];
    [self.headerView addSubview:self.tools];
    self.bellBtn = [self toolButton:@"bell" action:@selector(onBell)];
    self.addBtn = [self toolButton:@"plus" action:@selector(onAdd)];
    self.moreBtn = [self toolButton:@"ellipsis" action:@selector(onMore)];
    [self.tools addSubview:self.bellBtn];
    [self.tools addSubview:self.addBtn];
    [self.tools addSubview:self.moreBtn];

    self.badgeLabel = [[UILabel alloc] init];
    self.badgeLabel.backgroundColor = [UIColor systemRedColor];
    self.badgeLabel.textColor = [UIColor whiteColor];
    self.badgeLabel.font = [UIFont systemFontOfSize:10 weight:UIFontWeightSemibold];
    self.badgeLabel.textAlignment = NSTextAlignmentCenter;
    self.badgeLabel.layer.cornerRadius = 8;
    self.badgeLabel.layer.masksToBounds = YES;
    self.badgeLabel.hidden = YES;
    self.badgeLabel.userInteractionEnabled = NO;
    [self.bellBtn addSubview:self.badgeLabel];

    // 搜索槽：槽高随收缩 56→0 且裁剪，胶囊右移上滑（HTML 几何逐项同值）
    self.searchSlot = [[UIView alloc] init];
    self.searchSlot.clipsToBounds = YES;
    [self.headerView addSubview:self.searchSlot];
    self.searchGlass = [self glassView:21];
    [self.searchSlot addSubview:self.searchGlass];
    UIImageView *mag = [[UIImageView alloc] initWithImage:
                        [[UIImage systemImageNamed:@"magnifyingglass"]
                         imageWithConfiguration:[UIImageSymbolConfiguration configurationWithPointSize:17]]];
    mag.tintColor = [UIColor tertiaryLabelColor];
    mag.contentMode = UIViewContentModeCenter;
    mag.frame = CGRectMake(0, 0, 38, 40);
    mag.autoresizingMask = UIViewAutoresizingFlexibleHeight;
    mag.userInteractionEnabled = NO;
    self.searchField = [[UITextField alloc] init];
    self.searchField.placeholder = @"搜索朋友或动态";
    self.searchField.font = [UIFont systemFontOfSize:16];
    self.searchField.textColor = [UIColor labelColor];
    self.searchField.clearButtonMode = UITextFieldViewModeWhileEditing;
    self.searchField.delegate = self;
    self.searchField.leftView = mag;
    self.searchField.leftViewMode = UITextFieldViewModeAlways;
    [self.searchField addTarget:self action:@selector(searchChanged:)
               forControlEvents:UIControlEventEditingChanged];
    [self.searchSlot addSubview:self.searchField];
    UITapGestureRecognizer *searchTap =
        [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(onSearchTap)];
    [self.searchSlot addGestureRecognizer:searchTap];

    // tab 分段（玻璃胶囊 + 滑动白丸）
    self.tabs = [[UIView alloc] init];
    [self.headerView addSubview:self.tabs];
    self.tabsGlass = [self glassView:18];
    self.tabsGlass.frame = self.tabs.bounds;
    self.tabsGlass.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.tabs addSubview:self.tabsGlass];
    self.tabIndicator = [[UIView alloc] init];
    self.tabIndicator.backgroundColor = [UIColor secondarySystemGroupedBackgroundColor];
    self.tabIndicator.layer.cornerRadius = 15;
    self.tabIndicator.layer.cornerCurve = kCACornerCurveContinuous;
    self.tabIndicator.layer.borderWidth = 1;
    self.tabIndicator.layer.borderColor = MioDualGlassEdge().CGColor;
    self.tabIndicator.userInteractionEnabled = NO;
    [self.tabs addSubview:self.tabIndicator];
    NSMutableArray *btns = [NSMutableArray array];
    for (NSString *title in @[@"全部动态", @"我赞过的", @"我的关注"]) {
        UIButton *b = [UIButton buttonWithType:UIButtonTypeSystem];
        [b setTitle:title forState:UIControlStateNormal];
        [b setTitleColor:[UIColor labelColor] forState:UIControlStateNormal];
        b.titleLabel.font = [UIFont systemFontOfSize:13];
        [b addTarget:self action:@selector(onTab:) forControlEvents:UIControlEventTouchUpInside];
        [self.tabs addSubview:b];
        [btns addObject:b];
    }
    self.tabBtns = btns;
    [self updateTabUI:NO];

    // 菜单浮层（…钮）+ 全屏点击关闭层
    self.scrim = [[UIControl alloc] initWithFrame:self.view.bounds];
    self.scrim.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.scrim addTarget:self action:@selector(hideMenu) forControlEvents:UIControlEventTouchUpInside];
    self.scrim.hidden = YES;
    [self.view addSubview:self.scrim];
    self.menu = [[UIView alloc] init];
    self.menu.alpha = 0;
    self.menu.hidden = YES;
    UIVisualEffectView *menuGlass = [self glassView:22];
    menuGlass.frame = self.menu.bounds;
    menuGlass.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [self.menu addSubview:menuGlass];
    UIButton *m1 = [self menuItem:@"打开微信朋友圈" action:@selector(goBack)];
    UIButton *m2 = [self menuItem:@"刷新动态" action:@selector(onMenuRefresh)];
    UIButton *m3 = [self menuItem:@"发文字朋友圈" action:@selector(onMenuPublishText)];
    self.menuItems = @[m1, m2, m3];
    for (UIButton *b in self.menuItems) [self.menu addSubview:b];
    [self.view addSubview:self.menu];
}

- (UIButton *)toolButton:(NSString *)symbol action:(SEL)action {
    UIButton *b = [UIButton buttonWithType:UIButtonTypeSystem];
    b.frame = CGRectMake(0, 0, 42, 42);
    UIImage *icon = [UIImage systemImageNamed:symbol];
    if (icon) {
        icon = [icon imageWithConfiguration:[UIImageSymbolConfiguration configurationWithPointSize:19]];
        [b setImage:icon forState:UIControlStateNormal];
    }
    b.tintColor = [UIColor labelColor];
    [b addTarget:self action:action forControlEvents:UIControlEventTouchUpInside];
    UIVisualEffectView *glass = [self glassView:21];
    glass.frame = b.bounds;
    glass.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [b insertSubview:glass atIndex:0];
    return b;
}

- (UIButton *)menuItem:(NSString *)title action:(SEL)action {
    UIButton *b = [UIButton buttonWithType:UIButtonTypeSystem];
    b.contentHorizontalAlignment = UIControlContentHorizontalAlignmentLeft;
    b.contentEdgeInsets = UIEdgeInsetsMake(0, 12, 0, 12);
    [b setTitle:title forState:UIControlStateNormal];
    [b setTitleColor:[UIColor labelColor] forState:UIControlStateNormal];
    b.titleLabel.font = [UIFont systemFontOfSize:15];
    [b addTarget:self action:action forControlEvents:UIControlEventTouchUpInside];
    return b;
}

- (void)buildOverlayLabels {
    self.emptyLabel = [[UILabel alloc] init];
    self.emptyLabel.text = @"暂无内容，下拉刷新";
    self.emptyLabel.font = [UIFont systemFontOfSize:13];
    self.emptyLabel.textColor = [UIColor colorWithDynamicProvider:^UIColor *(UITraitCollection *t) {
        return t.userInterfaceStyle == UIUserInterfaceStyleDark
            ? [UIColor colorWithWhite:1 alpha:0.35] : [UIColor colorWithWhite:0 alpha:0.3];
    }];
    self.emptyLabel.textAlignment = NSTextAlignmentCenter;
    self.emptyLabel.hidden = YES;
    self.emptyLabel.userInteractionEnabled = NO;
    [self.view addSubview:self.emptyLabel];

    self.refreshTip = [[UILabel alloc] init];
    self.refreshTip.text = @"刷新中…";
    self.refreshTip.font = [UIFont systemFontOfSize:12];
    self.refreshTip.textColor = [UIColor secondaryLabelColor];
    self.refreshTip.textAlignment = NSTextAlignmentCenter;
    self.refreshTip.alpha = 0;
    self.refreshTip.userInteractionEnabled = NO;
    [self.view addSubview:self.refreshTip];
}

- (void)viewDidLayoutSubviews {
    [super viewDidLayoutSubviews];
    CGFloat w = self.view.bounds.size.width;
    CGFloat safe = self.view.safeAreaInsets.top;
    CGFloat H = safe + MioDualHeaderBaseHeight();
    self.headerView.frame = CGRectMake(0, 0, w, H);
    self.collectionView.contentInset = UIEdgeInsetsMake(H, 0, 20, 0);
    self.collectionView.scrollIndicatorInsets = UIEdgeInsetsMake(H, 0, 0, 0);
    [self layoutHeaderSubviews];
    [self applyCollapse:self.collapse];
    CGFloat cvh = self.view.bounds.size.height - H;
    self.emptyLabel.frame = CGRectMake(0, H + cvh / 2 - 40, w, 80);
    self.refreshTip.frame = CGRectMake(0, safe + 2, w, 18);
    CGFloat mh = 3 * 44 + 12;
    self.menu.frame = CGRectMake(w - 18 - 190, safe + 62, 190, mh);
    for (NSUInteger i = 0; i < self.menuItems.count; i++)
        ((UIButton *)self.menuItems[i]).frame = CGRectMake(6, 6 + i * 44, 178, 44);
    self.scrim.frame = self.view.bounds;
}

// 暗色切换：layer 边框是 CGColor 快照，不随动态 UIColor 自动刷新，手动补一遍
- (void)traitCollectionDidChange:(UITraitCollection *)previousTraitCollection {
    [super traitCollectionDidChange:previousTraitCollection];
    if (![self.traitCollection hasDifferentColorAppearanceComparedTo:previousTraitCollection]) return;
    UIColor *edge = MioDualGlassEdge();
    self.searchGlass.layer.borderColor = edge.CGColor;
    self.tabsGlass.layer.borderColor = edge.CGColor;
    self.tabIndicator.layer.borderColor = edge.CGColor;
    for (UIButton *b in @[self.bellBtn, self.addBtn, self.moreBtn])
        ((UIVisualEffectView *)b.subviews.firstObject).layer.borderColor = edge.CGColor;
}

// 顶栏静态位置（收缩动效相关的动态 frame 全在 applyCollapse）
- (void)layoutHeaderSubviews {
    CGFloat w = self.headerView.bounds.size.width;
    if (w <= 0) return;
    CGFloat safe = self.view.safeAreaInsets.top;
    CGFloat ty = safe + 12;
    // frame 带非恒等 transform 未定义：先复位再设 frame（收缩 transform 由 applyCollapse 重加）
    self.bigTitle.transform = CGAffineTransformIdentity;
    self.bigTitle.layer.anchorPoint = CGPointMake(0, 0.5);   // 左中锚点（HTML transform-origin:left center）
    self.bigTitle.frame = CGRectMake(18, ty + 25, 200, 50);
    self.tools.transform = CGAffineTransformIdentity;
    self.tools.frame = CGRectMake(w - 18 - 42 * 3 - 18, ty + 4, 42 * 3 + 18, 42);
    self.bellBtn.frame = CGRectMake(0, 0, 42, 42);
    self.addBtn.frame = CGRectMake(51, 0, 42, 42);
    self.moreBtn.frame = CGRectMake(102, 0, 42, 42);

    self.tabs.frame = CGRectMake(18, ty + 50 + 56 + 13, w - 36, 36);
    CGFloat seg = (self.tabs.bounds.size.width - 6) / 3;
    self.tabIndicator.frame = CGRectMake(3 + seg * self.tabIndex, 3, seg, 30);
    for (NSUInteger i = 0; i < self.tabBtns.count; i++)
        self.tabBtns[i].frame = CGRectMake(3 + i * seg, 3, seg, 30);
}

// 收缩动效（HTML --collapse 0→1 各变换逐项搬运）
- (void)applyCollapse:(CGFloat)c {
    if (!self.headerView) return;
    self.collapse = c;
    CGFloat w = self.headerView.bounds.size.width;
    if (w <= 0) return;
    CGFloat safe = self.view.safeAreaInsets.top;
    CGFloat ty = safe + 12;
    CGFloat s = 1 - 0.16 * c;
    self.bigTitle.transform = CGAffineTransformMakeScale(s, s);
    self.tools.transform = CGAffineTransformMakeTranslation(-51 * c, 0);

    CGFloat slotW = w - 36;
    self.searchSlot.frame = CGRectMake(18, ty + 50, slotW, 56 * (1 - c));
    CGFloat pw = slotW * (1 - c) + 42 * c;
    CGFloat gx = slotW - pw, gy = 16 - 62 * c, gh = 40 + 2 * c;
    self.searchGlass.frame = CGRectMake(gx, gy, pw, gh);
    self.searchField.frame = CGRectMake(gx, gy, pw, gh);

    CGFloat bh = safe + MioDualHeaderBaseHeight() + 60 - 56 * c;
    self.backdrop.frame = CGRectMake(0, 0, w, bh);
    self.backdropMask.frame = self.backdrop.bounds;
    CGFloat fade = 86;
    if (bh > fade) {
        CGFloat f0 = (bh - fade) / bh;
        self.backdropMask.locations = @[@0.0, @(f0), @1.0];   // 三色三位置（colors.count 必须一致）
    }
}

#pragma mark 滚动联动：搜索收缩迟滞 + 滚底翻页 + 顶部下拉刷新

- (void)scrollViewDidScroll:(UIScrollView *)sv {
    if (sv != self.collectionView) return;
    if (self.searchPinned) {
        if (self.collapse != 0) [self applyCollapse:0];
    } else {
        CGFloat sy = sv.contentOffset.y + sv.contentInset.top;   // HTML window.scrollY 同义
        CGFloat target;
        if (sy >= 72) target = 1;
        else if (sy <= 16) target = 0;
        else target = self.collapse;   // 16~72 迟滞区间保持（HTML 同款）
        if (target != self.collapse) [self applyCollapse:target];
    }
    // 滚底翻页：updateTimelineTail（WCM requestTimelineMore 同款），2s 锁
    CGFloat sy2 = sv.contentOffset.y + sv.contentInset.top;
    if (sy2 > 0 && sv.contentSize.height > 0 &&
        sv.contentOffset.y + sv.bounds.size.height > sv.contentSize.height - 600) {
        [self requestMoreIfNeeded];
    }
}

- (void)scrollViewWillEndDragging:(UIScrollView *)sv withVelocity:(CGPoint)velocity
              targetContentOffset:(CGPoint *)targetContentOffset {
    CGFloat sy = sv.contentOffset.y + sv.contentInset.top;
    if (sv == self.collectionView && sy < -70) [self doRefresh];   // 顶部下拉超 70pt 松手
}

- (void)requestMoreIfNeeded {
    NSTimeInterval now = [NSDate date].timeIntervalSince1970;
    if (now - self.lastTailAt < 2) return;
    self.lastTailAt = now;
    id facade = MioDualFacade();
    SEL tailSel = NSSelectorFromString(@"updateTimelineTail");
    if (facade && [facade respondsToSelector:tailSel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, tailSel);
        // 新数据落库后 onTimelineDataChanged hook 自动推面板（纯事件驱动）
    }
}

#pragma mark 数据桥：WCDataItem → 展示 dict → 原生重载

// 数据刷新为纯事件驱动（对齐 WCM 变更回调）：微信 timeline 变更 →
// onTimelineDataChanged hook（MomentsDualHook）→ MioDualPanelNotifyDataChanged →
// 0.5s 防抖 → 活跃面板 pushFeedNow。旧 3s 轮询已删（P1 实时性落地）。

// 活跃面板弱引用：hook 层 → 面板桥（Open 赋值 / Close 置 nil，主线程生命周期内读写）
static __weak id gDualActivePanel = nil;

// P1 实时性入口：微信原生 timeline 变更回调（WCFacade.h:415 实证）转发至此，
// 主线程 0.5s 防抖合并（连赞连评/批量同步多次触发）
void MioDualPanelNotifyDataChanged(void) {
    dispatch_async(dispatch_get_main_queue(), ^{
        static NSTimeInterval last = 0;
        NSTimeInterval now = [NSDate date].timeIntervalSince1970;
        if (now - last < 0.5) return;
        last = now;
        id panel = gDualActivePanel;
        if (panel && [panel respondsToSelector:@selector(pushFeedNow)]) [panel pushFeedNow];
    });
}

// 内存警告兜底：系统吃紧时放弃常驻（WCM 同款边界），下次 Open 走冷建降级路径
- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    g_dualPanel = nil;
    if (gDualActivePanel == self) gDualActivePanel = nil;
}

- (void)pushFeedNow {
    if (!self.collectionView) return;
    [self updateBellBadge];
    NSMutableArray *arr = [NSMutableArray array];
    NSUInteger cacheCount = 0;
    @try {
        NSArray *cache = MioDualTimelineItems(MioDualFacade());
        cacheCount = cache.count;
        for (id item in cache) {
            if (arr.count >= 300) break;   // 上限 300：滚底翻页（updateTimelineTail）后 cache 超百条
            NSDictionary *d = [self itemDict:item];
            if (d) [arr addObject:d];
        }
    } @catch (NSException *e) {
        WPLog(@"Dual", @"[Dual] read cache error: %@", e);
    }
    // 冷启动快照（WCM arrayForKey_/showCachedFeed 同语义，探针实证 cacheCount=0 差距）：
    // 原生同步未落地（冷启动 ~3s）时，先用上次会话的持久化快照顶首屏秒显，
    // return 等事件回调推新数据替换（与 allItems 不同会正常重推并写盘）
    if (cacheCount == 0) {
        NSArray *snap = [self snapshotItems];
        if (snap.count > 0) {
            WPLog(@"Dual", @"[Push] cache empty, showing last-session snapshot rows=%lu",
                  (unsigned long)snap.count);
            [self applyItems:snap];
            return;
        }
    }
    // 无变化不重渲（深比较 300 条 dict 开销可忽略；防滚动位置跳动）
    if ([arr isEqualToArray:self.allItems]) return;
    WPLog(@"Dual", @"[Push] cacheCount=%lu rows=%lu", (unsigned long)cacheCount, (unsigned long)arr.count);
    // 持久化快照（WCM arrayForKey_ 同语义）：有内容才存，空结果不覆盖（防坏数据顶屏）
    if (arr.count > 0) [self persistSnapshot:arr];
    [self applyItems:arr];
}

- (void)applyItems:(NSArray *)items {
    self.allItems = items;
    [self reloadFeed];
    [self endRefreshTip];
}

- (void)reloadFeed {
    self.visibleItems = [self computeVisible];
    [self.collectionView reloadData];
    self.emptyLabel.hidden = self.visibleItems.count > 0;
}

- (NSArray *)computeVisible {
    NSArray *l = self.allItems ?: @[];
    if (self.tabIndex == 1) {
        NSMutableArray *f = [NSMutableArray array];
        for (NSDictionary *d in l)
            if ([d[@"liked"] integerValue] > 0) [f addObject:d];
        l = f;
    }
    if (self.query.length) {
        NSMutableArray *f = [NSMutableArray array];
        for (NSDictionary *d in l) {
            NSString *hay = [NSString stringWithFormat:@"%@ %@", d[@"name"] ?: @"", d[@"content"] ?: @""];
            if ([hay.lowercaseString containsString:self.query]) [f addObject:d];
        }
        l = f;
    }
    return l;
}

// 快照读写：与旧 HTML 版同 key 同格式（{"items":[…]}），旧快照可直接复用。
// dict 字段全为 NSString/NSNumber，JSON 序列化往返无损。
- (NSArray *)snapshotItems {
    NSString *snap = [[NSUserDefaults standardUserDefaults] stringForKey:@"MioDualLastFeedJSON"];
    if (snap.length == 0) return nil;
    NSDictionary *wrap = [NSJSONSerialization JSONObjectWithData:[snap dataUsingEncoding:NSUTF8StringEncoding]
                                                         options:0 error:nil];
    NSArray *items = [wrap isKindOfClass:[NSDictionary class]] ? wrap[@"items"] : nil;
    return [items isKindOfClass:[NSArray class]] ? items : nil;
}

- (void)persistSnapshot:(NSArray *)arr {
    NSData *data = [NSJSONSerialization dataWithJSONObject:@{@"items": arr} options:0 error:nil];
    if (!data) return;
    [[NSUserDefaults standardUserDefaults] setObject:[[NSString alloc] initWithData:data
                                                                           encoding:NSUTF8StringEncoding]
                                              forKey:@"MioDualLastFeedJSON"];
}

// 铃铛角标：getSnsMessageCount（发现页头文件实证，朋友圈互动未读数；头文件声明返回 id）
- (void)updateBellBadge {
    UIViewController *host = self.hostVC;
    SEL cntSel = NSSelectorFromString(@"getSnsMessageCount");
    if (!host || ![host respondsToSelector:cntSel]) return;
    @try {
        id v = ((id(*)(id, SEL))objc_msgSend)(host, cntSel);
        NSInteger n = [v respondsToSelector:@selector(intValue)] ? [v intValue] : 0;
        if (n > 0) {
            self.badgeLabel.text = n > 99 ? @"99+" : [NSString stringWithFormat:@"%ld", (long)n];
            self.badgeLabel.hidden = NO;
            [self.badgeLabel sizeToFit];
            CGFloat bw = MAX(16, self.badgeLabel.frame.size.width + 8);
            self.badgeLabel.frame = CGRectMake(30 - bw / 2, -2, bw, 16);
        } else {
            self.badgeLabel.hidden = YES;
        }
    } @catch (NSException *e) {}
}

// WCDataItem → 展示 dict。字段与旧 HTML 版同名（快照格式兼容），仅两处原生化：
// img 从 mioimg:// key 换成本地路径/URL 原值；avatar URL 换 user wxid（AvatarLoader 直取）。
- (NSDictionary *)itemDict:(id)item {
    if (!item) return nil;
    NSString *username = WXSafeStringGet(item, @"username") ?: @"";
    NSString *content = WXSafeStringGet(item, @"contentDesc") ?: @"";
    NSUInteger mediaCount = 0;
    NSString *firstSrc = nil;
    BOOL isVideo = NO;
    double ratio = 0;   // 宽/高：布局预锁卡片高度防瀑布流跳动；拿不到留 0 由图片实测回调补
    @try {
        if ([item respondsToSelector:@selector(getMediaWraps)]) {
            NSArray *wraps = ((id(*)(id, SEL))objc_msgSend)(item, @selector(getMediaWraps));
            for (id wrap in wraps) {
                if (mediaCount >= 9) break;
                id mi = nil;
                if ([wrap respondsToSelector:@selector(mediaItem)]) {
                    mi = ((id(*)(id, SEL))objc_msgSend)(wrap, @selector(mediaItem));
                }
                NSString *src = [self mediaSrc:mi];
                if (src.length && !firstSrc) firstSrc = src;
                if (mi) {
                    mediaCount++;
                    // 视频条目 mediaItem 为 WCVideoMediaItem 类变体，类名匹配避开拼写差异
                    NSString *cls = NSStringFromClass([mi class]);
                    if (!isVideo) isVideo = [cls rangeOfString:@"ideo"].location != NSNotFound;
                    if (mediaCount == 1 && ratio == 0) {
                        // 宽高 ivar 名未探针实证，KVC 失败即回落图片实测回调锁高
                        @try {
                            double w = [(NSNumber *)[mi valueForKey:@"m64_width"] doubleValue];
                            double h = [(NSNumber *)[mi valueForKey:@"m64_height"] doubleValue];
                            if (w > 1 && h > 1) ratio = w / h;
                        } @catch (NSException *e) {}
                    }
                }
            }
        }
    } @catch (NSException *e) {
        WPLog(@"Dual", @"[Dual] media read error: %@", e);
    }
    return @{@"id": WXSafeStringGet(item, @"itemID") ?: @"",
             @"user": username,
             @"name": WXSafeStringGet(item, @"nickname") ?: username,
             @"time": @(MioDualScalarGet(item, @"createtime", 0)),
             @"likes": @(MioDualScalarGet(item, @"likeCount", 0)),
             @"cmt": @(MioDualScalarGet(item, @"commentCount", 0)),
             @"liked": @(MioDualScalarGet(item, @"likeFlag", 0)),
             @"content": content,
             @"img": firstSrc ?: @"",
             @"imgCount": @(mediaCount),
             @"isVideo": isVideo ? @YES : @NO,
             @"ratio": @(ratio)};
}

// 媒体源：本地路径（微信自带方法四级回落，探针实证可直接调）直接返回路径原值
// （原生 loader 读盘缩放），缺文件回落 CDN URL
- (NSString *)mediaSrc:(id)mi {
    if (!mi) return nil;
    SEL pathSels[4] = { @selector(getThumbImagePath), @selector(pathForPreview),
                        @selector(pathForData), @selector(pathForHdData) };
    for (int i = 0; i < 4; i++) {
        if (![mi respondsToSelector:pathSels[i]]) continue;
        NSString *p = ((id(*)(id, SEL))objc_msgSend)(mi, pathSels[i]);
        if ([p isKindOfClass:[NSString class]] && p.length > 0 &&
            [[NSFileManager defaultManager] fileExistsAtPath:p]) {
            return p;
        }
    }
    NSString *url = WXSafeStringGet(mi, @"attachThumbUrl");
    if (url.length == 0) url = WXSafeStringGet(mi, @"dataUrl");
    return (url.length > 4 && [url hasPrefix:@"http"]) ? url : nil;
}

#pragma mark UICollectionViewDataSource / LayoutDelegate

- (NSInteger)collectionView:(UICollectionView *)cv numberOfItemsInSection:(NSInteger)section {
    return self.visibleItems.count;
}

- (UICollectionViewCell *)collectionView:(UICollectionView *)cv cellForItemAtIndexPath:(NSIndexPath *)ip {
    MioDualCardCell *cell = [cv dequeueReusableCellWithReuseIdentifier:@"card" forIndexPath:ip];
    NSDictionary *it = self.visibleItems[ip.item];
    __weak typeof(self) ws = self;
    [cell configureWithItem:it
              measuredRatio:[self.measuredRatios[it[@"id"]] doubleValue]
                 onMeasured:^(NSString *itemID, CGFloat ratio) {
        [ws onMeasuredRatio:ratio forItemID:itemID];
    }];
    return cell;
}

- (void)collectionView:(UICollectionView *)cv didSelectItemAtIndexPath:(NSIndexPath *)ip {
    [cv deselectItemAtIndexPath:ip animated:NO];   // 仅按压高亮反馈，无点击动作（HTML :active 同款）
}

- (CGFloat)collectionView:(UICollectionView *)cv heightForItemAtIndexPath:(NSIndexPath *)ip
                itemWidth:(CGFloat)width {
    NSDictionary *it = self.visibleItems[ip.item];
    return MioDualCardMetrics(it, width, [self.measuredRatios[it[@"id"]] doubleValue]).totalH;
}

// 图片实测补 ratio：更新表后失效重排 + 重载可见 cell（HTML onload 重排同款；低频路径）
- (void)onMeasuredRatio:(CGFloat)ratio forItemID:(NSString *)itemID {
    if (itemID.length == 0 || ratio <= 0) return;
    NSNumber *old = self.measuredRatios[itemID];
    if (old && [old doubleValue] > 0) return;
    self.measuredRatios[itemID] = @(ratio);
    dispatch_async(dispatch_get_main_queue(), ^{
        [self.collectionView.collectionViewLayout invalidateLayout];
        NSArray *vis = self.collectionView.indexPathsForVisibleItems;
        if (vis.count) [self.collectionView reloadItemsAtIndexPaths:vis];
    });
}

#pragma mark 顶栏动作

- (void)onBell {
    // 铃铛 → 原生消息页（WCMInboxController 原生复刻：present 全屏，导航栏「‹ 发现/消息」）
    UIViewController *host = self.hostVC;
    if (!host) return;
    MioDualInboxVC *vc = [[MioDualInboxVC alloc] init];
    UINavigationController *nav = [[UINavigationController alloc] initWithRootViewController:vc];
    nav.modalPresentationStyle = UIModalPresentationFullScreen;
    // 返回钮（WCM 真机同款：细 chevron 图标 + 灰字，非系统 back 粗箭头/非"‹"字符）
    UIButton *backBtn = [UIButton buttonWithType:UIButtonTypeSystem];
    backBtn.tintColor = [UIColor secondaryLabelColor];
    UIImage *chev = [UIImage systemImageNamed:@"chevron.left"];
    if (chev) [backBtn setImage:chev forState:UIControlStateNormal];
    [backBtn setTitle:@"  发现" forState:UIControlStateNormal];   // 两空格 ≈ WCM 箭头与文字间距
    [backBtn setTitleColor:[UIColor secondaryLabelColor] forState:UIControlStateNormal];
    backBtn.titleLabel.font = [UIFont systemFontOfSize:17];
    [backBtn addTarget:vc action:@selector(goBack) forControlEvents:UIControlEventTouchUpInside];
    [backBtn sizeToFit];
    UIBarButtonItem *back = [[UIBarButtonItem alloc] initWithCustomView:backBtn];
    vc.navigationItem.leftBarButtonItem = back;
    vc.navigationItem.title = @"消息";
    __weak typeof(self) ws = self;
    id obsPost = [[NSNotificationCenter defaultCenter]
        addObserverForName:@"MioDualInboxOpenPost" object:nil queue:NSOperationQueue.mainQueue
        usingBlock:^(__unused NSNotification *n) {
            if (ws.hostVC) MioDualPanelClose(ws.hostVC);
        }];
    vc.userOnDismiss = ^{
        [[NSNotificationCenter defaultCenter] removeObserver:obsPost];
    };
    [host presentViewController:nav animated:YES completion:nil];
}

- (void)onAdd {
    // WCMoments publish 同款 duck-typing（反编译实证 publish → 调 host 原生方法）：
    // 发现页方法 openAlbumAndPublish:/openAlbumAndPublishText:（8.0.78 头文件实证）
    // 不关面板：push 的新页面在面板之上，返回时面板还在（体验连贯）
    UIViewController *host = self.hostVC;
    SEL sel = NSSelectorFromString(@"openAlbumAndPublish:");
    if (host && [host respondsToSelector:sel]) ((void(*)(id, SEL, id))objc_msgSend)(host, sel, nil);
}

- (void)onMore {
    if (self.menu.hidden) [self showMenu]; else [self hideMenu];
}

- (void)showMenu {
    self.scrim.hidden = NO;
    self.menu.hidden = NO;
    [UIView animateWithDuration:0.15 animations:^{ self.menu.alpha = 1; }];
}

- (void)hideMenu {
    [UIView animateWithDuration:0.12 animations:^{ self.menu.alpha = 0; }
        completion:^(BOOL done) {
            if (!done) return;
            self.menu.hidden = YES;
            self.scrim.hidden = YES;
        }];
}

- (void)onMenuRefresh {
    [self hideMenu];
    [self doRefresh];
}

- (void)onMenuPublishText {
    [self hideMenu];
    UIViewController *host = self.hostVC;
    SEL sel = NSSelectorFromString(@"openAlbumAndPublishText:");
    if (host && [host respondsToSelector:sel]) ((void(*)(id, SEL, id))objc_msgSend)(host, sel, nil);
}

- (void)goBack {
    // 「打开微信朋友圈」：切回原生朋友圈（面板覆盖移除）。面板不挂 childVC，host 用弱引用存
    if (self.hostVC) MioDualPanelClose(self.hostVC);
}

- (void)onTab:(UIButton *)sender {
    NSUInteger idx = [self.tabBtns indexOfObject:sender];
    if (idx == NSNotFound || idx == self.tabIndex) return;
    if (idx == 2) return;   // 死 UI：我的关注（无数据源，HTML 版同款占位不响应）
    self.tabIndex = idx;
    [self updateTabUI:YES];
    [self reloadFeed];
    [self.collectionView setContentOffset:CGPointMake(0, -self.collectionView.contentInset.top) animated:NO];
}

- (void)updateTabUI:(BOOL)animated {
    for (NSUInteger i = 0; i < self.tabBtns.count; i++) {
        BOOL active = (i == self.tabIndex);
        self.tabBtns[i].titleLabel.font = [UIFont systemFontOfSize:13
                                            weight:active ? UIFontWeightSemibold : UIFontWeightRegular];
    }
    CGFloat seg = (self.tabs.bounds.size.width - 6) / 3;
    if (seg <= 0) return;
    void (^apply)(void) = ^{
        self.tabIndicator.frame = CGRectMake(3 + seg * self.tabIndex, 3, seg, 30);
    };
    animated ? [UIView animateWithDuration:0.23
                                  delay:0
                                options:UIViewAnimationOptionBeginFromCurrentState
                             animations:apply
                             completion:nil]
             : apply();
}

#pragma mark 搜索

- (void)searchChanged:(UITextField *)f {
    self.query = [f.text stringByTrimmingCharactersInSet:[NSCharacterSet whitespaceCharacterSet]].lowercaseString;
    [self reloadFeed];
    [self.collectionView setContentOffset:CGPointMake(0, -self.collectionView.contentInset.top) animated:NO];
}

- (void)onSearchTap {
    // HTML sb click 同款：滚回顶 + 聚焦
    CGFloat sy = self.collectionView.contentOffset.y + self.collectionView.contentInset.top;
    if (sy > 72) [self.collectionView setContentOffset:CGPointMake(0, -self.collectionView.contentInset.top)
                                              animated:YES];
    [self.searchField becomeFirstResponder];
}

- (void)textFieldDidBeginEditing:(UITextField *)textField {
    self.searchPinned = YES;   // focus 钉住展开态（HTML searchPinned 同款）
    [UIView animateWithDuration:0.28 animations:^{ [self applyCollapse:0]; }];
}

- (void)textFieldDidEndEditing:(UITextField *)textField {
    self.searchPinned = NO;
    CGFloat sy = self.collectionView.contentOffset.y + self.collectionView.contentInset.top;
    CGFloat target = (sy >= 72) ? 1 : (sy <= 16 ? 0 : self.collapse);
    [UIView animateWithDuration:0.28 animations:^{ [self applyCollapse:target]; }];
}

- (BOOL)textFieldShouldReturn:(UITextField *)textField {
    [textField resignFirstResponder];
    return YES;
}

#pragma mark 刷新

- (void)doRefresh {
    if (self.refreshing) return;
    self.refreshing = YES;
    [UIView animateWithDuration:0.2 animations:^{ self.refreshTip.alpha = 1; }];
    id facade = MioDualFacade();
    SEL refreshSel = NSSelectorFromString(@"updateTimelineHead");
    if (facade && [facade respondsToSelector:refreshSel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, refreshSel);   // 探针实证：主动调用成功，等价下拉
        // 新数据落库后 onTimelineDataChanged hook 自动推面板，无需复查轮询
    }
    // 保险熄灯：数据落地事件也会调 endRefreshTip（HTML 2.5s 节奏同款）
    __weak typeof(self) ws = self;
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(2.5 * NSEC_PER_SEC)),
                   dispatch_get_main_queue(), ^{ [ws endRefreshTip]; });
}

- (void)endRefreshTip {
    self.refreshing = NO;
    [UIView animateWithDuration:0.2 animations:^{ self.refreshTip.alpha = 0; }];
}

@end

#pragma mark - 面板挂载/移除（WCMoments coverHost/restoreChrome 复刻，原样保留）

void MioDualPanelOpen(UIViewController *host) {
    if ([objc_getAssociatedObject(host, &kDualPanelAssocKey) isKindOfClass:[MomentsDualPanel class]]) return;
    // 常驻复用优先：有常驻实例直接复用（渲染态与数据已在视图树），无则新建
    MomentsDualPanel *panel = g_dualPanel;
    if (!panel) {
        panel = [[MomentsDualPanel alloc] init];
        g_dualPanel = panel;
    }
    g_dualPanelHost = host;
    objc_setAssociatedObject(host, &kDualPanelAssocKey, panel, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    panel.hostVC = host;
    // WCMoments coverHost 同款：capture chrome → host 全屏化 + 藏导航栏 → 面板 view 挂 host.view 顶层。
    // 面板随宿主 view 走（切 tab 自动消失）；不能上 window（childVC/独立 view 都会脱离 tab 生命周期）
    if (!panel.chromeCaptured) {
        panel.chromeCaptured = YES;
        panel.prevNavHidden = host.navigationController.isNavigationBarHidden;
        panel.prevEdges = host.edgesForExtendedLayout;
        panel.prevOpaqueBars = host.extendedLayoutIncludesOpaqueBars;
    }
    host.edgesForExtendedLayout = UIRectEdgeAll;
    host.extendedLayoutIncludesOpaqueBars = YES;
    [host.navigationController setNavigationBarHidden:YES animated:NO];
    panel.view.frame = host.view.bounds;
    panel.view.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
    [host.view addSubview:panel.view];
    [host.view bringSubviewToFront:panel.view];
    gDualActivePanel = panel;   // P1 事件驱动：hook 层 → 防抖 → 此面板 pushFeedNow
    // 复用时数据已在：立即推上屏（内容没变深比较 no-op，零等待首屏）
    [panel pushFeedNow];
    // 发现页直接打开时朋友圈缓存可能为空（尚未进过朋友圈），后台拉新（不阻塞显示）
    id facade = MioDualFacade();
    SEL refreshSel = NSSelectorFromString(@"updateTimelineHead");
    if (facade && [facade respondsToSelector:refreshSel]) {
        ((void(*)(id, SEL))objc_msgSend)(facade, refreshSel);
    }
    WPLog(@"Dual", @"[Dual] panel opened (%@) on %@", panel.everOpened ? @"reuse" : @"cold",
          NSStringFromClass([host class]));
    panel.everOpened = YES;
}

void MioDualPanelReassertChrome(UIViewController *host) {
    MomentsDualPanel *panel = objc_getAssociatedObject(host, &kDualPanelAssocKey);
    if (![panel isKindOfClass:[MomentsDualPanel class]]) return;
    host.edgesForExtendedLayout = UIRectEdgeAll;
    host.extendedLayoutIncludesOpaqueBars = YES;
    [host.navigationController setNavigationBarHidden:YES animated:NO];
}

void MioDualPanelClose(UIViewController *host) {
    MomentsDualPanel *panel = objc_getAssociatedObject(host, &kDualPanelAssocKey);
    if (![panel isKindOfClass:[MomentsDualPanel class]]) return;
    objc_setAssociatedObject(host, &kDualPanelAssocKey, nil, OBJC_ASSOCIATION_RETAIN_NONATOMIC);
    gDualActivePanel = nil;   // 不可见即停推送目标；常驻实例仍活着，重开复用
    [panel.view removeFromSuperview];   // 只摘视图：g_dualPanel 强持有，渲染态保留（秒显）
    // WCMoments restoreChrome：还原发现页 chrome
    host.edgesForExtendedLayout = panel.prevEdges;
    host.extendedLayoutIncludesOpaqueBars = panel.prevOpaqueBars;
    if (!panel.prevNavHidden) {
        [host.navigationController setNavigationBarHidden:NO animated:NO];
    }
    WPLog(@"Dual", @"[Dual] panel hidden (instance kept)");
}

void MioDualPanelToggle(UIViewController *host) {
    if (MioDualPanelIsOpen(host)) MioDualPanelClose(host);
    else MioDualPanelOpen(host);
}

BOOL MioDualPanelIsOpen(UIViewController *host) {
    return [objc_getAssociatedObject(host, &kDualPanelAssocKey) isKindOfClass:[MomentsDualPanel class]];
}
