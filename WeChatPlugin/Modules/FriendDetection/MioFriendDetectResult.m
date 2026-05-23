#import "MioFriendDetectResult.h"

@implementation MioFriendDetectResult

+ (BOOL)supportsSecureCoding { return YES; }

- (instancetype)initWithCoder:(NSCoder *)coder {
    if (self = [super init]) {
        _wxID = [coder decodeObjectOfClass:[NSString class] forKey:@"wxID"];
        _nickname = [coder decodeObjectOfClass:[NSString class] forKey:@"nickname"];
        _remark = [coder decodeObjectOfClass:[NSString class] forKey:@"remark"];
        _status = [coder decodeIntegerForKey:@"status"];
        _retcode = [coder decodeIntegerForKey:@"retcode"];
        _retmsg = [coder decodeObjectOfClass:[NSString class] forKey:@"retmsg"];
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)coder {
    [coder encodeObject:_wxID forKey:@"wxID"];
    [coder encodeObject:_nickname forKey:@"nickname"];
    [coder encodeObject:_remark forKey:@"remark"];
    [coder encodeInteger:_status forKey:@"status"];
    [coder encodeInteger:_retcode forKey:@"retcode"];
    [coder encodeObject:_retmsg forKey:@"retmsg"];
}

- (NSString *)description {
    NSString *s;
    switch (_status) {
        case MioFriendStatusNormal:  s = @"正常"; break;
        case MioFriendStatusDeleted: s = @"被删"; break;
        case MioFriendStatusInvalid: s = @"异常"; break;
        default: s = @"未知"; break;
    }
    return [NSString stringWithFormat:@"<%@: %@(%@) %@ ret=%ld>",
            NSStringFromClass([self class]), _nickname ?: _wxID, _wxID, s, (long)_retcode];
}

@end

// ============================================================

@implementation MioFriendDetectSummary

+ (BOOL)supportsSecureCoding { return YES; }

- (instancetype)initWithCoder:(NSCoder *)coder {
    if (self = [super init]) {
        _timestamp = [coder decodeDoubleForKey:@"timestamp"];
        _totalCount = [coder decodeIntegerForKey:@"totalCount"];
        NSSet *classes = [NSSet setWithObjects:[NSArray class], [MioFriendDetectResult class], nil];
        _deletedFriends = [coder decodeObjectOfClasses:classes forKey:@"deletedFriends"];
        _invalidFriends = [coder decodeObjectOfClasses:classes forKey:@"invalidFriends"];
        _checkedWxIDs = [coder decodeObjectOfClasses:[NSSet setWithObjects:[NSSet class], [NSString class], nil] forKey:@"checkedWxIDs"];
    }
    return self;
}

- (void)encodeWithCoder:(NSCoder *)coder {
    [coder encodeDouble:_timestamp forKey:@"timestamp"];
    [coder encodeInteger:_totalCount forKey:@"totalCount"];
    [coder encodeObject:_deletedFriends forKey:@"deletedFriends"];
    [coder encodeObject:_invalidFriends forKey:@"invalidFriends"];
    [coder encodeObject:_checkedWxIDs forKey:@"checkedWxIDs"];
}

@end