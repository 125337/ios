@interface WCFinderMelodyView : UIView <LOTColorValueDelegate>
{
    id <WCFinderMelodyViewDelegate> _delegate; // +0x8
    UIImageView * _melodyIconView; // +0x10
    double _iconWid; // +0x18
    UIColor * _iconColor; // +0x20
}
- (id)initWithFrame:(CGRect)arg1 defaultPlay:(BOOL)arg2 iconWid:(double)arg3 iconColor:(id)arg4;
- (id)melodyIconView;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setMelodyIconView:(id)arg1;
- (double)iconWid;
- (void)setIconWid:(double)arg1;
- (id)iconColor;
- (void)setIconColor:(id)arg1;
- (void).cxx_destruct;
@end
