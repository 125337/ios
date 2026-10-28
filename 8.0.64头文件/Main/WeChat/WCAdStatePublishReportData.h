@interface WCAdStatePublishReportData : NSObject
{
    int _scene; // +0x8
    WCAdvertiseInfo * _adInfo; // +0x10
    NSString * _snsId; // +0x18
}
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)snsId;
- (void)setSnsId:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end
