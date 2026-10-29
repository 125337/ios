@interface WCAdChannelReportModel : NSObject
{
    int _scene; // +0x8
    WCAdChannelReportExtendInfoModel * _extInfo; // +0x10
    NSString * _snsid; // +0x18
    NSString * _uxinfo; // +0x20
    NSString * _adExtInfo; // +0x28
    NSString * _aid; // +0x30
}
- (id)initWithHeader:(id)arg1;
- (id)extInfo;
- (void)setExtInfo:(id)arg1;
- (id)snsid;
- (void)setSnsid:(id)arg1;
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)adExtInfo;
- (void)setAdExtInfo:(id)arg1;
- (id)aid;
- (void)setAid:(id)arg1;
- (int)scene;
- (void)setScene:(int)arg1;
- (void).cxx_destruct;
@end

