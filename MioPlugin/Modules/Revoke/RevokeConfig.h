#import <Foundation/Foundation.h>
#import "ConfigModule.h"
#import "Constants.h"

NS_ASSUME_NONNULL_BEGIN

@interface RevokeConfig : NSObject <ConfigModule>

#pragma mark - 基础开关
@property (nonatomic, assign) BOOL preventRecall;
@property (nonatomic, assign) BOOL debugLogging;
@property (nonatomic, assign) BOOL hideContent;
@property (nonatomic, assign) BOOL noTip;
@property (nonatomic, assign) BOOL bottomPosition;
@property (nonatomic, assign) BOOL sendInterceptedContent;
@property (nonatomic, assign) BOOL interceptNotifyEnabled;
@property (nonatomic, assign) BOOL customNotifyEnabled;
@property (nonatomic, assign) BOOL hideDiscoverBadge;
@property (nonatomic, assign) BOOL hideEnterpriseBadge;

#pragma mark - 格式配置
@property (nonatomic, copy, nullable) NSString *notifyFormat;
@property (nonatomic, copy, nullable) NSString *dateFormat;
@property (nonatomic, copy, nullable) NSString *customText;
@property (nonatomic, copy, nullable) NSString *interceptNotifyTemplate;
@property (nonatomic, copy, nullable) NSString *customNotifyFormat;
@property (nonatomic, copy, nullable) NSString *revokeTemplate;

#pragma mark - 通知撤回者
@property (nonatomic, assign) BOOL notifySender;
@property (nonatomic, copy, nullable) NSString *notifySenderTemplate;
@property (nonatomic, assign) double notifySenderCooldown;

#pragma mark - 动态格式存储 (NSKeyedArchiver)
@property (nonatomic, strong, nullable) NSMutableDictionary<NSString *, NSString *> *sessionFormats;
@property (nonatomic, strong, nullable) NSMutableDictionary<NSString *, NSString *> *userFormats;

#pragma mark - ConfigModule Protocol
+ (NSArray<ConfigDescriptor *> *)descriptors;
+ (NSString *)modulePrefix;
+ (instancetype)shared;

#pragma mark - Archived Data Methods
+ (void)loadArchivedData;
+ (void)saveArchivedData;

#pragma mark - Helper Methods
- (nullable NSString *)notifyFormatForSession:(NSString *)session user:(NSString *)user;
- (NSString *)applyTemplate:(NSString *)tmpl time:(NSString *)time name:(NSString *)name content:(NSString *)content;
- (NSString *)applyRevokeTemplate:(NSString *)tmpl name:(NSString *)name content:(NSString *)content createTime:(unsigned int)createTime;

@end

NS_ASSUME_NONNULL_END
