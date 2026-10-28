@interface WCFinderHalfASGuideView : UIView
{
    id /* block */ _closeBlock; // +0x8
    UIView * _topBarView; // +0x10
    RichTextView * _mTitleView; // +0x18
    UIImageView * _imgView; // +0x20
    UIButton * _okButton; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupUI;
- (void)clickOKButton;
- (id)topBarView;
- (id)mTitleView;
- (id)imgView;
- (id)okButton;
- (id /* block */)closeBlock;
- (void)setCloseBlock:(id /* block */)arg1;
- (void)setTopBarView:(id)arg1;
- (void)setMTitleView:(id)arg1;
- (void)setImgView:(id)arg1;
- (void)setOkButton:(id)arg1;
- (void).cxx_destruct;
@end
