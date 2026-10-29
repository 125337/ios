@interface FinderLiveFollowContact : NSObject
{
    FinderLiveContact * _liveContact; // +0x8
    unsigned long long _priority; // +0x10
    NSString * _uniqueKey; // +0x18
}
+ (id)createFollowContact:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)createUniqueKey;
- (unsigned long long)getPriority;
- (BOOL)isFromMyFriend;
- (BOOL)isFromMySelf;
- (id)finderLiveTask;
- (id)liveContact;
- (void)setLiveContact:(id)arg1;
- (unsigned long long)priority;
- (void)setPriority:(unsigned long long)arg1;
- (id)uniqueKey;
- (void)setUniqueKey:(id)arg1;
- (void).cxx_destruct;
@end

