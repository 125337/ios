@interface MMWebBrandLiveCustomModel : NSObject
{
    int _bizType; // +0x8
    NSString * _brandUsername; // +0x10
    NSString * _reportStr; // +0x18
    NSString * _byPassInfo; // +0x20
}
- (id)brandUsername;
- (void)setBrandUsername:(id)arg1;
- (id)reportStr;
- (void)setReportStr:(id)arg1;
- (int)bizType;
- (void)setBizType:(int)arg1;
- (id)byPassInfo;
- (void)setByPassInfo:(id)arg1;
- (void).cxx_destruct;
@end

