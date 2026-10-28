@interface WCAdSliderCardReportModel : WCAdChannelReportExtendInfoModel
{
    int _sliderCardStyle; // +0x8
    unsigned int _slideJumpCount; // +0xc
    NSMutableArray * _reportItemList; // +0x10
}
- (id)reportItemList;
- (void)setReportItemList:(id)arg1;
- (int)sliderCardStyle;
- (void)setSliderCardStyle:(int)arg1;
- (unsigned int)slideJumpCount;
- (void)setSlideJumpCount:(unsigned int)arg1;
- (void).cxx_destruct;
@end
