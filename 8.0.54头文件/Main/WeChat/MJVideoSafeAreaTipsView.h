@interface MJVideoSafeAreaTipsView : UIView
{
    MJSlantedLinesView * _slantedLinesView; // +0x8
    UILabel * _tipsLabel; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupViews;
- (void)layoutViews;
- (id)slantedLinesView;
- (void)setSlantedLinesView:(id)arg1;
- (id)tipsLabel;
- (void)setTipsLabel:(id)arg1;
- (void).cxx_destruct;
@end

