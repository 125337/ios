@interface WCSNSPlayerReporter : WCPlayerReporter
{
    WCMediaItem * _mediaWrap; // +0x8
    NSString * _reqFlag; // +0x10
    NSString * _respFlag; // +0x18
}
- (id)getMD5PostName;
- (void)customReport;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)reqFlag;
- (void)setReqFlag:(id)arg1;
- (id)respFlag;
- (void)setRespFlag:(id)arg1;
- (void).cxx_destruct;
@end

