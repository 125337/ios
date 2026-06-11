#import <Foundation/Foundation.h>
#import "ConfigModule.h"

@interface UIPurifyConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL hideSeparatorLine;
@property (nonatomic, assign) BOOL hideRevokeHint;
@property (nonatomic, assign) BOOL hidePatHint;
@property (nonatomic, assign) BOOL hideVoiceRedDot;
@property (nonatomic, assign) BOOL hideBubbleBackground;
@property (nonatomic, assign) BOOL disableDictation;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END