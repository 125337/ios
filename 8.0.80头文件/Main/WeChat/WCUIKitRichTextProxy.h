@interface WCUIKitRichTextProxy : NSObject <ILinkEventExt>
{
    id <IWCRichTextLabelDelegate> _richTextLabelDelegate; // +0x8
}
+ (void)setGenearlPasteboardString:(id)arg1;
- (id)getRichTextLabelWithDelegate:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)richTextLabelDelegate;
- (void)setRichTextLabelDelegate:(id)arg1;
- (void).cxx_destruct;
@end
