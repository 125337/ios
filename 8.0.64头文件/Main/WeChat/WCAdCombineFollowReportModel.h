@interface WCAdCombineFollowReportModel : WCAdChannelReportExtendInfoModel
{
    int _brandOpenType; // +0x8
    int _brandResult; // +0xc
    int _finderResult; // +0x10
    int _source; // +0x14
    NSString * _brandUsername; // +0x18
    NSString * _finderUsername; // +0x20
    NSString * _canvasDynamicInfo; // +0x28
}
- (id)brandUsername;
- (void)setBrandUsername:(id)arg1;
- (int)brandOpenType;
- (void)setBrandOpenType:(int)arg1;
- (id)finderUsername;
- (void)setFinderUsername:(id)arg1;
- (int)brandResult;
- (void)setBrandResult:(int)arg1;
- (int)finderResult;
- (void)setFinderResult:(int)arg1;
- (int)source;
- (void)setSource:(int)arg1;
- (id)canvasDynamicInfo;
- (void)setCanvasDynamicInfo:(id)arg1;
- (void).cxx_destruct;
@end
