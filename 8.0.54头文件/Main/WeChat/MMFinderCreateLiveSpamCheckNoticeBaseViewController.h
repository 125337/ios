@interface MMFinderCreateLiveSpamCheckNoticeBaseViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate>
{
    BOOL _hideNav; // +0x68
    NSString * _detailTitle; // +0x70
    NSString * _detailContent; // +0x78
    NSString * _leftBtnTitle; // +0x80
    NSString * _rightBtnTitle; // +0x88
    id /* block */ _leftBtnBlock; // +0x90
    id /* block */ _rightBtnBlock; // +0x98
    MMFinderCreateLiveSpamCheckReportSession * _reportSession; // +0xa0
    MMUIMaskContainerView * _scrollContainerView; // +0xa8
    UIScrollView * _scrollView; // +0xb0
    MMUILabel * _titleLabel; // +0xb8
    MMUILabel * _contentLabel; // +0xc0
}
- (id)initWithDetailTitle:(id)arg1 detailContent:(id)arg2 leftBtnTitle:(id)arg3 rightBtnTitle:(id)arg4 hideNav:(BOOL)arg5 leftBtnBlock:(id /* block */)arg6 rightBtnBlock:(id /* block */)arg7;
- (void)viewDidLoad;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillBePushOrPresent:(BOOL)arg1;
- (void)viewDidBePopedOrDismissed:(BOOL)arg1;
- (id)customContentFont;
- (void)onClickPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (long long)styleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetCancelButtonTitle;
- (long long)styleForPageSheetCancelButton;
- (id)colorForPageSheetCancelButton;
- (double)bottomViewTopMargin;
- (double)bottomViewBottomMargin;
- (id)detailTitle;
- (void)setDetailTitle:(id)arg1;
- (id)detailContent;
- (void)setDetailContent:(id)arg1;
- (id)leftBtnTitle;
- (void)setLeftBtnTitle:(id)arg1;
- (id)rightBtnTitle;
- (void)setRightBtnTitle:(id)arg1;
- (BOOL)hideNav;
- (void)setHideNav:(BOOL)arg1;
- (id /* block */)leftBtnBlock;
- (void)setLeftBtnBlock:(id /* block */)arg1;
- (id /* block */)rightBtnBlock;
- (void)setRightBtnBlock:(id /* block */)arg1;
- (id)reportSession;
- (void)setReportSession:(id)arg1;
- (id)scrollContainerView;
- (void)setScrollContainerView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)contentLabel;
- (void)setContentLabel:(id)arg1;
- (void).cxx_destruct;
@end

