@interface WCFinderJumpInfoIconView : UIView <MMWebImageViewDelegate, PAGViewListener>
{
    BOOL _enableClick; // +0x8
    BOOL _videoPauseState; // +0x9
    id <WCFinderJumpInfoIconViewDelegate> _delegate; // +0x10
    MMWebImageView * _iconImageView; // +0x18
    WCFinderNetPagView * _iconPagView; // +0x20
    WCFinderJumpInfo * _jumpInfo; // +0x28
    UIColor * _localEnableColor; // +0x30
    UIColor * _disableIconColor; // +0x38
}
- (id)initWithFrame:(CGRect)arg1;
- (void)setFrame:(CGRect)arg1;
- (void)dealloc;
- (void)setAlpha:(double)arg1;
- (BOOL)isShow;
- (id)iconImageView;
- (id)iconPagView;
- (void)onLoadImageFail:(id)arg1 extraInfo:(id)arg2;
- (void)showIconView:(id)arg1;
- (BOOL)enableShowPagIcon;
- (void)updateWithJumpInfo:(id)arg1 enableClick:(BOOL)arg2 localEnableColor:(id)arg3 disableIconColor:(id)arg4;
- (id)getLocalDefaultPagResPath:(int)arg1;
- (id)localIconFormJumpInfo:(id)arg1 iconSize:(CGSize)arg2 iconColor:(id)arg3 enable:(BOOL)arg4;
- (void)updateWithLinkStyle:(id)arg1;
- (void)updateWithIconUrl:(id)arg1 iconType:(int)arg2 pagIconUrl:(id)arg3 defaultImage:(id)arg4 businessType:(int)arg5;
- (void)setDefaultImage:(id)arg1;
- (void)refresh;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (void)setIconImageView:(id)arg1;
- (void)setIconPagView:(id)arg1;
- (id)jumpInfo;
- (void)setJumpInfo:(id)arg1;
- (BOOL)enableClick;
- (void)setEnableClick:(BOOL)arg1;
- (id)localEnableColor;
- (void)setLocalEnableColor:(id)arg1;
- (id)disableIconColor;
- (void)setDisableIconColor:(id)arg1;
- (BOOL)videoPauseState;
- (void)setVideoPauseState:(BOOL)arg1;
- (void).cxx_destruct;
@end

