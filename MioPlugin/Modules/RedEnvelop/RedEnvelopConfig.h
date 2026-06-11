#import <Foundation/Foundation.h>
#import "ConfigModule.h"

NS_ASSUME_NONNULL_BEGIN

@interface RedEnvelopConfig : NSObject <ConfigModule>

@property (nonatomic, assign) BOOL autoRedEnvelop;
@property (nonatomic, assign) BOOL redEnvelopCatchMe;
@property (nonatomic, assign) BOOL personalRedEnvelopEnable;
@property (nonatomic, assign) unsigned int redEnvelopDelay;
@property (nonatomic, assign) BOOL redEnvelopeDetail;
@property (nonatomic, assign) BOOL redEnvelopTextFilterEnabled;
@property (nonatomic, copy, nullable) NSString *redEnvelopTextFilter;
@property (nonatomic, assign) BOOL redEnvelopGroupFilterEnabled;
@property (nonatomic, copy, nullable) NSArray *redEnvelopGroupFilterList;
@property (nonatomic, assign) BOOL redEnvelopAutoReply;
@property (nonatomic, assign) BOOL redEnvelopAutoReplyInGroup;
@property (nonatomic, copy, nullable) NSString *redEnvelopAutoReplyStr;
@property (nonatomic, copy, nullable) NSArray *redEnvelopBlackList;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END
