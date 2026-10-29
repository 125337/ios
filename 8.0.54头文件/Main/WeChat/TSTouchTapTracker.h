@interface TSTouchTapTracker : NSObject <TSTouchEventTracker>
{
    UIView * _attachedView; // +0x8
    TSTouchTrackRecognizer * _trackRecognizer; // +0x10
    NSMutableArray * _touches; // +0x18
}
- (id)initWithView:(id)arg1 trackEventHandler:(id /* block */)arg2;
- (void)dealloc;
- (void)attachedControlOnClick:(id)arg1;
- (id)attachedView;
- (void)setAttachedView:(id)arg1;
- (id)trackRecognizer;
- (void)setTrackRecognizer:(id)arg1;
- (id)touches;
- (void)setTouches:(id)arg1;
- (void).cxx_destruct;
@end

