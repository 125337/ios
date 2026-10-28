@interface MMFinderScreenRecordGuideView : MMPageSheetBaseView
{
    id /* block */ _actionBlock; // +0x8
    UIView * _contentView; // +0x10
    UIView * _headerView; // +0x18
    UIImageView * _guideImageView; // +0x20
    MMUILabel * _titleLabel; // +0x28
    MMUILabel * _detailLabel; // +0x30
    UIButton * _cancelButton; // +0x38
    MMUIButton * _detailButton; // +0x40
    UIButton * _actionButton; // +0x48
    unsigned long long _actionType; // +0x50
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)cancelClick;
- (void)actionClick;
- (void)detailClick;
- (void)showWithAnimated:(BOOL)arg1;
- (void)pageSheetDidDismiss;
- (void)createUI;
- (void)layoutUI;
- (double)contentViewHeight;
- (void)setupPageSheetConfig;
- (id)headerView;
- (id)titleLabel;
- (id)detailLabel;
- (id)detailButton;
- (id)cancelButton;
- (id)guideImageView;
- (id)actionButton;
- (id)contentView;
- (id /* block */)actionBlock;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setContentView:(id)arg1;
- (void)setHeaderView:(id)arg1;
- (void)setGuideImageView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setDetailLabel:(id)arg1;
- (void)setCancelButton:(id)arg1;
- (void)setDetailButton:(id)arg1;
- (void)setActionButton:(id)arg1;
- (unsigned long long)actionType;
- (void)setActionType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
