@interface MMFinderLivePaidConnectMicAnchorSetting : NSObject <NSCopying>
{
    BOOL _bidEnabled; // +0x8
    BOOL _focusModeOn; // +0x9
    unsigned int _bidGap; // +0xc
    unsigned long long _connectDuration; // +0x10
    unsigned long long _disconnectMethod; // +0x18
    unsigned long long _connectPrice; // +0x20
    unsigned long long _bidPrice; // +0x28
    NSString * _focusUserId; // +0x30
    NSDictionary * _focusUserIndices; // +0x38
    unsigned long long _settingSeq; // +0x40
}
+ (id)fromPurchaseMicSetting:(id)arg1;
- (id)toPurchaseMicSetting;
- (id)init;
- (id)copy;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)settingDescription;
- (unsigned long long)connectDuration;
- (void)setConnectDuration:(unsigned long long)arg1;
- (unsigned long long)disconnectMethod;
- (void)setDisconnectMethod:(unsigned long long)arg1;
- (unsigned long long)connectPrice;
- (void)setConnectPrice:(unsigned long long)arg1;
- (BOOL)bidEnabled;
- (void)setBidEnabled:(BOOL)arg1;
- (unsigned long long)bidPrice;
- (void)setBidPrice:(unsigned long long)arg1;
- (BOOL)focusModeOn;
- (void)setFocusModeOn:(BOOL)arg1;
- (id)focusUserId;
- (void)setFocusUserId:(id)arg1;
- (id)focusUserIndices;
- (void)setFocusUserIndices:(id)arg1;
- (unsigned int)bidGap;
- (void)setBidGap:(unsigned int)arg1;
- (unsigned long long)settingSeq;
- (void)setSettingSeq:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

