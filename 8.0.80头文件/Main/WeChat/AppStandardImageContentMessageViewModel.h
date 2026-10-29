@interface AppStandardImageContentMessageViewModel : AppStandardContentBaseMessageViewModel
{
    NSString * _contentText; // +0x70
}
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (CGSize)imageSize;
- (id)titleRichConfig;
- (CGSize)calculateLayoutSize;
- (id)image;
- (id)imageUrl;
- (unsigned long long)imageRatio;
- (id)metadata;
- (id)title;
- (BOOL)allowsTitleShowEmoticon;
- (id)desc;
- (CGSize)titleSize;
- (double)layoutWidth;
- (id)contentText;
- (void).cxx_destruct;
@end
