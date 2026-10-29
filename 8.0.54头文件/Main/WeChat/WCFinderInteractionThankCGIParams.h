@interface WCFinderInteractionThankCGIParams : NSObject
{
    int _thankScene; // +0x8
    long long _interactionType; // +0x10
    unsigned long long _mentionID; // +0x18
    NSString * _feedTid; // +0x20
}
- (long long)interactionType;
- (void)setInteractionType:(long long)arg1;
- (unsigned long long)mentionID;
- (void)setMentionID:(unsigned long long)arg1;
- (id)feedTid;
- (void)setFeedTid:(id)arg1;
- (int)thankScene;
- (void)setThankScene:(int)arg1;
- (void).cxx_destruct;
@end

