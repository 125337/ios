@interface EnterpriseMemberView : MMUIView
{
    EnterpriseMemberViewItem * _viewItem; // +0x8
    id <EnterpriseMemberViewDelegate> delegate; // +0x10
}
- (id)initWithMemberViewItem:(id)arg1 size:(CGSize)arg2;
- (void)initView;
- (id)getEnterpriseUserName;
- (BOOL)isDeleteSmallButtonHidden;
- (void)setDeleteSmallButtonHidden:(BOOL)arg1;
- (void)onClickHeadImage;
- (void)onLongPressHeadImage:(id)arg1;
- (void)onAddMember;
- (void)onDeleteMember;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

