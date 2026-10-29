@interface WCFinderPushProfileViewParams : NSObject
{
    int _reportCommentScene; // +0x8
    int _enterType; // +0xc
    int _selectedTab; // +0x10
    NSString * _lastSeenTid; // +0x18
    NSString * _redPacketLinkUrl; // +0x20
    NSString * _redPacketCoverId; // +0x28
    long long _redPacketJumpFrom; // +0x30
    NSDictionary * _businessByPass; // +0x38
    unsigned long long _enterActionType; // +0x40
}
- (id)init;
- (id)lastSeenTid;
- (void)setLastSeenTid:(id)arg1;
- (int)reportCommentScene;
- (void)setReportCommentScene:(int)arg1;
- (int)enterType;
- (void)setEnterType:(int)arg1;
- (id)redPacketLinkUrl;
- (void)setRedPacketLinkUrl:(id)arg1;
- (id)redPacketCoverId;
- (void)setRedPacketCoverId:(id)arg1;
- (long long)redPacketJumpFrom;
- (void)setRedPacketJumpFrom:(long long)arg1;
- (int)selectedTab;
- (void)setSelectedTab:(int)arg1;
- (id)businessByPass;
- (void)setBusinessByPass:(id)arg1;
- (unsigned long long)enterActionType;
- (void)setEnterActionType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
