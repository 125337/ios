@interface MiniTaskCollectionHeaderView : UICollectionReusableView
{
    id <MiniTaskCollectionHeaderViewDelegate> _delegate; // +0x8
    long long _section; // +0x10
    NSString * _title; // +0x18
    MMUILabel * _titleLabel; // +0x20
    MMUIButton * _editButton; // +0x28
    MMUIButton * _deleteAllButton; // +0x30
    MMUIButton * _doneButton; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)updateWithSectionModel:(id)arg1;
- (void)onSelectAtDeleteAll;
- (void)onSelectAtBeginEdit;
- (void)onSelectAtEndEdit;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (long long)section;
- (void)setSection:(long long)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)editButton;
- (void)setEditButton:(id)arg1;
- (id)deleteAllButton;
- (void)setDeleteAllButton:(id)arg1;
- (id)doneButton;
- (void)setDoneButton:(id)arg1;
- (void).cxx_destruct;
@end
