@interface WCAdFireworkCheerLikeAreaView : MMUIView <IWCAdSocialLikeLogicExt>
{
    BOOL _contentShowFlag; // +0x8
    WCDataItem * _dataItem; // +0x10
    WCAdFireworkCheerInfo * _fireworkCheerInfo; // +0x18
    unsigned long long _contentItemScene; // +0x20
    WCAdURLImageView * _backgroundImageView; // +0x28
    PAGView * _topPagView; // +0x30
    MMUIView * _topContentView; // +0x38
}
+ (double)topAreaHeight;
- (id)initWithFrame:(CGRect)arg1 fireworkCheerInfo:(id)arg2 dataItem:(id)arg3 contentItemScene:(unsigned long long)arg4;
- (void)dealloc;
- (void)initView;
- (void)initBackgroundImageView;
- (void)initTopPagView;
- (void)initTopContentView;
- (double)topContentViewOriginY;
- (void)showContent;
- (void)startShowContentAnimation;
- (id)socialLikeLogic;
- (void)tryToPlayTopPag;
- (void)tryToStopTopPag;
- (void)realStopTopPag;
- (void)onFireworkCheerCommentAnimationStarted:(id)arg1 contentItemScene:(unsigned long long)arg2;
- (void)onMainMediaPlayStateChanged:(id)arg1 contentItemScene:(unsigned long long)arg2 isPlaying:(BOOL)arg3;
- (id)dataItem;
- (void)setDataItem:(id)arg1;
- (id)fireworkCheerInfo;
- (void)setFireworkCheerInfo:(id)arg1;
- (unsigned long long)contentItemScene;
- (void)setContentItemScene:(unsigned long long)arg1;
- (id)backgroundImageView;
- (void)setBackgroundImageView:(id)arg1;
- (id)topPagView;
- (void)setTopPagView:(id)arg1;
- (id)topContentView;
- (void)setTopContentView:(id)arg1;
- (BOOL)contentShowFlag;
- (void)setContentShowFlag:(BOOL)arg1;
- (void).cxx_destruct;
@end
