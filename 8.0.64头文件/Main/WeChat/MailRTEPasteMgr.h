@interface MailRTEPasteMgr : MMObject
+ (void)copy:(id)arg1;
+ (id)copyAttachmentsInAttributedString:(id)arg1;
+ (id)copyAttachment:(id)arg1;
+ (id)getDescOfAttachment:(id)arg1;
+ (id)getPasteData;
+ (BOOL)hasPasteData;
@end
