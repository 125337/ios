@interface WCWebImageSourceFinderWrapper : NSObject
{
    NSString * _feedId; // +0x8
    NSString * _feedNonceId; // +0x10
    unsigned long long _reportScene; // +0x18
    NSDictionary * _extInfo; // +0x20
}
- (id)initWithDictionary:(id)arg1;
- (id)feedId;
- (void)setFeedId:(id)arg1;
- (id)feedNonceId;
- (void)setFeedNonceId:(id)arg1;
- (unsigned long long)reportScene;
- (void)setReportScene:(unsigned long long)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (void).cxx_destruct;
@end
