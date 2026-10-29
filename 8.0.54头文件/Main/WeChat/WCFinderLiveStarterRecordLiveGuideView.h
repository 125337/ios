@interface WCFinderLiveStarterRecordLiveGuideView : MMPageSheetBaseView
{
    id /* block */ _recordGuideBlock; // +0x8
    UIView * _contentView; // +0x10
    MMUILabel * _titleLabel; // +0x18
    MMUIButton * _editButton; // +0x20
    MMUIButton * _actionButton; // +0x28
}
- (void)updateWithTitle:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (double)contentViewHeight;
- (id)contentView;
- (id)editButton;
- (id)actionButton;
- (id)titleLabel;
- (void)actionButtonClick;
- (void)editButtonClick;
- (id /* block */)recordGuideBlock;
- (void)setRecordGuideBlock:(id /* block */)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setEditButton:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void).cxx_destruct;
@end

