@interface BSTLExptConfig : NSObject
{
    BOOL _showDynamicCard; // +0x8
    BOOL _showDynamicCardToast; // +0x9
    unsigned int _exptShowOption; // +0xc
    unsigned long long _resortSceneBitSwitch; // +0x10
}
- (BOOL)isExptNotShowAd;
- (BOOL)isExptNotShowRecCard;
- (BOOL)isExptNotShowFinderLiveBar;
- (BOOL)isExptNotShowRecoFlow;
- (id)getExptExcludeMsgTypeArr;
- (BOOL)isEqualToConfig:(id)arg1;
- (id)description;
- (unsigned int)exptShowOption;
- (void)setExptShowOption:(unsigned int)arg1;
- (BOOL)showDynamicCard;
- (void)setShowDynamicCard:(BOOL)arg1;
- (BOOL)showDynamicCardToast;
- (void)setShowDynamicCardToast:(BOOL)arg1;
- (unsigned long long)resortSceneBitSwitch;
- (void)setResortSceneBitSwitch:(unsigned long long)arg1;
@end
