@interface MyProfileTabItemInfo : NSObject
{
    BOOL _imageOnLeft; // +0x8
    NSString * _titleStr; // +0x10
    UIImage * _normalImage; // +0x18
    UIImage * _selectedImage; // +0x20
    double _imageTitleSpacing; // +0x28
    unsigned long long _tabType; // +0x30
}
- (id)init;
- (id)titleStr;
- (void)setTitleStr:(id)arg1;
- (id)normalImage;
- (void)setNormalImage:(id)arg1;
- (id)selectedImage;
- (void)setSelectedImage:(id)arg1;
- (BOOL)imageOnLeft;
- (void)setImageOnLeft:(BOOL)arg1;
- (double)imageTitleSpacing;
- (void)setImageTitleSpacing:(double)arg1;
- (unsigned long long)tabType;
- (void)setTabType:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
