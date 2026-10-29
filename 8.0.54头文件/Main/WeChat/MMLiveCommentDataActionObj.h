@interface MMLiveCommentDataActionObj : NSObject <NSCopying>
{
    BOOL _hasAlerted; // +0x8
    double _lastDoubleTapInvokeTime; // +0x10
}
- (id)copyWithZone:(_NSZone *)arg1;
- (BOOL)hasAlerted;
- (void)setHasAlerted:(BOOL)arg1;
- (double)lastDoubleTapInvokeTime;
- (void)setLastDoubleTapInvokeTime:(double)arg1;
@end

