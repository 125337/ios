@interface GCMyGroupCellExpandBtnView : UIView
{
    BOOL _isExpanded; // +0x8
    BOOL _hasRedDot; // +0x9
    id <GCMyGroupCellExpandBtnViewDelegate> _delegate; // +0x10
    UILabel * _textLabel; // +0x18
    UIImageView * _arrowIcon; // +0x20
    UIView * _redDotView; // +0x28
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setIsExpanded:(BOOL)arg1;
- (void)setHasRedDot:(BOOL)arg1;
- (void)layoutSubviews;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isExpanded;
- (BOOL)hasRedDot;
- (id)textLabel;
- (void)setTextLabel:(id)arg1;
- (id)arrowIcon;
- (void)setArrowIcon:(id)arg1;
- (id)redDotView;
- (void)setRedDotView:(id)arg1;
- (void).cxx_destruct;
@end

