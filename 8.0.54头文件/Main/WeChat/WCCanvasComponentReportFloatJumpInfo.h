@interface WCCanvasComponentReportFloatJumpInfo : WCCanvasComponentReportBasicActionInfo
{
    unsigned int _autoJumpCount; // +0x24
    unsigned int _swipeJumpCount; // +0x28
}
- (id)dictionaryRepresentation;
- (unsigned int)autoJumpCount;
- (void)setAutoJumpCount:(unsigned int)arg1;
- (unsigned int)swipeJumpCount;
- (void)setSwipeJumpCount:(unsigned int)arg1;
@end

