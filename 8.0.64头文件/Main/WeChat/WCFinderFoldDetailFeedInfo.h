@interface WCFinderFoldDetailFeedInfo : NSObject
{
    NSString * _feedTid; // +0x8
    unsigned long long _exposeTimeStamp; // +0x10
    unsigned long long _clickTimeStamp; // +0x18
}
- (id)feedTid;
- (void)setFeedTid:(id)arg1;
- (unsigned long long)exposeTimeStamp;
- (void)setExposeTimeStamp:(unsigned long long)arg1;
- (unsigned long long)clickTimeStamp;
- (void)setClickTimeStamp:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
