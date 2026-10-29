@interface CBTStreamMDController : NSObject <CBTStreamMDParseLogicDelegate, CBTStreamMDFeederDelegate>
{
    BOOL _streaming; // +0x8
    id <CBTStreamMDControllerDelegate> _delegate; // +0x10
    CBTMDStyleConfig * _config; // +0x18
    CBTStreamMDFeederConfig * _feederConfig; // +0x20
    id <CBTStreamMDFeederDelegate> _feederDelegate; // +0x28
    CBTStreamMDParseLogic * _parseLogic; // +0x30
    CBTStreamMDFeeder * _feeder; // +0x38
    CBTStreamMDTextView * _textView; // +0x40
    NSMutableAttributedString * _attrContent; // +0x48
    NSMutableAttributedString * _outputAttrContent; // +0x50
}
- (id)initWithTextView:(id)arg1 config:(id)arg2 streaming:(BOOL)arg3 scene:(unsigned int)arg4;
- (void)appendContent:(id)arg1 isEnd:(BOOL)arg2;
- (BOOL)isParseCompleted;
- (BOOL)isFeeding;
- (id)renderedAttrContent;
- (void)bindTextView:(id)arg1;
- (void)pause;
- (void)resume;
- (void)flush;
- (void)stop;
- (void)destoryParser;
- (void)scaleFontsByRatio:(double)arg1;
- (void)_scaleAttributedString:(id)arg1 ratio:(double)arg2 scaledTableControllers:(id)arg3;
- (void)setFeederConfig:(id)arg1;
- (void)setFeederDelegate:(id)arg1;
- (void)onGeneratedContent:(id)arg1;
- (void)onGeneratedFootnoteDefInfo:(id)arg1;
- (void)onParseTiming:(double)arg1 nodeType:(int)arg2;
- (void)onParseFinished;
- (id)currentAttrContentForBackfill;
- (void)backfillStreamingListBlockIndent:(id)arg1;
- (void)onFeederDidOutput:(id)arg1;
- (void)onFeederDidFinish;
- (void)onFeederDidOutputNewLine:(double)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)config;
- (void)setConfig:(id)arg1;
- (BOOL)streaming;
- (void)setStreaming:(BOOL)arg1;
- (id)feederConfig;
- (id)feederDelegate;
- (id)parseLogic;
- (void)setParseLogic:(id)arg1;
- (id)feeder;
- (void)setFeeder:(id)arg1;
- (id)textView;
- (void)setTextView:(id)arg1;
- (id)attrContent;
- (void)setAttrContent:(id)arg1;
- (id)outputAttrContent;
- (void)setOutputAttrContent:(id)arg1;
- (void).cxx_destruct;
@end
