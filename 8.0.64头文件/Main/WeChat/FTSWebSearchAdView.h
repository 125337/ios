@interface FTSWebSearchAdView : UIView
{
    UILabel * _textLabel; // +0x8
    UIImageView * _iconImageView; // +0x10
    UIView * _adInfoContainerView; // +0x18
    UIView * _adHintContainerView; // +0x20
    UILabel * _hintLabel; // +0x28
    UIImageView * _arrowImageView; // +0x30
    FTSWebSearchAdInfo * _adInfo; // +0x38
    id <FTSWebSearchAdViewDelegate> _delegate; // +0x40
}
- (id)initWithAdInfo:(id)arg1 delegate:(id)arg2;
- (void)setupView;
- (void)onTapAdItem;
- (void)onTapHint;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)iconImageView;
- (void)setIconImageView:(id)arg1;
- (id)adInfoContainerView;
- (void)setAdInfoContainerView:(id)arg1;
- (id)adHintContainerView;
- (void)setAdHintContainerView:(id)arg1;
- (id)hintLabel;
- (void)setHintLabel:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)adInfo;
- (void)setAdInfo:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
