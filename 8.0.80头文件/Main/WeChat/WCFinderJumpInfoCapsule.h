@interface WCFinderJumpInfoCapsule : WCFinderJumpInfoView
{
    UIView * _backMaskView; // +0x8
    UIImageView * _iconImageView; // +0x10
    UILabel * _textView; // +0x18
}
- (id)init;
- (void)onCapsuleDidClick;
- (void)layoutUI;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (id)backMaskView;
- (id)iconImageView;
- (id)textView;
- (void)setBackMaskView:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setTextView:(id)arg1;
- (void).cxx_destruct;
@end
