@interface MMFinderLiveKTVBoardItem : NSObject
{
    BOOL _isUpdated; // +0x8
    BOOL _hasNext; // +0x9
    BOOL _hasPrevious; // +0xa
    BOOL _isDefault; // +0xb
    unsigned int _boardType; // +0xc
    NSString * _boardName; // +0x10
    NSData * _lastBuffer; // +0x18
    NSData * _reverseLastBuffer; // +0x20
    NSMutableArray * _songItems; // +0x28
    NSMutableArray * _subBoardItems; // +0x30
    MMFinderLiveKTVSubBoardItem * _selectedSubBoardItem; // +0x38
}
- (unsigned int)boardType;
- (void)setBoardType:(unsigned int)arg1;
- (id)boardName;
- (void)setBoardName:(id)arg1;
- (BOOL)isUpdated;
- (void)setIsUpdated:(BOOL)arg1;
- (BOOL)hasNext;
- (void)setHasNext:(BOOL)arg1;
- (BOOL)hasPrevious;
- (void)setHasPrevious:(BOOL)arg1;
- (id)lastBuffer;
- (void)setLastBuffer:(id)arg1;
- (id)reverseLastBuffer;
- (void)setReverseLastBuffer:(id)arg1;
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
