@interface CameraQRCodeAccessibilityOrderCellConfig : NSObject
{
    BOOL _isExpanded; // +0x8
    BOOL _isShowMoreButton; // +0x9
    CameraQRCodeModule * _qrcodeModule; // +0x10
    id <CameraQRCodeAccessibilityOrderCellDelegate> _delegate; // +0x18
    double _headerHeight; // +0x20
    double _cellHeight; // +0x28
    double _containerWidth; // +0x30
    NSString * _title; // +0x38
    NSString * _subtitle; // +0x40
    UIImage * _iconImage; // +0x48
}
- (id)qrcodeModule;
- (void)setQrcodeModule:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isExpanded;
- (void)setIsExpanded:(BOOL)arg1;
- (BOOL)isShowMoreButton;
- (void)setIsShowMoreButton:(BOOL)arg1;
- (double)headerHeight;
- (void)setHeaderHeight:(double)arg1;
- (double)cellHeight;
- (void)setCellHeight:(double)arg1;
- (double)containerWidth;
- (void)setContainerWidth:(double)arg1;
- (id)title;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (void)setSubtitle:(id)arg1;
- (id)iconImage;
- (void)setIconImage:(id)arg1;
- (void).cxx_destruct;
@end
