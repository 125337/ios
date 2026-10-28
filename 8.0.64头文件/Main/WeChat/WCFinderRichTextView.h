@interface WCFinderRichTextView : RichTextView <ImageStyleDelegate>
{
    NSMutableDictionary * _respCache; // +0x98
}
+ (id)defaultSVGMap;
- (id)respCache;
- (BOOL)provideImageForStyle:(id)arg1 handler:(id /* block */)arg2;
- (BOOL)handleDynamicIcon:(id)arg1 size:(CGSize)arg2 color:(id)arg3 handler:(id /* block */)arg4;
- (BOOL)handleDynamicIconId:(id)arg1 size:(CGSize)arg2 color:(id)arg3 handler:(id /* block */)arg4;
- (BOOL)handleCommentIcon:(id)arg1 size:(CGSize)arg2 handler:(id /* block */)arg3;
- (CGRect)getFrameOfImageStyleMatches:(id /* block */)arg1;
- (id)getParserByPaserType:(unsigned long long)arg1;
- (void)setRespCache:(id)arg1;
- (void).cxx_destruct;
@end
