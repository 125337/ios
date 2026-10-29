@interface WSTabRedDotInfo : NSObject
{
    long long _category; // +0x8
    WCFinderRedDotCtrlInfo * _contentRedDotCtrlInfo; // +0x10
    WCFinderRedDotTipsShowInfo * _contentRedDotShowInfo; // +0x18
    WCFinderRedDotCtrlInfo * _numRedDotCtrlInfo; // +0x20
    WCFinderRedDotTipsShowInfo * _numRedDotShowInfo; // +0x28
    NSNumber * _numRedDotCount; // +0x30
}
- (id)init;
- (id)description;
- (id)getContentRedDotReportParams;
- (id)getNumRedDotReportParams;
- (id)checkToReturnContentRedDotReportInfo;
- (id)checkToReturnNumRedDotReportInfo;
- (id)checkToReturnContentRedDotReportString;
- (id)checkToReturnNumRedDotReportString;
- (long long)category;
- (void)setCategory:(long long)arg1;
- (id)contentRedDotCtrlInfo;
- (void)setContentRedDotCtrlInfo:(id)arg1;
- (id)contentRedDotShowInfo;
- (void)setContentRedDotShowInfo:(id)arg1;
- (id)numRedDotCtrlInfo;
- (void)setNumRedDotCtrlInfo:(id)arg1;
- (id)numRedDotShowInfo;
- (void)setNumRedDotShowInfo:(id)arg1;
- (id)numRedDotCount;
- (void)setNumRedDotCount:(id)arg1;
- (void).cxx_destruct;
@end

