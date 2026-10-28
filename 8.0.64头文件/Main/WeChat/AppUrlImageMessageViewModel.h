@interface AppUrlImageMessageViewModel : CommonMessageViewModel
{
    int _count; // +0x70
    NSString * _contentType; // +0x78
    NSString * _thumbUrl; // +0x80
    NSString * _title; // +0x88
    NSString * _duration; // +0x90
    NSString * _subSource; // +0x98
    double _titlePanelHeight; // +0xa0
    NSArray * _titleRichTextStyles; // +0xa8
    double _gradientViewHeight; // +0xb0
    double _playBtnSize; // +0xb8
    ImageConf * _imageConf; // +0xc0
    CGSize _viewSize; // +0xc8
    CGSize _titleSize; // +0xd8
}
+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)cellViewClassName;
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (id)sourceTitle;
- (id)imageConf;
- (id)contentType;
- (id)thumbUrl;
- (id)title;
- (double)mediaAspectRatio;
- (int)count;
- (id)duration;
- (id)subSource;
- (double)titlePanelHeight;
- (CGSize)titleSize;
- (double)gradientViewHeight;
- (double)playBtnSize;
- (double)getMediaHeight;
- (id)mediaImage;
- (BOOL)isPhotoType;
- (BOOL)isVedioType;
- (CGSize)viewSize;
- (void)setContentType:(id)arg1;
- (void)setThumbUrl:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setCount:(int)arg1;
- (void)setDuration:(id)arg1;
- (void)setSubSource:(id)arg1;
- (void)setTitlePanelHeight:(double)arg1;
- (id)titleRichTextStyles;
- (void)setTitleRichTextStyles:(id)arg1;
- (void)setTitleSize:(CGSize)arg1;
- (void)setGradientViewHeight:(double)arg1;
- (void)setPlayBtnSize:(double)arg1;
- (void)setImageConf:(id)arg1;
- (void).cxx_destruct;
@end
