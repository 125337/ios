@interface WCTabBarItem : NSObject <NSCopying>
{
    BOOL _enabled; // +0x8
    BOOL _showsRedDot; // +0x9
    NSString * _title; // +0x10
    UIImage * _image; // +0x18
    UIImage * _selectedImage; // +0x20
    UIColor * _titleColor; // +0x28
    UIColor * _selectedTitleColor; // +0x30
    NSString * _badgeValue; // +0x38
    NSString * _accessibilityLabel; // +0x40
    NSString * _accessibilityHint; // +0x48
    NSString * _accessibilityIdentifier; // +0x50
}
- (id)init;
- (id)copyWithZone:(_NSZone *)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)image;
- (void)setImage:(id)arg1;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (id)titleColor;
- (void)setTitleColor:(id)arg1;
- (id)selectedTitleColor;
- (void)setSelectedTitleColor:(id)arg1;
- (BOOL)isEnabled;
- (void)setEnabled:(BOOL)arg1;
- (id)badgeValue;
- (void)setBadgeValue:(id)arg1;
- (BOOL)showsRedDot;
- (void)setShowsRedDot:(BOOL)arg1;
- (id)accessibilityLabel;
- (void)setAccessibilityLabel:(id)arg1;
- (id)accessibilityHint;
- (void)setAccessibilityHint:(id)arg1;
- (id)accessibilityIdentifier;
- (void)setAccessibilityIdentifier:(id)arg1;
- (void).cxx_destruct;
@end
