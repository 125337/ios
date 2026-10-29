@interface MMFinderLiveConcertMiniatureTicketView : UIView <MMFinderLiveConcertMiniTicketViewBase>
{
    id /* block */ _readyForDisplayBlock; // +0x8
    id /* block */ _getTicketButtonTappedBlock; // +0x10
    id /* block */ _closeButtonTappedBlock; // +0x18
    UIImageView * _backgroundImageView; // +0x20
    UILabel * _concertNameLabel; // +0x28
    MMUIButton * _getTicketButton; // +0x30
    MMUIButton * _closeButton; // +0x38
    UIView * _shadowView; // +0x40
    MMFinderLiveConcertMiniatureTicketViewReportContext * _reportContext; // +0x48
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithTicketModel:(id)arg1 reportContext:(id)arg2;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)onGetTicketButtonTapped;
- (void)onCloseButtonTapped;
- (void)checkImageLoadCompletion;
- (id /* block */)readyForDisplayBlock;
- (void)setReadyForDisplayBlock:(id /* block */)arg1;
- (id /* block */)getTicketButtonTappedBlock;
- (void)setGetTicketButtonTappedBlock:(id /* block */)arg1;
- (id /* block */)closeButtonTappedBlock;
- (void)setCloseButtonTappedBlock:(id /* block */)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)concertNameLabel;
- (void)setConcertNameLabel:(id)arg1;
- (id)getTicketButton;
- (void)setGetTicketButton:(id)arg1;
- (id)closeButton;
- (void)setCloseButton:(id)arg1;
- (id)shadowView;
- (void)setShadowView:(id)arg1;
- (id)reportContext;
- (void)setReportContext:(id)arg1;
- (void).cxx_destruct;
@end

