@interface WCFinderFeedDetailStatusView : UIView
{
    BOOL _disableLayout; // +0x8
    BOOL _layoutForState; // +0x9
    unsigned long long _type; // +0x10
    unsigned long long _uiStyle; // +0x18
    id <WCFinderFeedDetailStatusViewDelegate> _delegate; // +0x20
    NSString * _showText; // +0x28
    UIImageView * _imageView; // +0x30
    UILabel * _label; // +0x38
    UIButton * _closeBtn; // +0x40
}
- (void)layoutSubviews;
- (void)setType:(unsigned long long)arg1;
- (void)setUiStyle:(unsigned long long)arg1;
- (id)backgroundColorForUIStyle:(unsigned long long)arg1;
- (id)labelColorForUIStyle:(unsigned long long)arg1;
- (void)goBack;
- (id)imageView;
- (id)label;
- (id)closeBtn;
- (unsigned long long)type;
- (unsigned long long)uiStyle;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)showText;
- (void)setShowText:(id)arg1;
- (BOOL)disableLayout;
- (void)setDisableLayout:(BOOL)arg1;
- (BOOL)layoutForState;
- (void)setLayoutForState:(BOOL)arg1;
- (void)setImageView:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setCloseBtn:(id)arg1;
- (void).cxx_destruct;
@end
