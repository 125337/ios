@interface TingLaunchOptionsOpenPlayerTab : MMObject
{
    int _tabType; // +0x8
    TingLaunchOptionsOpenPlayerTabCommentInfo * _tabCommentInfo; // +0x10
}
- (int)tabType;
- (void)setTabType:(int)arg1;
- (id)tabCommentInfo;
- (void)setTabCommentInfo:(id)arg1;
- (void).cxx_destruct;
@end
