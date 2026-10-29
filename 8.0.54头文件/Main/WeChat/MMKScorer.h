@interface MMKScorer : NSObject
{
    BOOL _initSucc; // +0x8
    int _channel; // +0xc
    int _sampleRate; // +0x10
    int _sentenceIndex; // +0x14
    int _totalScore; // +0x18
    id <MMKScorerDelegate> _delegate; // +0x20
    void * _scorerHandler; // +0x28
    NSData * _noteData; // +0x30
    NSArray * _sentenceTimeArray; // +0x38
}
+ (id)parseNormalizedNotesOrig:(id)arg1;
- (id)initWithSampleRate:(int)arg1 channel:(int)arg2 config:(id)arg3;
- (void)deinit;
- (void)dealloc;
- (void)initDefaultDatas;
- (void)createScorerHandler;
- (void)freeScorerHandler;
- (void)updateHitResult:(double)arg1 isHit:(BOOL)arg2 noteValue:(int)arg3 noteHeight:(int)arg4;
- (void)updateScoreWithIndex:(int)arg1 score:(int)arg2;
- (void)process:(const char *)arg1 inSize:(int)arg2 timestamp:(double)arg3;
- (void)finishAllScoreProcess;
- (void)setKeyShift:(int)arg1;
- (id)normalizedNotes;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)initSucc;
- (void)setInitSucc:(BOOL)arg1;
- (void *)scorerHandler;
- (void)setScorerHandler:(void *)arg1;
- (int)channel;
- (void)setChannel:(int)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (id)noteData;
- (void)setNoteData:(id)arg1;
- (id)sentenceTimeArray;
- (void)setSentenceTimeArray:(id)arg1;
- (int)sentenceIndex;
- (void)setSentenceIndex:(int)arg1;
- (int)totalScore;
- (void)setTotalScore:(int)arg1;
- (void).cxx_destruct;
@end

