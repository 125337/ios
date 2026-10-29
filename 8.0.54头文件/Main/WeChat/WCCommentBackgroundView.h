@interface WCCommentBackgroundView : UIView
{
    BOOL _showsTopCorners; // +0x8
    BOOL _showsBottomCorners; // +0x9
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)showsTopCorners;
- (void)setShowsTopCorners:(BOOL)arg1;
- (BOOL)showsBottomCorners;
- (void)setShowsBottomCorners:(BOOL)arg1;
@end

