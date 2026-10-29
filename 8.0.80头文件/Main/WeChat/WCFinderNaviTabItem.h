@interface WCFinderNaviTabItem : NSObject
{
    NSString * _title; // +0x8
    NSString * _accessibilityLabel; // +0x10
    UIImage * _normalImage; // +0x18
    UIImage * _selectedImage; // +0x20
    unsigned long long _imageStyle; // +0x28
    unsigned long long _refreshStyle; // +0x30
    double _titleWidthExtension; // +0x38
    unsigned long long _badgeStyle; // +0x40
    NSString * _badgeText; // +0x48
    UIImage * _badgeImage; // +0x50
}
- (id)initWithTitle:(id)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (id)normalImage;
- (void)setNormalImage:(id)arg1;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (unsigned long long)imageStyle;
- (void)setImageStyle:(unsigned long long)arg1;
- (unsigned long long)refreshStyle;
- (void)setRefreshStyle:(unsigned long long)arg1;
- (double)titleWidthExtension;
- (void)setTitleWidthExtension:(double)arg1;
- (unsigned long long)badgeStyle;
- (void)setBadgeStyle:(unsigned long long)arg1;
- (id)badgeText;
- (void)setBadgeText:(id)arg1;
- (id)badgeImage;
- (void)setBadgeImage:(id)arg1;
- (void).cxx_destruct;
@end
