@interface GCGroupNoticeView : UIView <ILinkEventExt>
{
    RichTextView * _richTextView; // +0x8
    NSMutableDictionary * _linkJumpInfoDict; // +0x10
    id <GCGroupNoticeViewDelegate> _delegate; // +0x18
}
+ (id)backEndColorFromColorStr:(id)arg1;
+ (id)backEndColorFromColor:(id)arg1;
+ (id)getTestJumpInfo;
+ (id)getHalfScreen;
+ (id)getFakeNotice;
- (id)initWithWidth:(double)arg1 chatRoomNotice:(id)arg2;
- (id)rgbaStrFromBackEndColor:(id)arg1;
- (id)rgbaStrFromArgbStr:(id)arg1;
- (id)getContentStrFromContentBlockList:(id)arg1;
- (id)linkBlockForUrl:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (void)onNoticeCloseBtnClick;
- (id)richTextView;
- (void)setRichTextView:(id)arg1;
- (id)linkJumpInfoDict;
- (void)setLinkJumpInfoDict:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end

