@interface WCFinderFeedWarningTipsView : UIView
{
    UIImageView * _warningImageView; // +0x8
    WCFinderFeedContentTextView * _warningTextView; // +0x10
    UIImageView * _arrowImageView; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    unsigned long long _style; // +0x28
}
- (id)init;
- (void)setUpUI;
- (void)updateStyle:(unsigned long long)arg1;
- (BOOL)checkShowWithContentVM:(id)arg1 maxWidth:(double)arg2;
- (id)wording;
- (void)clickAction;
- (id)warningImageView;
- (void)setWarningImageView:(id)arg1;
- (id)warningTextView;
- (void)setWarningTextView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)style;
- (void)setStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
