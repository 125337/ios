@interface WCFinderLiveBindingNoticeView : MMPageSheetBaseView
{
    id /* block */ _createButtonBlock; // +0x8
    id /* block */ _bindButtonBlock; // +0x10
    FinderLiveNoticeInfo * _noticeInfo; // +0x18
    CAShapeLayer * _shapeLayer; // +0x20
    MMUIView * _contentView; // +0x28
    MMUILabel * _titleLabel; // +0x30
    WCFinderLiveBindingNoticeMainView * _mainView; // +0x38
    MMUIButton * _createButton; // +0x40
    MMUIButton * _bindingButton; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateData:(id)arg1;
- (void)layoutSubviews;
- (void)createUI;
- (void)layoutUI;
- (void)setupPageSheetConfig;
- (void)updateSelfViewShapeClip;
- (double)contentViewHeight;
- (id)contentView;
- (id)titleLabel;
- (id)mainView;
- (id)createButton;
- (id)bindingButton;
- (void)createButtonClick:(id)arg1;
- (void)bindButtonClick:(id)arg1;
- (id /* block */)createButtonBlock;
- (void)setCreateButtonBlock:(id /* block */)arg1;
- (id /* block */)bindButtonBlock;
- (void)setBindButtonBlock:(id /* block */)arg1;
- (id)noticeInfo;
- (void)setNoticeInfo:(id)arg1;
- (id)shapeLayer;
- (void)setShapeLayer:(id)arg1;
- (void)setContentView:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setMainView:(id)arg1;
- (void)setCreateButton:(id)arg1;
- (void)setBindingButton:(id)arg1;
- (void).cxx_destruct;
@end

