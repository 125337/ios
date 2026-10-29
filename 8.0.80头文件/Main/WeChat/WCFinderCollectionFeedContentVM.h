@interface WCFinderCollectionFeedContentVM : WCFinderFeedContentVM
{
    BOOL _displayAsFeedCard; // +0x8
    FinderCollectionInfo * _collectionInfo; // +0x10
    WCFinderContact * _contact; // +0x18
    FinderHistoryCollectionInfo * _historyInfo; // +0x20
    unsigned long long _lastPlayTime; // +0x28
    WCFinderFavoriteCollectionFlowConfiguration * _cellConfig; // +0x30
    NSString * _pTid; // +0x38
}
+ (id)feedArrayCopyVMFromExistVM:(id)arg1 scene:(int)arg2;
- (id)initWithCollectionInfo:(id)arg1 scene:(int)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)contentTid;
- (BOOL)existMediaContent;
- (id)makeCellConfig;
- (BOOL)displayAsFeedCard;
- (void)setDisplayAsFeedCard:(BOOL)arg1;
- (id)collectionInfo;
- (void)setCollectionInfo:(id)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)historyInfo;
- (void)setHistoryInfo:(id)arg1;
- (unsigned long long)lastPlayTime;
- (void)setLastPlayTime:(unsigned long long)arg1;
- (id)cellConfig;
- (void)setCellConfig:(id)arg1;
- (id)pTid;
- (void)setPTid:(id)arg1;
- (void).cxx_destruct;
@end
