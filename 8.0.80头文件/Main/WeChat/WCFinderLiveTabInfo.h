@interface WCFinderLiveTabInfo : NSObject <PBCoding, NSCopying>
{
    BOOL _prefechThisTab; // +0x8
    BOOL _prefechNextTab; // +0x9
    BOOL _prefechPreTab; // +0xa
    BOOL _playVoice; // +0xb
    unsigned int _tabId; // +0xc
    unsigned int _tabScene; // +0x10
    NSString * _tabName; // +0x18
    NSMutableArray * _subTabList; // +0x20
    unsigned long long _objectId; // +0x28
    NSString * _iconUrl; // +0x30
    NSString * _iconWording; // +0x38
    NSString * _liveSquareIconUrl; // +0x40
    NSMutableArray * _liveSquareWordingColor; // +0x48
}
+ (void)PBArrayAdd_tabId;
+ (void)PBArrayAdd_tabName;
+ (void)PBArrayAdd_prefechThisTab;
+ (void)PBArrayAdd_prefechNextTab;
+ (void)PBArrayAdd_prefechPreTab;
+ (void)PBArrayAdd_playVoice;
+ (void)PBArrayAdd_subTabList;
+ (void)PBArrayAdd_tabScene;
+ (void)PBArrayAdd_objectId;
+ (void)PBArrayAdd_iconUrl;
+ (void)PBArrayAdd_iconWording;
+ (void)PBArrayAdd_liveSquareIconUrl;
+ (void)PBArrayAdd_liveSquareWordingColor;
+ (void)initialize;
+ (id)finderLiveTabInfoFrom:(id)arg1;
- (id)getPBPropertyTable;
- (id)initWithTabId:(unsigned long long)arg1;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)genFinderLiveTabInfo;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)tabId;
- (void)setTabId:(unsigned int)arg1;
- (id)tabName;
- (void)setTabName:(id)arg1;
- (BOOL)prefechThisTab;
- (void)setPrefechThisTab:(BOOL)arg1;
- (BOOL)prefechNextTab;
- (void)setPrefechNextTab:(BOOL)arg1;
- (BOOL)prefechPreTab;
- (void)setPrefechPreTab:(BOOL)arg1;
- (BOOL)playVoice;
- (void)setPlayVoice:(BOOL)arg1;
- (id)subTabList;
- (void)setSubTabList:(id)arg1;
- (unsigned int)tabScene;
- (void)setTabScene:(unsigned int)arg1;
- (unsigned long long)objectId;
- (void)setObjectId:(unsigned long long)arg1;
- (id)iconUrl;
- (void)setIconUrl:(id)arg1;
- (id)iconWording;
- (void)setIconWording:(id)arg1;
- (id)liveSquareIconUrl;
- (void)setLiveSquareIconUrl:(id)arg1;
- (id)liveSquareWordingColor;
- (void)setLiveSquareWordingColor:(id)arg1;
- (void).cxx_destruct;
@end
