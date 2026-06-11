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
@property (nonatomic, copy) NSString *redEnvelopTextFilter;
@property (nonatomic, assign) BOOL redEnvelopGroupFilterEnabled;
@property (nonatomic, copy) NSArray *redEnvelopGroupFilterList;
@property (nonatomic, assign) BOOL redEnvelopAutoReply;
@property (nonatomic, assign) BOOL redEnvelopAutoReplyInGroup;
@property (nonatomic, copy) NSString *redEnvelopAutoReplyStr;
@property (nonatomic, copy) NSArray *redEnvelopBlackList;

+ (instancetype)shared;

@end

NS_ASSUME_NONNULL_END