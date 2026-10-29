@interface WCSnsABTestActionItem : NSObject
{
    NSString * showTitleFormat; // +0x8
    BOOL hasUserNameKey; // +0x10
    BOOL hasSexKey; // +0x11
    NSString * maleKey; // +0x18
    NSString * femailKey; // +0x20
    NSString * richTextKey; // +0x28
    WCSnsABTestTitle * abtestTitle; // +0x30
    int actionType; // +0x38
    NSString * actionIndex; // +0x40
    NSString * jumpUrl; // +0x48
    NSString * nextTipIndex; // +0x50
}
- (id)init;
- (id)description;
- (long long)compareActionItemAscending:(id)arg1;
- (int)actionType;
- (void)setActionType:(int)arg1;
- (id)actionIndex;
- (void)setActionIndex:(id)arg1;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg1;
- (id)nextTipIndex;
- (void)setNextTipIndex:(id)arg1;
- (id)abtestTitle;
- (void)setAbtestTitle:(id)arg1;
- (void).cxx_destruct;
@end
