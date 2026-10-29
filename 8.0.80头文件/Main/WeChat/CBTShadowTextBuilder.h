@interface CBTShadowTextBuilder : NSObject
{
    NSMutableString * _shadowText; // +0x8
    NSMutableArray * _spans; // +0x10
}
- (id)init;
- (void)appendTextSpanKind:(long long)arg1 text:(id)arg2 physicalRange:(_NSRange)arg3 attachmentView:(id)arg4 localRange:(_NSRange)arg5 userInfo:(id)arg6;
- (void)appendPartialText:(id)arg1 attachmentView:(id)arg2 physicalLocation:(unsigned long long)arg3 localRange:(_NSRange)arg4 userInfo:(id)arg5;
- (void)appendGlueText:(id)arg1 attachmentView:(id)arg2 physicalLocation:(unsigned long long)arg3;
- (id)shadowText;
- (void)setShadowText:(id)arg1;
- (id)spans;
- (void)setSpans:(id)arg1;
- (void).cxx_destruct;
@end
