@interface WCTimelineFPSLabel : UILabel <WCTimelineFPSMonitorDelegate>
{
    UIFont * _mainfont; // +0x8
    UIFont * _subFont; // +0x10
}
- (id)initWithFrame:(CGRect)arg1;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)updateFps:(float)arg1;
- (void)onTick:(float)arg1;
- (id)observerIdentifier;
- (id)mainfont;
- (void)setMainfont:(id)arg1;
- (id)subFont;
- (void)setSubFont:(id)arg1;
- (void).cxx_destruct;
@end

