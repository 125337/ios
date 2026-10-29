@interface WCAdChannelReportHeaderModel : NSObject
{
    int _scene; // +0x8
    NSString * _snsid; // +0x10
    NSString * _uxinfo; // +0x18
    NSString * _adExtInfo; // +0x20
    NSString * _aid; // +0x28
}
+ (id)genHeader:(id)arg1 snsid:(id)arg2 scene:(int)arg3;
+ (id)genHeader:(id)arg1 uxinfo:(id)arg2 adExtInfo:(id)arg3 aid:(id)arg4 scene:(int)arg5;
+ (id)initInner:(id)arg1 snsid:(id)arg2 scene:(int)arg3;
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

