@interface WCFinderGetDetailCacheData : NSObject
{
    BOOL _getDetailResult; // +0x8
    NSString * _tid; // +0x10
    NSString * _invalideMsg; // +0x18
    double _getDetailTime; // +0x20
}
- (id)tid;
- (void)setTid:(id)arg1;
- (BOOL)getDetailResult;
- (void)setGetDetailResult:(BOOL)arg1;
- (id)invalideMsg;
- (void)setInvalideMsg:(id)arg1;
- (double)getDetailTime;
- (void)setGetDetailTime:(double)arg1;
- (void).cxx_destruct;
@end
