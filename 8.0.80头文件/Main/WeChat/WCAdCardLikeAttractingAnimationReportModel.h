@interface WCAdCardLikeAttractingAnimationReportModel : WCAdChannelReportExtendInfoModel
{
    unsigned int _playCount; // +0x8
    int _errorCode; // +0xc
}
- (unsigned int)playCount;
- (void)setPlayCount:(unsigned int)arg1;
- (int)errorCode;
- (void)setErrorCode:(int)arg1;
@end
