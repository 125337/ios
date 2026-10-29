@interface BrandTLExptConfig : NSObject
{
    BOOL _showDynamicCard; // +0x8
    BOOL _showDynamicCardToast; // +0x9
    BOOL _isControlGroup; // +0xa
    BOOL _enablePOIPrefetch; // +0xb
    unsigned int _renderMode; // +0xc
    unsigned int _dataMode; // +0x10
    unsigned int _exptShowOption; // +0x14
    unsigned long long _resortSceneBitSwitch; // +0x18
    long long _enterTimeMs; // +0x20
}
- (BOOL)isExptOrControlGroup;
- (BOOL)isExptNotShowAd;
- (BOOL)isExptNotShowRecCard;
- (BOOL)isExptNotShowFinderLiveBar;
- (BOOL)isExptNotShowRecoFlow;
- (id)getExptExcludeMsgTypeArr;
- (BOOL)isEqualToConfig:(id)arg1;
- (id)description;
- (unsigned int)renderMode;
- (void)setRenderMode:(unsigned int)arg1;
- (unsigned int)dataMode;
- (void)setDataMode:(unsigned int)arg1;
- (unsigned int)exptShowOption;
- (void)setExptShowOption:(unsigned int)arg1;
- (BOOL)showDynamicCard;
- (void)setShowDynamicCard:(BOOL)arg1;
- (BOOL)showDynamicCardToast;
- (void)setShowDynamicCardToast:(BOOL)arg1;
- (BOOL)isControlGroup;
- (void)setIsControlGroup:(BOOL)arg1;
- (unsigned long long)resortSceneBitSwitch;
- (void)setResortSceneBitSwitch:(unsigned long long)arg1;
- (BOOL)enablePOIPrefetch;
- (void)setEnablePOIPrefetch:(BOOL)arg1;
- (long long)enterTimeMs;
- (void)setEnterTimeMs:(long long)arg1;
@end
