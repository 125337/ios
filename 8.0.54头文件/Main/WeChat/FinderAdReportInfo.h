@interface FinderAdReportInfo : NSObject
{
    NSString * _uxinfo; // +0x8
    NSString * _snsid; // +0x10
    long long _scene; // +0x18
}
- (id)uxinfo;
- (void)setUxinfo:(id)arg1;
- (id)snsid;
- (void)setSnsid:(id)arg1;
- (long long)scene;
- (void)setScene:(long long)arg1;
- (void).cxx_destruct;
@end

