@interface BraceletWorkoutCheckInDayView : UIView
{
    UILabel * _numberLabel; // +0x8
    UIView * _circleBg; // +0x10
    UIImageView * _checkInBgView; // +0x18
    CAShapeLayer * _ribbonLayer; // +0x20
    CAShapeLayer * _todayRingLayer; // +0x28
    CAShapeLayer * _checkLayer; // +0x30
    BOOL _isInMonth; // +0x38
    long long _day; // +0x40
    long long _dayStyle; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (id)p_checkPathInSize:(CGSize)arg1;
- (void)applyStyle;
- (void)p_addCheckLayer;
- (void)p_addRibbonLayer;
- (void)p_addTodayRing;
- (long long)day;
- (void)setDay:(long long)arg1;
- (BOOL)isInMonth;
- (void)setIsInMonth:(BOOL)arg1;
- (long long)dayStyle;
- (void)setDayStyle:(long long)arg1;
- (void).cxx_destruct;
@end
