@interface WCAdQuicklyAddBrandResultModel : WCAdChannelReportExtendInfoModel
{
    int _enterType; // +0x8
    int _result; // +0xc
    NSString * _brandUsername; // +0x10
    NSString * _canvasDynamicInfo; // +0x18
}
- (int)enterType;
- (void)setEnterType:(int)arg1;
- (int)result;
- (void)setResult:(int)arg1;
- (id)brandUsername;
- (void)setBrandUsername:(id)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (void).cxx_destruct;
@end
