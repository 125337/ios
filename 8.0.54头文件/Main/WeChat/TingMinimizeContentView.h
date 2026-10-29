@interface TingMinimizeContentView : UIView
{
    id <TingMinimizeContentViewDelegate> _delegate; // +0x8
    MMUIButton * _backgroundButton; // +0x10
    MMWebImageView * _backgroundView; // +0x18
    MMUIButton * _closeButton; // +0x20
}
- (id)init;
- (void)initSubviews;
- (void)layoutSubviews;
- (void)setImageURL:(id)arg1;
- (void)onCloseButtonClicked;
- (void)onCoverClicked;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)backgroundButton;
- (void)setBackgroundButton:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (void).cxx_destruct;
@end

