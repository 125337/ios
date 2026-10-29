@interface MMFinderLiveWidgetContainerViewConfig : NSObject
{
    double _padding; // +0x8
    double _fullEnterAnimationDuration; // +0x10
    double _shortEnterAnimationDuration; // +0x18
    id /* block */ _paddingForStyleQueryBlock; // +0x20
}
- (double)padding;
- (void)setPadding:(double)arg1;
- (double)fullEnterAnimationDuration;
- (void)setFullEnterAnimationDuration:(double)arg1;
- (double)shortEnterAnimationDuration;
- (void)setShortEnterAnimationDuration:(double)arg1;
- (id /* block */)paddingForStyleQueryBlock;
- (void)setPaddingForStyleQueryBlock:(id /* block */)arg1;
- (void).cxx_destruct;
@end

