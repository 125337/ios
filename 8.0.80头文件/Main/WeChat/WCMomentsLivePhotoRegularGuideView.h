@interface WCMomentsLivePhotoRegularGuideView : MMHalfScreenGuideView
{
    int _pickerScene; // +0x8
    UIImageView * _guideImageView; // +0x10
}
- (id)init;
- (id)initWithAssetPickScene:(int)arg1;
- (id)getGuideTitle;
- (id)getGuideDesc;
- (void)initSubViews;
- (void)configTitleLabelStyle;
- (void)configMessageLabelStyle;
- (id)createAcceptButton;
- (id)attributedTextForMessage:(id)arg1 alignment:(long long)arg2;
- (void)loadCustomizedTopView;
- (void)layoutCustomizedTopView;
- (id)guideImageView;
- (void)setGuideImageView:(id)arg1;
- (int)pickerScene;
- (void)setPickerScene:(int)arg1;
- (void).cxx_destruct;
@end
