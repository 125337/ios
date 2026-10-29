@interface WAAppTaskTransitInfo : NSObject
{
    NSString * _adUxInfo; // +0x8
    NSString * _commonUxInfo; // +0x10
    NSString * _minitoolCardInfo; // +0x18
    NSString * _traceId; // +0x20
}
- (id)description;
- (void)setAdUxInfo:(id)arg1;
- (id)adUxInfo;
- (id)commonUxInfo;
- (void)setCommonUxInfo:(id)arg1;
- (id)minitoolCardInfo;
- (void)setMinitoolCardInfo:(id)arg1;
- (id)traceId;
- (void)setTraceId:(id)arg1;
- (void).cxx_destruct;
@end
