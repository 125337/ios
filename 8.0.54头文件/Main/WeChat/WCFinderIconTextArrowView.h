@interface WCFinderIconTextArrowView : UIView <WCFinderJumpInfoViewProtocol>
{
    int _showPosition; // +0x8
    id /* block */ _clickBlock; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    UILabel * _textLabel; // +0x20
    UIImageView * _arrowImageView; // +0x28
    UIView * _bottomLineView; // +0x30
    WCFinderJumpInfo * _jumpInfo; // +0x38
}
+ (double)height;
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (id)jumpInfo;
- (int)showPosition;
- (id)bottomLineView;
- (id)iconImageView;
- (id)textLabel;
- (id)arrowImageView;
- (void)onClickAction;
- (void)updateWithImageUrl:(id)arg1 text:(id)arg2;
- (void)updateWithImage:(id)arg1 text:(id)arg2;
- (void)layoutAllSubviews;
- (id /* block */)clickBlock;
- (void)setClickBlock:(id /* block */)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTextLabel:(id)arg1;
- (void)setArrowImageView:(id)arg1;
- (void)setBottomLineView:(id)arg1;
- (void)setJumpInfo:(id)arg1;
- (void)setShowPosition:(int)arg1;
- (void).cxx_destruct;
@end

