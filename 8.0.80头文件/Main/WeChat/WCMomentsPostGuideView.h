@interface WCMomentsPostGuideView : MMHalfScreenGuideView
{
    UIImageView * _guideImageView; // +0x8
}
- (id)init;
- (void)loadCustomizedTopView;
- (void)layoutCustomizedTopView;
- (id)createAcceptButton;
- (id)attributedTextForMessage:(id)arg1 alignment:(long long)arg2;
- (id)guideImageView;
- (void)setGuideImageView:(id)arg1;
- (void).cxx_destruct;
@end
