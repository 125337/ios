@interface WCFinderHotCommentStatModel : NSObject
{
    unsigned long long _commentID; // +0x8
    double _playProgress; // +0x10
}
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)commentID;
- (void)setCommentID:(unsigned long long)arg1;
- (double)playProgress;
- (void)setPlayProgress:(double)arg1;
@end
