@interface WxpayKitPushUpdateRecentMessages : NSObject
{
    os_unfair_lock_s _lock; // +0x8
    unsigned long long _capacity; // +0x10
    NSMutableOrderedSet * _msgIds; // +0x18
}
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)decide:(id)arg1;
- (void).cxx_destruct;
@end
