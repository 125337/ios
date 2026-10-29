@interface WxpayKitPasswordTimestampAnchors : NSObject
{
    os_unfair_lock_s _lock; // +0x8
    unsigned long long _capacity; // +0x10
    NSMutableDictionary * _anchors; // +0x18
    NSMutableArray * _recency; // +0x20
}
+ (id)sharedAnchors;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)registerTimestamp:(unsigned long long)arg1 nowMs:(unsigned long long)arg2;
- (id)resolveTimestamp:(unsigned long long)arg1 offsetEnabled:(BOOL)arg2 nowMs:(unsigned long long)arg3 nativeSeconds:(id /* block */)arg4;
- (unsigned long long)lockedAnchorOf:(unsigned long long)arg1 nowMs:(unsigned long long)arg2;
- (void).cxx_destruct;
@end
