@interface WCFinderProfileOverviewCacheItem : NSObject <PBCoding>
{
    NSArray * _layouts; // +0x8
    NSMutableArray * _showAllButtonSections; // +0x10
    NSArray * _feedTids; // +0x18
    unsigned long long _collectionCount; // +0x20
    FinderCollectionListInfo * _collectionInfo; // +0x28
    unsigned long long _liveFeedCount; // +0x30
    NSArray * _liveFeedTids; // +0x38
    unsigned long long _templateCnt; // +0x40
    NSArray * _templateInfos; // +0x48
    WCFinderProfileOverviewMusicCache * _musicCache; // +0x50
    WCFinderProfileAudioSectionCache * _audioCache; // +0x58
    unsigned long long _newlifeCnt; // +0x60
    NSArray * _newlifeFeedIds; // +0x68
    WCFinderProfileMemberShipCache * _memberShip; // +0x70
    unsigned long long _qaCount; // +0x78
    FinderLiteAppParam * _qaLiteApp; // +0x80
    unsigned long long _paidCollectionCount; // +0x88
    NSArray * _paidCollectionList; // +0x90
    NSData * _data; // +0x98
    id _parsedObj; // +0xa0
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
+ (void)initialize;
- (id)getPBPropertyTable;
- (id)layouts;
- (void)setLayouts:(id)arg1;
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
- (id)data;
- (void)setData:(id)arg1;
- (id)parsedObj;
- (void)setParsedObj:(id)arg1;
- (void).cxx_destruct;
@end

