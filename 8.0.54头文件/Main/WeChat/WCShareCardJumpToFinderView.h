@interface WCShareCardJumpToFinderView : UIView
{
    WCShareCardJumpToFinderViewData * _data; // +0x8
    id <WCShareCardJumpToFinderButtonDelegate> _delegate; // +0x10
    MMUIButton * _jumpButton; // +0x18
    MMWebImageView * _leftIconImageView; // +0x20
    MMWebImageView * _rightIconImageView; // +0x28
    MMUILabel * _buttonLabel; // +0x30
}
- (id)initViewWithCardInfo:(id)arg1 delegate:(id)arg2;
- (double)getWidth;
- (void)updateView;
- (void)updateJumpToFinderView;
- (void)adjustView;
- (void)updateContentButton;
- (void)setAccessibilityLabelToView:(id)arg1 fieldItem:(id)arg2;
- (id)buttonLabel;
- (id)jumpButton;
- (id)leftIconImageView;
- (id)rightIconImageView;
- (BOOL)hasLeftIconView;
- (BOOL)hasRightIconView;
- (void)onContentButtonClick;
- (id)data;
- (void)setData:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setJumpButton:(id)arg1;
- (void)setLeftIconImageView:(id)arg1;
- (void)setRightIconImageView:(id)arg1;
- (void)setButtonLabel:(id)arg1;
- (void).cxx_destruct;
@end

