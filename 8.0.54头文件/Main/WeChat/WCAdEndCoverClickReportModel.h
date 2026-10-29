@interface WCAdEndCoverClickReportModel : WCAdChannelReportExtendInfoModel
{
    int _type; // +0x8
    int _clickCount; // +0xc
}
- (int)type;
- (void)setType:(int)arg1;
- (int)clickCount;
- (void)setClickCount:(int)arg1;
@end

