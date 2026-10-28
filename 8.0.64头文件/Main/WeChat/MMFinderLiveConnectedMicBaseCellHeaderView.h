@interface MMFinderLiveConnectedMicBaseCellHeaderView : UIView
{
    UILabel * _titleLabel; // +0x8
    NSString * _titleText; // +0x10
    MMFinderLiveConnectedMicCellHeaderViewAction * _action; // +0x18
    MMUIButton * _actionButton; // +0x20
    UIView * _bottomSeparatorLine; // +0x28
    double _titleLabelFrameX; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (BOOL)showSeparatorBar;
- (void)setShowSeparatorBar:(BOOL)arg1;
- (void)resetState;
- (void)layoutSubviews;
- (void)configTitleLabel;
- (void)layoutUI;
- (void)updateWithTitle:(id)arg1;
- (void)configSearchButton;
- (void)onTapSearchButton;
- (void)layoutSearchButton;
- (void)setAction:(id)arg1;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg1;
- (id)titleText;
- (void)setTitleText:(id)arg1;
- (id)action;
- (id)actionButton;
- (void)setActionButton:(id)arg1;
- (id)bottomSeparatorLine;
- (void)setBottomSeparatorLine:(id)arg1;
- (double)titleLabelFrameX;
- (void)setTitleLabelFrameX:(double)arg1;
- (void).cxx_destruct;
@end
