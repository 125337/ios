@interface WCFinderNativeDramaGuideSession : NSObject
{
    unsigned long long _generation; // +0x8
    NSString * _bubbleText; // +0x10
    unsigned long long _bubbleDramaID; // +0x18
    unsigned long long _bubbleType; // +0x20
    NSString * _bubbleSessionID; // +0x28
    unsigned long long _dramaTabEnterType; // +0x30
    unsigned long long _prefetchState; // +0x38
    FinderDramaPermeateStreamRecommendResp * _firstScreenResponse; // +0x40
    WCFinderMMKVKeyModel * _mmkvKeyModel; // +0x48
    WCFinderXLabSwitchModel * _xLabSwitchModel; // +0x50
}
- (id)initWithMMKVKeyModel:(id)arg1 xLabSwitchModel:(id)arg2;
- (void)beginWithBubbleText:(id)arg1 bubbleBuffer:(id)arg2 dramaID:(unsigned long long)arg3 bubbleType:(unsigned long long)arg4;
- (BOOL)isBubbleFrequencyAllowed;
- (id)prepareBubbleTextForDisplay;
- (void)recordBubbleExposure;
- (void)recordBubbleClick;
- (void)markDramaTabEnterFromBubble;
- (id)consumeFirstScreenResponse;
- (unsigned long long)consumeDramaTabEnterType;
- (void)clear;
- (unsigned long long)generation;
- (void)setGeneration:(unsigned long long)arg1;
- (id)bubbleText;
- (void)setBubbleText:(id)arg1;
- (unsigned long long)bubbleDramaID;
- (void)setBubbleDramaID:(unsigned long long)arg1;
- (unsigned long long)bubbleType;
- (void)setBubbleType:(unsigned long long)arg1;
- (id)bubbleSessionID;
- (void)setBubbleSessionID:(id)arg1;
- (unsigned long long)dramaTabEnterType;
- (void)setDramaTabEnterType:(unsigned long long)arg1;
- (unsigned long long)prefetchState;
- (void)setPrefetchState:(unsigned long long)arg1;
- (id)firstScreenResponse;
- (void)setFirstScreenResponse:(id)arg1;
- (id)mmkvKeyModel;
- (void)setMmkvKeyModel:(id)arg1;
- (id)xLabSwitchModel;
- (void)setXLabSwitchModel:(id)arg1;
- (void).cxx_destruct;
@end
