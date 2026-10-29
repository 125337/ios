@interface WCFinderFeedContentReportModel : NSObject
{
    BOOL _hasShowInHotArea; // +0x8
    NSMutableArray * _jumpInfoReportList; // +0x10
    PicStats * _picStat; // +0x18
    NSString * _enterAudioSid; // +0x20
}
- (id)jumpInfoReportList;
- (BOOL)hasShowInHotArea;
- (void)setHasShowInHotArea:(BOOL)arg1;
- (void)setJumpInfoReportList:(id)arg1;
- (id)picStat;
- (void)setPicStat:(id)arg1;
- (id)enterAudioSid;
- (void)setEnterAudioSid:(id)arg1;
- (void).cxx_destruct;
@end
