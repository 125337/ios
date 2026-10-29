@interface CameraQRCodeAccessibilityOrderCell : UITableViewCell <CameraQRCodeAccessibilityElementSource>
{
    CameraQRCodeModule * _qrcodeModule; // +0x8
    id <CameraQRCodeAccessibilityOrderCellDelegate> _delegate; // +0x10
    UIView * _containerView; // +0x18
    UIView * _headerView; // +0x20
    UIImageView * _arrowImageView; // +0x28
    MMUIButton * _moreButton; // +0x30
    UIImageView * _headerIconView; // +0x38
    MMUILabel * _headerTitleLabel; // +0x40
    MMUILabel * _headerSubtitleLabel; // +0x48
    UIView * _expandedContentView; // +0x50
}
+ (double)containerWidthForCellWidth:(double)arg1;
+ (double)rowHeightForContentHeight:(double)arg1;
+ (void)makeCell:(id)arg1 config:(id)arg2;
- (BOOL)isPointInHeader:(CGPoint)arg1;
- (void)makeCell:(id)arg1 expanded:(BOOL)arg2 delegate:(id)arg3;
- (void)onClickMoreButton;
- (void)layoutSubviews;
- (id)orderedAccessibilityElements;
- (long long)defaultAccessibilityElementCount;
- (id)defaultAccessibilityElementAtIndex:(long long)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)qrcodeModule;
- (void)setQrcodeModule:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)headerView;
- (void)setHeaderView:(id)arg1;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg1;
- (id)moreButton;
- (void)setMoreButton:(id)arg1;
- (id)headerIconView;
- (void)setHeaderIconView:(id)arg1;
- (id)headerTitleLabel;
- (void)setHeaderTitleLabel:(id)arg1;
- (id)headerSubtitleLabel;
- (void)setHeaderSubtitleLabel:(id)arg1;
- (id)expandedContentView;
- (void)setExpandedContentView:(id)arg1;
- (void).cxx_destruct;
@end
