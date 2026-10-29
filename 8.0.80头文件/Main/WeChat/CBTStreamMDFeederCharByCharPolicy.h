@interface CBTStreamMDFeederCharByCharPolicy : NSObject <CBTStreamMDFeederOutputPolicy>
- (BOOL)isNewlineAtIndex:(unsigned long long)arg1 inString:(id)arg2 range:(_NSRange *)arg3;
- (BOOL)isLayoutSpacingAttachmentAtIndex:(unsigned long long)arg1 inAttributedString:(id)arg2 range:(_NSRange *)arg3;
- (BOOL)paragraphSpacingAtomicRangeAtIndex:(unsigned long long)arg1 inAttributedString:(id)arg2 range:(_NSRange *)arg3;
- (id)splitChunk:(id)arg1;
- (unsigned long long)outputCountForTick:(id)arg1;
@end
