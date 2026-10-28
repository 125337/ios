@interface MMLiveStatisticsTrophyPosterView : UIView <MMLivePosterViewProviding>
{
    BOOL _posterFocused; // +0x8
    MMLiveMonumentalStatisticsItem * _statisticsItem; // +0x10
    UIView * _containerView; // +0x18
    UIView * _backgroundContainerView; // +0x20
    MMLiveGradientLayerView * _borderView; // +0x28
    MMLiveGradientLayerView * _backgroundView; // +0x30
    UIView * _trophyContainerView; // +0x38
    UIView * _contentView; // +0x40
    MMLiveGradientLayerView * _anchorAvatarBorderView; // +0x48
    WCFinderHeadImageView * _anchorAvatarView; // +0x50
    MMLiveColorfulLabel * _anchorDisplayNameLabel; // +0x58
    MMLiveColorfulLabel * _dateLabel; // +0x60
    UIView * _subjectLabelContainerView; // +0x68
    MMLiveColorfulLabel * _subjectLabel; // +0x70
    UILabel * _subjectShadowLabel; // +0x78
    UILabel * _congratulatoryMessageLabel; // +0x80
    UIImageView * _brandLogoView; // +0x88
    UILabel * _brandLabel; // +0x90
    UIImageView * _qrCodeImageView; // +0x98
    UILabel * _qrCodeHintLabel; // +0xa0
    PAGView * _trophyPagView; // +0xa8
    PAGFile * _trophyPagFile; // +0xb0
    UIImage * _trophyPagLastFrameImage; // +0xb8
}
+ (id)borderGradientColorsForMonumentTier:(unsigned long long)arg1;
+ (id)backgroundGradientColors;
+ (id)anchorAvatarBorderGradientColorsForMonumentTier:(unsigned long long)arg1;
+ (id)anchorDisplayNameGradientColorsForMonumentTier:(unsigned long long)arg1;
+ (id)dateGradientColorsForMonumentTier:(unsigned long long)arg1;
+ (id)subjectGradientColorsForMonumentTier:(unsigned long long)arg1;
+ (id)bottomMiscellaneousTextColorForMonumentTier:(unsigned long long)arg1;
+ (id)qrCodeColorForMonumentTier:(unsigned long long)arg1;
- (id)initWithMonumentalStatisticsItem:(id)arg1 qrContent:(id)arg2 anchorFinderContact:(id)arg3 resourceFetcher:(id)arg4;
- (id)snapshotImage;
- (void)posterViewFocusStatusChanged:(BOOL)arg1;
- (void)layoutSubviews;
- (void)initializeComponentsWithQrContent:(id)arg1 anchorContact:(id)arg2;
- (void)loadTrophyPagWithResourceFetcher:(id)arg1;
- (id)imageForLastFrameOfPagFile:(id)arg1 trophyLabel:(id)arg2;
- (id)statisticsItem;
- (void)setStatisticsItem:(id)arg1;
- (id)containerView;
- (void)setContainerView:(id)arg1;
- (id)backgroundContainerView;
- (void)setBackgroundContainerView:(id)arg1;
- (id)borderView;
- (void)setBorderView:(id)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)trophyContainerView;
- (void)setTrophyContainerView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (id)anchorAvatarBorderView;
- (void)setAnchorAvatarBorderView:(id)arg1;
- (id)anchorAvatarView;
- (void)setAnchorAvatarView:(id)arg1;
- (id)anchorDisplayNameLabel;
- (void)setAnchorDisplayNameLabel:(id)arg1;
- (id)dateLabel;
- (void)setDateLabel:(id)arg1;
- (id)subjectLabelContainerView;
- (void)setSubjectLabelContainerView:(id)arg1;
- (id)subjectLabel;
- (void)setSubjectLabel:(id)arg1;
- (id)subjectShadowLabel;
- (void)setSubjectShadowLabel:(id)arg1;
- (id)congratulatoryMessageLabel;
- (void)setCongratulatoryMessageLabel:(id)arg1;
- (id)brandLogoView;
- (void)setBrandLogoView:(id)arg1;
- (id)brandLabel;
- (void)setBrandLabel:(id)arg1;
- (id)qrCodeImageView;
- (void)setQrCodeImageView:(id)arg1;
- (id)qrCodeHintLabel;
- (void)setQrCodeHintLabel:(id)arg1;
- (id)trophyPagView;
- (void)setTrophyPagView:(id)arg1;
- (id)trophyPagFile;
- (void)setTrophyPagFile:(id)arg1;
- (id)trophyPagLastFrameImage;
- (void)setTrophyPagLastFrameImage:(id)arg1;
- (BOOL)posterFocused;
- (void)setPosterFocused:(BOOL)arg1;
- (void).cxx_destruct;
@end
