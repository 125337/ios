#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface MomentsConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL convenientMomentsEnabled;   // 便捷朋友圈
@property (nonatomic, assign) BOOL hdMomentsEnabled;           // 高清朋友圈
@property (nonatomic, assign) BOOL fakeLikeEnabled;            // 朋友圈伪集赞（仅总开关，行为内置）

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
