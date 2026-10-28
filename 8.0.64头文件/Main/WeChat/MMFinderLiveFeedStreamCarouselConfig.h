@interface MMFinderLiveFeedStreamCarouselConfig : NSObject
{
    BOOL _stopCycleAfterLast; // +0x8
    NSMutableArray * _ctrlList; // +0x10
}
- (id)initWithConfig:(id)arg1;
- (id)ctrlList;
- (void)setCtrlList:(id)arg1;
- (BOOL)stopCycleAfterLast;
- (void)setStopCycleAfterLast:(BOOL)arg1;
- (void).cxx_destruct;
@end
