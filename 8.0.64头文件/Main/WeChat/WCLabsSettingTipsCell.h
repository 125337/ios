@interface WCLabsSettingTipsCell : UIView
{
    MMUILabel * _tipsLabel; // +0x8
    UIView * _leftLineView; // +0x10
    UIView * _rightLineView; // +0x18
    double _offsetY; // +0x20
}
+ (double)heightForOffsetY:(double)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutSubviews;
- (void)configureWithText:(id)arg1 withOffsetY:(double)arg2;
- (void)initLineView;
- (void)initTipsLabel;
- (void).cxx_destruct;
@end
