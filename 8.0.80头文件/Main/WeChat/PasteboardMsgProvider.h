@interface PasteboardMsgProvider : NSObject
{
    unsigned int _msgCreateTime; // +0x8
    CBaseContact * _contact; // +0x10
    NSMutableArray * _overSizeReportItems; // +0x18
}
+ (id)GetMessageFromImage:(id)arg1 contact:(id)arg2;
- (id)initWithContact:(id)arg1;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (id)GetMessageFromImage:(id)arg1;
- (void)generateTextMsgWrapWithItemProvider:(id)arg1 arrTypes:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)generateImageMsgWrapWithItemProvider:(id)arg1 arrTypes:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)generateVideoMsgWrapWithItemProvider:(id)arg1 arrTypes:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)generateArchiveMsgWrapWithItemProvider:(id)arg1 arrTypes:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)generatePBListMsgWrapWithItemProvider:(id)arg1 arrTypes:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)generateContentMsgWrapWithItemProvider:(id)arg1 arrTypes:(id)arg2 completeBlock:(id /* block */)arg3;
- (void)generateDataMsgWrapWithItemProvider:(id)arg1 arrTypes:(id)arg2 completeBlock:(id /* block */)arg3;
- (BOOL)isOverSize:(id)arg1;
- (void)generateMsgWrapWithItemProvider:(id)arg1 completeBlock:(id /* block */)arg2;
- (void)parseMsgListWithPasteboard:(id /* block */)arg1;
- (unsigned int)msgCreateTime;
- (void)setMsgCreateTime:(unsigned int)arg1;
- (id)contact;
- (void)setContact:(id)arg1;
- (id)overSizeReportItems;
- (void)setOverSizeReportItems:(id)arg1;
- (void).cxx_destruct;
@end
