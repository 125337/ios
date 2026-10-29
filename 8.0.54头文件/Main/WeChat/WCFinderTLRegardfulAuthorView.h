@interface WCFinderTLRegardfulAuthorView : UIView <UIScrollViewDelegate>
{
    BOOL _showProfile; // +0x8
    BOOL _reorder; // +0x9
    BOOL _isDismissing; // +0xa
    UIScrollView * _contentView; // +0x10
    UILabel * _titleLabelView; // +0x18
    NSMutableArray * _dataArray; // +0x20
    WCFinderTLRegardfulAuthorScrollView * _scrollView; // +0x28
    NSMutableArray * _cellViewArray; // +0x30
    id /* block */ _showBlock; // +0x38
    id /* block */ _dismissBlock; // +0x40
    UIView * _showView; // +0x48
}
+ (double)viewHeight;
- (id)initWithShowView:(id)arg1 showBlock:(id /* block */)arg2 dismissBlock:(id /* block */)arg3;
- (void)panAction;
- (void)dismissAuthorView;
- (void)show;
- (BOOL)isShow;
- (id)cellViewArray;
- (void)reloadOftenReadBar:(id)arg1;
- (void)reloadData:(id)arg1;
- (void)reloadSort;
- (void)setUpUI;
- (void)_reloadData;
- (void)setItemViewAlpha:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)layoutSubviews;
- (void)clickContactCell:(id)arg1;
- (void)reportLiveCardExposeIfNeeded:(id)arg1;
- (id)getAllLiveContentVMArray;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)titleLabelView;
- (void)setTitleLabelView:(id)arg1;
- (id)dataArray;
- (void)setDataArray:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (void)setCellViewArray:(id)arg1;
- (id /* block */)showBlock;
- (void)setShowBlock:(id /* block */)arg1;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg1;
- (id)showView;
- (void)setShowView:(id)arg1;
- (BOOL)showProfile;
- (void)setShowProfile:(BOOL)arg1;
- (BOOL)reorder;
- (void)setReorder:(BOOL)arg1;
- (BOOL)isDismissing;
- (void)setIsDismissing:(BOOL)arg1;
- (void).cxx_destruct;
@end

