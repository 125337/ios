@interface WCAdCanvasShareReportModel : WCAdChannelReportExtendInfoModel
{
    int _reportType; // +0x8
    int _shareScene; // +0xc
    int _canvasType; // +0x10
}
- (int)reportType;
- (void)setReportType:(int)arg1;
- (int)shareScene;
- (void)setShareScene:(int)arg1;
- (int)canvasType;
- (void)setCanvasType:(int)arg1;
@end
