@interface MultiTalkScreenSharingAudienceView : UIView <FullScreenGestureDelegate, MMContentScrollViewDelegate>
{
    BOOL _isUnEnabled; // +0x8
    BOOL _isLandscapeSupport; // +0x9
    id <MultiTalkScreenSharingAudienceViewDelegate> _delegate; // +0x10
    long long _contentInterfaceOrientation; // +0x18
    MultiTalkScreenSharingAudienceBackgroundView * _backgroundView; // +0x20
    MMContentScrollView * _scrollView; // +0x28
    MultiTalkScreenSharingAudienceContentView * _contentView; // +0x30
    double _contentWHRatio; // +0x38
    CGRect _contentUnabledFrame; // +0x40
}
- (void)transformFromCellFrame:(CGRect)arg1 withAnimation:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)transformToCellFrame:(CGRect)arg1 withAnimation:(BOOL)arg2 completion:(id /* block */)arg3;
- (void)setFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (void)layoutWithContentInterfaceOrientation:(long long)arg1 width:(double)arg2 height:(double)arg3;
- (void)layoutSubviews;
- (BOOL)isOperationViewsHidden;
- (void)setIsOperationViewsHidden:(BOOL)arg1;
- (void)updateRender:(id)arg1;
- (void)updateMember:(id)arg1;
- (void)resetScale;
- (void)updateTalkingMembersWithUsersName:(id)arg1;
- (void)contentScrollViewDidSingleTap:(id)arg1;
- (void)contentScrollViewDidDoubleTap:(id)arg1;
- (BOOL)contentScrollView:(id)arg1 shouldIgnoreDoubleTapWithGestureRecoginzer:(id)arg2;
- (BOOL)isUnEnabled;
- (void)setIsUnEnabled:(BOOL)arg1;
- (CGRect)contentUnabledFrame;
- (void)setContentUnabledFrame:(CGRect)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (BOOL)isLandscapeSupport;
- (void)setIsLandscapeSupport:(BOOL)arg1;
- (long long)contentInterfaceOrientation;
- (void)setContentInterfaceOrientation:(long long)arg1;
- (id)backgroundView;
- (void)setBackgroundView:(id)arg1;
- (id)scrollView;
- (void)setScrollView:(id)arg1;
- (id)contentView;
- (void)setContentView:(id)arg1;
- (double)contentWHRatio;
- (void)setContentWHRatio:(double)arg1;
- (void).cxx_destruct;
@end
