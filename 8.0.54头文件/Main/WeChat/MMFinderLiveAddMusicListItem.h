@interface MMFinderLiveAddMusicListItem : NSObject
{
    BOOL _removeOnNil; // +0x8
    unsigned int _tabType; // +0xc
    FinderLiveGetMusicTabListResponse * _response; // +0x10
    NSString * _listName; // +0x18
}
- (BOOL)shouldShow;
- (id)response;
- (void)setResponse:(id)arg1;
- (unsigned int)tabType;
- (void)setTabType:(unsigned int)arg1;
- (id)listName;
- (void)setListName:(id)arg1;
- (BOOL)removeOnNil;
- (void)setRemoveOnNil:(BOOL)arg1;
- (void).cxx_destruct;
@end

