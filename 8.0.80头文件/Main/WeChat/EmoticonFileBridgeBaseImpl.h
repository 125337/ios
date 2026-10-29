@interface EmoticonFileBridgeBaseImpl : NSObject <EmoticonFileBridgeBase>
- (void)setCallback:(id)arg1;
- (void)getThumbImgAsync:(unsigned long long)arg1 md5:(id)arg2 emojiInfo:(id)arg3;
- (void)getImgPathAsync:(unsigned long long)arg1 md5:(id)arg2 emojiInfo:(id)arg3;
@end
