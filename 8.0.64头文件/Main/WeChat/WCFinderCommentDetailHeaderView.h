@interface WCFinderCommentDetailHeaderView : UIView
{
    BOOL _useMultipleTabStyle; // +0x8
    UILabel * _titleLabel; // +0x10
    MMUIButton * _closeBtn; // +0x18
    WCFinderSteramProfileBarView * _lineView; // +0x20
    WCFinderCommentListSelectTabView * _selectTabView; // +0x28
    id <WCFinderCommentDetailHeaderViewDelegate> _delegate; // +0x30
}
+ (double)headerViewHeight;
- (id)initWithFrame:(CGRect)arg1 useMultipleTabStyle:(BOOL)arg2;
- (void)setUpTraditionalHeader;
- (void)adjustTraditionalLayout;
- (void)adjustLayout;
- (void)adjustMultipleTabLayout;
- (void)layoutSubviews;
- (void)setUpMultipleTabHeader;
- (void)updateCommentStr:(id)arg1 shopCommentStr:(id)arg2 linkText:(id)arg3 showArrow:(BOOL)arg4;
- (void)updateMoveDistance:(double)arg1;
- (void)didClickClose:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)closeBtn;
- (void)setCloseBtn:(id)arg1;
- (id)lineView;
- (void)setLineView:(id)arg1;
- (id)selectTabView;
- (void)setSelectTabView:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)useMultipleTabStyle;
- (void)setUseMultipleTabStyle:(BOOL)arg1;
- (void).cxx_destruct;
@end
