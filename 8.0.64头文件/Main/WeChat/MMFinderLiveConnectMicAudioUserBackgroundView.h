@interface MMFinderLiveConnectMicAudioUserBackgroundView : UIView <WCFinderHeadImageViewDelegate>
{
    WCFinderContact * _finderContact; // +0x8
    WCFinderHeadImageView * _backgroundHeadImageView; // +0x10
    UIView * _audioUserBlurView; // +0x18
    UIImage * _backgroundHeadImage; // +0x20
}
+ (id)getUserBlurEffectImage:(id)arg1;
- (id)initWithFrame:(CGRect)arg1 andFinderContact:(id)arg2;
- (id)initWithFinderContact:(id)arg1;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)arg1 image:(id)arg2 urlString:(id)arg3;
- (void)setBackgroundHeadImage:(id)arg1;
- (id)finderContact;
- (void)setFinderContact:(id)arg1;
- (id)backgroundHeadImageView;
- (void)setBackgroundHeadImageView:(id)arg1;
- (id)audioUserBlurView;
- (void)setAudioUserBlurView:(id)arg1;
- (id)backgroundHeadImage;
- (void).cxx_destruct;
@end
