@interface OMCEmoticonSegment : OMCElementSegment
- (id)animatedImageFilePath;
- (unsigned long long)animatedImageDecoderType;
- (unsigned long long)timingFillMode;
- (BOOL)replaceEmoticonWithFilePath:(id)arg1 decoderType:(unsigned long long)arg2 timingFillMode:(unsigned long long)arg3;
- (SharedPtr<XMSEmoticonSegment>)backingEmoticonSegment;
@end
