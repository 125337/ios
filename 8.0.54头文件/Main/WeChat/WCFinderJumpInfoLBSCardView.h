@interface WCFinderJumpInfoLBSCardView : UIView <WCFinderLBSCardContentViewDelegate>
{
    int _showPosition; // +0x8
    id <WCFinderJumpInfoLBSCardViewDelegate> _delegate; // +0x10
    WCFinderLBSCardContentView * _cardContent; // +0x18
    FinderJumpInfo_Style * _style; // +0x20
    WCFinderJumpInfo * _jumpInfo; // +0x28
    FinderLocation * _locationInfo; // +0x30
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setupSubviews;
- (void)updateWithJumpInfo:(id)arg1 showPosition:(int)arg2;
- (void)updateWithJumpInfo:(id)arg1 style:(id)arg2;
- (void)layoutSubviews;
- (void)lbsCardChangeFavState:(BOOL)arg1;
- (void)lbsCardDidClickCard;
- (void)lbsCardLayoutHeightChanged;
- (void)lbsCardSetupFavButtonReport:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)cardContent;
- (void)setCardContent:(id)arg1;
- (id)style;
- (void)setStyle:(id)arg1;
- (int)showPosition;
- (void)setShowPosition:(int)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (id)locationInfo;
- (void)setLocationInfo:(id)arg1;
- (void).cxx_destruct;
@end

