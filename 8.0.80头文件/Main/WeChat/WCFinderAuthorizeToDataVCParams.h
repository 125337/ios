@interface WCFinderAuthorizeToDataVCParams : NSObject
{
    BOOL _isGuardNowOpened; // +0x8
    int _commentScene; // +0xc
    WCFinderContact * _contact; // +0x10
}
- (id)contact;
- (void)setContact:(id)arg1;
- (BOOL)isGuardNowOpened;
- (void)setIsGuardNowOpened:(BOOL)arg1;
- (int)commentScene;
- (void)setCommentScene:(int)arg1;
- (void).cxx_destruct;
@end
