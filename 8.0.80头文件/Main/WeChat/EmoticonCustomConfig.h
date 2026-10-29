@interface EmoticonCustomConfig : NSObject
{
    BOOL _newCustomManageView; // +0x8
    BOOL _liteAppPersonalCenter; // +0x9
    BOOL _showPostEntrance; // +0xa
    BOOL _isDevelopWeapp; // +0xb
    unsigned long long _postEntranceJumpTarget; // +0x10
}
- (id)init;
- (BOOL)newCustomManageView;
- (void)setNewCustomManageView:(BOOL)arg1;
- (BOOL)liteAppPersonalCenter;
- (void)setLiteAppPersonalCenter:(BOOL)arg1;
- (BOOL)showPostEntrance;
- (void)setShowPostEntrance:(BOOL)arg1;
- (unsigned long long)postEntranceJumpTarget;
- (void)setPostEntranceJumpTarget:(unsigned long long)arg1;
- (BOOL)isDevelopWeapp;
- (void)setIsDevelopWeapp:(BOOL)arg1;
@end
