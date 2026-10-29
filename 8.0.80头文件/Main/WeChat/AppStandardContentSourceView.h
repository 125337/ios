@interface AppStandardContentSourceView : UIView
{
    NSString * _sourceText; // +0x8
    UIImage * _sourceIcon; // +0x10
    NSString * _sourceIconUrl; // +0x18
    MMHeadImageView * _customHeadView; // +0x20
    double _sourceIconCornerRadius; // +0x28
    double _sourceIconWidth; // +0x30
    MMUILabel * _sourceLabel; // +0x38
    MMWebImageView * _sourceImageView; // +0x40
}
+ (double)expectingLayoutHeightWithIconWidth:(double)arg1;
+ (double)expectingLayoutHeight;
- (id)init;
- (void)initSubviews;
- (void)createOrUpdateLayout;
- (void)setSourceText:(id)arg1;
- (void)setSourceIcon:(id)arg1;
- (void)setSourceIconUrl:(id)arg1;
- (void)setCustomHeadView:(id)arg1;
- (void)setSourceIconCornerRadius:(double)arg1;
- (void)setSourceIconWidth:(double)arg1;
- (void)layoutSubviews;
- (id)sourceText;
- (id)sourceIcon;
- (id)sourceIconUrl;
- (id)customHeadView;
- (double)sourceIconCornerRadius;
- (double)sourceIconWidth;
- (id)sourceLabel;
- (void)setSourceLabel:(id)arg1;
- (id)sourceImageView;
- (void)setSourceImageView:(id)arg1;
- (void).cxx_destruct;
@end
