@interface MMLiveQcPollView : UIView <MMFinderLivePromoteDisplayLeaseTokenDelegate>
{
    BOOL _responseEntered; // +0x8
    id <MMLiveQcPollResponseDelegate> _responseDelegate; // +0x10
    MMLiveQcPollQuestion * _question; // +0x18
    UIView * _contentView; // +0x20
    UILabel * _stemLabel; // +0x28
    NSArray * _optionButtons; // +0x30
    MMFinderLivePromoteDisplayLeaseToken * _displayLeaseToken; // +0x38
}
- (id)initWithQuestion:(id)arg1 displayLeaseToken:(id)arg2;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)onOptionButtonTapped:(id)arg1;
- (void)onPromoteDisplayLeaseInvalidated:(id)arg1 forReason:(unsigned long long)arg2;
- (id)responseDelegate;
- (void)setResponseDelegate:(id)arg1;
- (id)question;
- (void)setQuestion:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)stemLabel;
- (void)setStemLabel:(id)arg1;
- (id)optionButtons;
- (void)setOptionButtons:(id)arg1;
- (id)displayLeaseToken;
- (void)setDisplayLeaseToken:(id)arg1;
- (BOOL)responseEntered;
- (void)setResponseEntered:(BOOL)arg1;
- (void).cxx_destruct;
@end
