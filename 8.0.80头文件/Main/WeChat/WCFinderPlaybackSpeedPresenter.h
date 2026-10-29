@interface WCFinderPlaybackSpeedPresenter : NSObject
{
    WCFinderPlaybackSpeedView * _view; // +0x8
    id /* block */ _visibilityChanged; // +0x10
    unsigned long long _generation; // +0x18
}
- (id)initWithView:(id)arg1 visibilityChanged:(id /* block */)arg2;
- (void)updatePlayRate:(double)arg1;
- (void)showPlayRateResult:(double)arg1 isTouch:(BOOL)arg2 completion:(id /* block */)arg3;
- (id)view;
- (void)setView:(id)arg1;
- (id /* block */)visibilityChanged;
- (void)setVisibilityChanged:(id /* block */)arg1;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (void).cxx_destruct;
@end
