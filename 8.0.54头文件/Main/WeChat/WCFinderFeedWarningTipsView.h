@interface WCFinderFeedWarningTipsView : UIView
{
    UIImageView * _warningImageView; // +0x8
    UILabel * _warningLabel; // +0x10
    WCFinderFeedContentTextView * _warningTextView; // +0x18
    UIImageView * _arrowImageView; // +0x20
    WCFinderFeedContentVM * _contentVM; // +0x28
}
- (id)init;
- (void)setUpUI;
- (void)updateStyle:(unsigned long long)arg1;
- (BOOL)checkShowWithContentVM:(id)arg1 maxWidth:(double)arg2;
- (void)clickAction;
- (id)warningImageView;
- (void)setWarningImageView:(id)arg1;
- (id)warningLabel;
- (void)setWarningLabel:(id)arg1;
- (id)warningTextView;
- (void)setWarningTextView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (void).cxx_destruct;
@end

