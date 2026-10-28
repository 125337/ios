@interface TSKScorer : NSObject
{
    Scorer _scorer; // +0x8
    unique_ptr<audiobase::dsp::PitchDetect, std::default_delete<audiobase::dsp::PitchDetect>> _pd; // +0x10
    int _sampleRate; // +0x18
    int _channels; // +0x1c
    id <TSKScorerDelegate> _delegate; // +0x20
    id /* block */ _extraInfoBlock; // +0x28
    long long _options; // +0x30
    TSKScorerConfig * _config; // +0x38
    TSKScoreResultSet * _scoreResultSet; // +0x40
    NSOperationQueue * _scoreQueue; // +0x48
    id /* block */ _seekExecutor; // +0x50
    long long _shiftValue; // +0x58
    double _reduceRatio; // +0x60
    NSString * _mapString; // +0x68
}
+ (long long)optionsForMidiScoreWithSampleRate:(int)arg1;
- (id)newMidiCalculator;
- (_NSRange)noteRange;
- (id)normalizedNotes;
- (id)initWithSampleRate:(int)arg1 channels:(int)arg2 options:(long long)arg3 config:(id)arg4 error:(id *)arg5;
- (void)dealloc;
- (void)deinit:(BOOL)arg1;
- (int)sentenceCount;
- (void)process:(const char *)arg1 inSize:(int)arg2 timestamp:(double)arg3 curPitchs:(id)arg4;
- (void)seek:(double)arg1;
- (void)reset;
- (void)finishWithBlock:(id /* block */)arg1;
- (void)setKeyShift:(long long)arg1;
- (void)setReduceRatio:(double)arg1;
- (void)setMapString:(id)arg1;
- (id)getScoreResult;
- (void)accessScoreResult:(id /* block */)arg1;
- (void)seekSync:(double)arg1;
- (void)seekAsync:(double)arg1;
- (void)cleanupEnv;
- (void)copyResultSet;
- (void)updateScoreWithIndex:(const void *)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id /* block */)extraInfoBlock;
- (void)setExtraInfoBlock:(id /* block */)arg1;
- (long long)options;
- (void)setOptions:(long long)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (int)sampleRate;
- (void)setSampleRate:(int)arg1;
- (int)channels;
- (void)setChannels:(int)arg1;
- (id)scoreResultSet;
- (void)setScoreResultSet:(id)arg1;
- (id)scoreQueue;
- (void)setScoreQueue:(id)arg1;
- (id /* block */)seekExecutor;
- (void)setSeekExecutor:(id /* block */)arg1;
- (long long)shiftValue;
- (void)setShiftValue:(long long)arg1;
- (double)reduceRatio;
- (id)mapString;
- (void).cxx_destruct;
- (id).cxx_construct;
@end
