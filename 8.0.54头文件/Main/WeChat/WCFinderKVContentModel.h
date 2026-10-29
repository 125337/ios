@interface WCFinderKVContentModel : NSObject
{
    BOOL _useOriginalNode; // +0x8
    NSString * _reportContent; // +0x10
    unsigned long long _renderSuc; // +0x18
    unsigned long long _textLineNumber; // +0x20
    unsigned long long _remakeFlag; // +0x28
    NSString * _reddotShowContent; // +0x30
}
- (id)init;
- (id)reportContent;
- (void)setReportContent:(id)arg1;
- (unsigned long long)renderSuc;
- (void)setRenderSuc:(unsigned long long)arg1;
- (unsigned long long)textLineNumber;
- (void)setTextLineNumber:(unsigned long long)arg1;
- (unsigned long long)remakeFlag;
- (void)setRemakeFlag:(unsigned long long)arg1;
- (BOOL)useOriginalNode;
- (void)setUseOriginalNode:(BOOL)arg1;
- (id)reddotShowContent;
- (void)setReddotShowContent:(id)arg1;
- (void).cxx_destruct;
@end

