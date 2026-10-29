@interface WCTimeLineRedDotInfo : NSObject
{
    BOOL _hasRedDot; // +0x8
    long long _redNumber; // +0x10
    NSString * _redFeedId; // +0x18
}
+ (id)safeJSONStringWithObject:(id)arg1;
+ (id)safeStringWithString:(id)arg1;
- (id)toJsonStr;
- (long long)redNumber;
- (void)setRedNumber:(long long)arg1;
- (BOOL)hasRedDot;
- (void)setHasRedDot:(BOOL)arg1;
- (id)redFeedId;
- (void)setRedFeedId:(id)arg1;
- (void).cxx_destruct;
@end
