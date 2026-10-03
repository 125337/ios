#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/// 首页电报分组 · 标签条
/// 结构与几何对齐 WCR WCRefineTelegramTabStripView（微信头文件\WCRefine2.1-6.dylib\WCRefineTelegramTabStripView.h）：
/// - 整条高 44（Misc_part19.c:5673-5679），按钮高 32 垂直居中（6242/6196）
/// - 非等分：x0=12、间距 8、按钮宽=文字宽+28 最小 44（6230/6268/6428-6455）
/// - 等分：margin=8，slotW=(W-16)/min(count,slotCount)，槽内余量平分居中（6300-6322）
/// - 指示器：0无 1胶囊(整按钮框,圆角=h/2) 2线条(minX+8,maxY-2,max(w-16,16),h2) 3圆点(6x6)（6678-6772）
/// - 弹簧动画 stiffness=360 damping=34，key "wcr_tg_indicator"（7922-8020）
/// - 角标 10x10，x=btn.maxX-badgeW+4，y=2（6473-6555）
@interface SessionGroupsStripView : UIView

@property (nonatomic, copy) void (^onSelectIndex)(NSInteger index);
@property (nonatomic, copy) void (^onLongPressIndex)(NSInteger index); // 长按动作（WCR wcrGrouping_handleHomeItemLongPress，wcrGrouping_.c:8807）
@property (nonatomic, assign) NSInteger selectedIndex;

+ (CGFloat)preferredHeight;

@property (nonatomic, readonly) NSInteger tabCount;

- (void)reloadTabTitles:(NSArray<NSString *> *)titles;
- (void)updateBadges:(nullable NSArray<NSNumber *> *)badges redDots:(nullable NSArray<NSNumber *> *)dots;
- (void)setSelectedIndex:(NSInteger)index velocity:(CGFloat)velocity animated:(BOOL)animated;
- (void)previewIndex:(NSInteger)index progress:(CGFloat)progress;
- (void)cancelPreview;
- (void)refreshAppearance;

@end

NS_ASSUME_NONNULL_END
