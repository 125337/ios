@interface WCFinderMembershipPaymentNoticeDetailView : UIView <ILinkEventExt>
{
    id <WCFinderMembershipPaymentNoticeDetailViewDelegate> _delegate; // +0x8
}
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutContent;
- (void)layout;
- (id)genRichTextView;
- (id)genDotView;
- (void)onLinkClicked:(id)arg1 withRect:(CGRect)arg2;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void).cxx_destruct;
@end
