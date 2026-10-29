@interface WCMomentsLivePhotoRegularGuideView : MMHalfScreenGuideView
{
    UIImageView * _guideImageView; // +0x8
}
- (id)init;
- (void)configTitleLabelStyle;
- (void)configMessageLabelStyle;
- (id)createAcceptButton;
- (id)attributedTextForMessage:(id)arg1 alignment:(long long)arg2;
- (void)loadCustomizedTopView;
- (void)layoutCustomizedTopView;
- (id)guideImageView;
- (void)setGuideImageView:(id)arg1;
- (void).cxx_destruct;
@end

