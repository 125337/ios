@interface WCTimelineRequestUserData : NSObject
{
    BOOL _isUnReadJump; // +0x8
    unsigned long long _requestTimestamp; // +0x10
}
- (unsigned long long)requestTimestamp;
- (void)setRequestTimestamp:(unsigned long long)arg1;
- (BOOL)isUnReadJump;
- (void)setIsUnReadJump:(BOOL)arg1;
@end
