@interface AppUrlImageMessageViewModel : AppStandardImageContentMessageViewModel
{
    int _count; // +0x70
    NSString * _contentType; // +0x78
    NSString * _thumbUrl; // +0x80
    NSString * _duration; // +0x88
    NSString * _subSource; // +0x90
    double _titlePanelHeight; // +0x98
    NSArray * _titleRichTextStyles; // +0xa0
    double _gradientViewHeight; // +0xa8
    double _playBtnSize; // +0xb0
    ImageConf * _imageConf; // +0xb8
    CGSize _viewSize; // +0xc0
    CGSize _cachedTitleSize; // +0xd0
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)cellViewClassName;
- (id)sourceTitle;
- (id)imageConf;
- (id)contentType;
- (id)thumbUrl;
- (double)mediaAspectRatio;
- (int)count;
- (id)duration;
- (id)subSource;
- (id)sourceIcon;
- (id)title;
- (BOOL)allowsTitleShowEmoticon;
- (id)metadata;
- (unsigned long long)imageRatio;
- (double)titlePanelHeight;
- (CGSize)titleSize;
- (double)gradientViewHeight;
- (double)playBtnSize;
- (double)getMediaHeight;
- (id)mediaImage;
- (BOOL)isPhotoType;
- (BOOL)isVedioType;
- (BOOL)isShowSourceView;
- (BOOL)enableNormalizedCard;
- (CGSize)viewSize;
- (void)setContentType:(id)arg1;
- (void)setThumbUrl:(id)arg1;
- (void)setCount:(int)arg1;
- (void)setDuration:(id)arg1;
- (void)setSubSource:(id)arg1;
- (void)setTitlePanelHeight:(double)arg1;
- (id)titleRichTextStyles;
- (void)setTitleRichTextStyles:(id)arg1;
- (void)setGradientViewHeight:(double)arg1;
- (void)setPlayBtnSize:(double)arg1;
- (void)setImageConf:(id)arg1;
- (CGSize)cachedTitleSize;
- (void)setCachedTitleSize:(CGSize)arg1;
- (void).cxx_destruct;
@end
