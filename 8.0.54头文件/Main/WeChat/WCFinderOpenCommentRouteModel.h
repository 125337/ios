@interface WCFinderOpenCommentRouteModel : NSObject
{
    BOOL _shouldEnterKeyBoard; // +0x8
    BOOL _statusBarHidden; // +0x9
    BOOL _showTitle; // +0xa
    BOOL _shouldForceHideTitle; // +0xb
    BOOL _shouldHideLocalCommentList; // +0xc
    BOOL _isStatusBarColorBlack; // +0xd
    BOOL _showBackgroundButtonColor; // +0xe
    int _commentScene; // +0x10
    UIViewController * _fromVC; // +0x18
    WCFinderFeedContentVM * _contentVM; // +0x20
    unsigned long long _viewScene; // +0x28
    unsigned long long _enterType; // +0x30
    unsigned long long _refCommentID; // +0x38
    unsigned long long _commentStyleType; // +0x40
    WCFinderExternalCommentModel * _appendCommentModel; // +0x48
    double _halfScreenHeightRatio; // +0x50
    WCFinderContentVMShareModel * _shareModel; // +0x58
    id <WCFinderPostMgrDelegate> _postDelegate; // +0x60
    NSString * _providerFinderUsername; // +0x68
    unsigned long long _viewerScene; // +0x70
}
- (id)initWithFromVC:(id)arg1 contentVM:(id)arg2 commentScene:(int)arg3 shouldEnterKeyBoard:(BOOL)arg4 enterType:(unsigned long long)arg5;
- (id)fromVC;
- (void)setFromVC:(id)arg1;
- (id)contentVM;
- (void)setContentVM:(id)arg1;
- (unsigned long long)viewScene;
- (void)setViewScene:(unsigned long long)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (BOOL)shouldEnterKeyBoard;
- (void)setShouldEnterKeyBoard:(BOOL)arg1;
- (unsigned long long)enterType;
- (void)setEnterType:(unsigned long long)arg1;
- (unsigned long long)refCommentID;
- (void)setRefCommentID:(unsigned long long)arg1;
- (BOOL)statusBarHidden;
- (void)setStatusBarHidden:(BOOL)arg1;
- (BOOL)showTitle;
- (void)setShowTitle:(BOOL)arg1;
- (BOOL)shouldForceHideTitle;
- (void)setShouldForceHideTitle:(BOOL)arg1;
- (unsigned long long)commentStyleType;
- (void)setCommentStyleType:(unsigned long long)arg1;
- (BOOL)shouldHideLocalCommentList;
- (void)setShouldHideLocalCommentList:(BOOL)arg1;
- (BOOL)isStatusBarColorBlack;
- (void)setIsStatusBarColorBlack:(BOOL)arg1;
- (id)appendCommentModel;
- (void)setAppendCommentModel:(id)arg1;
- (double)halfScreenHeightRatio;
- (void)setHalfScreenHeightRatio:(double)arg1;
- (id)shareModel;
- (void)setShareModel:(id)arg1;
- (BOOL)showBackgroundButtonColor;
- (void)setShowBackgroundButtonColor:(BOOL)arg1;
- (id)postDelegate;
- (void)setPostDelegate:(id)arg1;
- (id)providerFinderUsername;
- (void)setProviderFinderUsername:(id)arg1;
- (unsigned long long)viewerScene;
- (void)setViewerScene:(unsigned long long)arg1;
- (void).cxx_destruct;
@end

