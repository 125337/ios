@interface WCFinderShareOpenFindEntryGuideParams : NSObject
{
    BOOL _useHorizontalButtonLayout; // +0x8
    BOOL _imageAboveTitle; // +0x9
    NSString * _title; // +0x10
    NSString * _subtitle; // +0x18
    NSString * _confirmButtonTitle; // +0x20
    NSString * _cancelButtonTitle; // +0x28
    NSString * _imageNamePrefix; // +0x30
    UIImage * _centerImage; // +0x38
}
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)confirmButtonTitle;
- (void)setConfirmButtonTitle:(id)arg1;
- (id)cancelButtonTitle;
- (void)setCancelButtonTitle:(id)arg1;
- (id)imageNamePrefix;
- (void)setImageNamePrefix:(id)arg1;
- (id)centerImage;
- (void)setCenterImage:(id)arg1;
- (BOOL)useHorizontalButtonLayout;
- (void)setUseHorizontalButtonLayout:(BOOL)arg1;
- (BOOL)imageAboveTitle;
- (void)setImageAboveTitle:(BOOL)arg1;
- (void).cxx_destruct;
@end
