@interface WeNotePasteManager : NSObject
+ (void)reset;
+ (id)CopyAttachment:(id)arg1 copyScene:(int)arg2;
+ (id)getCopyAttachmentNativeItemWith:(id)arg1;
+ (id)getCopyAttachmentWith:(id)arg1;
+ (id)getTempPathWithMd5:(id)arg1 isThumb:(BOOL)arg2 dataFmt:(id)arg3;
+ (void)resetCdnInfo:(id)arg1;
@end

