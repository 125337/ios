@interface WCBizTipView : UIView <CAAnimationDelegate, ILinkEventExt>
{
    NSString * _title; // +0x8
    NSString * _content; // +0x10
    NSString * _imageName; // +0x18
    UIImageView * _backgroundView; // +0x20
    UIImageView * contentImageView; // +0x28
    RichTextView * richTextView; // +0x30
    id <WCBizTipViewDelegate> m_delegate; // +0x38
    UIButton * _backgroundCloseBtn; // +0x40
}
- (id)initWithFrame:(CGRect)arg1 andTittle:(id)arg2 andContent:(id)arg3 andImage:(id)arg4;
- (void)initView;
- (void)showAnimation;
- (void)dealloc;
- (void)onCloseIntroView;
- (id)getContentImageView;
- (id)m_delegate;
- (void)setM_delegate:(id)arg1;
- (id)backgroundCloseBtn;
- (void)setBackgroundCloseBtn:(id)arg1;
- (void).cxx_destruct;
@end

