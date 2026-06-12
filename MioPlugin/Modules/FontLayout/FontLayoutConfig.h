#import "../../Core/ConfigManager.h"

@interface FontLayoutConfig : NSObject <ConfigModule>

/// 全局布局
@property (nonatomic, assign) BOOL globalLayoutEnabled;
@property (nonatomic, assign) CGFloat globalFontSize;

/// 对话布局
@property (nonatomic, assign) BOOL chatLayoutEnabled;
@property (nonatomic, assign) CGFloat chatFontSize;

@end
