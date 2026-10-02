#import <Foundation/Foundation.h>
#import "../../Core/ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

/// 首页电报分组（会话列表）配置
@interface SessionGroupsConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL sgEnabled;               // 启动首页电报分组（总开关）
@property (nonatomic, assign) NSInteger sgSwitchHaptic;     // 切组触感 0无 1轻微 2中度 3强烈
@property (nonatomic, assign) NSInteger sgIndicator;        // 指示器 0无 1胶囊 2线条 3圆点
@property (nonatomic, assign) CGFloat sgCapsuleRadius;      // 胶囊圆角 0-16（0=默认半高圆角）
@property (nonatomic, assign) BOOL sgTitleFontCustom;       // 自定义标题字号开关（WCR homeTelegramGroupingCustomTitleFont）
@property (nonatomic, assign) CGFloat sgTitleFontSize;      // 自定义标题字号 12-20，越界回落 17
@property (nonatomic, assign) BOOL sgFullscreenSwipe;       // 全屏滑动切换
@property (nonatomic, assign) BOOL sgSwipeReverse;          // 反向行驶
@property (nonatomic, assign) BOOL sgSwipeLoop;             // 循环滑动
@property (nonatomic, assign) BOOL sgTabCentered;           // 分组标签居中
@property (nonatomic, assign) NSInteger sgVisibleTabCount;  // 首页显示标签数 2-8
@property (nonatomic, assign) BOOL sgShowUnreadBadge;       // 显示未读角标
@property (nonatomic, assign) BOOL sgShowGroupRedDot;       // 显示分组红点
@property (nonatomic, assign) BOOL sgFoldGroupNoRedDot;     // 折叠群不红点
@property (nonatomic, assign) BOOL sgFilterPinned;          // 过滤置顶聊天
@property (nonatomic, assign) BOOL sgFilterDuplicate;       // 过滤重复联系人

// 外观颜色（浅/深色双 hex，空 = 未自定义跟随默认；hook 暂未接入）
@property (nonatomic, copy) NSString *sgBgColor;            // 自定义背景色
@property (nonatomic, copy) NSString *sgBgColorDark;
@property (nonatomic, copy) NSString *sgIndicatorColor;     // 指示器颜色
@property (nonatomic, copy) NSString *sgIndicatorColorDark;
@property (nonatomic, copy) NSString *sgTextColor;          // 默认文本颜色
@property (nonatomic, copy) NSString *sgTextColorDark;
@property (nonatomic, copy) NSString *sgHighlightColor;     // 高亮文本颜色
@property (nonatomic, copy) NSString *sgHighlightColorDark;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
