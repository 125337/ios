@interface AppStandardTextContentMessageViewModel : CommonMessageViewModel
{
    double _contentImgWidth; // +0x70
}
- (CGSize)measureContentViewSize:(CGSize)arg1;
- (double)contentImgWidth;
- (CGSize)calculateLayoutSize;
- (id)title;
- (id)attributedTitle;
- (unsigned long long)contentLayoutType;
- (id)contentText;
- (BOOL)hasContentImg;
- (id)sourceIcon;
- (id)sourceText;
- (double)layoutWidth;
- (void)setContentImgWidth:(double)arg1;
@end
