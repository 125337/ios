@interface MMFinderProfileLiveCollectionViewCell : UICollectionViewCell <MMLiveCDNPlayerViewDelegate, ILinkEventExt>
{
    BOOL _isReplayVedio; // +0x8
    id <MMFinderProfileLiveCollectionViewCellDelegate> _delegate; // +0x10
    WCFinderDataItem * _dataItem; // +0x18
    MMLiveCDNPlayerView * _playerView; // +0x20
    UIView * _endMaskView; // +0x28
    UILabel * _endTipsView; // +0x30
    UIView * _gradientView; // +0x38
    CAGradientLayer * _gradientLayer; // +0x40
    RichTextView * _descLabel; // +0x48
    UILabel * _digestLabel; // +0x50
    UILabel * _dateLabel; // +0x58
    MMUIImageView * _digestIcon; // +0x60
    UIView * _separaLine; // +0x68
    MMUIImageView * _privateIcon; // +0x70
}
+ (double)cellHeightInWidth:(double)arg1;
+ (BOOL)isOwnerWithDataItem:(id)arg1;
+ (BOOL)isAudiencePurchasedWithDataItem:(id)arg1;
+ (BOOL)needShowPaymentInfoWithDataItem:(id)arg1;
+ (unsigned long long)getDescStyleWithDataItem:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)prepareForReuse;
- (void)updateWithDataItem:(id)arg1 isReplayVedio:(BOOL)arg2;
- (void)playWithSound:(BOOL)arg1;
- (void)stop;
- (void)setMute:(BOOL)arg1;
- (void)setAccessibilityInfo:(id)arg1;
- (void)layoutUI;
- (void)layoutSubviews;
- (void)addBlurEffectIfNeed;
- (void)removeBlurEffectIfNeed;
- (BOOL)checkPurchaseUserCount;
- (id)watchOrPurchaseUserCountText:(unsigned long long)arg1;
- (void)updateReplayDesc;
- (CGSize)getIconSize;
- (unsigned long long)watchOrPurchaseCount;
- (void)hideReplayDetail;
- (BOOL)needShowPaymentInfo;
- (id)playerView;
- (id)endMaskView;
- (id)endTipsView;
- (id)gradientView;
- (id)descLabel;
- (id)digestIcon;
- (id)separaLine;
- (id)privateIcon;
- (id /* block */)iconGeneratorWithName:(id)arg1;
- (id)digestLabel;
- (id)dateLabel;
- (void)onPlayBegin;
- (void)onPlayProgress:(double)arg1;
- (void)onPlayDisconnect;
- (void)onPlayEnd;
- (void)onPlayMuteByNotifyOuter:(BOOL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isReplayVedio;
- (void)setIsReplayVedio:(BOOL)arg1;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (void)setPlayerView:(id)arg1;
- (void)setEndMaskView:(id)arg1;
- (void)setEndTipsView:(id)arg1;
- (void)setGradientView:(id)arg1;
- (id)gradientLayer;
- (void)setGradientLayer:(id)arg1;
- (void)setDescLabel:(id)arg1;
- (void)setDigestLabel:(id)arg1;
- (void)setDateLabel:(id)arg1;
- (void)setDigestIcon:(id)arg1;
- (void)setSeparaLine:(id)arg1;
- (void)setPrivateIcon:(id)arg1;
- (void).cxx_destruct;
@end

