#import "RevokeConfig.h"
#import "../../Core/ConfigManager.h"

@implementation RevokeConfig

#pragma mark - Singleton

+ (instancetype)shared {
    static RevokeConfig *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[RevokeConfig alloc] init];
    });
    return instance;
}

- (instancetype)init {
    self = [super init];
    if (self) {
        _sessionFormats = [NSMutableDictionary dictionary];
        _userFormats = [NSMutableDictionary dictionary];
    }
    return self;
}

#pragma mark - ConfigModule Protocol

+ (NSString *)modulePrefix {
    return @"Revoke_";
}

+ (NSArray<ConfigDescriptor *> *)descriptors {
    return @[
        // 基础开关
        [ConfigDescriptor itemWithKey:@"preventRecall" type:ConfigValueTypeBool default:@(YES)],
        [ConfigDescriptor itemWithKey:@"debugLogging" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hideContent" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"noTip" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"bottomPosition" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"sendInterceptedContent" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"interceptNotifyEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"customNotifyEnabled" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hideDiscoverBadge" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"hideEnterpriseBadge" type:ConfigValueTypeBool default:@(NO)],

        // 格式配置
        [ConfigDescriptor itemWithKey:@"notifyFormat" type:ConfigValueTypeString default:kDefaultNotifyFormat],
        [ConfigDescriptor itemWithKey:@"dateFormat" type:ConfigValueTypeString default:kDefaultDateFormat],
        [ConfigDescriptor itemWithKey:@"customText" type:ConfigValueTypeString default:nil],
        [ConfigDescriptor itemWithKey:@"interceptNotifyTemplate" type:ConfigValueTypeString default:kDefaultInterceptTemplate],
        [ConfigDescriptor itemWithKey:@"customNotifyFormat" type:ConfigValueTypeString default:kDefaultCustomNotifyFormat],
        [ConfigDescriptor itemWithKey:@"revokeTemplate" type:ConfigValueTypeString default:kDefaultRevokeTemplate],

        // 通知撤回者
        [ConfigDescriptor itemWithKey:@"notifySender" type:ConfigValueTypeBool default:@(NO)],
        [ConfigDescriptor itemWithKey:@"notifySenderTemplate" type:ConfigValueTypeString default:kDefaultNotifySenderTemplate],
        [ConfigDescriptor itemWithKey:@"notifySenderCooldown" type:ConfigValueTypeFloat default:@(0.0)],

        // sessionFormats 和 userFormats 使用 NSKeyedArchiver，不在 descriptors 中
    ];
}

#pragma mark - Archived Data Methods

+ (void)loadArchivedData {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    NSString *sessionKey = [kPluginPrefix stringByAppendingString:[self modulePrefix]];
    sessionKey = [sessionKey stringByAppendingString:@"SessionFormats"];
    
    NSString *userKey = [kPluginPrefix stringByAppendingString:[self modulePrefix]];
    userKey = [userKey stringByAppendingString:@"UserFormats"];
    
    @try {
        NSData *sessionData = [d dataForKey:sessionKey];
        if (sessionData) {
            NSDictionary *loadedData = [NSKeyedUnarchiver unarchiveObjectWithData:sessionData];
            if (loadedData && [loadedData isKindOfClass:[NSDictionary class]]) {
                [self shared].sessionFormats = [[NSMutableDictionary alloc] initWithDictionary:loadedData];
            }
        }
        
        NSData *userData = [d dataForKey:userKey];
        if (userData) {
            NSDictionary *loadedData = [NSKeyedUnarchiver unarchiveObjectWithData:userData];
            if (loadedData && [loadedData isKindOfClass:[NSDictionary class]]) {
                [self shared].userFormats = [[NSMutableDictionary alloc] initWithDictionary:loadedData];
            }
        }
    } @catch (NSException *e) {
        // 解档失败时保持默认空字典
    }
}

+ (void)saveArchivedData {
    NSUserDefaults *d = [NSUserDefaults standardUserDefaults];
    NSString *sessionKey = [kPluginPrefix stringByAppendingString:[self modulePrefix]];
    sessionKey = [sessionKey stringByAppendingString:@"SessionFormats"];
    
    NSString *userKey = [kPluginPrefix stringByAppendingString:[self modulePrefix]];
    userKey = [userKey stringByAppendingString:@"UserFormats"];
    
    @try {
        NSData *sessionData = [NSKeyedArchiver archivedDataWithRootObject:[self shared].sessionFormats];
        [d setObject:sessionData forKey:sessionKey];
        
        NSData *userData = [NSKeyedArchiver archivedDataWithRootObject:[self shared].userFormats];
        [d setObject:userData forKey:userKey];
    } @catch (NSException *e) {
        // 归档失败时忽略
    }
}

#pragma mark - Helper Methods

- (NSString *)notifyFormatForSession:(NSString *)session user:(NSString *)user {
    if (user.length > 0) {
        NSString *fmt = _userFormats[user];
        if (fmt.length > 0) return fmt;
    }
    if (session.length > 0) {
        NSString *fmt = _sessionFormats[session];
        if (fmt.length > 0) return fmt;
    }
    return _notifyFormat;
}

- (NSString *)applyTemplate:(NSString *)tmpl time:(NSString *)time name:(NSString *)name content:(NSString *)content {
    NSString *result = [tmpl copy];
    result = [result stringByReplacingOccurrencesOfString:@"{time}" withString:time ?: @""];
    result = [result stringByReplacingOccurrencesOfString:@"{name}" withString:name ?: @""];
    result = [result stringByReplacingOccurrencesOfString:@"{content}" withString:content ?: @""];
    return result;
}

- (NSString *)applyRevokeTemplate:(NSString *)tmpl name:(NSString *)name content:(NSString *)content createTime:(unsigned int)createTime {
    if (!tmpl.length) return nil;
    NSString *result = [tmpl copy];
    
    // 用户名
    result = [result stringByReplacingOccurrencesOfString:@"{用户名}" withString:name ?: @""];
    // 内容
    result = [result stringByReplacingOccurrencesOfString:@"{内容}" withString:content ?: @""];
    
    // 时间占位符
    NSDate *date = createTime > 0 ? [NSDate dateWithTimeIntervalSince1970:createTime] : [NSDate date];
    NSCalendar *cal = [NSCalendar currentCalendar];
    NSDateComponents *comp = [cal components:(NSCalendarUnitYear | NSCalendarUnitMonth | NSCalendarUnitDay |
                                               NSCalendarUnitHour | NSCalendarUnitMinute | NSCalendarUnitSecond)
                                   fromDate:date];
    
    result = [result stringByReplacingOccurrencesOfString:@"{yyyy}" withString:[NSString stringWithFormat:@"%04ld", (long)comp.year]];
    result = [result stringByReplacingOccurrencesOfString:@"{MM}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.month]];
    result = [result stringByReplacingOccurrencesOfString:@"{dd}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.day]];
    result = [result stringByReplacingOccurrencesOfString:@"{HH}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.hour]];
    result = [result stringByReplacingOccurrencesOfString:@"{mm}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.minute]];
    result = [result stringByReplacingOccurrencesOfString:@"{ss}" withString:[NSString stringWithFormat:@"%02ld", (long)comp.second]];
    
    return result;
}

@end