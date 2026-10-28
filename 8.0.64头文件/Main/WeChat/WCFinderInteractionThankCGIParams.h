@interface WCFinderInteractionThankCGIParams : NSObject
{
    int _interactionType; // +0x8
    int _thankScene; // +0xc
    unsigned long long _mentionID; // +0x10
    NSString * _feedTid; // +0x18
    FinderShareUserInfo * _shareUserInfo; // +0x20
}
- (int)interactionType;
- (void)setInteractionType:(int)arg1;
- (int)thankScene;
- (void)setThankScene:(int)arg1;
- (unsigned long long)mentionID;
- (void)setMentionID:(unsigned long long)arg1;
- (id)feedTid;
- (void)setFeedTid:(id)arg1;
- (id)shareUserInfo;
- (void)setShareUserInfo:(id)arg1;
- (void).cxx_destruct;
@end
