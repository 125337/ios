@interface MMFinderLiveAddMusicListRequestItem : NSObject
{
    BOOL _removeOnNil; // +0x8
    unsigned int _tabType; // +0xc
    NSString * _listName; // +0x10
}
- (id)listName;
- (void)setListName:(id)arg1;
- (unsigned int)tabType;
- (void)setTabType:(unsigned int)arg1;
- (BOOL)removeOnNil;
- (void)setRemoveOnNil:(BOOL)arg1;
- (void).cxx_destruct;
@end

