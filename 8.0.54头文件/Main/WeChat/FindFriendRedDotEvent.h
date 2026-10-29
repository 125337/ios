@interface FindFriendRedDotEvent : NSObject
{
    unsigned long long _type; // +0x8
    NSString * _path; // +0x10
    WCFinderRedDotCtrlInfo * _existControlInfo; // +0x18
    WCFinderRedDotCtrlInfo * _controlInfo; // +0x20
    WCFinderRedDotTipsShowInfo * _existShowInfo; // +0x28
    WCFinderRedDotTipsShowInfo * _showInfo; // +0x30
}
- (unsigned long long)type;
- (void)setType:(unsigned long long)arg1;
- (id)path;
- (void)setPath:(id)arg1;
- (id)existControlInfo;
- (void)setExistControlInfo:(id)arg1;
- (id)controlInfo;
- (void)setControlInfo:(id)arg1;
- (id)existShowInfo;
- (void)setExistShowInfo:(id)arg1;
- (id)showInfo;
- (void)setShowInfo:(id)arg1;
- (void).cxx_destruct;
@end

