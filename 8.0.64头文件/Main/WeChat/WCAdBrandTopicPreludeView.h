@interface WCAdBrandTopicPreludeView : UIView
{
    WCAdBrandTopicInfo * _adBrandTopicInfo; // +0x8
    WCAdURLImageView * _brandImageView; // +0x10
}
- (id)initWithFrame:(CGRect)arg1 adBrandTopicInfo:(id)arg2;
- (void)generateSubviews;
- (void)layoutSubviews;
- (id)brandImageView;
- (id)adBrandTopicInfo;
- (void)setAdBrandTopicInfo:(id)arg1;
- (void)setBrandImageView:(id)arg1;
- (void).cxx_destruct;
@end
