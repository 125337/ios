@interface MMCountDownLabelHelper : NSObject
{
    NSHashTable * _labels; // +0x8
    NSObject<OS_dispatch_source> * _timer; // +0x10
}
+ (id)shareInstance;
- (id)init;
- (void)addLabel:(id)arg1;
- (void)updateLabels;
- (id)labels;
- (void)setLabels:(id)arg1;
- (id)timer;
- (void)setTimer:(id)arg1;
- (void).cxx_destruct;
@end
