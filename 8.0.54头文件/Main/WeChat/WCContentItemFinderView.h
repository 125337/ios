@interface WCContentItemFinderView : WCContentItemBaseView <ServiceAuthExt, MMImageLoaderObserver, WCFinderZoomAnimatorBehavior, WCFinderShareAbstractCell, NewLifeDetailShareViewAnimationBehavior>
{
    BOOL _ignoresRequestFinderRelatedFeeds; // +0x38
    BOOL _playFullScreen; // +0x39
    BOOL _needSilencePlay; // +0x3a
    NSString * _parentTid; // +0x40
    WCContentItemFinderViewModel * _viewModel; // +0x48
    NewLifeShareCoverImageViewModel * _newlifeViewModel; // +0x50
    WCFinderDataItem * _refFinderDataItem; // +0x58
    WCFinderFeedMediaWrap * _mediaWrap; // +0x60
    WCFinderMediaInfo * _mediaInfo; // +0x68
    SightIconView * _playIconView; // +0x70
    UIImageView * _contentImageView; // +0x78
    NSURL * _fullScreenImageURL; // +0x80
    UIImage * _fullScreenImage; // +0x88
    UILabel * _nameLabel; // +0x90
    UILabel * _durationLabel; // +0x98
    UIView * _hlView; // +0xa0
    double _lastTime; // +0xa8
    MMUIButton * _memberFlagButton; // +0xb0
    NewLifeShareCoverImageView * _newlifeShareView; // +0xb8
    CGRect _fromRect; // +0xc0
}
+ (double)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)dealloc;
- (void)preLoad:(id)arg1;
- (void)setRefFinderDataItem:(id)arg1;
- (void)initViewsWithWCContentItem:(id)arg1;
- (void)layoutDefault:(id)arg1;
- (void)layoutPureText:(id)arg1;
- (void)layoutCardStyle:(id)arg1;
- (void)layoutNewLifeStyle:(id)arg1;
- (id)playIconView;
- (id)memberFlagButton;
- (id)contentImageView;
- (id)nameLabel;
- (id)durationLabel;
- (id)hlView;
- (void)onVoiceOverClick;
- (id)getVoiceOverStrForTimeline;
- (void)throwUrlMessage;
- (void)setHighlightedColor;
- (void)setNormalColor;
- (void)onLongTouch;
- (void)onSilencePlay;
- (void)onFavoriteAdd;
- (id)zoomAnimatorTransitionSnapView:(id)arg1 cornerRaidus:(double *)arg2;
- (BOOL)zoomAnimiatorShouldCacheSnapView;
- (void)onAnimatorWillBeginClosure:(id)arg1;
- (void)onAnimatorDidEndClosure:(id)arg1;
- (id)zoomAnimatorKey;
- (id)getNewLifeZoomAnimatorKey;
- (id)getNewLifeAnimationCardView;
- (id)getNewLifeAnimationCardImageView;
- (void)onNewLifeDetailShareViewAnimationBegin;
- (void)onNewLifeDetailShareViewAnimationEnd;
- (id)transitionStartImage;
- (CGRect)transitionStartImageRectInView:(id)arg1 willPresent:(BOOL)arg2;
- (void)doShareAnimation;
- (void)onOpenService:(unsigned long long)arg1 config:(id)arg2 error:(id)arg3;
- (void)loadFinderImages;
- (void)cancelLoadFinderImages;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (BOOL)ignoresRequestFinderRelatedFeeds;
- (void)setIgnoresRequestFinderRelatedFeeds:(BOOL)arg1;
- (id)parentTid;
- (void)setParentTid:(id)arg1;
- (id)viewModel;
- (void)setViewModel:(id)arg1;
- (id)newlifeViewModel;
- (void)setNewlifeViewModel:(id)arg1;
- (id)refFinderDataItem;
- (id)mediaWrap;
- (void)setMediaWrap:(id)arg1;
- (id)mediaInfo;
- (void)setMediaInfo:(id)arg1;
- (void)setPlayIconView:(id)arg1;
- (void)setContentImageView:(id)arg1;
- (id)fullScreenImageURL;
- (void)setFullScreenImageURL:(id)arg1;
- (id)fullScreenImage;
- (void)setFullScreenImage:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setDurationLabel:(id)arg1;
- (void)setHlView:(id)arg1;
- (BOOL)playFullScreen;
- (void)setPlayFullScreen:(BOOL)arg1;
- (CGRect)fromRect;
- (void)setFromRect:(CGRect)arg1;
- (double)lastTime;
- (void)setLastTime:(double)arg1;
- (void)setMemberFlagButton:(id)arg1;
- (id)newlifeShareView;
- (void)setNewlifeShareView:(id)arg1;
- (BOOL)needSilencePlay;
- (void)setNeedSilencePlay:(BOOL)arg1;
- (void).cxx_destruct;
@end

