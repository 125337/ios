@interface FTSXiaoWeiGen2HeadlessObserver : NSObject <CBTHeadlessVoiceObserverBase>
{
    FTSFloatingXiaoWeiModel * _model; // +0x8
}
- (void)onVoiceInputStateChanged:(unsigned long long)arg1 state:(int)arg2 errCode:(int)arg3 errMsg:(id)arg4;
- (void)onVoiceInputLevelMeter:(unsigned long long)arg1 peak:(float)arg2;
- (id)model;
- (void)setModel:(id)arg1;
- (void).cxx_destruct;
@end
