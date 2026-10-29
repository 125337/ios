@interface MMFinderLivePreviewRelatedHeaderView : MMLiveBaseComponentView <WCFinderHeadImageViewDelegate, WCFinderContactExt>
{
    BOOL _hasRegisteredKeyExtensions; // +0x8
    WCFinderHeadImageView * _anchorHeadImageView; // +0x10
    MMUILabel * _anchorNameLabel; // +0x18
    MMUILabel * _brandLiveMarkLabel; // +0x20
    MMWebImageView * _authIconView; // +0x28
    WCFinderContact * _contact; // +0x30
    WCFinderContact * _anchorContact; // +0x38
}
- (id)initWithFrame:(CGRect)arg1 andTaskId:(id)arg2 componentKey:(id)arg3;
- (void)dealloc;
- (void)initNotifications;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (void)onEnterLive;
- (void)layoutSubviews;
- (void)layoutUI;
- (void)willEnterForeground:(id)arg1;
- (void)updateAuthInfo;
- (id)anchorDisplayName;
- (BOOL)hasShowBoundBizLive;
- (id)finderLiveTask;
- (id)anchorContact;
- (void)setContact:(id)arg1;
- (void)onFinderContactUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)onFinderContactFollowStatusUpdateFailure:(id)arg1;
- (id)anchorHeadImageView;
- (void)setAnchorHeadImageView:(id)arg1;
- (id)anchorNameLabel;
- (void)setAnchorNameLabel:(id)arg1;
- (id)brandLiveMarkLabel;
- (void)setBrandLiveMarkLabel:(id)arg1;
- (id)authIconView;
- (void)setAuthIconView:(id)arg1;
- (BOOL)hasRegisteredKeyExtensions;
- (void)setHasRegisteredKeyExtensions:(BOOL)arg1;
- (id)contact;
- (void)setAnchorContact:(id)arg1;
- (void).cxx_destruct;
@end

