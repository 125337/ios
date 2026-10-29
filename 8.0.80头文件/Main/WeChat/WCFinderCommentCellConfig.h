@interface WCFinderCommentCellConfig : NSObject
{
    BOOL _isAuthorView; // +0x8
    BOOL _isRootComment; // +0x9
    BOOL _isCommentClose; // +0xa
    BOOL _enableShowFinder; // +0xb
    BOOL _isSelfPost; // +0xc
    BOOL _forceExpand; // +0xd
    WCFinderComment * _comment; // +0x10
    unsigned long long _displayStyle; // +0x18
    double _width; // +0x20
    double _avatarLeftMargin; // +0x28
}
+ (id)rootCommentConfigWithComment:(id)arg1 isAuthorView:(BOOL)arg2 isCommentClose:(BOOL)arg3 enableShowFinder:(BOOL)arg4 isSelfPost:(BOOL)arg5;
+ (id)subCommentConfigWithComment:(id)arg1 isCommentClose:(BOOL)arg2 enableShowFinder:(BOOL)arg3 isSelfPost:(BOOL)arg4;
- (id)init;
- (id)getStyleConfig;
- (id)comment;
- (void)setComment:(id)arg1;
- (BOOL)isAuthorView;
- (void)setIsAuthorView:(BOOL)arg1;
- (BOOL)isRootComment;
- (void)setIsRootComment:(BOOL)arg1;
- (unsigned long long)displayStyle;
- (void)setDisplayStyle:(unsigned long long)arg1;
- (BOOL)isCommentClose;
- (void)setIsCommentClose:(BOOL)arg1;
- (BOOL)enableShowFinder;
- (void)setEnableShowFinder:(BOOL)arg1;
- (BOOL)isSelfPost;
- (void)setIsSelfPost:(BOOL)arg1;
- (double)width;
- (void)setWidth:(double)arg1;
- (BOOL)forceExpand;
- (void)setForceExpand:(BOOL)arg1;
- (double)avatarLeftMargin;
- (void)setAvatarLeftMargin:(double)arg1;
- (void).cxx_destruct;
@end
