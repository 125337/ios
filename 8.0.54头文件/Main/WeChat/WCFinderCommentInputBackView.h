@interface WCFinderCommentInputBackView : UIView
{
    unsigned long long _displayMode; // +0x8
    WCFinderMemberCommentInputAreaTipsView * _membershipTipsView; // +0x10
}
- (void)layoutSubviews;
- (void)updateWithDisplayMode:(unsigned long long)arg1;
- (unsigned long long)displayMode;
- (void)setDisplayMode:(unsigned long long)arg1;
- (id)membershipTipsView;
- (void)setMembershipTipsView:(id)arg1;
- (void).cxx_destruct;
@end

