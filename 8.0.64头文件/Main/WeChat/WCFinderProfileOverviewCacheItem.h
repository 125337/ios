@interface WCFinderProfileOverviewCacheItem : NSObject <PBCoding>
{
    NSArray * _layouts; // +0x8
    NSArray * _sectionInfoList; // +0x10
    NSMutableArray * _showAllButtonSections; // +0x18
    NSArray * _feedTids; // +0x20
    unsigned long long _collectionCount; // +0x28
    FinderCollectionListInfo * _collectionInfo; // +0x30
    unsigned long long _liveFeedCount; // +0x38
    NSArray * _liveFeedTids; // +0x40
    unsigned long long _templateCnt; // +0x48
    NSArray * _templateInfos; // +0x50
    WCFinderProfileOverviewMusicCache * _musicCache; // +0x58
    WCFinderProfileAudioSectionCache * _audioCache; // +0x60
    unsigned long long _newlifeCnt; // +0x68
    NSArray * _newlifeFeedIds; // +0x70
    WCFinderProfileMemberShipCache * _memberShip; // +0x78
    unsigned long long _qaCount; // +0x80
    FinderLiteAppParam * _qaLiteApp; // +0x88
    unsigned long long _paidCollectionCount; // +0x90
    NSArray * _paidCollectionList; // +0x98
    WCFinderProfileShopSectionCache * _shopCache; // +0xa0
    unsigned long long _nativeDramaCount; // +0xa8
    NSArray * _nativeDramaInfos; // +0xb0
    NSData * _data; // +0xb8
    id _parsedObj; // +0xc0
}
+ (void)PBArrayAdd_layouts;
+ (void)PBArrayAdd_feedTids;
+ (void)PBArrayAdd_collectionCount;
+ (void)PBArrayAdd_collectionInfo;
+ (void)PBArrayAdd_liveFeedCount;
+ (void)PBArrayAdd_liveFeedTids;
+ (void)PBArrayAdd_templateCnt;
+ (void)PBArrayAdd_templateInfos;
+ (void)PBArrayAdd_musicCache;
+ (void)PBArrayAdd_audioCache;
+ (void)PBArrayAdd_newlifeCnt;
+ (void)PBArrayAdd_newlifeFeedIds;
+ (void)PBArrayAdd_memberShip;
+ (void)PBArrayAdd_qaCount;
+ (void)PBArrayAdd_showAllButtonSections;
+ (void)PBArrayAdd_paidCollectionCount;
+ (void)PBArrayAdd_paidCollectionList;
+ (void)PBArrayAdd_sectionInfoList;
+ (void)PBArrayAdd_shopCache;
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)layouts;
- (void)setLayouts:(id)arg1;
- (id)sectionInfoList;
- (void)setSectionInfoList:(id)arg1;
- (id)showAllButtonSections;
- (void)setShowAllButtonSections:(id)arg1;
- (id)feedTids;
- (void)setFeedTids:(id)arg1;
- (unsigned long long)collectionCount;
- (void)setCollectionCount:(unsigned long long)arg1;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (unsigned long long)liveFeedCount;
- (void)setLiveFeedCount:(unsigned long long)arg1;
- (id)liveFeedTids;
- (void)setLiveFeedTids:(id)arg1;
- (unsigned long long)templateCnt;
- (void)setTemplateCnt:(unsigned long long)arg1;
- (id)templateInfos;
- (void)setTemplateInfos:(id)arg1;
- (id)musicCache;
- (void)setMusicCache:(id)arg1;
- (id)audioCache;
- (void)setAudioCache:(id)arg1;
- (unsigned long long)newlifeCnt;
- (void)setNewlifeCnt:(unsigned long long)arg1;
- (id)newlifeFeedIds;
- (void)setNewlifeFeedIds:(id)arg1;
- (id)memberShip;
- (void)setMemberShip:(id)arg1;
- (unsigned long long)qaCount;
- (void)setQaCount:(unsigned long long)arg1;
- (id)qaLiteApp;
- (void)setQaLiteApp:(id)arg1;
- (unsigned long long)paidCollectionCount;
- (void)setPaidCollectionCount:(unsigned long long)arg1;
- (id)paidCollectionList;
- (void)setPaidCollectionList:(id)arg1;
- (id)shopCache;
- (void)setShopCache:(id)arg1;
- (unsigned long long)nativeDramaCount;
- (void)setNativeDramaCount:(unsigned long long)arg1;
- (id)nativeDramaInfos;
- (void)setNativeDramaInfos:(id)arg1;
- (id)data;
- (void)setData:(id)arg1;
- (id)parsedObj;
- (void)setParsedObj:(id)arg1;
- (void).cxx_destruct;
@end
