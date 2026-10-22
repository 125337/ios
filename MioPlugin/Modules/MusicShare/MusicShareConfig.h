#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface MusicShareConfig : NSObject <ConfigModule>

// 总开关：关闭时点歌入口隐藏
@property (nonatomic, assign) BOOL musicShareEnabled;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
