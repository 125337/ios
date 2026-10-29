@interface WANickNameAndHeaderAuthViewModel : WAAuthPageSheetViewModel
{
    NSMutableArray * _avatarList; // +0x8
    id /* block */ _scrollToAvatarAction; // +0x10
    double _maxListHeight; // +0x18
}
- (id)avatarList;
- (void)setAvatarList:(id)arg1;
- (id /* block */)scrollToAvatarAction;
- (void)setScrollToAvatarAction:(id /* block */)arg1;
- (double)maxListHeight;
- (void)setMaxListHeight:(double)arg1;
- (void).cxx_destruct;
@end

