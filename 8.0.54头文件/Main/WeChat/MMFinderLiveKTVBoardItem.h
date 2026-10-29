@interface MMFinderLiveKTVBoardItem : NSObject
{
    BOOL _isUpdated; // +0x8
    BOOL _hasNext; // +0x9
    BOOL _isDefault; // +0xa
    unsigned int _boardType; // +0xc
    NSString * _boardName; // +0x10
    NSData * _lastBuffer; // +0x18
    NSMutableArray * _songItems; // +0x20
    NSMutableArray * _subBoardItems; // +0x28
    MMFinderLiveKTVSubBoardItem * _selectedSubBoardItem; // +0x30
}
- (unsigned int)boardType;
- (void)setBoardType:(unsigned int)arg1;
- (id)boardName;
- (void)setBoardName:(id)arg1;
- (BOOL)isUpdated;
- (void)setIsUpdated:(BOOL)arg1;
- (BOOL)hasNext;
- (void)setHasNext:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)songItems;
- (void)setSongItems:(id)arg1;
- (BOOL)isDefault;
- (void)setIsDefault:(BOOL)arg1;
- (id)subBoardItems;
- (void)setSubBoardItems:(id)arg1;
- (id)selectedSubBoardItem;
- (void)setSelectedSubBoardItem:(id)arg1;
- (void).cxx_destruct;
@end

