#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface HideAvatarConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL hideC2COtherAvatar;
@property (nonatomic, assign) BOOL hideC2CSelfAvatar;
@property (nonatomic, assign) BOOL hideGroupOtherAvatar;
@property (nonatomic, assign) BOOL hideGroupSelfAvatar;
@property (nonatomic, assign) BOOL hideOAOtherAvatar;
@property (nonatomic, assign) BOOL hideOASelfAvatar;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
