@interface MMFinderLiveConcertTicketView : UIView
{
    id <MMFinderLiveConcertTicketViewDelegate> _delegate; // +0x8
    UIView * _ticketRoundedCornerContainerView; // +0x10
    UIView * _ticketContainerView; // +0x18
    UIView * _nonImagedContainerView; // +0x20
    UIImageView * _backgroundImageView; // +0x28
    UIImageView * _brandLogoView; // +0x30
    UIView * _ticketIdContainer; // +0x38
    UILabel * _ticketIdLabel; // +0x40
    UIImageView * _quotationMarkImageView; // +0x48
    MMUIButton * _nextLyricsButton; // +0x50
    MMUILabel * _lyricsQuotationLabel; // +0x58
    UILabel * _concertNameLabel; // +0x60
    UIImageView * _weBeanLogoView; // +0x68
    UILabel * _weBeanPriceLabel; // +0x70
    UILabel * _timeLabel; // +0x78
    UILabel * _locationLabel; // +0x80
    UIView * _separatorBarView; // +0x88
    UIImageView * _holderAvatarView; // +0x90
    UILabel * _holderLabel; // +0x98
    UIView * _qrCodeContainerView; // +0xa0
    UIImageView * _qrCodeImageView; // +0xa8
    NSArray * _lyrics; // +0xb0
    unsigned long long _currentLyricsIndex; // +0xb8
    UIView * _externalNavigationBar; // +0xc0
    UIImageView * _externalNavigationBarBackgroundImageView; // +0xc8
    UIImageView * _externalNavigationBarIconView; // +0xd0
    MMUIButton * _externalNavigationButton; // +0xd8
    UIImageView * _externalNavigationBarRightChevronView; // +0xe0
}
- (id)initWithFrame:(CGRect)arg1;
- (void)updateWithTicketStyleItem:(id)arg1;
- (void)playEntryAnimation;
- (id)ticketImage;
- (CGSize)sizeThatFits:(CGSize)arg1;
- (void)layoutSubviews;
- (void)nextLyricsQuotation;
- (void)onExternalNavigationInvoked;
- (void)startAsyncImageLoadWithStyleItem:(id)arg1;
- (void)setImageUri:(id)arg1 forImageView:(id)arg2 fallbackImage:(id)arg3 isRequired:(BOOL)arg4 isCritical:(BOOL)arg5 criticalFailBlock:(id /* block */)arg6 taskGroup:(id)arg7 logKey:(id)arg8;
- (void)setLabelColor:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)ticketRoundedCornerContainerView;
- (void)setTicketRoundedCornerContainerView:(id)arg1;
- (id)ticketContainerView;
- (void)setTicketContainerView:(id)arg1;
- (id)nonImagedContainerView;
- (void)setNonImagedContainerView:(id)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)brandLogoView;
- (void)setBrandLogoView:(id)arg1;
- (id)ticketIdContainer;
- (void)setTicketIdContainer:(id)arg1;
- (id)ticketIdLabel;
- (void)setTicketIdLabel:(id)arg1;
- (id)quotationMarkImageView;
- (void)setQuotationMarkImageView:(id)arg1;
- (id)nextLyricsButton;
- (void)setNextLyricsButton:(id)arg1;
- (id)lyricsQuotationLabel;
- (void)setLyricsQuotationLabel:(id)arg1;
- (id)concertNameLabel;
- (void)setConcertNameLabel:(id)arg1;
- (id)weBeanLogoView;
- (void)setWeBeanLogoView:(id)arg1;
- (id)weBeanPriceLabel;
- (void)setWeBeanPriceLabel:(id)arg1;
- (id)timeLabel;
- (void)setTimeLabel:(id)arg1;
- (id)locationLabel;
- (void)setLocationLabel:(id)arg1;
- (id)separatorBarView;
- (void)setSeparatorBarView:(id)arg1;
- (id)holderAvatarView;
- (void)setHolderAvatarView:(id)arg1;
- (id)holderLabel;
- (void)setHolderLabel:(id)arg1;
- (id)qrCodeContainerView;
- (void)setQrCodeContainerView:(id)arg1;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg1;
- (id)lyrics;
- (void)setLyrics:(id)arg1;
- (unsigned long long)currentLyricsIndex;
- (void)setCurrentLyricsIndex:(unsigned long long)arg1;
- (id)externalNavigationBar;
- (void)setExternalNavigationBar:(id)arg1;
- (id)externalNavigationBarBackgroundImageView;
- (void)setExternalNavigationBarBackgroundImageView:(id)arg1;
- (id)externalNavigationBarIconView;
- (void)setExternalNavigationBarIconView:(id)arg1;
- (id)externalNavigationButton;
- (void)setExternalNavigationButton:(id)arg1;
- (id)externalNavigationBarRightChevronView;
- (void)setExternalNavigationBarRightChevronView:(id)arg1;
- (void).cxx_destruct;
@end
