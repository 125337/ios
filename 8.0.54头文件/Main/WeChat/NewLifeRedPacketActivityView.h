@interface NewLifeRedPacketActivityView : UIView
{
    int _coverViewType; // +0x8
    double _activityPaddingStart; // +0x10
    double _activityPaddingEnd; // +0x18
    double _activityPaddingVertical; // +0x20
    double _activityInnerSpace; // +0x28
    double _activityCornerRadius; // +0x30
    UIFont * _activityLabelFont; // +0x38
    double _activityMarginStart; // +0x40
    double _activityMarginBottom; // +0x48
    UILabel * _activityLabel; // +0x50
    UIImageView * _activityIcon; // +0x58
    UIView * _activityView; // +0x60
    CGSize _activityIconSize; // +0x68
}
- (id)initWithCoverViewType:(int)arg1;
- (void)initParams;
- (void)initSubviews;
- (void)updateLayout;
- (void)layoutSubviews;
- (id)activityView;
- (id)activityLabel;
- (id)activityIcon;
- (void)setLabelText:(id)arg1;
- (CGSize)activityIconSize;
- (void)setActivityIconSize:(CGSize)arg1;
- (double)activityPaddingStart;
- (void)setActivityPaddingStart:(double)arg1;
- (double)activityPaddingEnd;
- (void)setActivityPaddingEnd:(double)arg1;
- (double)activityPaddingVertical;
- (void)setActivityPaddingVertical:(double)arg1;
- (double)activityInnerSpace;
- (void)setActivityInnerSpace:(double)arg1;
- (double)activityCornerRadius;
- (void)setActivityCornerRadius:(double)arg1;
- (id)activityLabelFont;
- (void)setActivityLabelFont:(id)arg1;
- (double)activityMarginStart;
- (void)setActivityMarginStart:(double)arg1;
- (double)activityMarginBottom;
- (void)setActivityMarginBottom:(double)arg1;
- (int)coverViewType;
- (void)setCoverViewType:(int)arg1;
- (void)setActivityLabel:(id)arg1;
- (void)setActivityIcon:(id)arg1;
- (void)setActivityView:(id)arg1;
- (void).cxx_destruct;
@end

