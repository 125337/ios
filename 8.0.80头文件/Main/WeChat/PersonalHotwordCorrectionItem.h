@interface PersonalHotwordCorrectionItem : NSObject
{
    PersonalHotwordASRSnapshot * _snapshot; // +0x8
    NSString * _sentText; // +0x10
    double _enqueueTime; // +0x18
}
- (id)snapshot;
- (void)setSnapshot:(id)arg1;
- (id)sentText;
- (void)setSentText:(id)arg1;
- (double)enqueueTime;
- (void)setEnqueueTime:(double)arg1;
- (void).cxx_destruct;
@end
