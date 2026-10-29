@interface MMMusicListMgr : NSObject <WCFacadeExt>
{
    SnsMusicStorage * m_snsMusicStorage; // +0x8
    NSMutableArray * m_musicInfoArr; // +0x10
    long long m_curMusicListSource; // +0x18
    BOOL m_isSnsMusicDelMatters; // +0x20
    NSString * m_curUserName; // +0x28
}
- (id)init;
- (void)updateMusicInfoArray;
- (void)removeDuplicateItems;
- (BOOL)isMusicStorageContainsItem:(id)arg1;
- (void)loadSnsMusicStorage;
- (void)addHomePageMusicItems;
- (void)saveSnsMusicStorage;
- (id)getSnsMusicStorage;
- (void)deleteSnsMusicItem:(id)arg1;
- (void)clearSnsMusicStorageIfNeed;
- (void)updateMusicListBySource:(long long)arg1;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (long long)getMusicListSource;
- (id)m_musicInfoArr;
- (void)setM_musicInfoArr:(id)arg1;
- (void).cxx_destruct;
@end
