@interface WCFinderFeedArrayObserverList : NSObject
{
    WCFinderFeedArrayObserver * _observerHead; // +0x8
}
- (void)sinkChange:(id)arg1 action:(SEL)arg2;
- (void)unSink:(id)arg1;
- (void)notifyDataChanged:(id)arg1 sender:(id)arg2;
- (id)observerHead;
- (void)setObserverHead:(id)arg1;
- (void).cxx_destruct;
@end
