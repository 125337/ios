@interface MMLiveCommentHeaderFooterView : UITableViewHeaderFooterView
{
    BOOL _isAudience; // +0x8
    BOOL _isAssistant; // +0x9
    BOOL _isShowMenu; // +0xa
    MMLiveCommentDataItem * _commentItem; // +0x10
    MMLiveCommentPubbleCellFrame * _cellFrame; // +0x18
    long long _section; // +0x20
    id /* block */ _actionInvokeBloc; // +0x28
    MMLiveCommentPubbleCell * _pubbleCell; // +0x30
    MMUIButton * _pubbleButton; // +0x38
}
- (void)createPubbleCellWithCellFrame:(id)arg1 section:(long long)arg2 topSection:(long long)arg3;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)dealloc;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)setCommentItem:(id)arg1;
- (void)setSection:(long long)arg1;
- (void)setCellFrame:(id)arg1;
- (void)showMenuItemsForAnchor;
- (double)calculateMenuControllerY;
- (void)onCommentActionTop:(id)arg1;
- (BOOL)isAudience;
- (void)setIsAudience:(BOOL)arg1;
- (BOOL)isAssistant;
- (void)setIsAssistant:(BOOL)arg1;
- (id)commentItem;
- (id)cellFrame;
- (long long)section;
- (id /* block */)actionInvokeBloc;
- (void)setActionInvokeBloc:(id /* block */)arg1;
- (id)pubbleCell;
- (void)setPubbleCell:(id)arg1;
- (id)pubbleButton;
- (void)setPubbleButton:(id)arg1;
- (BOOL)isShowMenu;
- (void)setIsShowMenu:(BOOL)arg1;
- (void).cxx_destruct;
@end
