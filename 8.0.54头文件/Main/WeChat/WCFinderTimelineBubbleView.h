@interface WCFinderTimelineBubbleView : UIView
{
    unsigned long long _bubbleLevel; // +0x8
    double _buttonWidth; // +0x10
}
- (void)adjustButtonWidth:(double)arg1;
- (id)getBubbleBtn;
- (unsigned long long)bubbleLevel;
- (void)setBubbleLevel:(unsigned long long)arg1;
- (double)buttonWidth;
- (void)setButtonWidth:(double)arg1;
@end

