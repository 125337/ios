@interface WCAdDynamicCacheInfo : NSObject <NSCoding>
{
    BOOL _adWeAppRelievedBuyFlag; // +0x8
    BOOL _adWeAppFlagshipFlag; // +0x9
    int _adLiveStatus; // +0xc
    WCADChainStrengthenInfo * _adChainStrengthenInfo; // +0x10
    WCAdFinderTopicInfo * _adFinderTopicInfo; // +0x18
    NSString * _adContinuousLikeNumberTitle; // +0x20
    NSString * _adFireworkCheerNumberTitle; // +0x28
    NSString * _adHighlightTagNumberTitle; // +0x30
    NSString * _adStateSettingBarNumberTitle; // +0x38
    NSString * _adHotDiscussedBarNumberTitle; // +0x40
    NSString * _randomPickInvolvedCountInfo; // +0x48
    NSString * _randomPickCollectedCountInfo; // +0x50
    WCAdDynamicFeedDynamicInfluentDataInfo * _adFinderLiveInfluentData; // +0x58
    NSString * _adRockPaperScissorsCountInfo; // +0x60
    NSString * _adRandomSelectCardCountInfo; // +0x68
    WCAdDynamicFeedDynamicInfluentDataInfo * _adDynamicFeedUpdateData; // +0x70
}
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchDynamicInfluentDataInfo;
- (int)adLiveStatus;
- (void)setAdLiveStatus:(int)arg1;
- (id)adChainStrengthenInfo;
- (void)setAdChainStrengthenInfo:(id)arg1;
- (id)adFinderTopicInfo;
- (void)setAdFinderTopicInfo:(id)arg1;
- (BOOL)adWeAppRelievedBuyFlag;
- (void)setAdWeAppRelievedBuyFlag:(BOOL)arg1;
- (BOOL)adWeAppFlagshipFlag;
- (void)setAdWeAppFlagshipFlag:(BOOL)arg1;
- (id)adContinuousLikeNumberTitle;
- (void)setAdContinuousLikeNumberTitle:(id)arg1;
- (id)adFireworkCheerNumberTitle;
- (void)setAdFireworkCheerNumberTitle:(id)arg1;
- (id)adHighlightTagNumberTitle;
- (void)setAdHighlightTagNumberTitle:(id)arg1;
- (id)adStateSettingBarNumberTitle;
- (void)setAdStateSettingBarNumberTitle:(id)arg1;
- (id)adHotDiscussedBarNumberTitle;
- (void)setAdHotDiscussedBarNumberTitle:(id)arg1;
- (id)randomPickInvolvedCountInfo;
- (void)setRandomPickInvolvedCountInfo:(id)arg1;
- (id)randomPickCollectedCountInfo;
- (void)setRandomPickCollectedCountInfo:(id)arg1;
- (id)adFinderLiveInfluentData;
- (void)setAdFinderLiveInfluentData:(id)arg1;
- (id)adRockPaperScissorsCountInfo;
- (void)setAdRockPaperScissorsCountInfo:(id)arg1;
- (id)adRandomSelectCardCountInfo;
- (void)setAdRandomSelectCardCountInfo:(id)arg1;
- (id)adDynamicFeedUpdateData;
- (void)setAdDynamicFeedUpdateData:(id)arg1;
- (void).cxx_destruct;
@end
