@interface WeAppCustomTabbarItem : NSObject
{
    UIImage * _normalImage; // +0x8
    UIImage * _selectedImage; // +0x10
    NSAttributedString * _normalText; // +0x18
    NSAttributedString * _selectedText; // +0x20
}
- (id)normalImage;
- (void)setNormalImage:(id)arg1;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (id)normalText;
- (void)setNormalText:(id)arg1;
- (id)selectedText;
- (void)setSelectedText:(id)arg1;
- (void).cxx_destruct;
@end

