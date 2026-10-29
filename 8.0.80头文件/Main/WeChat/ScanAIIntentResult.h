@interface ScanAIIntentResult : NSObject
{
    long long _intentType; // +0x8
    NSNumber * _trackId; // +0x10
    double _costMS; // +0x18
    CGRect _intentRect; // +0x20
}
+ (id)resultWithIntentType:(long long)arg1 intentRect:(CGRect)arg2 trackId:(id)arg3 costMS:(double)arg4;
+ (id)nameForIntentType:(long long)arg1;
- (long long)intentType;
- (void)setIntentType:(long long)arg1;
- (CGRect)intentRect;
- (void)setIntentRect:(CGRect)arg1;
- (id)trackId;
- (void)setTrackId:(id)arg1;
- (double)costMS;
- (void)setCostMS:(double)arg1;
- (void).cxx_destruct;
@end
